#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"Enter a Number: ";
	cin>>n;
	bool flag=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=1;
			cout<<n<<" is a Non_Prime number."<<endl;
		}
	}
	if(flag==0){
		cout<<n<<" is a Prime number.";
	}
	return 0;
} 
