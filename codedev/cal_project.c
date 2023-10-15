#include <stdio.h>
void main ()
{
	int a, b, sum, sub, div, mul;
	char operator;
	printf("Enter operator :");
		scanf("%c", &operator);
		printf("Enter two operands :");
		scanf("%d %d", &a, &b);
		switch (operator)
		{
			case '+': sum = a + b;
				  printf("sum = %d", sum);
				  break;
			case '-': sub = a - b;
				  printf("sub = %d", sub);
				  break;
			case  '/': div = a / b;
				   printf("div = %d", div);
				   break;
			case '*': mul = a * b;
				  printf("mul = %d", mul);
				  break;
			default: 
				  printf("Enter valid operator");
		}
	

}
