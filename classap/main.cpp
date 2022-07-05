#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Student{
	public:
	int id;
	string name;
	string dep;
	int score;
	void showData(){
		cout<<id<<endl;
		cout<<name<<endl;
		cout<<dep<<endl;
		cout<<score<<endl;
	}
		
	
};
int main(int argc, char *argv[]) {
	Student s1 ;
	s1.id = 1;
	s1.name = "Allen";
	s1.dep = "Art";
	s1.score = 97;
	s1.showData(); 
	
	
	Student s2 ;
	s2.id = 2;
	s2.name = "Sean";
	s2.dep = "Biology";
	s2.score = 99;
	s2.showData();
	
	return 0;
}


