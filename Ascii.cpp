#include<iostream>
using namespace std;
void printASCII(char c){
	int i= c;
	cout<<"The ASCII value of "<<c<<" is "<<i<<endl;
}
int main(){
	printASCII('a');
	printASCII('e');
	printASCII('&');
	printASCII('i');
	printASCII('o');
	printASCII('u');
	return 0;
}
