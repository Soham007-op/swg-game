#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Character input: ";
	cin>>c;
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	cout<<c<<" -> is a Vowel."<<endl;
	else
	cout<<c<<" -> is a Consonant."<<endl;
	return 0;
}
