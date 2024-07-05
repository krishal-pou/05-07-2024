#include<bits/stdc++.h>
using namespace std;

bool isPallin(string word,int start){
    if(start>word.size()/2){
        return true;
    }

    if(word[start]!=word[word.size()-start-1]){
        return false;
    }
    else{
        return isPallin(word,start+1);
    }
}

int main(){
    string str="abcdqba";
    cout<<isPallin(str,0);
}