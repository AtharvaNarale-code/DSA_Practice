#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Character Frequency Counter: Given a string s, build a frequency map. Then, print all characters that appear an odd number of times.
vector<char> oddFrequencyCharacters(const string& s) {
   unordered_map<char,int> mp;
   for(char c: s){
        mp[c]++;
   }
   vector<char> result;
   for(auto it:mp){
    if(it.second %2 !=1){
        result.push_back(it.first);
    }
   }
   return result;
}

//First Unique Character in a String (LeetCode 387): Find the index of the first non-repeating character using frequency counting.
int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        for(char c:s){
            mp[c]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1){
                return i;
            }
        }
        return -1;
}

//Find the Mode(s): Given an integer array, find the element(s) with the maximum frequency. If multiple elements have the same max frequency, return all of them.
vector<int> demo(vector<int> arr){
    vector<int> result;
    int maxFreq = 0;
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second > maxFreq){
            maxFreq = it.second;
        }
    }
    for(auto it:mp){
        if(it.second == maxFreq){
            result.push_back(it.first);
        }
    }
    return result;
}

