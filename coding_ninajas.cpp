#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s= "Nitin is a good friend";
    int start=0;
	int end=0;
    int str= ' ';
	vector<string> ans;
	for(int i=0;i<s.length();i++){
		if(s[i] == ' '){
			end=i;
			for(int j=start;j<end;j++){
                str +=s[j];
            }
            // ans.push_back(str);
			start=i+1;
		}
	}
	for(int i=0;i<ans.size();i++){
		
	}
return 0;
}