#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool hoiNamHayNu(char *str) {
	int j=0;
	for(int i=strlen(str)-1;i>=0;i--) {
		if(str[i]==';') {
			j=i+1;
			break;
		}
	}
	char strSex[6];
	int i2=0;
	for(int i=j;i<strlen(str); i++) {
		strSex[i2]=str[i];
		i2++;
	}
	if(strcmp(strSex, "male")==0) {
		return false;
	}
	return true;
} 

int main(int argc, char** argv) {
	char **dsSV=new char*[6];
	for(int i=0;i<6;i++) {
		*(dsSV+i)=new char[255];
	}
	strcpy(*(dsSV+0), "SV1;An;male");
	strcpy(*(dsSV+1), "SV2;Binh;male");
	strcpy(*(dsSV+2), "SV3;Hanh;female");
	strcpy(*(dsSV+3), "SV4;Phuc;male");
	strcpy(*(dsSV+4), "SV5;Giai;male");
	strcpy(*(dsSV+5), "SV6;Thoat;male");
	
	int soNam=0;
	int soNu=0;
	for(int i=0;i<6;i++) {
		cout<<*(dsSV+i)<<endl;
		bool kq=hoiNamHayNu(*(dsSV+i));
		if(!kq) {
			soNam++;
		} else {
			soNu++;
		}
	}
	
	cout<<"Co "<<soNam<<" sinh vien Nam trong danh sach"<<endl;
	cout<<"Co "<<soNu<<" sinh vien Nu trong danh sach"<<endl;

	return 0;
}
