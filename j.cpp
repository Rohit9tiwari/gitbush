#include<stdio.h>
int main(){
	char op;
	float num1,num2,result = 0;
	
    printf("\n nenter the operands you want to calculate (*,+,/,-): ");
	scanf("%c",&op);
	printf("\n plase enter the two values of operands: num1 and num2: ");
	scanf("%f%F",&num1,&num2);
	

	
	switch (op)
	{
		case'*':
		result=num1*num2;
			break;
			
		case'+':
		result= num1 + num2;
			break;
			
		case'/':
		result= num1 / num2;
			break;
		
		case'-':	
		result= num1 - num2;
			break;
			
		default:
		printf("\n enter operands erorr!!!");
			break;
			
	}
	printf("\n the result of %.2f %c %.2f = %.2f", num1 ,op ,num2, result );
	return 0;
}  
