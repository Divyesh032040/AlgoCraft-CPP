#include <bits/stdc++.h> 
using namespace std;

/*
- map have a key-value pair 
- key must be unique and value can be repetitive 
- map stores unique keys in sorted order 
- keys are unique and in sorted order and key can have in any data type

*/


int main() {

  map<int,int>m1;
  map< int, pair<int,int> > m2;
  map< pair<int,int>, int > m3;
  

  m1[1]=11;
  m1[2]=33;

  for(auto it : m1){
    cout<<"keys :"<<it.first <<"value :"<<it.second<<endl;
  }

  

return 0;
}