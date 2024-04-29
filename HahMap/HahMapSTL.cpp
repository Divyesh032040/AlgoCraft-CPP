 #include <bits/stdc++.h> 
using namespace std;

//its sort version , go in STL folder 

int main() {
    //create
    unordered_map<string,int>myMap;

    //insertion
    myMap["DataStructure"] = 2;    //("DataStructure" , 2);


    //searching
    cout<<myMap["DataStructure"]<<endl;   //2

    //check presence of any key
    cout<<myMap.count("DataStructure")<<endl; //1

    //cout<<myMap.at("unknown")<<endl;   // it will show error cause unknown key not present 
    cout<<myMap["unknown"]<<endl;   //it will create a new pair with value 0
    cout<<myMap.at("unknown")<<endl;   //1

    //size
    cout<<"size of map: "<<myMap.size()<<endl;


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