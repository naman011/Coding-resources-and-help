#include<iostream>
#include<algorithm>
using namespace std;
void rotate(int rows, int arr[][1000]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
       int s= j;
       int e= rows-1-j;
       if(s<e){
           swap(arr[i][s], arr[i][e]);
       }
    }
    }cout<<endl;
     for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            if(i<j){
            swap(arr[i][j], arr[j][i]);
            }
            cout<<arr[i][j]<<" ";
        }cout<<endl;
     }
}
int main(){
    int rows;
    cout<<"rows:";
    cin>>rows;
    int arr[rows][1000];
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            cin>>arr[i][j];
        }
    }
    rotate(rows,arr);
}
