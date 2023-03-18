#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);

	if (num % 2 == 0)
	{
		printf("입력받은 정수는 짝수입니다.");
	}
	else
	{
		printf("입력받은 정수는 홀수입니다.");
	}
	printf("수정");
	printf("두번째 수정");

	return 0;
}
