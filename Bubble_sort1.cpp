/*Ans-1: (a) it is stable sort
 Ans-2: (c){1,2,5,4,3,6}
 Ans-3 (a) when the array is sorted in increasing order*/

 //Ans-4 Sort the array in descending order using Bubble Sort.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={5,2,8,1,9,3};
    int n=6;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
          if(arr[j+1]>arr[j]){
            swap(arr[j+1],arr[j]);
            flag=false;
          }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}

