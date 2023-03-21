#include<iostream>
using namespace std;
int sum(int a,int b){
	int c=a+b;
	return c;
}

void swappointer(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	
}
void swappointer(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a=12,b=24;
	cout<<"the value of a is  "<<a<<" the value of b is  "<<b<<endl;
	swappointer(&a,&b);
	cout<<"the value of a is  "<<a<<" the value of b is  " <<b<<endl;
	return 0;
	
}
