#include <stdio.h>
int main(void) 
{
	int multiset[5];
	int i, k, input;

	for (i = 0; i < 5; i++) {
		printf("�������տ� �߰��� ���� : ");
		scanf("%d", &input);
	 
		multiset[i] = input;

		printf("{");
		for (k = 0 ; k <= i; k++) {
			printf("%3d", multiset[k]);
			if (i > 0 && k < i) //���Ұ� �� ���϶� ���� && ������ ���ҿ� �޸� ����.
				printf(",");
		}
		printf("  }\n");
	}
}