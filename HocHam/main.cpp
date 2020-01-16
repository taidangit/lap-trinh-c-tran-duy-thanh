#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tongHaiSo(int a, int b);//prototype
void xuatDuLieu(int x);
void output();

int main(int argc, char** argv) {
	int a,b;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	int kq=tongHaiSo(a,b);
	cout<<"Tong "<<a<<"+"<<b<<"="<<kq<<endl;
	int kq2=tongHaiSo(113,114);
	cout<<"KQ2="<<kq2<<endl;
	int kq3=tongHaiSo(1,5);
	xuatDuLieu(kq3);
	cout<<"Ham goi ham:\n";
	output();
	
	return 0;
}
int tongHaiSo(int a, int b) {
	return a+b;
}
void xuatDuLieu(int x) {
	cout<<x<<endl;
}
void output() {
	int kq=tongHaiSo(9,10);
	xuatDuLieu(kq);
}
