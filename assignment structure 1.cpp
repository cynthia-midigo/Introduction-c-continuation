#include<iostream>
using namespace std;
struct person
{
	char name[50];
	char surname[50];
	int salary;
};
int main()
{
	person p1;
	cout<<"The "
	cout<<"Enter your first name :"<<endl;
	cin.get(p1.name,50);
	cout<<"\nEnter  your surname"<<endl;
	cin>>p1.surname;
	cout<<"gross pay is : ";
	return 0;
	
}
