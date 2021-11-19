#include<iostream>
#include<math.h>

using namespace std;


int main()
{

    double fact1 = 1;
    double fact2 = 1;
    double c;

    int a;
    int b;
    int i;

    cout<<"input number and get the factioal 1 : ";
    cin>>a;

    cout<<"input number and get the factioal 2 : ";
    cin>>b;

    for ( i = 1; i <= a; i++)
    {
        fact1 *= i;
    } 

    cout<<"\nfactorial 1 = "<<fact1<<endl;

    for ( i = 1; i <= b; i++)
    {
        fact2 *=i;
    }
    cout<<"factorial 2 = "<<fact2<<endl;

    double n = fact1;
    double k = fact2;

    c = n/k * (n+k);

    cout<<"\nthe result = "<<c<<endl;

}
