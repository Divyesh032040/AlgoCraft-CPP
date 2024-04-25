#include <bits/stdc++.h>
using namespace std;

vector<int> unionArrayBruteForce(vector<int>a , vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    set<int>mySet;
    for(int i=0;i<n1;i++){   //o(n1 log n)
        mySet.insert(a[i]);
    }
    for(int i=0;i<n2;i++){    //o(n2 log n)
        mySet.insert(b[i]);
    }
    vector<int>temp;         //o(n1+n2)
    for(auto it : mySet){
        temp.push_back(it);
    }
    return temp;
    //TC: o(n1+log n) + o(n2+log n) + o(n1+n2)
    //SC: o(n1+n2) + o(n1+n2):for return a ans for for find ans
}

//optimal - use 2 pinter approach 

vector<int> unionArrayOptimal (vector<int>a,vector<int>b){
    
    int n1 = a.size();
    int n2 = b.size();
    
    int i = 0;
    int j = 0;
    
    vector<int>ans;

    while( i<n1 && j<n2){
        if(a[i]<=b[j]){
            if( ans.size()==0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }else{
            if(b[j]<=a[i]){
            if( ans.size()==0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        }
    }

//after one are end
        while(i<n1){
            if( ans.size()==0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
         while(j<n2){
            if( ans.size()==0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }

    return ans;

}
    
    int n1 = a.size();
    int n2 = b.size();
    
    int i = 0;
    int j = 0;
    
    vector<int>ans;

    while( i<n1 && j<n2){
        if(a[i]<=b[j]){
            if( ans.size()==0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }else{
            if(b[j]<=a[i]){
            if( ans.size()==0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
        }
    }

//after one are end
        while(i<n1){
            if( ans.size()==0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }
         while(j<n2){
            if( ans.size()==0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }

    return ans;

}





int main(){

vector<int>a={10,20,30,34,20};
vector<int>b={20,33,44,2,45,56};

vector<int>result = unionArrayOptimal(a,b);

for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
} 
//2 10 20 30 33 34 44 45 56
return 0;
}



/*
arr1[]=[3,4,5,3,5,6] and arr2[]=[3,4,5,6,7,8,8,10] than ans should be: [3,4,5,6,7,8,10]


brute force :
1] take a set dataset and put elements in set via iterate both the arr , only unique element will accept by set so at last , we will take a another temp array and put all elements of set into that temp array and return it.







*/