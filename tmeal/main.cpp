#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int hamburger;
	cout<<"�~��: "; 
	cin>>hamburger;
	int fries;
	cout<<"����: ";
	cin>>fries;
	int coke;		
	cout<<"�i��: ";
	cin>>coke;
	int total = 0;
	total = hamburger + fries + coke;
	double service ;
	service = 0.1*(hamburger + fries + coke);
	double amount ;
	amount = 1.1*(hamburger + fries + coke);
	
	cout<<"==============================="<<endl;
	
	cout<<"�~  ��:"<<hamburger<<"��"<<endl;
	cout<<"��  ��:"<<fries<<"��"<<endl;
	cout<<"�i  ��:"<<coke<<"��"<<endl;
	
	cout<<"==============================="<<endl;
	
	cout<<"�X  �p:"<<total<<"��"<<endl;
	cout<<"�A�ȶO:"<<service<<"��"<<endl;
	cout<<"�`���B:"<<amount<<"��"<<endl;
	
	cout<<"==============================="<<endl;
	return 0;
}
