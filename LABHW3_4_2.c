#include <stdio.h>
void printSet(int s[], int size);

int main(void)
{
	int input;
	int set[5];
	int k, j;
	int index = 0, exist = 0;

	for (j = 0; j < 5; j++) { //���� 5�� ����ֱ�

		printf("���տ� �߰��� ����: ");
		scanf("%d", &input);

		for (k = 0; k < 5; k++) { //���� ���翩�� ������ ��flag ���� �̿��
			if (set[k] == input) {
				exist = 1;
				break; //�����ϸ� �� �ڴ� �� �ʿ� ����.
			}
			else if (set[k] != input) { // �� �ڵ尡 ������ ���ο� �Էµ� exist�� 1�� ���·� ��. 
				exist = 0;		
			}
		}

		if (exist == 0) { //���� ���� X
			set[index] = input;
			index++;
			printSet(set, index);
		}
		else if (exist == 1) { //���� ���� O
			printf("�̹� ����\n"); 
			j--; //�̹� ������ ��� ���ҷ� ���� �ʱ⶧���� j�� �״�ο��� ��
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
			printf(" %d ", s[k]); //���Ұ� �ϳ��� �� �޸��� ������ �ȵ�.
		else if (k == size -1)
			printf(" %d ", s[k]); //�������� �޸��� ������ �ȵ�.
		else
			printf(" %d, ", s[k]);
	}
	printf("}\n");
	
	return ;
}