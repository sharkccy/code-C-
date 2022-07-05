#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	ofstream fout("score.txt");
	int score , sum = 0,num;
	double avg;
	for(int i = 0;i < 10;i++){
		cin>>score;
		fout<<score<<endl;
		sum += score;	
		avg = sum / 10.0;							
	}
	ofstream fout2("report.txt");	
	fout2<<"sum="<<sum<<endl;
	fout2<<"avg="<<avg<<endl;	
	return 0;
}
