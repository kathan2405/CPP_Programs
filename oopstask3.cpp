#include<iostream>
using namespace std;

class account
{
    int accid;
    char acc_name[30];
    int acc_balance;
public:
    void getdata()
    {
        cout<<"Enter acc id: ";
        cin>>accid;
        cout<<"ENter name: ";
        cin>>acc_name;
        cout<<"ENter balance: ";
        cin>>acc_balance;
    }
    void display()
    {
        cout<<endl<<"Account I'd = "<<accid<<endl;
        cout<<"Account name = "<<acc_name<<endl;
        cout<<"Account balance = "<<acc_balance<<endl;
    }
    void deposit()
    {
        int deposit;
        cout<<"Enter deposit value: ";
        cin>>deposit;
        acc_balance = acc_balance + deposit;
        cout<<"New acc balance: "<<acc_balance;
    }
    void widraw()
    {
        int widraw;
        cout<<endl<<"Enter the widraw value: ";
        cin>>widraw;
        acc_balance = acc_balance - widraw;
        cout<<"New acc balance: "<<acc_balance;
    }
};

int main()
{
    account a;
    a.getdata();
    a.display();
    a.deposit();
    a.widraw();
    a.display();
return 0;
}
