#include <stdio.h>

int main()
{
	int num_1, num_2, reslut;
	char  operation;

	printf("������ �Է����ֽÿ� : ");
	scanf_s("%d", &num_1);
	// printf("%d", num_1);
	printf("������ �Է����ֽÿ�. (+, -, *, /): ");
	scanf_s(" %c", &operation); // %c �տ� ������ �߰��Ͽ� ���� �Է� ������ ���� ���ڸ� �����մϴ�. ����, ũ�⸦ 1�� �����մϴ�.
	//printf("%c", operation);
	printf("������ �Է����ֽÿ�. : ");
	scanf_s("%d", &num_2);
	
	if (operation == '+')
	{
		reslut = num_1 + num_2;
		printf("���� ���� : %d \n", reslut);
	}
	else if (operation == '-')
	{
		reslut = num_1 - num_2;
		printf("���� ���� : %d \n", reslut);
	}
	else if (operation == '*')
	{
		reslut = num_1 * num_2;
		printf("���� ���� : %d \n", reslut);
	}
	else if (operation == '/')
	{
		reslut = num_1 / num_2;
		printf("���� ���� : %d \n", reslut);
	}
	else
	{
		printf("������ �ٽ� Ȯ���� �ּ���.");
	};

	return 0;
}