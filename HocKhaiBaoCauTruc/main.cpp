#include <iostream>
#include <string.h>>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct DiaChi {
	char soNha[25];
	char tenDuong[250];
	char quan[25];
	char tinhThanh[25];
};
struct SinhVien {
	char ma[10];
	char ten[255];
	bool gioiTinh;
	DiaChi diaChiNha;
	DiaChi diaChiTruong;
}teo,ty;

int main(int argc, char** argv) {
	strcpy(teo.ten, "Nguyen Van Teo");
	teo.gioiTinh=false;
	strcpy(teo.ma, "SV113");
	cout<<"---------------------------\n";
	cout<<"Ma="<<teo.ma<<endl;
	cout<<"Ten="<<teo.ten<<endl;
	cout<<"Gioi tinh="<<(teo.gioiTinh==true?"Nu":"Nam")<<endl;
	
	SinhVien bin;
	strcpy(bin.ten, "Pham Bin Bin");
	cout<<"Ten cua Bin="<<bin.ten<<endl;
	
	return 0;
}
