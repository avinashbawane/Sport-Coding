#include <iostream>
#include <vector>
using namespace std;
int global_max = -1;
vector <int> adj[10];
bool visited[10];

void dfs(int s,int *_mx)
{
    visited[s] = true;
    for(int i = 0; i < adj[s].size(); ++i)
    {
        if(visited[adj[s][i]] == false)
            dfs(adj[s][i],_mx++);
    }
}

void initialize()
{
    for(int i = 0; i < 10; ++i)
        visited[i] = false;
}

int main()
{
    int nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes;                       //Number of nodes
    cin >> edges;                       //Number of edges
    for(int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        //Undirected Graph
        adj[x].push_back(y);                   //Edge from vertex x to vertex y
        adj[y].push_back(x);                   //Edge from vertex y to vertex x
    }

    initialize();                           //Initialize all nodes as not visited

    int _mx = 0;
    for(int i = 1; i <= nodes; ++i)
    {
        _mx = 0;
        if(visited[i] == false)
        {
            dfs(i,&++_mx);
            if(_mx > global_max) global_max = _mx;
            connectedComponents++;
        }
    }
    cout << "Number of connected components: " << connectedComponents <<" joint vertices "<<global_max <<endl;
    return 0;
}
