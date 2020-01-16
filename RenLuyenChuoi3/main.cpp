#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void tachLayTrai(char *strGoc, char *&strDau, char *&strSau);
void tachLayPhai(char *strGoc, char *&strCuoi, char *&strTruoc);

int main(int argc, char** argv) {
	char *strGoc=new char[255];
	strcpy(strGoc, "Dang Phat Tai");
	char *strDau=new char[255];
	char *strSau=new char[255];
	strcpy(strDau, "");
	strcpy(strSau, "");
	
	tachLayTrai(strGoc, strDau, strSau);
	cout<<strDau<<endl;
	cout<<strSau<<endl;
	
	char *strCuoi=new char[255];
	char *strTruoc=new char[255];
	strcpy(strCuoi, "");
	strcpy(strTruoc, "");
	
	tachLayPhai(strGoc, strCuoi, strTruoc);
	cout<<strCuoi<<endl;
	cout<<strTruoc<<endl;

	
	return 0;
}
void tachLayTrai(char *strGoc, char *&strDau, char *&strSau) {
	char *p=strchr(strGoc, ' ');
	int lSpace=p-strGoc;
	strncpy(strDau, strGoc, lSpace);
	p=p+1;
	strSau=p;
	
}
void tachLayPhai(char *strGoc, char *&strCuoi, char *&strTruoc) {
	int j=0;
	for(int i=strlen(strGoc)-1; i>=0; i--) {
		if(strGoc[i]==' ') {
			j=i+1;
			break;
			
		}	
	}
	int i2=0;
	for(int i=j; i<strlen(strGoc);i++) {
		strCuoi[i2]=strGoc[i];
		i2++;
	}
	strncpy(strTruoc, strGoc, j-1);
	
}
