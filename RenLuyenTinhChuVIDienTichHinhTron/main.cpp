#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	cout<<"CHUONG TRINH TINH CHU VI - DIEN TICH HINH TRON"<<endl;
	double r;
	const double PI=3.14;
	double chuVi, dienTich;
	cout<<"Nhap ban kinh:";
	cin>>r;
	chuVi=2*PI*r;
	dienTich=PI*r*r;
	cout<<"Chu vi="<<chuVi<<endl;
	cout<<"Dien tich="<<dienTich<<endl;
	
	return 0;
}
