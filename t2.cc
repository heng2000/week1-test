//string
#include<iostream>
#include<cstring>
using namespace std;
/*
int main (void)
{
	cout<<"enter a sting: ";
	char name[21];
	cin>>name;
	cout<<"your name is "<<name<<endl;
	int len =strlen(name);
	cout<<"it has "<<len<<" lettes"<<endl;
	return 0;
	
}
*/
// cin.getline(vn vn size);

int main (void)
{
	char name [51];
	cout<<"enter your name "<<endl;
	cin.getline(name,51);
	cout <<"nice, your name is "<<name<<endl;
	return 0;
}

///