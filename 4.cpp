#include<bits/stdc++.h> 
using namespace std; 

bool checkDuplicatesWithinK(int arr[], int n, int k) 
{ 
   
    unordered_set<int> myset; 
  
    
    for (int i = 0; i < n; i++) 
    { 
       
        if (myset.find(arr[i]) != myset.end()) 
            return true; 
  
       
        myset.insert(arr[i]); 
  
       
        if (i >= k) 
            myset.erase(arr[i-k]); 
    } 
    return false; 
} 
  
int main () 
{ 
    cout << "Programme by Spandan Saxena";
    int arr[] = {10, 5, 3, 4, 3, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    if (checkDuplicatesWithinK(arr, n, 3)) 
        cout << "Yes"; 
    else
        cout << "No"; 
} 