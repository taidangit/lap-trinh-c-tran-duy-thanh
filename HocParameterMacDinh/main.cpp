#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void hamGiDo(int x, int y=1) {
	cout<<(x+y)<<endl;
}

int main(int argc, char** argv) {
	hamGiDo(9);
	hamGiDo(9,2);
	
	return 0;
}


