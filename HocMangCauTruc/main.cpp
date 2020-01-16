#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma;
	char ten[255];
};

void nhapMang(SinhVien dsSV[], int siso);
void xuatMang(SinhVien dsSV[], int siso);

int main(int argc, char** argv) {
	SinhVien dsSV[3];
	nhapMang(dsSV, 3);
	xuatMang(dsSV, 3);
	
	return 0;
}

void nhapMang(SinhVien dsSV[], int siso) {
	for(int i=0;i<siso;i++) {
		cout<<"Nhap sinh vien thu "<<i<<endl;
		cout<<"Nhap ma:";
		cin>>dsSV[i].ma;
		cout<<"Nhap ten:";
		cin.ignore();
		gets(dsSV[i].ten);
	}
}

void xuatMang(SinhVien dsSV[], int siso) {
	for(int i=0;i<siso;i++) {
		cout<<dsSV[i].ma<<"\t"<<dsSV[i].ten<<endl;
	}
}
