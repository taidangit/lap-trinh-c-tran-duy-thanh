#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int chuVi(int a, int b, int c);
double dienTich(int a, int b, int c);
bool kiemTra(int a, int b, int c);

int main(int argc, char** argv) {
	int a,b,c;
	cout<<"Nhap canh a:";
	cin>>a;
	cout<<"Nhap canh b:";
	cin>>b;
	cout<<"Nhap canh c:";
	cin>>c;
	if(!kiemTra(a,b,c)) {
		cout<<"\nTam giac khong hop le"<<endl;
	} else {
		int cv=chuVi(a,b,c);
		double dt=dienTich(a,b,c);
		cout<<"Chu vi="<<cv<<endl;
		cout<<"Dien tich="<<dt<<endl;
	}

	
	return 0;
}

int chuVi(int a, int b, int c) {
	return a+b+c;
}
double dienTich(int a, int b, int c) {
	double p=chuVi(a,b,c)*0.5;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
bool kiemTra(int a, int b, int c) {
	if(a<=0 || b<=0 || c<=0 || a+b<=c || a+c <= b || b+c<=a) {
		return false;
	}
	return true;
}
