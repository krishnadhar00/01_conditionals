// Check profit and loss using if else conditions
#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cin>>sp;
    cin>>cp;
    if(sp>cp)
    {
        cout<<"Profit :"<<sp-cp<<endl;
    }
    else if(cp>sp)
    {
        cout<<"Loss :"<<cp-sp<<endl;
    }
    else
    {
        cout<<"No profit no loss";
    }
}