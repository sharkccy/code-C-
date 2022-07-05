#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{								//Base基礎類別 (父類別) 
	string race;
	int height;
	double weight;
public:
	void setData(string race,int height,double weight){
		cout<<"設定基本資料"<<endl;
		this->race = race;				//C++用   this->
		this->height = height;			//java用  this. 
		this->weight = weight;
	}
	void showData(){
		cout<<"顯示基本資料"<<endl;
		cout<<"種族 :"<<race<<endl;
		cout<<"身高 :"<<height<<endl;
		cout<<"體重 :"<<weight<<endl;
	}
};
class Child:public Man{					//C++用     :修飾子+父類別名稱 
	string school;						//java用    extends
public:									//Derived衍生類別(子類別)
	void setSchool(string school){
		this->school = school;
	}
	void showData(){
		Man::showData();				//要標示來自Man，不然會無限自我呼叫 
		cout<<"school :"<<school<<endl;
	}									
}; 										 
int main(int argc, char *argv[]) {	
	string race;
	int height;
	double weight;
	Man m1;
	cin>>race;
	cin>>height;
	cin>>weight;
	m1.setData(race,height,weight);
	m1.showData();
	
	Child c1;
	cin>>race;
	cin>>height;
	cin>>weight;
	c1.setData(race,height,weight);
	c1.showData(); 
	
	string school;
	Child c2;
	cin>>race;
	cin>>height;
	cin>>weight;
	cin>>school;
	c2.setData(race,height,weight);
	c2.setSchool(school);
	c2.showData();
	return 0;
}
