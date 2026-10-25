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
};