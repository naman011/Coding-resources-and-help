#include <iostream>
using namespace std;
int main()
    {
    int n,m,k,s;
    cout<<"rows: ";
    cin>>n;
    cout<<"columns: ";
    cin>>m;
    cout<<"Enter the threshold strength: ";
    cin>>k;
    cout<<"Enter the strength: ";
    cin>>s;
   
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]== '.')
            {
                s=s-2;
                s--;
            }
            else if(arr[i][j]== '*')
            {
                s=s+5;
                s--;
            }
            else if(arr[i][j]== '#')
            {
                s++;
                 break;
            }
            if(s<k)
         {
         cout<<"NO"<<endl<<s;
         return 0;
         }
        }
    }
   
    cout<<"YES"<<endl<<s;
    return 1;
}

    
