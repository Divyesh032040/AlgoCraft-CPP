#include <bits/stdc++.h> 
using namespace std;

int findMaxConsecutiveOnesBF (int arr[],int n){
 
 int currSum = 0;
 int ans = 0;
 for(int i=0;i<n;i++){
    if(arr[i] == 1){
        currSum++;
        if(currSum>ans){
            ans = currSum;
        }
    }else{
        currSum = 0;
    }
   
 }
 return ans;
}

int main() {
int n = 10;
int arr[n] = {1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1};

int ans = findMaxConsecutiveOnes(arr,n); //TC:o(n) TC:o(1)

cout<<ans<<endl;


return 0;
}