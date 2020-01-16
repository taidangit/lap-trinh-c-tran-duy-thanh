#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct NhanVien {
	int ma; 
	char ten[50];
};
void luuFile() {
	NhanVien dsNV[3];
	dsNV[0].ma=1;
	strcpy(dsNV[0].ten, "Teo");
	dsNV[1].ma=2;
	strcpy(dsNV[1].ten, "Ty");
	dsNV[2].ma=3;
	strcpy(dsNV[2].ten, "Bin");
	
	ofstream outfile("csdl.txt", ofstream::binary);
	outfile.write((char*)dsNV, sizeof(dsNV));
	outfile.close();
}
void docFile() {
	ifstream infile("csdl.txt", ifstream::binary);
	infile.seekg(0, infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	
	int real=size/sizeof(NhanVien);
	NhanVien dsNV[real];
	infile.read((char*)dsNV, sizeof(dsNV));
	infile.close();
	
	for(int i=0;i<real;i++) {
		cout<<dsNV[i].ma<<"\t"<<dsNV[i].ten<<endl;
	}
}
int main(int argc, char** argv) {
	docFile();
	
	return 0;
}
