#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[]={4,5,8,2,9,12,14};
	int l=sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<l;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	
	int *p=a;
	for(int i=0;i<l;i++) {
		cout<<*(p+i)<<"\t";
	}
	cout<<endl;
	*(p+3)=113;
	for(int i=0;i<l;i++) {
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	
	for(int i=0;i<l;i++) {
		cout<<p[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
