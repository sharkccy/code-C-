#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int i = 11;
	while(i <= 10){
		cout<<i<<endl;
		i++;
	}
	
	int j = 11;
	do{
		cout<<j<<endl;
		j++;
	}while(j <= 10);
	
	return 0;
}
