#include <iostream>
//�H�e�j�q�ϥΫ��СA����Ӧ]�����d�V�Ӳ��� 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void bigsmall(int* x,int* y){		//�]���L�kreturn��ӭȡA�ҥH�����Ϋ��Ы���} 
	if(*x > *y){
		*x = *x * 2;				//�Ĥ@��*�����СA�ĤG��*�����k���� 
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
	bigsmall(&x,&y);				//�d�ݸӦ�}���� 
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	return 0;
}
