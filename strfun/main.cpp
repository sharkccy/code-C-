#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int i;
	string str;
	cin>>str;
	cout<<str<<endl;
	for(i = 0; i < str.length();i++){ 	//in C:strlen(str)
		cout<<str[i]<<endl;
	}
	return 0;
}
