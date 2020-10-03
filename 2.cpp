#include <iostream>

using namespace std;

int search(int arr[], int a, int item)
{
    int i;
    for (i = 0; i < a; i++) 
        if (arr[i] == item) 
            return i; 
    return -1; 
    
}

int main()
{
    int a,i;
    int item;
    cout<<"Enter Size of Array:";
    cin>>a;
    int * arr = new int;
    cout<<"Enter Elements";
    for(i=0;i<a;i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched";
    cin>>item;
    int result = search(arr, a, item);
    if(result == -1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index: " <<result;
    return 0;
}

