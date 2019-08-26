#include<iostream>
using namespace std;
int add(int x,int y)
{
		int sum;
		sum=x+y;
		return(sum);
	}
	
	int main()
	{
		int y,x,z;
		y=5;
		x=6;
		z=add(y,x);
		cout<<"Sum is: \n"<<z<<endl;
	
}
