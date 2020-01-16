#include <iostream>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void luuText() {
	FILE *file=fopen("csdl.txt", "w");
	fputs("SV01;Nguyen Van Teo;1/1/1998\n", file);
	fputs("SV02;Ho Van Do;2/3/1996\n", file);
	fputs("SV03;Nguyen Thi Hanh Phuc;4/7/1998\n", file);
	fclose(file);
}
void docText() {
	FILE *file=fopen("csdl.txt", "r");
	char *s;
	do {
		char line[150];
		s=fgets(line, 150, file);
		if(s==NULL) break;
		cout<<s;
	} while(true);
	fclose(file);
}
int main(int argc, char** argv) {
	docText();
	return 0;
}
