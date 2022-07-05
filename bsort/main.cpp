#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int num[10];
	int i , j;
	for(i = 0; i < 10;i++){
		cin>>num[i];
	}
	for(i = 0; i < 10;i++){
		cout<<num[i]<<"  ";
	}
	cout<<endl;
	int temp;
	for(i = 0;i < 10;i++){
		for(j = 0; j < 9-i;j++){
			if(num[j] > num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}
	for(i = 0; i < 10;i++){
		cout<<num[i]<<"  ";
	}
	cout<<endl;
	return 0;
}
