
#include <bits/stdc++.h> 
using namespace std;

// sorted but not unique 

int main() {

multiset<int>ms;

ms.insert(1); //1
ms.insert(1); //1 1 
ms.insert(1); //1 1 1
ms.insert(1); //1 1 1 1

ms.erase(1); //erase all 1's occur 

ms.erase(ms.find(1));  //1 1 1 

ms.erase(ms.find(1) , ms.find(1)+1);  //1 1

//rest all functions are same as set 


//unordered set  - unique but not sorted 

unordered_set<int>ust;

ust.insert(10);
ust.insert(30);
ust.insert(5);
ust.insert(30);   //any order but all are unique elems

for(auto it : ust){
    cout<<it;
}


return 0;
}