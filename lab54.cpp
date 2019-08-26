#include<iostream>
using namespace std;
 int multiply(int l,int w)
 {
 	int multiply;
 	multiply=l*w;
 	return(multiply);
 };
 int main()
 {
 	int A,l,w;
 	l=5;
 	w=6;
 	A=multiply(l,w);
 	cout<<"Area is \n"<<A<<endl;
 }
