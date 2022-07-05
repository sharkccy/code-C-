#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	string str;
	cin>>str;
	//string s [str.length()];
	//for(int i = 0;i < str.length();i++){
	//	s[i] = str[str.length()-i-1];
	//}
	//for(int i = 0;i < str.length();i++){
	//	cout<<s[i];
	//}	
	for(int i = str.length() - 1;i >= 0; i--){
	cout<<str[i];
}
	return 0;
}

