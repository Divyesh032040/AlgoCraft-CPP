
#include <bits/stdc++.h>
using namespace std;

int mostOccur (vector<int>arr ){
    int maxNum = 0;
    int ans = 0;
    int n = arr.size();

    unordered_map<int,int>count;

    for(int i=0;i<n;i++){
        count[arr[i]]++;
        maxNum = max(maxNum , count[arr[i]]);
    }
    for(int i=0;i<n;i++){
        if(maxNum == count[arr[i]]){
            ans = arr[i];
            break;
        }
    }

   return ans;
}

int main() {
    
    vector<int>arr = {1 , 4 , 4 , 3, 7 , 7 , 7 , 7 , 7};
    
    int ans = mostOccur(arr);
    
    cout<<ans<<endl;   //7   tc: o(2n)  sc: c(n)

    return 0;
}