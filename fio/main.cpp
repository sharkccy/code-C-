#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	ifstream fin("data.txt");			//�ϥΰO�ƥ��ɪ���]: 
	if(fin == NULL){					//1.�ɮפj�p�p 
		cout<<"Can not find!!"<<endl;	//2.�X�G�Ҧ��q������ 
	}									//3.�ܦh�{����X���O�O�ƥ��� 
	else{								//4.���b�A�S����L�q���L�k���Ѥ��� 
		cout<<"Find it!!"<<endl;		//C++  NULL�n�j�g 
	}									//java null�p�g�Y�i 
	return 0;
}
