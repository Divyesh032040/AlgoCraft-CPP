#include<bits/std+.h>
using namespace std;



    int reqDays(vector<int>& weights , int capacity){
        int n = weights.size();
        int days = 1;
        int load = 0;
        for(int i=0;i<n;i++){
            if(load + weights[i] > capacity){
                days = days + 1;
                load = weights[i];
            }else{
                load += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low =  *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(),weights.end() , 0);
        int ans = 0;
        int n = weights.size();
   
        while(low<=high){
            int mid = low + (high-low) / 2;
            int reqDay = reqDays( weights , mid);
            if(reqDay <= days){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }

int main(){

    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;

}
//Time Complexity: O(N * log(sum(weights[]) - max(weights[]) + 1))


    //int low = *max_element(weights.begin(), weights.end());
    //or
    // int sum (vector<int>& weights){
    //     int sum = 0;
    //     int n = weights.size();
    //     for(int i=0;i<n;i++){
    //         sum += weights[i];
    //     }
    //     return sum;
    // }
