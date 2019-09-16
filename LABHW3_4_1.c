#include <stdio.h>
int main(void) 
{
	int multiset[5];
	int i, k, input;

	for (i = 0; i < 5; i++) {
		printf("다중집합에 추가할 원소 : ");
		scanf("%d", &input);
	 
		multiset[i] = input;

		printf("{");
		for (k = 0 ; k <= i; k++) {
			printf("%3d", multiset[k]);
			if (i > 0 && k < i) //원소가 한 개일때 제외 && 마지막 원소에 콤마 없음.
				printf(",");
		}
		printf("  }\n");
	}
}