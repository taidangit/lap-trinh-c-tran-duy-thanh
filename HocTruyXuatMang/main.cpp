#include <iostream>
using namespace std;
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int M[N];
	cout<<"Nhap gia tri cho cac phan tu:\n";
	for(int i=0;i<N;i++) {
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
	cout<<"Mang sau khi nhap:"<<endl;
	for(int i=0;i<N;i++) {
		cout<<M[i]<<"\t";
	}
	cout<<"\nMang xuat nguoc:\n";
	for(int i=N-1;i>=0;i--) {
		cout<<M[i]<<"\t";
	}
	return 0;
}
