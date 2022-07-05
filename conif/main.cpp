#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int age;
	cin>>age;
	if(age >= 65){
		cout<<"您是受尊敬的"<<endl;
	}
	else if(age >= 20){
		cout<<"你已成年"<<endl; 
	}
	else if(age > 0){
		cout<<"你未成年"<<endl;
	}
	else{
		cout<<"輸入錯誤"<<endl; 
	}
	return 0;
}
