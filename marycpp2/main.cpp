#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int score[5][3];
	int i,j;
	int ave = 0;
	int sum = 0;
	for(i = 0;i < 5;i++){
		for(j = 0; j < 3;j++){
			cin>>score[i][j];
		}		
	}
	double total = 0;
	for(i = 0;i < 5;i++){
		total = 0;
		for(j = 0; j < 3;j++){
			cout<<score[i][j]<<"\t";
			total += score[i][j];
		}				
		cout<<total<<"\t"<<total/j<<endl;			
	}
	return 0;
}
