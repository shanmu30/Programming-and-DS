#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector < int >
insertion (vector < int >arr)
{
  int value, hole, i, n;
  n = arr.size ();
  for (i = 1; i < n; i++)
    {
      value = arr[i];
      hole = i;
      while (hole > 0 && arr[hole - 1] >value)
	{
	  arr[hole] = arr[hole - 1];
	  hole = hole - 1;

	}
      arr[hole] = value;
    }
  return arr;
}


int
main ()
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
  unsrt = insertion (unsrt);
  cout << endl << "sorted array: " << endl;
  for (int i = 0; i < n; i++)
    {
      cout << unsrt[i] << " ";
    }

}

