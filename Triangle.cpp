#include<iostream>
using namespace std;
int main(){
	int sidea, sideb, sidec;
	cout<<"Side of a triangle:\n";
	cin>>sidea>>sideb>>sidec;
	if(sidea==sideb && sidea==sidec && sideb==sidec){
		cout<<"The Trianle is Equilateral.";
	}
	else if(sidea==sideb || sidea==sidec || sideb==sidec){
		cout<<"The Triangle is Isosceles.";
	}
	else{
		cout<<"The Triangle is Scalene.";
	}
	return 0;
}
