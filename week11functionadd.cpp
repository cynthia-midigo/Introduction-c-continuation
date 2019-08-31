#include <iostream>
using namespace std;
void add(int &n);//FUNCTION DECLARATION
int main()
{
	int number;
	number=10;
	add(number);
	cout<<"Our number is :"<<number<<endl;                                                                                                                       
}
void add(int &number){
	number=number+10;
}
