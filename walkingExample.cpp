#include<bits/stdc++.h>
using namespace std;


void reachHome(int src,int dest){
    if(src==dest){
        cout<<"Reached home"<<endl;
        return;
    }
    ++src;
    cout<<src<<endl;
    reachHome(src,dest);
}

int main(){
    int src=0;
    int dest=10;
    reachHome(src,dest);
}