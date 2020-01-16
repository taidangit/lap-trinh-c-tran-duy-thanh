#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int * capPhatBoNho(int n);
void nhapMang(int *&M, int n);
void xuatMang(int *M, int n);
int * danhSachMax(int *M, int n);
void sapGiam(int *&M, int n);

int main(int argc, char** argv) {
	int *M=capPhatBoNho(5);
	nhapMang(M, 5);
	cout<<"Mang sau khi nhap:\n";
	xuatMang(M,5);
	int *X=danhSachMax(M,5);
	cout<<"\n3 phan tu lon nhat:\n";
	xuatMang(X,3);
	
	return 0;
}

int * capPhatBoNho(int n) {
	int *M=new int[n];
	return M;
}
void nhapMang(int *&M, int n) {
	for(int i=0;i<n;i++) {
		cout<<"M["<<i<<"]=";
		cin>>*(M+i);
	}
}
void xuatMang(int *M, int n) {
	for(int i=0;i<n;i++) {
		cout<<*(M+i)<<"\t";
	}
}
void sapGiam(int *&M, int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(*(M+i)<*(M+j)) {
				int temp=*(M+i);
				*(M+i)=*(M+j);
				*(M+j)=temp;
			}
		}
	}
}
int * danhSachMax(int *M, int n) {
	int m=n>3?3:n;
	int *X=capPhatBoNho(m);
	sapGiam(M, n);
	for(int i=0;i<m;i++) {
		*(X+i)=*(M+i);
	}
	return X;
	
}
