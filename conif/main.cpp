#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int age;
	cin>>age;
	if(age >= 65){
		cout<<"�z�O���L�q��"<<endl;
	}
	else if(age >= 20){
		cout<<"�A�w���~"<<endl; 
	}
	else if(age > 0){
		cout<<"�A�����~"<<endl;
	}
	else{
		cout<<"��J���~"<<endl; 
	}
	return 0;
}
