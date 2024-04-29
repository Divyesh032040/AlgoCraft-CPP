#include <bits/stdc++.h> 
using namespace std;

int BruteForceOne( int arr[] , int n , int k){
    int longest=0;
    for(int i = 0; i<n ; i++){
        for(int j=i ; j<n ; j++){
             int sum = 0;
            for(int k=i ; k<=j ; k++){
                sum = sum + arr[k];
            }
            if(sum == k)
                longest = max( longest , j-i+1 );
        }
       
    }
     return longest;
}

int BruteForceTwo( int arr[] , int n , int k){
    int longest = 0;
    long long sum = 0;
    for(int i = 0; i<n ; i++){
        for(int j=i ; j<n ; j++){
              sum = sum + arr[j];
            if(sum == k)
                longest = max( longest , j-i+1 );
        }
    }
     return longest;
}

int LongestSubarraywithsumKBatter (vector<int>a , int k){
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

int getLongestSubarrayOptimized(vector<int>& a, long long k) {
    int left = 0;
    int right = 0;
    int sum = a[0];
    int maxLen = 0;
    int n = a.size();
    
    while(right < n){
        while(left <= right && sum > k){
            sum = sum - a[left];
            left++;
        }
        if(sum == k){
        maxLen = max(maxLen,right - left + 1);
        }
    right++;
    if(right<n) sum += a[right];
    
        
    }
    return maxLen;
}

int main() {

int n;
cout<<"enter size of array : "<<endl;
cin>>n;

int arr[n];
cout<<"enter the size of array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int k;
cout<<"enter the sum"<<endl;
cin>>k;

int ans1 = BruteForceOne(arr,n,k);

int ans2 = BruteForceTwo(arr,n,k);

int ans3 = LongestSubarraywithsumKBatter(arr,k);

int ans4 = getLongestSubarrayOptimized(arr,k);

cout<<"longest Sub-array with sum is:"<<endl;
cout<<ans;

return 0;
}

/*

Complexity Analysis:
1) brute force approach - BruteForceOne
Time Complexity: O(N^3) approx., where N = size of the array.
Reason: We are using three nested loops, each running approximately N times.
Space Complexity: O(1) as we are not using any extra space.

2) batter approach - BruteForceTwo
Time Complexity: O(N^2) approx., where N = size of the array.
Reason: We are using three nested loops, each running approximately N times.
Space Complexity: O(1) as we are not using any extra space.
*/