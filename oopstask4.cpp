#include<iostream>
using namespace std;

class books
{
    string title;
    string author;
    int available;
    public:
        void getdata()
        {
            cout<<"ENter title,author,available:";
            cin>>title;
            cin>>author;
            cin>>available;
        }
        void addbook()
        {
            string a;
            if(a==title)
            {
                if(available>0)
                {
                    cout<<"you can get that book";
                }
                else{
                    cout<<"THis book is not available:"
                }
            }
        }
        void removebook()
        {}
}