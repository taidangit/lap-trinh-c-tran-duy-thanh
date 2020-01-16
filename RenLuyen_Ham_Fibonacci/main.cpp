#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fib(int n);
void xuatDayFib(int n);

int main(int argc, char** argv) {
	int n=6;
	cout<<fib(n)<<endl;
	cout<<"\nDay so Fib:"<<endl;
	xuatDayFib(n);
	return 0;
}

int fib(int n) {
	if(n<=2) return 1;
	return fib(n-1)+fib(n-2);
}
void xuatDayFib(int n) {
	for(int i=1;i<=n;i++) {
		cout<<fib(i)<<"\t";
	}
}
