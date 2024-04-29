#include <bits/stdc++.h> 
using namespace std;

int LongestSubarraywithsumK (vector<int>a , int k){
    int sum =0;
    int maxLen =0;
    map< long long , int >preSumMap;
    
    for(int i=0;i<a.size();i++){
      sum += a[i];
      if(sum == k){
          maxLen = max( maxLen , i+1);
      }
       //remaining arr
   int rem = sum - k;
   if(preSumMap.find(rem) != preSumMap.end()){
      int len = i - preSumMap[rem];
      maxLen = max(maxLen , len);
   }
   
   if(preSumMap.find(rem)==preSumMap.end()){
       preSumMap[sum] = i ;
   }
      
}
   return maxLen;
}

int main() {

  vector<int> a = {2, 1 , 2, 5, 1, 9};
    long long k = 10;
    int len = LongestSubarraywithsumK(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

return 0;
}