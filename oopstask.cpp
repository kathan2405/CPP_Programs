#include<iostream>
using namespace std;

class employees
{
    int id;
    string name;
    long int salary;
    public:
        void getdata()
        {
            cout<<"Enter id of enployee: ";
            cin>>id;
            cout<<"ENter name of employee: ";
            cin>>name;
            cout<<"Enter the salary: ";
            cin>>salary;
        }
        void showdata()
        {
            cout<<"id = "<<id<<endl;
            cout<<"Name = "<<name<<endl;
            cout<<"Salary = "<<salary<<endl;
        }
};

int main()
{
    employees e;
    e.getdata();
    e.showdata();

return 0;
}