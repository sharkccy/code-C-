#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	int x , y , temp;
	cin>>x;
	cin>>y;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	temp = x;
	x = y;
	y = temp;
	cout<<"¤¬´««á==========="<<endl; 
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;	
	return 0;
}
