#include <iostream>
#include <string.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct SinhVien {
	int ma;
	char ten[255];
};

int main(int argc, char** argv) {
	SinhVien teo;
	teo.ma=113;
	strcpy(teo.ten, "Teo");
	cout<<"Thong tin cua teo:"<<endl;
	cout<<teo.ma<<"\t"<<teo.ten<<endl;
	
	SinhVien *pTeo=&teo;
	cout<<"Thong tin cua teo theo con tro:"<<endl;
	cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
	
	pTeo->ma=103;
	strcpy(pTeo->ten, "Teo Theo");
	cout<<"Thong tin cua teo sau khi con tro thay doi gia tri:"<<endl;
	cout<<teo.ma<<"\t"<<teo.ten<<endl;
	
	teo.ma=303;
	strcpy(teo.ten, "Teo 303");
	cout<<"Thong tin cua teo theo con tro:"<<endl;
	cout<<pTeo->ma<<"\t"<<pTeo->ten<<endl;
	
	SinhVien *pTy=new SinhVien;
	pTy->ma=114;
	strcpy(pTy->ten, "Ty");
	cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
	
	SinhVien *pTy2=pTy;
	pTy2->ma=214;
	strcpy(pTy2->ten, "Ty Me");
	cout<<"Thong tin cua pTy sau khi pTy2 doi:"<<endl;
	cout<<pTy->ma<<"\t"<<pTy->ten<<endl;
	
	return 0;
}
