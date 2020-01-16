#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma;
	char ten[255];
	double dtb;
};
SinhVien * nhapSinhVien() {
	SinhVien *sv=new SinhVien;
	cout<<"Nhap ma:";
	cin>>sv->ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(sv->ten);
	cout<<"Nhap diem:";
	cin>>sv->dtb;
	return sv;
}
void nhapDanhSachSinhVien(SinhVien **&dsSV, int siso) {
	for(int i=0;i<siso;i++) {
		cout<<"Nhap sinh vien thu "<<i<<":\n";
		SinhVien *sv=nhapSinhVien();
		*(dsSV+i)=sv;
	}
}
void xuatSinhVien(SinhVien *sv) {
	cout<<sv->ma<<"-"<<sv->ten<<"-"<<sv->dtb<<endl;
}
void xuatDanhSachSinhVien(SinhVien **dsSV, int siso) {
	for(int i=0;i<siso;i++) {
		SinhVien *sv=*(dsSV+i);
		xuatSinhVien(sv);
	}
}
void luuFile(SinhVien **dsSV, int siso) {
	ofstream outfile("csdlsv.txt", ofstream::binary);
	for(int i=0;i<siso;i++) {
		SinhVien *sv=*(dsSV+i);
		outfile.write((char*)sv, sizeof(SinhVien));
	}
	outfile.close();
}
void docFile(SinhVien **&dsSV, int &siso) {
	ifstream infile("csdlsv.txt", ifstream::binary);
	infile.seekg(0, infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	
	siso=size/sizeof(SinhVien);
	dsSV=new SinhVien*[siso];
	for(int i=0;i<siso;i++) {
		SinhVien *sv=new SinhVien;
		infile.read((char*)sv, sizeof(SinhVien));
		*(dsSV+i)=sv;
	}
	infile.close();
	
}
int main(int argc, char** argv) {
//	SinhVien **dsSV=new SinhVien*[3];
//	nhapDanhSachSinhVien(dsSV,3);
//	cout<<"Danh sach sinh vien sau khi nhap:"<<endl;
//	xuatDanhSachSinhVien(dsSV,3);
//	luuFile(dsSV, 3);
	
	int siso;
	SinhVien **dsSV=NULL;
	
	docFile(dsSV, siso);
	xuatDanhSachSinhVien(dsSV,siso);
	
	return 0;
}
