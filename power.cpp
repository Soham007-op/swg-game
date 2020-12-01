/*#include<iostream>
using namespace std;
int power(int x,int y){
	int i, power=1;
	if(y==0)
	return 1;
	for(i=1;i<=y;i++)
	power=power*x;
	return power;
}
int main(){
	int x, y;
	cout<<"X = ";
	cin>>x;
	cout<<"Y = ";
	cin>>y;
	cout<<"X^Y = "<<power(x,y);
	return 0;
}*/


//Recursive->


#include<iostream>
using namespace std;
int power(int x,int y){
	if (y==0)
	return 1;
	else if (y%2==0)
	return power(x, y/2)*power(x, y/2);
	else 
	return x*power(x, y/2)*power(x, y/2);
}
int main(){
	int x, y;
	cout<<"X = ";
	cin>>x;
	cout<<"Y = ";
	cin>>y;
	cout<<"X^Y = "<<power(x,y);
	return 0;
}
