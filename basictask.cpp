#include<iostream>
using namespace std;

/*int main()
{
    float dist;
    cout<<"Enter speed in km/h : ";
    cin>>dist;

    float distmile = dist/1.609;
    cout<<"speed in miles: "<<distmile<<" miles/hr";
}*/
/////////////////////////////////////////////////////////////////
/*int main()
{
    float tem;
    cout<<"Enter temp in celcius : ";
    cin>>tem;

    float temcelcius = (tem*9/5)+32 ;
    cout<<"temp in fahernheit: "<<temcelcius<<" F";
}*/
////////////////////////////////////////////////////////////////////
/*int main()
{
    int num1,i;
    cout<<"ENter a number: ";
    cin>>num1;

    for(i=1;i<=10;i++)
    {
        cout<<num1<<" * "<<i<<" = "<<num1 * i<<endl;
    }
}*/
//////////////////////////////////////////////////////////////////
/*int main()
{
    int r;
    cout<<"Enter the radius: ";
    cin>>r;

    double area = 3.14*r*r;
    double cir = 2*3.14*r;

    cout<<"Area = "<<area<<endl;
    cout<<"Cir = "<<cir;
}*/
//////////////////////////////////////////////////////////////////
int main()
{
    double dist;
    float distmtr;
    float distkm;
    cout<<"ENter the distance in cm: ";
    cin>>dist;

    distmtr=dist/100;
    distkm=dist/100000;

    cout<<"Dist in meter: "<<distmtr<<endl;
    cout<<"Dist in kilometer: "<<distkm;

}