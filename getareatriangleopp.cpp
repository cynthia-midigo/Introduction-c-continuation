#include <iostream>
using namespace std;
class multiply{
	public:
		void getArea()
		{
			int base,height,Area;
			cout<<"Please enter the base of the triangle"<<endl;
			cin>>base;
			cout<<"Please enter the height of the triangle"<<endl;
			cin>>height;
			Area=(base*height)/2;
			cout<<"The area is  \n"<<Area<<endl;
			
		}};
		int main(){
			multiply q;
			q.getArea();
			return(0);
		}
