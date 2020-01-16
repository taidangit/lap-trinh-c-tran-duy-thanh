#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	double rad;
	const double PI=3.14;
	cout<<"Nhap 1 goc:";
	cin>>x;
	rad=x*PI/180;
	double sinx=sin(rad);
	double cosx=cos(rad);
	double tanx=tan(rad);
	double cotanx=1/tan(rad);
	cout<<"Sin("<<x<<")="<<sinx<<endl;
	cout<<"Cos("<<x<<")="<<cosx<<endl;
	cout<<"Tan("<<x<<")="<<tanx<<endl;
    cout<<"Cotan("<<x<<")="<<cotanx<<endl;
	
	return 0;
}
