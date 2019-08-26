#include<iostream>
using namespace std;
int area;
int l;
int w;
 void getarea(int &Area);
 int main()
 {
  	int Area;
 	getarea(Area);
 	cout<<"Area is \n"<<Area<<endl;
 }
 void getarea(int &Area)
 
 {
   l=7;
   w=6;               
 	Area=l*w;
 }
