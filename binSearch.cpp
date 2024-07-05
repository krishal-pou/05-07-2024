#include<bits/stdc++.h>
using namespace std;

bool binSearch(int arr[],int key,int start,int end){
    if(start>end) return false;
    int mid=start+(end-start)/2;
    if(key==arr[mid]) return true;
    if(key>arr[mid]){
        binSearch(arr,key,mid+1,end);
    }
    else
    return binSearch(arr,key,start,mid-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    int key=10;
    cout<<binSearch(arr,key,0,4);
}