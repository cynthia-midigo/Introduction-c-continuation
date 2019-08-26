#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char data[100];
	//open a file in a write mode
	ofstream outfile;
	outfile.open("afile.dat");
	cout<<"Write to the file"<<endl;
	cout<<"Enter your name"<<endl;
	cin.getline(data,100);
	//write inputted data
	outfile<<data<<endl;
	
	cout<<"Enter your age";
	cin>>data;
	cin.ignore();
	//write inputted data
	outfile<<data<<endl;
	
	  //close  the opened file
	outfile.close();
	//open a file in a read mode
	ifstream infile;
	infile.open("afile.dat");
	cout<<"Reading from the file"<<endl;
	infile>>data;
	
	cout<<data<<endl;
	
	infile>>data;
	
	infile.close();
	return 0;
	}
