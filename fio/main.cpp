#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char *argv[]) {
	ifstream fin("data.txt");			//使用記事本檔的原因: 
	if(fin == NULL){					//1.檔案大小小 
		cout<<"Can not find!!"<<endl;	//2.幾乎所有電腦都有 
	}									//3.很多程式輸出都是記事本檔 
	else{								//4.乾淨，沒有其他電腦無法辨識之物 
		cout<<"Find it!!"<<endl;		//C++  NULL要大寫 
	}									//java null小寫即可 
	return 0;
}
