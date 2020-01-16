#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x=5, y=3;
	int z=x-- - ++y +2;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
	
	return 0;
}
