#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int findmaxim(vector<int> a,int n, int k)
{
    int i,j,currmax=0,maxwin=0;
    for(i=0;i<k;i++)
    {
        currmax=currmax+a[i];
    }
    for(j=0;j<=n-k;j++)
    {
        currmax=a[j+k]+currmax-a[j];
        maxwin=max(maxwin,currmax);
    }
    return maxwin;
}


int main()
{
    int n, k,v;
    vector<int> a;
     cout<<"enter k : "<<endl;
     cin>>k;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter  values "<<endl;
    if(k>n)
    {
        cout<<"invalid";
    }
    else
    {
        for(int i=0;i<n;i++)
    {
    cin>>v;
    a.push_back(v);
    }
    v=findmaxim(a,n,k);
    cout<<"value is : "<<v<<endl;
    }
    return 0;
}
