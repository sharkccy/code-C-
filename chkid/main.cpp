#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	string str;
	cin>>str;	
	int i , count = 0;	
	for(i = 0; i < str.length();i++){		
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			count++;
		}
	}
	cout<<"�@��"<<count<<"�ӥ���"<<endl;	
	return 0;
}

