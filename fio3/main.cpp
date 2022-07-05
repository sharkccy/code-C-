#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	ofstream fout("out.txt");
	int num = 77;
	fout<<num<<endl;
	num = 88;
	fout<<num<<endl;
	num = 99;
	fout<<num<<endl;
	return 0;
}
