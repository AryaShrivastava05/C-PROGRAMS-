#include<bits/stdc++.h> 
using namespace std; 

bool checkDuplicatesWithinK(int arr[], int a, int s) 
{ 
   
    unordered_set<int> myset; 
  
    
    for (int i = 0; i < a; i++) 
    { 
       
        if (myset.find(arr[i]) != myset.end()) 
            return true; 
  
       
        myset.insert(arr[i]); 
  
       
        if (i >= s) 
            myset.erase(arr[i-s]); 
    } 
    return false; 
} 
  
int main () 
{ 
    cout << "Programme by Spandan Saxena";
    int arr[] = {10, 5, 3, 4, 3, 5, 6}; 
    int a = sizeof(arr) / sizeof(arr[0]); 
    if (checkDuplicatesWithinK(arr, a, 3)) 
        cout << "Yes"; 
    else
        cout << "No"; 
} 
