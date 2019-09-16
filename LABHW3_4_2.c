#include <stdio.h>
void printSet(int s[], int size);

int main(void)
{
	int input;
	int set[5];
	int k, j;
	int index = 0, exist = 0;

	for (j = 0; j < 5; j++) { //원소 5개 집어넣기

		printf("집합에 추가할 원소: ");
		scanf("%d", &input);

		for (k = 0; k < 5; k++) { //원소 존재여부 가리기 ※flag 변수 이용※
			if (set[k] == input) {
				exist = 1;
				break; //존재하면 그 뒤는 볼 필요 없음.
			}
			else if (set[k] != input) { // 이 코드가 없으면 새로운 입력도 exist가 1인 상태로 됨. 
				exist = 0;		
			}
		}

		if (exist == 0) { //원소 존재 X
			set[index] = input;
			index++;
			printSet(set, index);
		}
		else if (exist == 1) { //원소 존재 O
			printf("이미 존재\n"); 
			j--; //이미 존재할 경우 원소로 넣지 않기때문에 j가 그대로여야 함
			continue;
		}
	}	
	
}

void printSet(int s[], int size)
{
	int k;
	
	printf("{");
	for (k = 0; k < size; k++) {
		if (k == 0 && size == 1)
			printf(" %d ", s[k]); //원소가 하나일 때 콤마가 있으면 안됨.
		else if (k == size -1)
			printf(" %d ", s[k]); //마지막에 콤마가 있으면 안됨.
		else
			printf(" %d, ", s[k]);
	}
	printf("}\n");
	
	return ;
}