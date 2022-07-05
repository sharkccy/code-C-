#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int num[10];
	for(int i = 0; i < 10; i++){
		cin>>num[i];
	}
	
	cout<<"==================================="<<endl;
	
	for(int i = 0; i < 10; i++){
		if(num[i]%7 ==0 && num[i] != 0){
			cout<<num[i]<<" 是7的倍數"<<endl;
		}
		else{
			cout<<num[i]<<" 不是7的倍數"<<endl;
		}
	}
	return 0;
}

