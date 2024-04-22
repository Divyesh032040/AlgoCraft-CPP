//revision of STL
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){

//declaration 

vector<int>v;

//pair
pair <int,int> v = {30,40};
int a = v.first; //30
int b = v.second; //30

vector<pair<int,int>>myV={30,50};  //pair vector

//add elements in vector 
v.push_back(30);
v,push_back(50);

//access the elements of vector
//vector :v = {10,20,30,40}
v[0] //10
v[2] //30
v[3] //40

//another way to access vector elem is iterator
//data_type::iterator it = v.begin()  - it will pointing to a memory address

vector<int>::iterator it = v.begin();
cout<<*(it); //access the value at memory address which it is pointing

vector<int>v1={10,20,30,40,50};
vector<int>::iterator i = v.end()  //it will point next of last element which is v1[5];

//to point iterator at last element memory add
vector<int>::iterator myIt = v1.end();
myIt--; //this will move iterator at 50
cout<<*(mtIt); //50
cout<<*(v1.begin()); //10


//apply loop on vector

vector<int>v2={10,20,30,40,50,60};

for(vector<int>::iterator i=v2.begin() ; i != v2.end();i++){     
        cout<<*(i)<<endl;
}

//vector<int>::iterator = auto

for(auto it=v2.begin();it!=v2.end();it++){
    cout<<*(it)<<endl;
}

//use : for each loop

for(auto it : v2){
    cout<<it<<endl;
}

//deletion in a vector     mtVector.erase[first,last)
v2.erase(v2.begin()+1);  //remove 20 from v2

//erase range of element    vector.erase[starting address , and address after the element)   

v2.erase(v2.begin()+1 , v2.end()-1);

vector<char>v3={'a', 'b', 'c', 'd', 'f'};      

v3.erase(v3.begin()+1 , v3.begin()+4);     //af

for(auto it:v3){
    cout<<it;
}

//insert function in vector
vector<int>v4={100,300};

v4.insert(v4.begin()+1,200);   //100 200 300

v4.insert(v4.begin()+2,3,400);  //100 200 300 400 400 400 

v4.size(); // gives no of elements (not index) for v4 , it will return 6

v4.pop_back() //remove last element

vector<int>v7={10,20};
vector<int>v8={30,40};
v7.swap(v9)     //v7 -> {30,40} and v8 -> {10,20}

v4.clear();  //erase every element and v4 will be empty

v4.empty()   //if no element are there it will return true else false




























    return 0;
}
/*
C++ STL : 1)algorithms 
          2) containers - vector , queue , set , map
          3)iterators 
          4)functions



*/
