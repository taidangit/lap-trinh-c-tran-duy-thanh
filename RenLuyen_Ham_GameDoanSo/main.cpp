#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void play();

int main(int argc, char** argv) {
	while(true) {
		play();
		char ch;
		cout<<"Choi tiep ko(c/k)?:";
		cin>>ch;
		if(ch=='k') {
			break;
		}
	}
	cout<<"Tam biet ban!"<<endl;
	return 0;
}

void play() {
	srand(time(NULL));
	int soMay=1+rand()%100;
	int soLanDoan=0;
	int soNguoi;
	while(true) {
		cout<<"May da ra 1 so [1..100], moi ban doan:";
		cin>>soNguoi;
		soLanDoan++;
		cout<<"\nBan doan lan thu "<<soLanDoan<<endl;
		if(soNguoi==soMay) {
			cout<<"Ban doan dung roi, so may="<<soMay<<endl;
			break;
		} else if(soNguoi>soMay) {
			cout<<"Ban doan sai roi, so nguoi > so may"<<endl;
		} else {
			cout<<"Ban doan sai roi, so nguoi < so may"<<endl;
		}
		if(soLanDoan==7) {
			cout<<"Game Over!"<<endl;
			break;
		}
	}
}
