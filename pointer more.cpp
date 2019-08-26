#include<iostream>
using namespace std;
int main()
{
int a=58;
int *p=&a;
int **q=&p;
//statements
a=58;
p=&a;
q=&p;
cout<<   a<<"  ";
cout<<  *p <<"  ";
cout<<   **q<<"  ";
return 0;
}

