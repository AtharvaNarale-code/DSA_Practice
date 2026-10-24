#include <iostream>
#include <vector>
using namespace std; 

class BasicRecursion1{
    int square(int x,int y){
        if(y<=1){
            return x;
        }
        return x*square(x,y-1);
    }

    int sum_of_arr(const vector<int>&arr,int i){
        if(i>=arr.size()-1){
            return arr[i];
        }
        return arr[i]+sum_of_arr(arr, i+1);
    }

    int findMaxIndexIteration(const std::vector<int>& arr, int index) {
        if (index == arr.size() - 1) {
            return arr[index];
        }
        int maxOfRest = findMaxIndexIteration(arr, index + 1);
        return max(arr[index], maxOfRest);
    }

    int countOccurrences(const int nums[], int size, int target) {
    if (size == 0) {
        return 0;
    }
    int match = (nums[0] == target) ? 1 : 0;
    return match + countOccurrences(nums + 1, size - 1, target);
}
};