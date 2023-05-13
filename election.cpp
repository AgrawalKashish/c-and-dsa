#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
string findwinner(string arr[], int n){
    unordered_map<string, int> m;
    for(int i=0;i<n; i++){
        m[arr[i]]++;
    }
    int max_freq=0;
    string winner;
    for(auto x: m){
        if(x.second> max_freq){
            max_freq=x.second;
            winner= x.first;
        }
        else if(x.second==max_freq && x.first<winner){
            winner=x.first;
        } 
    }

    return winner;
}
int main(){
    string s[]={"arftys","arftys","hhhh","hhhh","hhhh", "xyz","xyz","xyz", "asd","asd","asd"};
    cout<<findwinner(s,11);
return 0;
}