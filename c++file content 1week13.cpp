#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream myfile;
	myfile.open("New.text");
	myfile<<"This is new on file"<<endl;
	myfile.close();
	return 0;
}
