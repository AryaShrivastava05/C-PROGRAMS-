#include <iostream>
using namespace std;

int deleting(int *arr, int s, int item)
{

    int pos=0,f=0;
    //finding position of element
    for(int i=0; i<s;i++)
        if(arr[i]==item)
        {
            f=1;
            pos=i;
            break;
        }

        if(f==1)
        {
    //deleting and shifting elements
    for(int i=pos;i<s-1;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"Updated Array::";
    for(int i=0;i<s-1;i++)
        cout<<arr[i]<<" ";
        }
        else
            cout<<"Error: element not found";

}

int main()
{
    int s,i;
    int pos, item;
    cout<<"Enter Size of Array:";
    cin>>s;
    int * arr = new int;
    cout<<"Enter Elements";
    for(i=0;i<s;i++)
        cin>>arr[i];
    cout<<"Enter the element to be deleted";
    cin>>item;
    cout<<"Original Array:";
    for(i=0;i<s;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    deleting(arr, s, item);
    return 0;
}
