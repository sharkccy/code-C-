#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{								//Base��¦���O (�����O) 
	string race;
	int height;
	double weight;
public:
	void setData(string race,int height,double weight){
		cout<<"�]�w�򥻸��"<<endl;
		this->race = race;				//C++��   this->
		this->height = height;			//java��  this. 
		this->weight = weight;
	}
	void showData(){
		cout<<"��ܰ򥻸��"<<endl;
		cout<<"�ر� :"<<race<<endl;
		cout<<"���� :"<<height<<endl;
		cout<<"�魫 :"<<weight<<endl;
	}
};
class Child:public Man{					//C++��     :�׹��l+�����O�W�� 
	string school;						//java��    extends
public:									//Derived�l�����O(�l���O)
	void setSchool(string school){
		this->school = school;
	}
	void showData(){
		Man::showData();				//�n�ХܨӦ�Man�A���M�|�L���ۧکI�s 
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
