#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq={12,23,34,45,67,78,89,90,01};
    dq.push_front(5);
	dq.push_back(50);

	cout << dq.front() << " " << dq.back();
	auto it = dq.begin();
    	it++;

	dq.insert(it, 20);

	dq.pop_front();
	dq.pop_back();

	cout<<dq.size();
	it = dq.insert(it, 7);

	it = dq.insert(it, 2, 3);

	it = dq.erase(it + 1);

	cout << (*it) << endl;

	for(int i = 0; i < dq.size(); i++)
		cout<<dq[i]<<" ";

return 0;
}