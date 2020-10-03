#include <iostream>

using namespace std;

int insert(int arr[], int N, int item, int pos)
{
    int i;
    //increase size of Array
    N++; 
    //shift elements
    for(i=N; i>=pos;i--)
        arr[i] = arr[i-1];
    //inserting item
    arr[pos-1] = item;
    cout<<"Updated Array::";
    for(i=0;i<N;i++)
        cout<<arr[i]<<" ";
    
}

int main()
{
    int N,i;
    int pos, item;
    cout<<"Enter Size of Array:";
    cin>>N;
    int * arr = new int;
    cout<<"Enter Elements";
    for(i=0;i<N;i++)
        cin>>arr[i];
    cout<<"Enter the new element";
    cin>>item;
    cout<<"Enter Position";
    cin>>pos;
    cout<<"Original Array:";
    for(i=0;i<N;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    insert(arr, N, item, pos);
    return 0;
}
