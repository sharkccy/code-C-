#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int hamburger;
	cout<<"漢堡: "; 
	cin>>hamburger;
	int fries;
	cout<<"薯條: ";
	cin>>fries;
	int coke;		
	cout<<"可樂: ";
	cin>>coke;
	int total = 0;
	total = hamburger + fries + coke;
	double service ;
	service = 0.1*(hamburger + fries + coke);
	double amount ;
	amount = 1.1*(hamburger + fries + coke);
	
	cout<<"==============================="<<endl;
	
	cout<<"漢  堡:"<<hamburger<<"元"<<endl;
	cout<<"薯  條:"<<fries<<"元"<<endl;
	cout<<"可  樂:"<<coke<<"元"<<endl;
	
	cout<<"==============================="<<endl;
	
	cout<<"合  計:"<<total<<"元"<<endl;
	cout<<"服務費:"<<service<<"元"<<endl;
	cout<<"總金額:"<<amount<<"元"<<endl;
	
	cout<<"==============================="<<endl;
	return 0;
}
