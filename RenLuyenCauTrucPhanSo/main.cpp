#include <iostream>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct PhanSo {
	int tu;
	int mau;
};

PhanSo *cong(PhanSo ps1, PhanSo ps2);
PhanSo *toiGian(PhanSo ps);
int ucln(PhanSo ps);

int main(int argc, char** argv) {
	PhanSo ps1;
	ps1.tu=4;
	ps1.mau=6;
	
	PhanSo ps2;
	ps2.tu=1;
	ps2.mau=2;
	
	PhanSo *ps3=cong(ps1, ps2);
	cout<<ps3->tu<<"/"<<ps3->mau<<endl;
	
	PhanSo *ps4=toiGian(*ps3);
	cout<<"Phan so toi gian=";
	cout<<ps4->tu<<"/"<<ps4->mau<<endl;
	 
	return 0;
}

PhanSo *cong(PhanSo ps1, PhanSo ps2) {
	PhanSo *ps3=new PhanSo;
	ps3->tu=ps1.tu*ps2.mau+ps2.tu*ps1.mau;
	ps3->mau=ps1.mau*ps2.mau;
	return ps3;
}

int ucln(PhanSo ps) {
	int min=ps.tu<ps.mau?ps.tu:ps.mau;
	for(int i=min;i>=1;i--) {
		if(ps.tu%i==0 && ps.mau%i==0) {
			return i;
		}
	}
	return 1;
}
PhanSo *toiGian(PhanSo ps) {
	int uoc=ucln(ps);
	PhanSo *psToiGian=new PhanSo;
	psToiGian->tu=ps.tu/uoc;
	psToiGian->mau=ps.mau/uoc;
	return psToiGian;
	
}
