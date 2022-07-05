#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int num[5][3];
	int i,j;
	num[0][0] = 99;
	num[0][1] = 98;
	num[0][2] = 97;
 	num[1][0] = 88;
 	num[1][1] = 87;
	num[1][2] = 86;
 	num[2][0] = 77;
	num[2][1] = 76;
	num[2][2] = 75;
	num[3][0] = 66;
	num[3][1] = 65;
	num[3][2] = 64;
	num[4][0] = 55;
	num[4][1] = 54;
	num[4][2] = 53;
	for(i = 0; i < 5;i++){
		for(j = 0;j < 3;j++){
			cout<<num[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
