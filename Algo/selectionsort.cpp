#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> selection(vector<int> arr)
{
    int minind;
    static int count=0;
    int n=arr.size();
    for(int i=0;i<n-1;i++){
    minind=i;
    for(int j=i+1;j<n;j++){
    if(arr[j]<arr[minind])
    minind=j;}
    //swap
    if(minind!=i){
    int temp=arr[i];
    arr[i]=arr[minind];
    arr[minind]=temp;
    count++;}
    }
    cout<<count<<endl;
    return arr;
}


int main()
{
    int x,n;
    vector<int> unsrt;
    cout<<"enter number of element to be sorted: ";
    cin>>n;
    cout<<endl<<"enter the values to be sorted:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        unsrt.push_back(x);
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<unsrt[i]<<" ";
    }
    cout<<endl;
    unsrt=selection(unsrt);
    cout<<endl<<"sorted array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<unsrt[i]<<" ";
    }
   
}

