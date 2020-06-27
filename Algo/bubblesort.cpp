#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector < int > bubble(vector < int >arr)
{
  int i,j,n,swapp;
  n = arr.size ();
  for(i=0;i<n-1;i++)
  {
      swapp=0;
      for(j=0;j<(n-i-1);j++)
      if(arr[j]>arr[j+1])
      {int temp=arr[j+1];
      arr[j+1]=arr[j];
      arr[j]=temp;
      swapp=1;
      }
      if(!swapp)
      break;
      
  }
  return arr;
 
    
}


int main ()
{
  int x, n;
  vector < int >unsrt;
  cout << "enter number of element to be sorted: ";
  cin >> n;
  cout << endl << "enter the values to be sorted:" << endl;
  for (int i = 0; i < n; i++)
    {
      cin >> x;
      unsrt.push_back (x);
    }
  cout << endl;
  for (int i = 0; i < n; i++)
    {
      cout << unsrt[i] << " ";
    }
  cout << endl;
  unsrt = bubble(unsrt);
  cout << endl << "sorted array: " << endl;
  for (int i = 0; i < n; i++)
    {
      cout << unsrt[i] << " ";
    }

}

