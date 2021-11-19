#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int factorial(int n){

    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{

    int a;
    int b;

    cout<<"input number and get the factioal a : ";
    cin>>a;

    cout<<"input number and get the factioal b : ";
    cin>>b;

    double n = factorial(a);
    double k = factorial(b);
    double c;

    cout<<"\na! = "<<n<<"\tb! = "<<k<<endl;

    cout<<"\nC(n,k)=n!/k! * (n-k)!"<<endl;

    c = n/k * (n-k);

    cout<<"the Result : "<<c<<endl;


 



}