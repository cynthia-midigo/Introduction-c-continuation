#include<iostream>
using namespace std;
int main()
{

	int choice,numb;
	menu: //goto
	cout<<"t\t***MENU***\n";
	cout<<"1.Soda--------10\n";
	cout<<"2.Tea---------20\n";
	cout<<"3.Chips--------30\n";
	 cout<<"Enter your choice>> ";
	 cin>>choice;
	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\nhow many bottles of soda?";
	 		cin>>numb;
	 		cout<<"\n the total is: "<<numb*10<<endl;
	 		break;
	 		 case 2:
	 		cout<<"\nhow many cups of tea?";
	 		cin>>numb;
	 		cout<<"\n the total is: "<<numb*20<<endl;
	 		break;
			 case 3:
	 		cout<<"\nhow many plates of chips?";
	 		cin>>numb;
	 		cout<<"\n the total is: "<<numb*30<<endl;
	 		break;
	 		 default:
	 		cout<<"\not a valid choice";
	 
	 		break;
	 }
	 cout<<"Enter your second choice>> ";
	 cin>>choice;
	 switch(choice)
	 {
	 	case 1:
	 		cout<<"\nhow many bottles of soda?";
	 		cin>>numb;
	 		cout<<"\n the total is: "<<numb*10;
	 		break;
	 		 case 2:
	 		cout<<"\nhow many cups of tea?";
	 		cin>>numb;
	 		cout<<"\n the total is:"<<numb*20;
	 		break;
			 case 3:
	 		cout<<"\nhow many plates of chips?";
	 		cin>>numb;
	 		cout<<"\n the total is:"<<numb*30;
	 		break;
	 		 default:
	 		cout<<"\not a valid choice";
	 	goto menu;
	 		break;
	 }
goto menu;
	 return (0);
}
