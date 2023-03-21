#include<stdio.h>
int main(){
	char op;
	float num1 , num2 ;
	
cout<<"welcome to my calculator"<<endl;
cin>>num1;
cout<<"choice any operands(+ - * /) for solving your problem sir/mam",,endl;
cin>>op;
cout<<"your answer is -------->  "<<endl;
cin>>num2;

switch(op){
	
	case '+':
		cout<<num1+num2;
		
		case'-':
			cout<<num1-num2;
			
			case'*':
				cout<<num1*num2;
				
				case'/':
					cout<<num1/num2;
					
		default:
		cout<<"enter operands error!! please enter correct operands";			
					
		
}
return 0;
}



