#include <vector>
#include <iostream>
using namespace std;

class BasicRecursion2{
public:
//Check Array Sorted: Return True if an array is sorted in non-decreasing order, otherwise False.
bool isarrsorted(const vector<int>& arr,int i){
    if(i>=arr.size()-1 || arr.size()<=1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isarrsorted(arr,i+1);
}

//Palindrome String Check: Check if a string s is a palindrome recursively (e.g., "racecar" $\rightarrow$ True).
bool isPalindrome(const string& s,int i,int j){
    if(s.length()<=1 || i==j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    return isPalindrome(s,i+1,j-1);
}

//Recursive Binary Search: Implement binary search on a sorted array recursively given low and high pointers.
bool isPresent(const vector<int>& arr,int low,int high,int n){
    if(low>high){
        return false;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==n){
        return true;
    }
    if(arr[mid]>n){
        return isPresent(arr,low,mid-1,n);
    }
    return isPresent(arr,mid+1,high,n);
}

//Count Vowels: Count the total number of vowels in a string s recursively.
int countVowel(string s,int i){
    if(i>=s.length()){
        return 0;
    }
    int count=0;
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        count=1;
    }
    return count + countVowel(s,i+1);
}

//Highly good questions for recursion practice 
//Count Paths in a Grid: Given an $M \times N$ grid, count all unique paths from top-left to bottom-right if you can only move Right or Down.
int countPaths(int i, int j, int M, int N) {
    // Base Case 1: If we reach the bottom-right destination, we found 1 valid path
    if (i == M - 1 && j == N - 1) {
        return 1;
    }
    if (i >= M || j >= N) {
        return 0; // Out of bounds
    }
    int moveDown = countPaths(i + 1, j, M, N);
    int moveRight = countPaths(i, j + 1, M, N);
    return moveDown + moveRight;
    }
};