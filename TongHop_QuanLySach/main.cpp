#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Book {
	char isbn[20];
	char name[150];
	int pages;
	char author[150];
};

void nhapSach(Book &b) {
	cout<<"Nhap ma sach:";
	cin.ignore();
	gets(b.isbn);
	
	cout<<"Nhap ten sach:";
	gets(b.name);
	
	cout<<"Nhap so trang:";
	cin>>b.pages;
    cin.ignore();
	cout<<"Nhap tac gia:";
	gets(b.author);
	
}
void nhapDanhSachSach(Book dsSach[], int n) {
	for(int i=0;i<n;i++) {
		cout<<"Nhap sach thu "<<i<<":\n";
		nhapSach(dsSach[i]);
	}
}
void xuatSach(Book b) {
	cout<<b.isbn<<"\t"<<b.name<<"\t"<<b.pages<<"\t"<<b.author<<endl;
}
void xuatDanhSachSach(Book dsSach[], int n) {
	for(int i=0;i<n;i++) {
		xuatSach(dsSach[i]);
	}
}
void luuFile(Book dsSach[], int n) {
	ofstream outfile("csdlbook.txt", ofstream::binary);
	for(int i=0;i<n;i++) {
		Book book=dsSach[i];
		outfile.write((char*)&book, sizeof(Book));
	}
	outfile.close();
}
void docFile(Book dsSach[], int &n) {
	ifstream infile("csdlbook.txt", ifstream::binary);
	infile.seekg(0, infile.end);
	long size=infile.tellg();
	infile.seekg(0);
	
	n=size/sizeof(Book);
	for(int i=0;i<n;i++) {
		Book book;
		infile.read((char*)&book, sizeof(Book));
		dsSach[i]=book;
	}
	infile.close();
}
void timSach(Book dsSach[], int n, char *tg) {
	for(int i=0;i<n;i++) {
		Book book=dsSach[i];
		if(strcmp(book.author, tg)==0) {
			xuatSach(book);
		}
	}
}
void sapXepGiam(Book dsSach[], int n) {
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(dsSach[i].pages < dsSach[j].pages) {
				Book temp=dsSach[i];
				dsSach[i]=dsSach[j];
				dsSach[j]=temp;
			}
		}
	}
}
void xuatTop3(Book dsSach[], int n) {
	int m=n>3?3:n;
	for(int i=0;i<m;i++) {
		xuatSach(dsSach[i]);
	}
	
}


void menu() {
	cout<<"============CHUONG TRINH QUAN LY SACH==============="<<endl;
	cout<<"1.Nhap Sach"<<endl;
	cout<<"2.Xuat Sach"<<endl;
	cout<<"3.Luu Sach"<<endl;
	cout<<"4.Doc Sach"<<endl;
	cout<<"5.Tim Kiem Sach"<<endl;
	cout<<"6.Sap xep Giam Theo So Trang"<<endl;
	cout<<"7.Xuat Top 3 Sach Theo So Trang"<<endl;
	
	int chon;
	cout<<"Ban chon chuc nang gi?:";
	cin>>chon;
	
	switch(chon) {
		case 1:
			Book dsSach[5];
			nhapDanhSachSach(dsSach, 5);
			break;
		case 2:
			xuatDanhSachSach(dsSach, 5);
			break;
		case 3:
			luuFile(dsSach, 5);
			break;
		case 4:
			int n2;
			Book dsSach2[100];
			docFile(dsSach2, n2);
			xuatDanhSachSach(dsSach2, n2);
			break;
		case 5:
			cout<<"Nhap tac gia:";
			cin.ignore();
            char tg[150];
	        gets(tg);
        	timSach(dsSach2, 5, tg);
			break;
		case 6:
			sapXepGiam(dsSach2, 5);
			xuatDanhSachSach(dsSach2, 5);
			break;
		case 7:
			xuatTop3(dsSach2, 5);
			break;
		default:
			cout<<"Ban nhap lui roi!"<<endl;
			break;
	}
	
}
int main(int argc, char** argv) {
    
	while(true) {
		menu();
	}
	
//	Book dsSach[5];
//	nhapDanhSachSach(dsSach, 5);
//	cout<<"Danh sach sach sau khi nhap:"<<endl;
//	xuatDanhSachSach(dsSach, 5);
//
//	luuFile(dsSach, 5);
	
//	int n;
//	Book dsSach[100];
//	docFile(dsSach, n);
//	xuatDanhSachSach(dsSach, n);
//	
//	cout<<"Nhap tac gia:";
//	char tg[150];
//	gets(tg);
//	timSach(dsSach, n, tg);
//
//	sapXepGiam(dsSach, n);
//	cout<<"Danh sach sach sap xep theo so trang giam dan:"<<endl;
//	xuatDanhSachSach(dsSach, n);
//	cout<<"\nTop 3 cuon sach co so trang nhieu nhat:\n";
//	xuatTop3(dsSach, n);
	
	return 0;
}
