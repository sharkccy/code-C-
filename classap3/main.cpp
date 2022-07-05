#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Man{
private:			//此動作為封裝，如將變數設為private，下面便不可以直接給值(m1.race = 333;，錯) 
	string race;	//C++變數、函數等預設為private，java預設則為public					
	int height;
	double weight;   
public:
	void setRace(string rc){
		cout<<"設定種族..."<<endl;
		race = rc;
	}
	void setHeight(int h){
		cout<<"設定身高..."<<endl;
		height = h;
	}
	void setWeight(double w){
		cout<<"設定體重..."<<endl;
		weight = w;
	}
	void showData(){
		cout<<"種族 :"<<race<<endl;
		cout<<"身高 :"<<height<<endl;
		cout<<"體重 :"<<weight<<endl;		
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
