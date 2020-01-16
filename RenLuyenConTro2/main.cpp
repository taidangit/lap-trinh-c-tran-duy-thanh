#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapMang(int *&M, int n);
void xuatMang(int *M, int n);
void sapGiam(int *&M, int n);
void swap(int *&pa, int *&pb);

int main(int argc, char** argv) {
	srand(time(NULL));
	int *M;
	int n=10;
	nhapMang(M, n);
	cout<<"Mang sau khi nhap:\n";
	xuatMang(M,n);
	sapGiam(M, n);
	cout<<"\nMang sau khi sap xep:\n";
	xuatMang(M,n);
	return 0;
}

void nhapMang(int *&M, int n) {
	
	M=new int[n];
	for(int i=0;i<n;i++) {
		*(M+i)=rand()%101;
	}
	
}
void xuatMang(int *M, int n) {
	for(int i=0;i<n;i++) {
		cout<<*(M+i)<<"\t";
	}
}
void swap(int *&pa, int *&pb) {
	int temp=*pa;
	*pa=*pb;
	*pb=temp;
}
void sapGiam(int *&M, int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(*(M+i)<*(M+j)) {
				swap(*(M+i), *(M+j));
			}
		}
	}
}

