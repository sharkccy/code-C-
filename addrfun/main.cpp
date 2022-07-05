#include <iostream>
//以前大量使用指標，但後來因為易搞混而移除 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void bigsmall(int* x,int* y){		//因為無法return兩個值，所以直接用指標指位址 
	if(*x > *y){
		*x = *x * 2;				//第一個*為指標，第二個*為乘法的乘 
	}
	else{
		*y = *y + 10;
	}
}
int main(int argc, char *argv[]) {
	int x,y;
	cin>>x;
	cin>>y;
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	bigsmall(&x,&y);				//查看該位址的值 
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	return 0;
}
