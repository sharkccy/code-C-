#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Student{
public:
	int id;
	string name;
	string dep;
	int chi;
	int eng;
	int math;	
	int total;            //total = 0���AC++������ɦV�ܼƤ��൹��	
	void showData(){	  //��java�i�H 
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<dep<<endl;
		cout<<chi<<endl;
		cout<<eng<<endl;
		cout<<name<<endl;
		cout<<total<<endl;
	}
	void calScore(){
		total = chi + eng + math; 
	}
};
int main(int argc, char *argv[]) {
	Student std1;
	cin>>std1.id;
	cin>>std1.name;
	cin>>std1.dep;
	cin>>std1.chi;
	cin>>std1.eng;
	cin>>std1.math;
	std1.calScore();
	std1.showData();
	return 0;
}
