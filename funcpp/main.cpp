#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int add(int a, int b){
	int result;
	result = a + b;
	return result;
}
void subs(int a, int b){
	int result;
	result = a - b;
	cout<<result;
}

int main(int argc, char *argv[]) {
	int result;
	int a = 3;
	int b = 5;	
	result = add(a,b);
	cout<<result<<endl;
	subs(a,b);
	return 0;
}
