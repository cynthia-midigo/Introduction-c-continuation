#include <iostream>
using namespace std;
int main(){
	int marks[10],i,n,sum;
	sum=0;
	cout<<"Enter the number of students "<<endl;
	cin>>n;
	for(i=0;i<n;++i)
	{
		cout<<"Enter marks of student :"<<i+1<<endl;
		cin>>marks[i];
		sum+=marks[i];
	}
	cout<<"sum is :"<<sum<<endl;
	 return(0);
	
}
