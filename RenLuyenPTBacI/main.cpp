#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b;
	cout<<"Giai PT Bac 1:ax+b=0"<<endl;
	cout<<"Nhap he so a:";
	cin>>a;
	cout<<"Nhap he so b:";
	cin>>b;
	if(a==0 && b==0) {
		cout<<"PT vo so nghiem"<<endl;
	} else if(a==0 && b!=0) {
		cout<<"PT vo nghiem"<<endl;
	} else {
		cout<<"PT co 1 nghiem, x="<<(-b*1.0/a)<<endl;
	}
	
	return 0;
}
