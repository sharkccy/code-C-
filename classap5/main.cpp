#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{
	string race;
	int height;
	double weight;
public:
	Man(){
		cout<<"�ڬO�غc��"<<endl;
		race = "Unknown";
		height = 170;
		weight = 70;
	}
	Man(string rc){
		cout<<"�ڬO�رګغc��"<<endl;
		race = rc;
		height = 170;
		weight = 70;
	} 
	Man(int h){
		cout<<"�ڬO�����غc��"<<endl;
		race = "Unknown";
		height = h;
		weight = 70;		
	}
	Man(double w){
		cout<<"�ڬO�魫�غc��"<<endl;
		race = "Unknown";
		height = 170;
		weight = w;
	}
	Man(string rc,int h){
		cout<<"�ڬO�رڡB�����غc��"<<endl;
		race = rc;
		height = h;
		weight = 70;
	}
	Man(string rc,int h,double w){
		cout<<"�ڬO�T�Ѽƫغc��"<<endl;
		race = rc;
		height = h;
		weight = w;
	}
	void setData(string rc,int h,double w){
		race = rc;
		height = h;
		weight = w;
	}
	void showData(){
		cout<<race<<endl;
		cout<<height<<endl;
		cout<<weight<<endl;
	}
};
int main(int argc, char *argv[]) {
	Man m1;
	string rc;
	int h;
	double w;
	cin>>rc;
	cin>>h;
	cin>>w;
	m1.setData(rc,h,w);
	m1.showData();
	
	cin>>rc;			//����J�A�~�ઽ���ǰѼ� 
	cin>>h;
	cin>>w;
	Man m2(rc,h,w);
	m2.showData();
		
	cin>>rc;
	Man m3(rc);
	m3.showData();		
	
	cin>>h;
	Man m4(h);
	m4.showData();
	
	cin>>w;
	Man m5(w);
	m5.showData();
	
	cin>>rc;
	cin>>h;
	Man m6(rc,h);
	m6.showData();
	
	return 0;
}
