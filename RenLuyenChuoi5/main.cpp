#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void xoaKhoangTrang(char *str) {
	int j=0;
	for(int i=0;i<strlen(str); i++) {
		if(str[i] != ' ') {
			str[j++]=str[i];
		} else if(j>0 && str[i+1]!=' ') {
			str[j++]=str[i];
		}
	}
	if(str[j-1]==' ') {
		str[j-1]='\0';
	} else {
		str[j]='\0';
	}
}
char * layTen(char *str) {
	int k=0;
	for(int i=strlen(str)-1; i>=0;i--) {
		if(str[i]==' ') {
			k=i+1;
			break;
		}
	}
	int i2=0;
	char *strTen=new char[10];
	for(int i=k;i<strlen(str); i++) {
		strTen[i2++]=str[i];
	}
	return strTen;
}

int main(int argc, char** argv) {
	char *str=new char[255];
	strcpy(str, "   Dang     Phat   Tai   ");
	cout<<"Chuoi ban dau:"<<str<<endl;
	cout<<"Chieu dai="<<strlen(str)<<endl;
	xoaKhoangTrang(str);
	cout<<"Chuoi sau khi xoa khoang trang:"<<str<<endl;
	cout<<"Chieu dai="<<strlen(str)<<endl;
	
	cout<<"Ten="<<layTen(str)<<endl;
	
	return 0;
}
