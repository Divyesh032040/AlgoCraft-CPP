#include <bits/stdc++.h> 
using namespace std;

vector<int> intersectionBF ( vector<int>a , vector<int>b){

    int n1 = a.size();
    int n2 = b.size();

    vector<int>ans;

    vector<int>visited = { 0 , n2};

    for(int i=0 ; i<n1 ; i++){
        for(int j=0 ; j<n2 ; j++){
            if( a[i] == b[j] && visited[j] != 1 ){
                ans.push_back(a[i]);
                visited[j] == 1 ;
                break;
            }
            if(b[j]>a[i])break;
        }
    }
    return ans;
} 

vector<int> intersectionOptimal( vector<int>a , vector<int>b){
    //two pointers 
    int i = 0;
    int j = 0;

    //size of both array 
    int n1 = a.size();
    int n2 = b.size();

    //ans vector 
    vector<int>ans;

    while( i<n1 && j<n2 ){

       if( a[i]<b[j] ){
        i++;
       }
       else if( b[j]<a[i] ){
        j++;
       }
       else{
        ans.push_back(a[i]);
        i++;
        j++;
       }
       }
       return ans;
    }

int main() {

vector<int>a = {2 , 4 , 6 , 4 , 10};
vector<int>b = {4 , 4 , 5 , 6 , 7 };

vector<int>result = intersectionBF(a,b);  //TC: O(n1+n2)   SC: n1+n2
vector<int>result = intersectionBF(a,b);  //TC: o(n1*n2)   SC: n2

int n=result.size();
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}

return 0;
}

/*
BF: 
- we use visited array (mark 1 from 0 if elem taken) to track of any elem is used or not
- for minimum space complexity we should assign visited array to the smallest array bte a , b

*/