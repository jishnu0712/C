#include <stdio.h>

int main()
{
	int num1, num2, e = 1;
	float result;
	int choice;
	printf(" enter the numbers\n");
	scanf("%d%d", &num1, &num2);

	while (e)
	{
		printf("Enter 1::Add\n2::Sub\n3::Mul\n4::Div\n5::Modulo");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			result = num1 + num2;
			break;
		case 2:
			result = num1 - num2;
			break;
		case 3:
			result = num1 * num2;
			break;
		case 4:
			result = (float)num1 / num2;
			break;
		case 5:
			result = num1 % num2;
			break;
		default:
			printf("Invalid operation");
			e = 0;
		}
		printf("Result: = %f\n", result);
	}

	return 0;
}
