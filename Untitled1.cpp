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
		
};
int main(){
	int a,b,c,d,ch;
	calculator obj;
	cout<<"menu driven"
	"\n 1.add two number "
	"\n 2.add three number "
	"\n 3.add four number "
	"\n 4.multiply two number "
	"\n 5.multiply three number "
	"\n 6.sub two number "
	"\n 7.multiply two number "
	"\n\n choose one of the above  ";
	
	cin>>ch;
	cout<<"\n";
	 sitch(ch){
	 	case 1:
	 		cout<<a+b;
	 		break;
	 		case 2:
	 			cout<<a+b+c;
	 			break;
	 			case 3:
	 				cout<<a+b+c+d;
	 				break;
	 				case 4:
	 					cout<<a*b;
	 					break;
	 					case 5:
	 						cout<<a*b*c;
	 						break;
	 						case 6:
	 							cout<<a-b;
	 							break;
	 							case 7:
	 								cout<<a/b;
	 								break;
	 								
	 	}
	 	return 0;
}
