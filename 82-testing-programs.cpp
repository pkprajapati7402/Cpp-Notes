// EXPERIMENT- 14
//  14. Create a Graph and perform DFS and BFS traversals.
//  INPUT
#include <iostream>
#include <list>
#include <queue>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V);
    void addEdge(int v, int w);
    void BFS(int start);
    void DFS(int start);
    void DFSUtil(int v, bool visited[]);
};
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w);
}
void Graph::BFS(int start)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty())
    {
        int vertex = q.front();
        cout << vertex << " ";
        q.pop();
        for (auto adjVertex : adj[vertex])
        {
            if (!visited[adjVertex])
            {
                visited[adjVertex] = true;
                q.push(adjVertex);
            }
        }
    }
}
void Graph::DFSUtil(int v, bool visited[])
{
    visited[v] = true;
    cout << v << " ";
    for (auto i : adj[v])
    {
        if (!visited[i])
        {
            DFSUtil(i, visited);
        }
    }
}
void Graph::DFS(int start)
{
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    DFSUtil(start, visited);
}
int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    cout << "BFS starting from vertex 0:\n";
    g.BFS(0);
    cout << "\nDFS starting from vertex 0:\n";
    g.DFS(0);
    return 0;
}