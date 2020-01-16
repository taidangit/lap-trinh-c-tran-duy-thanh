#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b;
	char ch;
	cout<<"Nhap so a:";
	cin>>a;
	cout<<"Nhap so b:";
	cin>>b;
	cout<<"Nhap phep toan(+,-,*,/):";
	cin>>ch;
	switch(ch) {
		case '+':
			cout<<a<<"+"<<b<<"="<<(a+b)<<endl;
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<(a-b)<<endl;
			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<(a*b)<<endl;
			break;
		case '/':
			if(b==0) {
				cout<<"Mau so phai khac 0";
			} else {
				cout<<a<<"/"<<b<<"="<<(a*1.0/b)<<endl;
			}
		
			break;
		default:
			cout<<"Ban nhap lui roi"<<endl;
			break;
	}
	return 0;
}
