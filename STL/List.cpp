#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//very similar to vector just ne watching is it has push_front functionalities.

int main() {

list<int>ls={10,20};

ls.push_back(30); //10 20 30 

ls.push_front(5); //5 10 20 30 

for(auto it : ls){
    cout<<it<<" ";
}

//rest functions are same as vector
return 0;
}