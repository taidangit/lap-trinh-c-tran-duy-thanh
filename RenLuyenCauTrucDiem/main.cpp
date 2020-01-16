#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Diem {
	double x;
	double y;
};
double khoangCach(Diem a, Diem b);
double doDaiCacDiem(Diem arrDiem[], int n);
void nhapToaDoCacDiem(Diem arrDiem[], int n);
void xuatToaDoCacDiem(Diem arrDiem[], int n);
int main(int argc, char** argv) {
	Diem a;
	a.x=1;
	a.y=1;
	Diem b;
	b.x=3;
	b.y=3;
	double kc=khoangCach(a,b);
	cout<<"Khoang cach tu A("<<a.x<<","<<a.y<<")->B("<<b.x<<","<<b.y<<")="<<kc<<endl;
	
	Diem arrDiem[3];
	nhapToaDoCacDiem(arrDiem,3);
	cout<<"Danh sach cac diem: \n";
	xuatToaDoCacDiem(arrDiem,3);
	cout<<"\nTong do dai="<<doDaiCacDiem(arrDiem,3);
	
	return 0;
}

double khoangCach(Diem a, Diem b) {
	return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
double doDaiCacDiem(Diem arrDiem[], int n) {
	double tongkc=0;
	for(int i=0;i<n-1;i++) {
		double kc=khoangCach(arrDiem[i], arrDiem[i+1]);
		tongkc+=kc;
	}
	return tongkc;
}

void nhapToaDoCacDiem(Diem arrDiem[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap diem thu "<<i<<endl;
		cout<<"Nhap toa do x=";
		cin>>arrDiem[i].x;
		cin.ignore();
		cout<<"Nhap toa do y=";
		cin>>arrDiem[i].y;
		cin.ignore();
	}
}
void xuatToaDoCacDiem(Diem arrDiem[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"("<<arrDiem[i].x<<","<<arrDiem[i].y<<"), ";

	}
}
