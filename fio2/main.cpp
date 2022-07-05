#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	ifstream fin("data.txt");
	int num;
	fin>>num;
	cout<<num<<endl;
	fin>>num;
	cout<<num<<endl;
	fin>>num;
	cout<<num<<endl;
	return 0;
}
