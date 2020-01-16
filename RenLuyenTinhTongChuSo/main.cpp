#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, sum=0;
	cout<<"Nhap n:";
	cin>>n;
	do {
		int sd=n%10;
		n/=10;
		sum+=sd;	
	} while(n>0);
	cout<<"Tong cac chu so="<<sum<<endl;
	
	return 0;
}
