#include<bits/stdc++.h>
using namespace std;

void reverse(string &word,int start){
    if(start>=word.size()/2) return;
    swap(word[start],word[word.size()-start-1]);
    reverse(word,start+1);
}

int main(){
    string str="Dhruv Jadoun";
    reverse(str,0);
    cout<<str;
}