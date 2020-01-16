#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct DiaChi {
	char tenDuong[255];
	char quan[150];
	char tinhThanh[150];
};

struct NhanVien {
	int ma;
	char ten[255];
	int tuoi;
	DiaChi coQuan;
	DiaChi nhaRieng;
		
};
int main(int argc, char** argv) {
	NhanVien teo;
	teo.ma=1;
	strcpy(teo.ten, "Teo");
	teo.tuoi=23;
	strcpy(teo.coQuan.tenDuong, "Khu Cong Nghe Cao");
	strcpy(teo.coQuan.quan, "Quan 9");
	strcpy(teo.coQuan.tinhThanh, "Thanh pho Ho Chi Minh");
	
	strcpy(teo.nhaRieng.tenDuong, "12/4/5 duong so 8");
	strcpy(teo.nhaRieng.quan, "Quan Thu Duc");
	strcpy(teo.nhaRieng.tinhThanh, "Thanh pho Ho Chi Minh");
	
	cout<<"Thong tin cua Teo:\n";
	cout<<"Ma="<<teo.ma<<endl;
	cout<<"Ten="<<teo.ten<<endl;
	cout<<"Tuoi="<<teo.tuoi<<endl;
	
	cout<<"Dia chi co quan:"<<teo.coQuan.tenDuong<<", "<<teo.coQuan.quan<<","<<teo.coQuan.tinhThanh<<endl;

	cout<<"\n==========================\n";
	NhanVien *pTy=new NhanVien;
	strcpy(pTy->ten, "Ty");
	strcpy(pTy->nhaRieng.tinhThanh, "Ha Noi");
	cout<<pTy->ten<<"=>"<<pTy->nhaRieng.tinhThanh<<endl;
	
	return 0;
}
