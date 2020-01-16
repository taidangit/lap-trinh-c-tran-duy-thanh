#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tinhGiaiThua(int n);
void h10toH2(int n);

int main(int argc, char** argv) {
	int kq=tinhGiaiThua(5);
	cout<<"5!="<<kq<<endl;
	
	h10toH2(11);
	
	return 0;
}

int tinhGiaiThua(int n) {
	if(n<=1) return 1;
	return n*tinhGiaiThua(n-1);
}

void h10toH2(int n) {
	if(n>0) {
		int t=n%2;
		h10toH2(n/2);
		cout<<t<<" ";
	}
}
