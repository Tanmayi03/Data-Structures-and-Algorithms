#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    //Initializing an array
    int a[5];
    
    //Initializing and declaring at a time
    int b[6] = {1,2,5,3};  //Remaining elements will be zero

    //To get the size of an array
    int size = sizeof(b)/sizeof(*b);
    cout<<size<<endl;

    //Traversing an array
    for(int i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;

    //To modify an element we can just reassign it
    b[0] = 7;

    //Sorting an array
    sort(b,b+size);

    for(int i=0;i<size;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0; 
}
