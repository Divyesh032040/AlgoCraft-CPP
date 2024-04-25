#include <bits/stdc++.h> 
using namespace std;

// store everything in sorted order 
// store a unique values only
//imp func : find , count , insert , erase 

int main() {

set<int>st;     // sorted and unique

st.insert(7);
st.insert(3);
st.insert(2);
st.insert(3);
st.insert(5);
st.insert(6);
st.insert(10);

for(auto it : st){
    cout<<it<<" ";        //2 3 5 6 7 10 
}
cout<<endl;
auto it = st.find(3);    

cout<<*(it)<<endl; //3  if it elem is not there which its find than its return second last element 

auto ir = st.erase(7);

for(auto it : st){
    cout<<it<<" ";         //2 3 5 6 10
}
cout<<endl;
//erase specific element in set

auto it33 = st.find(10);
st.erase(it33);

for(auto it : st){
    cout<<it<<" ";        // 2 3 5 6 
} 
cout<<endl;
//erase in a range in set 
auto it1 = st.find(3);
auto it2 = st.find(6);  
st.erase(it1,it2);     //erase[ _ , _ );

for(auto it2 : st){
    cout<<it2<<" ";        // 2 6 
} 
cout<<endl;
//count elem : if its there , return 1 (because if its unique ) else return 0

int a = st.count(2);  //1
int b = st.count(33); //0
cout<<a<<b<<endl;

return 0;
}