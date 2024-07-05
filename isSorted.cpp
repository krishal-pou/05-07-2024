#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int size){
    if(size<2) return true;
    if(arr[0]>arr[1]) return false;
    else{
        return isSorted(arr+1,size-1);
    }
}
int main(){
    int arr[5]={1,2,3,5,4};
    cout<<isSorted(arr,5);
}