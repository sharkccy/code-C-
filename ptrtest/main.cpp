#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int a = 11;
	
	cout<<"a value "<<a<<endl;
	cout<<"a address��} "<<&a<<endl;		//& ��O�����}(16�i��k��X) 
	
	int *str = &a;							//* ��pointer���СA��ᤧ�ܼƬ���&�ܼ�(��}) 
	cout<<"���Va��}���� "<<*str<<endl;		//�s�P*(*�ܼ�)�h���V�ܼƪ��� 
	cout<<"����a����} "<<str<<endl;
	return 0;
}
