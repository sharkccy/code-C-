#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{
public:
	Man(){
		cout<<"�ڬO�غc��"<<endl; 
		race = "Asia";		//�غc�� �غc�l constructor 
		height = 160;
		weight = 63.8;	
	}
	string race;
	int height;
	double weight;		
	void setData(string rc){
		cout<<"�]�w�ر�...."<<endl;
		race = rc;		
	}	
	void setData(int h){
		cout<<"�]�w����...."<<endl;		//overloading �h�� 
		height = h;
	}
	void setData(double w){
		cout<<"�]�w�魫...."<<endl;
		weight = w;
	}
	void setData(string rc, int h){
		cout<<"�]�w�رڡB����...."<<endl;
		race = rc;
		height = h;
	}
	void setData(string rc, int h, double w){    
		cout<<"�]�w������...."<<endl;
		race = rc;
		height = h;
		weight = w;
	} 
	void showData(){
		cout<<"��ܸ��...."<<endl;
		cout<<"�ر� :"<<race<<endl;
		cout<<"���� :"<<height<<endl;
		cout<<"�魫 :"<<weight<<endl;
		cout<<"========================"<<endl; 
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
	
	Man m2;
	cin>>rc;
	m2.setData(rc);
	m2.showData();
	
	Man m3;
	cin>>rc;
	cin>>h;
	m3.setData(rc,h);
	m3.showData();
	
	Man m4;
	cin>>h;
	m4.setData(h);
	m4.showData();
	
	Man m5;
	cin>>w;
	m5.setData(w);
	m5.showData();
	return 0;
}
