#include<iostream>

using namespace std;

int main()
{
    int i, sum=0,val;

    cout<<"Enter the values=";

    cin>>val;

    for(i=1;i<=val;i++)
    {
        sum += i;//Same as sum = sum + 1....
    }    
    cout<<"Sum of 1 to "<<val<<" = "<<sum<<endl;
    return 0;
}