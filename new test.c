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

	return 0;
}