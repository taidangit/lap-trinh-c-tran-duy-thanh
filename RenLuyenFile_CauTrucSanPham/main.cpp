#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SanPham {
	int ma;
	char ten[255];
	int gia;
};
void nhapSanPham(SanPham &sp);
void nhapDanhSachSanPham(SanPham dsSP[], int n);
void xuatSanPham(SanPham sp);
void xuatDanhSachSanPham(SanPham dsSP[], int n);
void luuFile(SanPham dsSP[], int n);
void docFile(SanPham dsSP[], int &n);

int main(int argc, char** argv) {
//	SanPham dsSP[3];
//	nhapDanhSachSanPham(dsSP, 3);
//	cout<<"Danh sach san pham sau khi nhap:"<<endl;;
//	xuatDanhSachSanPham(dsSP, 3);
//	
//	luuFile(dsSP, 3);

	int n;
	SanPham dsSP[100];
	docFile(dsSP, n);
	xuatDanhSachSanPham(dsSP, n);
		
	return 0;
}

void nhapSanPham(SanPham &sp) {
	cout<<"Nhap ma:";
	cin>>sp.ma;
	cin.ignore();
	cout<<"Nhap ten:";
	gets(sp.ten);
	cout<<"Nhap gia:";
	cin>>sp.gia;	
}
void nhapDanhSachSanPham(SanPham dsSP[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap san pham thu "<<i<<":\n";
		nhapSanPham(dsSP[i]);
	}
}
void xuatSanPham(SanPham sp) {
	cout<<sp.ma<<"-"<<sp.ten<<"-"<<sp.gia<<endl;
}
void xuatDanhSachSanPham(SanPham dsSP[], int n) {
	for(int i=0;i<n;i++) {
		xuatSanPham(dsSP[i]);
	}
}
void luuFile(SanPham dsSP[], int n) {
	ofstream outfile("csdlsp.txt", ofstream::binary);
	for(int i=0;i<n;i++) {
		SanPham sp=dsSP[i];
		outfile.write((char*)&sp, sizeof(SanPham));
	}
	outfile.close();
}
void docFile(SanPham dsSP[], int &n) {
	ifstream infile("csdlsp.txt", ifstream::binary);
	infile.seekg(0, infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	
	n=size/sizeof(SanPham);
	for(int i=0;i<n;i++) {
		SanPham sp;
		infile.read((char*)&sp, sizeof(SanPham));
		dsSP[i]=sp;
	}
	infile.close();
}
