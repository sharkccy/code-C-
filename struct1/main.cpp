#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	struct Student{
		int sid;
		string name;
		string dep;
		int score;
	};
	
	struct Student std1;
	std1.sid = 1;
	std1.name ="Allen";
	std1.dep = "Geography";
	std1.score =100;
	
	cout<<std1.sid<<endl;
	cout<<std1.name<<endl;
	cout<<std1.dep<<endl;
	cout<<std1.score<<endl;
	
	struct Student std2;
	
	cin>>std2.sid;
	cin>>std2.name;
	cin>>std2.dep;
	cin>>std2.score;
	
	cout<<std2.sid<<endl;
	cout<<std2.name<<endl;
	cout<<std2.dep<<endl;
	cout<<std2.score<<endl;
	
	int total = 0;
	total = std1.score + std2.score;
	cout<<total<<endl;
	
	return 0;	
}
