#include<iostream>
using namespace std;
int main()
{
	int numb1,numb2,numb;
	cout<<"Put two numbers"<<endl;
	 cout<<"First number "<<endl;
	cin>>numb1;
	 cout<<"Second number "<<endl;
	cin>>numb2;
	
if(numb1==numb2)
{
	cout<<"Number 1 equals number 2";
}
else if(numb1<numb2)
{
	cout<<"Number 1 less than number 2";
}
else
{
	cout<<"Number 1 is greater than number 2";
}
return(0);
}
