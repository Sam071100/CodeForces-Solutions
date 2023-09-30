#include <bits/stdc++.h>
using namespace std;

class Graph
{
    public:
     map<int, bool>visited;
     map<int, list<int>>adj;

     void addEdge(int v, int w);
     void dfs(int v);
     void dfsUtil();

};

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void Graph::dfs(int v)
{
    visited[v] = true;
    cout <<v<<" ";

    list<int>::iterator itr;

    for ( itr = adj[v].begin(); itr != adj[v].end(); itr++)
    {
        if (!visited[*itr])
        {
            dfs(*itr);
        }
    }
}

void Graph::dfsUtil()
{
    for (auto i : adj)
    {
        if (!visited[i.first])
        {
            dfs(i.first);
        }
    }
}

int main()
{
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

    cout <<"DFS Traversal starting from node 0: ";
    g.dfsUtil();
    return 0;
}
