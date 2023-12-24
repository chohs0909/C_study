#include <stdio.h>

int main()
{
	int num_1, num_2, reslut;
	char  operation;

	printf("변수를 입력해주시오 : ");
	scanf_s("%d", &num_1);
	// printf("%d", num_1);
	printf("수식을 입력해주시오. (+, -, *, /): ");
	scanf_s(" %c", &operation); // %c 앞에 공백을 추가하여 이전 입력 버퍼의 공백 문자를 제거합니다. 또한, 크기를 1로 지정합니다.
	//printf("%c", operation);
	printf("변수를 입력해주시오. : ");
	scanf_s("%d", &num_2);
	
	if (operation == '+')
	{
		reslut = num_1 + num_2;
		printf("계산된 값은 : %d \n", reslut);
	}
	else if (operation == '-')
	{
		reslut = num_1 - num_2;
		printf("계산된 값은 : %d \n", reslut);
	}
	else if (operation == '*')
	{
		reslut = num_1 * num_2;
		printf("계산된 값은 : %d \n", reslut);
	}
	else if (operation == '/')
	{
		reslut = num_1 / num_2;
		printf("계산된 값은 : %d \n", reslut);
	}
	else
	{
		printf("수식을 다시 확인해 주세요.");
	};

	return 0;
}