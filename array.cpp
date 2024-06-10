#include<iostream>

using namespace std;

int main(){

    int arr[2][5]={{1,2,3,4,5},{6,7,8,9,4}};
    int a[2][5]={{1,2,3,4,5},{6,7,8,9,4}};
    int sum[2][5];
    int i,j;

    cout<<"arr array element :";
    for(i=0;i<2;i++){
        for(j=0;j<5;j++)
        {
            
             cout<<"\t"<<arr[i][j];
        }

    } cout<<endl;
     cout<<"a array element :";
    for(i=0;i<2;i++){
        for(j=0;j<5;j++)
        {
           
             cout<<"\t"<<a[i][j];
        }

    }cout<<endl;
    cout<<"Sum arra elements = ";

     for(i=0;i<2;i++){
        for(j=0;j<5;j++)
        {
            
            sum[i][j]=arr[i][j]+a[i][j];
            cout<<"\t"<<sum[i][j];
        }

    } 

    return 0;
}