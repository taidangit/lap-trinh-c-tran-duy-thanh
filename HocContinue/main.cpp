#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i=0, sum=0;
	int n=5;
	do {
		i++;
		if(i==2 || i==4) {
			continue;
		}
		sum+=i;
	} while(i<n);
	cout<<"Sum="<<sum<<endl;
	
	return 0;
}
