#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	string str;
	getline(cin,str);						//C++用getline() 
	int count = 0;							//java用.nextLine() 
	for(int i = 0;i < str.length();i++){
		if(str[i] == 'a'){
			count++;
		}
	}
	cout<<"共有"<<count<<"個a"<<endl;
	return 0;
}
