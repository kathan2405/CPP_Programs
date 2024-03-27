#include<iostream>
using namespace std;

class area
{
    int l,b;
    public:
        void getdata()
        {
        cout<<"Enter length and breadth of rectangle: ";
        cin>>l>>b;
        }
        void cal()
        {
        int ans = l * b;
        cout<<"Area of rectangle: "<<ans;
        }
        void sho()
        {
         cout<<"length = "<<l<<endl;
         cout<<"Breadth = "<<b<<endl;
        }
};

int main()
{
    area a;
    a.getdata();
    a.sho();
    a.cal();
    

    return 0;
}
