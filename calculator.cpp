#include<iostream>
using namespace std;
int main(){
	char op;
	float num1,num2;
	
	cout<<"::>>{CALCULATOR}<<::"<<endl;
	cin>>num1;
	cout<<" "<<endl;
	cin>>op;
	cout<<"your answer is---> ";
	cin>>num2;
	
	switch (op)
	{
		case'*':
		cout<<num1*num2;
			break;
			
		case'+':
		cout<<num1+num2;
			break;
			
		case'/':
		cout<<num1/num2;
			break;
		
		case'-':	
		cout<<num1-num2;
			break;
			
		default:
		cout<<" opernads you entered is found error!!!!!!! please enter correct operands";
			break;
			
	}
	
	return 0;
}  
