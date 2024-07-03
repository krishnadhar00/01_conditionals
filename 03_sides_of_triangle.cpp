// Check that the traingle isa side of a traingle
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b))
    {
        cout<<"This is a sides of a traingle"<<endl;
    }
    else{
        cout<<"Not the sides of a traingle"<<endl;
    }
}