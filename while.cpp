#include<iostream>

using namespace std;

int main()
{
    int count=1,sum=0,val;

    cout<<"Enter the user number=";
    cin>>val;

    while(count<=val)
    {
        sum += count;//Ssame as sum = sum + count....
        count = count+1;
    }
    cout<<"Sum of 1 to "<<val<<" is= "<<sum<<endl;

    return 0;
}