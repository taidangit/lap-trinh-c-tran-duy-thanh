#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"Giai PT Bac 2:ax^2+bx+c=0"<<endl;
	double a,b,c;
	cout<<"Nhap he so a:";
	cin>>a;
	cout<<"Nhap he so b:";
	cin>>b;
	cout<<"Nhap he so c:";
	cin>>c;
	if(a==0) {
		//bx+c=0
		if(b==0 && c==0) {
			cout<<"PT vo so nghiem"<<endl;
		} else if(b==0 && c!= 0) {
			cout<<"PT vo nghiem"<<endl;
		} else {
			cout<<"PT co 1 nghiem, x="<<(-c/b)<<endl;
		}
	} else {
		double delta=pow(b,2)-4*a*c;
		if(delta<0) {
			cout<<"PT vo nghiem"<<endl;
		} else if(delta==0) {
			cout<<"PT co nghiem kep, x1=x2="<<-b/(2*a)<<endl;
		} else {
			double x1=(-b-sqrt(delta))/(2*a);
			double x2=(-b+sqrt(delta))/(2*a);
			cout<<"PT co 2 nghiem phan biet:"<<endl;
			cout<<"x1="<<x1<<endl;
			cout<<"x2="<<x2<<endl;
		}
	}
	
	return 0;
}
