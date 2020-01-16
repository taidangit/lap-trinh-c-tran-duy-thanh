#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void luuFile(int number);
void docFile();

int main(int argc, char** argv) {
	while(true) {
		int number;
		cout<<"Nhap so:";
		cin>>number;
		luuFile(number);
		char ch;
		cout<<"Nhap tiep ko(c/k)?:";
		cin>>ch;
		if(ch=='k') break;
	}
	cout<<"Ban da nhap xong!"<<endl;
	
	docFile();
	
	return 0;
}

void luuFile(int number) {
	FILE *file=fopen("csdl.txt", "a");
	char str[5];
	itoa(number, str, 10);
	fputs(str,file);
	fputs("\n",file);
	fclose(file);
}

void docFile() {
	FILE *file=fopen("csdl.txt", "r");
	int MChan[1000], iChan=0;
	int MLe[1000], iLe=0;
	int MAm[1000], iAm=0;
	
	while(true) {
		char *line;	
		char buffer[5];
		line=fgets(buffer, 5, file);
		if(line==NULL) break;
		int number=atoi(line);
		if(number%2==0 && number>0) {
			MChan[iChan++]=number;
		} else if(number%2!=0 && number>0) {
			MLe[iLe++]=number;
		} else {
			MAm[iAm++]=number;
		}
	}
	fclose(file);
	cout<<"Cac so chan:"<<endl;
	for(int i=0;i<iChan;i++) {
		cout<<MChan[i]<<"\t";
	}
	cout<<"\nCac so le:"<<endl;
	for(int i=0;i<iLe;i++) {
		cout<<MLe[i]<<"\t";
	}
	cout<<"\nCac so am:"<<endl;
	for(int i=0;i<iAm;i++) {
		cout<<MAm[i]<<"\t";
	}
}
