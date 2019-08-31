#include <iostream>
using namespace std;
struct Person
{
    char name[50];
    int age;
    float salary;
};
void displayData(Person);   // Function declaration
int main()
{
	int age;
	char name;
	float salary;
    Person p;
    cout << "Enter Full name: "<<endl;
    cin>>name;
    cout << "Enter age: "<<endl;
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;
    // Function call with structure variable as an argument
    
    return 0;
}
void displayData(Person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

