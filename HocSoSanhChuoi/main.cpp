#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s1[25];
	char s2[25];
	strcpy(s1, "Obama! dgdf");
	strcpy(s2, "Obama! fhfg");
	int kq=strcmp(s1,s2);
	cout<<"KQ="<<kq<<endl;
	if(kq==0) {
		cout<<"s1=s2"<<endl;
	} else if(kq<0) {
		cout<<"s1<s2"<<endl;
	} else {
		cout<<"s1>s2"<<endl;
	}
	char s3[25], s4[25];
	strcpy(s3, "Cha me thoi doi an o bac");
	strcpy(s4, "Co chong ho hung cung nhu khong");
	int kq2=strncmp(s3,s4,1);
	if(kq2==0) {
		cout<<"s3=s4"<<endl;
	} else if(kq2>0) {
		cout<<"s3>s4"<<endl;
	} else {
		cout<<"s3<s4"<<endl;
	}
	return 0;
}
