#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	struct Student{
		int id;
		string name;
		string dep;
		int chi;
		int eng;
		int math;
		double total;
		double avg;
	};
	
	struct Student std1;
	cin>>std1.id;
	cin>>std1.name;
	cin>>std1.dep;
	cin>>std1.chi;	
	cin>>std1.eng;
	cin>>std1.math;
	
	std1.total = std1.chi + std1.eng + std1.math;
	std1.avg = std1.total/3.0;
	
	cout<<"====================="<<endl;
	cout<<"學號 :"<<std1.id<<endl; 
	cout<<"姓名 :"<<std1.name<<endl; 
	cout<<"科系 :"<<std1.dep<<endl; 
	cout<<"國文 :"<<std1.chi<<endl; 
	cout<<"英文 :"<<std1.eng<<endl; 
	cout<<"數學 :"<<std1.math<<endl; 				
	cout<<"總分 :"<<std1.total<<endl; 
	cout<<"平均 :"<<std1.avg<<endl;
	
	return 0;
}
