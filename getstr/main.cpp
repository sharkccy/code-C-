#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	string str;
	getline(cin,str);						//C++��getline() 
	int count = 0;							//java��.nextLine() 
	for(int i = 0;i < str.length();i++){
		if(str[i] == 'a'){
			count++;
		}
	}
	cout<<"�@��"<<count<<"��a"<<endl;
	return 0;
}
