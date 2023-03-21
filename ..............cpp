//calculator using 7 function
#include<stdio.h>
#include<math.h>
using namespace std;

class calculator{
	public:
		int sum(int a, int b){
			int r;
			r=a+b;
			return r;
		}
		int sum(int a,int b, int c){
			int r;
			r=a+b+c;
			return r;
		}
		int sum(int a, int b ,int c, int d){
			int r;
			r=a+b+c+d;
			return r;
		}
		int multiplication(int a,int b){
			int r;
			r=a*b;
			return r;
		}
		int multiplication(int a,int b,int c){
			int r;
			r=a*b*c;
			return r;
		}
		int sub  (int a,int b){
			int r;
			r=a-b;
			return r;		
		}
		int division (int a, int b){
			int r;
			r=a/b;
			return r;
		}
		
}
cout<<"------------MENU DRIVEN-----------------"
	       "\n 1.Add Two Numbers"
		   "\n 2.Add Three Numbers"
		   "\n 3.Add Four Numbers"
		   "\n 4.Multiply Two Numbers"
		   "\n 5.Multiply Three Numbers"
		   "\n 6.Substract Two Numbers"
		   "\n 7.Divide Two Numbers"
		   "\n\nChoose One Of The Above: ";
    
    cin>>ch;
    cout<<"\n";
    switch(ch){
    	case 1:{
    	cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
    	cout<<"Sum: "<<obj.sum(a,b); // Function Calling
			break;
		}
		case 2:{
		cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
     	cout<<"Enter 3rd number : ";
     	cin>>c;
    	cout<<"Sum: "<<obj.sum(a,b,c); // Function Calling
		break;
		}
    	case 3:{
    	cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
     	cout<<"Enter 3rd number : ";
     	cin>>c;
     	cout<<"Enter 4th number : ";
     	cin>>d;
     	cout<<"Sum: "<<obj.sum(a,b,c,d); // Function Calling
		break;
		}
		case 4:{
    	cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
    	cout<<"product: "<<obj.multiplication(a,b); // Function Calling
		break;
		}
		case 5:{
		cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
     	cout<<"Enter 3rd number : ";
     	cin>>c;
    	cout<<"product: "<<obj.multiplication(a,b,c); // Function Calling
		break;
	    }
	    case 6:{
    	cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
    	cout<<"	Difference: "<<obj.sub(a,b); // Function Calling
			break;
		}
		case 7:{
    	cout<<"Enter 1st number : ";
     	cin>>a;
     	cout<<"Enter 2st number : ";
     	cin>>b;
    	cout<<"Answer: "<<obj.division(a,b); // Function Calling
		break;
		}
		default:{
			cout<<"please !! Enter a Valid Choice";
		break;
		}
	}
     return 0;   
}
 
