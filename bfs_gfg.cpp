#include <bits/stdc++.h>
using namespace std;
vector<int> res;
void BFSREC(int s,vector<vector<int>> graphs, vector<bool> visited){
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        res.push_back(u);
        q.pop();
        for (int neighbor : graphs[u]) {
        if (!visited[neighbor]) {
            visited[neighbor] = true;
            q.push(neighbor);
        }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges) {
  // Write your code here
  vector<bool> visited;
  for (int i = 0; i < vertex; i++){
      visited[i]=false;
  }
  vector<vector<int>> graph;
  for (int i = 0; i < edges.size(); i++) {
        pair<int, int> p=edges[i];
        graph[p.first].push_back(p.second);
        graph[p.second].push_back(p.first);
         }
  for (int i = 0; i < vertex; i++){
      if(visited[i]==false){
          BFSREC(i,graph,visited);
      }
  }
  vector<int> ans=res;
  res.clear();
  return ans;
}

int main() 
{ 
	vector<pair<int, int>> edges ={ {0,1}, {0,3}, {1,2},{2,3}};

	

	cout << "Following is Breadth First Traversal: "<< endl; 
	vector<int> copy=BFS(4,edges); 
    for(int i=0;i<copy.size();i++){
        cout<<copy[i];
    }
    vector<vector<int>> graph;
    for (int i = 0; i < edges.size(); i++) {
        pair<int, int> p=edges[i];
        graph[p.first].push_back(p.second);
        graph[p.second].push_back(p.first);
        cout<<graph[p.first][p.second];
         }
	return 0; 
} 
