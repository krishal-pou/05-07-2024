#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int size){
    // if(size==0) return 0;
    // if(size==1) return sum1+arr[0];
    
    // return sum(arr+1,size-1,sum1+arr[0]);
    if(size==0) return 0;
    if(size==1) return arr[0];

    int remain=sum(arr+1,size-1);
    int sum=arr[0]+remain;
    return sum;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int sum1=0;
    cout<<sum(arr,5);
}