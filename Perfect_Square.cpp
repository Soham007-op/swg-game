#include<iostream>
using namespace std;
int main(){
	float n=1.21;
	//cout<<"Enter a number: ";
	//cin>>n;
	float i;
	for(i=1;i*i<=n;++i){
		if(n/i==i){
			cout<<n<<" is a perfect square of "<<i<<"."<<endl;
			break;
		}
		else{
			continue;
	    }
		cout<<endl;
	}
	if(n/i!=i){
		cout<<n<<" is not a perfect square."<<endl;
	}
	return 0;
}
