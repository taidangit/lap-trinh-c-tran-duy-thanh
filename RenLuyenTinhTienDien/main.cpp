#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int kwh;
	const int GIA1=600;
	const int GIA2=700;
	const int GIA3=900;
	const int GIA4=1100;
	
	int tien;
	cout<<"Nhap so Kwh:";
	cin>>kwh;
	
	if(kwh<=100) {
		tien=kwh*GIA1;
	} else if(kwh<=150) {
		tien=100*GIA1+(kwh-100)*GIA2;
	} else if(kwh<=200) {
		tien=100*GIA1+50*GIA2+(kwh-150)*GIA3;
	} else {
		tien=100*GIA1+50*GIA2+50*GIA3+(kwh-200)*GIA4;
	}
	
	cout<<"Tien dien phai tra="<<tien<<endl;
	return 0;
}
