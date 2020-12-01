/*#include<iostream>
using namespace std;
int main(){
	int n, fact=1, i;
	cin>>n;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"Factorial of "<<n<<" is "<<fact<<endl;

	return 0;
}*/


//Recursive Methods

#include<iostream>
using namespace std;
int fact(int n){
	if((n==0)||(n==1))
	return 1;
	else
	return n*fact(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<"Factorial of "<<n<<" is "<<fact(n);
	return 0;
}
