#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    s= "abcddcdba";
    int op=0;
    stack<char> m;
    m.push(s[0]);
    string temp ="";
while(!m.empty()){
for(int i=1;i< s.length();i++){
   if(s[i]==m.top()){
       m.pop();
       op++;
   }
   else{
     m.push(s[i]);
   }
}
 
}
// unordered_set<char> st;

//     st.insert(m.top());
//     m.pop();
// }
// op +=st.size();
cout<<op;
return 0;
}