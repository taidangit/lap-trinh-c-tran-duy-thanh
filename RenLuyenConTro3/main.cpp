#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapMaTran(int **&M, int n);
void xuatMaTran(int **M, int n);
int max(int **M, int n);
void huyBoNho(int **M, int n);


int main(int argc, char** argv) {
	srand(time(NULL));
	int **M;
	int n=5;
	nhapMaTran(M, n);
	cout<<"Ma tran sau khi nhap:\n";
	xuatMaTran(M,n);
	int m=max(M,n);
	cout<<"Max="<<m<<endl;
	huyBoNho(M,n);
	return 0;
}

void nhapMaTran(int **&M, int n) {
	
	M=new int*[n];
	for(int i=0;i<n;i++) {
		*(M+i)=new int[n];
	}
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			*(*(M+i)+j)=-50+rand()%151;
		}
	}
}
void xuatMaTran(int **M, int n) {
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout<<*(*(M+i)+j)<<"\t";
		}
		cout<<endl;
	}
}
int max(int **M, int n) {
	int m=*(*(M+0)+0);
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			if(m < *(*(M+i)+j)) {
				m=*(*(M+i)+j);
			}
		}
	}
	return m;
}
void huyBoNho(int **M, int n) {
	//huy bo nho
	for(int i=0;i<n;i++) {
		delete *(M+i);
		*(M+i)=NULL;
	}
	delete M;
	M=NULL;
	
}
