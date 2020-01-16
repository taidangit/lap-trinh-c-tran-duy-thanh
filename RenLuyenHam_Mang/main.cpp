#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void nhapMang(int M[], int n);
void xuatMang(int M[], int n);
int timK(int M[], int n, int k);
void sapXepTangDan(int M[], int n);

int main(int argc, char** argv) {
	int n;
	cout<<"Nhap so phan tu:";
	cin>>n;
	int M[n];
	nhapMang(M, n);
	cout<<"Mang sau nhap:\n";
	xuatMang(M,n);
	
	int k;
	cout<<"\nNhap k:";
	cin>>k;
	int kq=timK(M,n,k);
	if(kq==-1) {
		cout<<"Khong thay "<<k<<" trong mang"<<endl;
	} else {
		cout<<"Thay "<<k<<" tai vi tri thu "<<kq<<endl;
	}
	
	sapXepTangDan(M,n);
	cout<<"\nMang sau khi sap xep tang dan:"<<endl;
	xuatMang(M,n);
	
	return 0;
}

void nhapMang(int M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"M["<<i<<"]=";
		cin>>M[i];
	}
}
void xuatMang(int M[], int n) {
	for(int i=0;i<n;i++) {
		cout<<M[i]<<"\t";
	}
}
int timK(int M[], int n, int k) {
	for(int i=0;i<n;i++) {
		if(M[i]==k) {
			return i;
		}
	}
	return -1;
}
void sapXepTangDan(int M[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(M[i]>M[j]) {
				int temp=M[i];
				M[i]=M[j];
				M[j]=temp;
			}
		}
	}
}
