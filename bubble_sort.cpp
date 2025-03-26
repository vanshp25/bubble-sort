#include<bits/stdc++.h>
using namespace std;
void bsort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        int temp=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
                temp=1;
            }
        }
        if(temp==0)
        break;
        cout<<"run"<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}