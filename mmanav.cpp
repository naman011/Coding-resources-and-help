#include<iostream>
using namespace std;

int main()
{ 
    int size;
    cout<<"Size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter the array: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   int current_sum=0;
   int max_sum=0;
   
   for(int i=0; i<size;i++)
   {
       current_sum = current_sum +arr[i];
       if(current_sum<0)
       {
           current_sum=0;
       }
       max_sum= max(max_sum,current_sum);
   }
    cout<<"Maximum sum is: "<<max_sum<<endl;
    return 0;
}
