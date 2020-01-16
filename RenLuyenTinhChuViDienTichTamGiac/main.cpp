#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int canhDoiDien, chieuCao;
	int chuVi;
	double dienTich;
	cout<<"CHUONG TRINH TINH CHU VI - DIEN TICH TAM GIAC"<<endl;
	cout<<"Nhap chieu dai canh doi dien:";
	cin>>canhDoiDien;
	cout<<"Nhap chieu cao:";
	cin>>chieuCao;
	dienTich=0.5*chieuCao*canhDoiDien;
	cout<<"Dien tich="<<dienTich<<endl;
	
	return 0;
}
