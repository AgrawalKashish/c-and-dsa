#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    map<string, int> mark;
    mark["KASH"] = 98;
    mark["ASH"]  = 80;
    mark["ISH"]  = 68;
    mark["MOSH"] = 88;
    

    mark.insert({"MINE", 90});
    map<string, int> :: iterator iter;
    for(iter= mark.begin(); iter!=mark.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<mark.max_size()<<endl;
    cout<<mark.empty();
return 0;
}
/*
MAP IS AN ASSOCIATIVE ARRAY
*/