#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
#include <bits/stdc++.h> 
using namespace std;



int main() {
    //create
    unordered_map<string,int>myMap;

    //insertion
    //way 1
    pair<string,int>pair1 = make_pair("divyesh",0);
    myMap.insert(pair1);    //("divyesh" , 0)

    //way2
    pair<string,int>pair2("parmar",1);
    myMap.insert(pair2);    //("parmar" , 1)

    //way3
    myMap["DataStructure"] = 2;    //("DataStructure" , 2);


    //searching
    cout<<myMap["divyesh"]<<endl;   //0
    cout<<myMap["DataStructure"]<<endl;   //2

    //cout<<myMap.at("unknown")<<endl;   // it will show error cause unknown key not present 
    cout<<myMap["unknown"]<<endl;   //it will create a new pair with value 0
    cout<<myMap.at("unknown")<<endl;   //0

    //size
    cout<<"size of map: "<<myMap.size()<<endl;

    //check presence of key : 
    cout<<"is bro present ? "<<myMap.count("bro")<<endl;    //0
    cout<<"is divyesh present ? "<<myMap.count("divyesh")<<endl;  //1

    //erase any key
    myMap.erase("parmar"); //remove (parmar,1) from unordered hashmap
    cout<<"new size of hashmap is :"<<myMap.size()<<endl;

    //for each loop 
    for(auto it : myMap){
        cout<<it.first <<" "<<it.second<<endl;
    }

    //iterator
    unordered_map<string,int>::iterator it = myMap.begin();
    while(it != myMap.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

return 0;
}

/*
map : TC: o(log n) and unordered_map -> TC: o(1)
only one entry of value allow corresponding to every unique key ,

*/