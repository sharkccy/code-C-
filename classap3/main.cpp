#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{
private:			//���ʧ@���ʸˡA�p�N�ܼƳ]��private�A�U���K���i�H��������(m1.race = 333;�A��) 
	string race;	//C++�ܼơB��Ƶ��w�]��private�Ajava�w�]�h��public					
	int height;
	double weight;   
public:
	void setRace(string rc){
		cout<<"�]�w�ر�..."<<endl;
		race = rc;
	}
	void setHeight(int h){
		cout<<"�]�w����..."<<endl;
		height = h;
	}
	void setWeight(double w){
		cout<<"�]�w�魫..."<<endl;
		weight = w;
	}
	void showData(){
		cout<<"�ر� :"<<race<<endl;
		cout<<"���� :"<<height<<endl;
		cout<<"�魫 :"<<weight<<endl;		
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
	m1.setRace(rc);
	m1.setHeight(h);
	m1.setWeight(w);
	m1.showData();
	return 0;
}
