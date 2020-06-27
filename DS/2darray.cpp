#include<bits/stdc++.h>
using namespace std;
int main()
{
int rows,columns,value;
cin>>rows>>columns;
vector< vector< int > > myvector( rows ) ;
for( int i =0 ; i < rows ; i++ ) {
for ( int j=0 ; j < columns ; j++ ) {
cin >> value ;
myvector [ i ].push_back ( value ) ;
} }
for( int i =0 ; i < rows ; i++ ) {
for ( int j=0 ; j < columns ; j++ ) {
cout<<myvector[j][i]<<"";
} }




}
