#include<bits/stdc++.h>
using namespace std;
void sayDigit(int n,vector<string>& map){
    if(n==0) return;
    sayDigit(n/10,map);
    int digit=n%10;
    cout<<map[digit]<<" ";
    
}

int main(){
    int n;
    cin>>n;
    vector<string> map={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    sayDigit(n,map);
}