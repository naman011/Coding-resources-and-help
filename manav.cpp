#include <iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the number of rows and columns: ";
    cin>>rows>>cols;
    int A[rows][cols];
    cout<<"Enter the 2-D array:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>A[i][j];
            
        }
    }
    
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<A[i][j]<<" ";
            
        }cout<<endl;
    }
     
    
    return 0;
}
