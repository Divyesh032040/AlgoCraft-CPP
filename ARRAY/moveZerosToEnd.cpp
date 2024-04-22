#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    vector<int> temp;
    for(int i = 0; i < n; i++) {
        if(nums[i] != 0) {
            temp.push_back(nums[i]);
        }
    }

    for(int i = 0; i < temp.size(); i++) {
        nums[i] = temp[i];
    }
    for(int i = temp.size(); i < n; i++) {
        nums[i] = 0;
    }
    for(int i = 0; i < nums.size(); i++) {
         cout << nums[i] << " ";
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12}; // Example input
    cout << "Original array: ";
    for(int i = 0; i < nums.size(); i++) {
         cout << nums[i] << " ";
    }
    cout << endl << "After moving zeroes: ";
    moveZeroes(nums);
    return 0;
}
