#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int a = 11;
	
	cout<<"a value "<<a<<endl;
	cout<<"a address位址 "<<&a<<endl;		//& 表記憶體位址(16進位法輸出) 
	
	int *str = &a;							//* 表pointer指標，其後之變數紀錄&變數(位址) 
	cout<<"指向a位址的值 "<<*str<<endl;		//連同*(*變數)則指向變數的值 
	cout<<"紀錄a的位址 "<<str<<endl;
	return 0;
}
