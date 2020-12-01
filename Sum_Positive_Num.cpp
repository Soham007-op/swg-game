#include<iostream>
using namespace std;
int main(){
	int number;
	cout<<"Enter a number: ";
	cin>>number;
	int sum=0;
	while(number>=0){
		sum+=number;
		cout<<"Enter a number: ";
		cin>>number;
	}
	cout<<"\nThe Sum is="<<sum<<endl;
	return 0;
}
