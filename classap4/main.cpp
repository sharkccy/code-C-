#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{
public:
	Man(){
		cout<<"我是建構元"<<endl; 
		race = "Asia";		//建構元 建構子 constructor 
		height = 160;
		weight = 63.8;	
	}
	string race;
	int height;
	double weight;		
	void setData(string rc){
		cout<<"設定種族...."<<endl;
		race = rc;		
	}	
	void setData(int h){
		cout<<"設定身高...."<<endl;		//overloading 多載 
		height = h;
	}
	void setData(double w){
		cout<<"設定體重...."<<endl;
		weight = w;
	}
	void setData(string rc, int h){
		cout<<"設定種族、身高...."<<endl;
		race = rc;
		height = h;
	}
	void setData(string rc, int h, double w){    
		cout<<"設定完整資料...."<<endl;
		race = rc;
		height = h;
		weight = w;
	} 
	void showData(){
		cout<<"顯示資料...."<<endl;
		cout<<"種族 :"<<race<<endl;
		cout<<"身高 :"<<height<<endl;
		cout<<"體重 :"<<weight<<endl;
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
