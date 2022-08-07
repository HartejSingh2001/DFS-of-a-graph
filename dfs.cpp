class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void fun(int node,vector<int>adj[],vector<int>&dfs,vector<int>&visited)
    {
        dfs.push_back(node); visited[node]=1;
        for(auto it:adj[node])
        {
            if(!visited[it])
            {
                fun(it,adj,dfs,visited);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>dfs;vector<int>visited(V+1,0);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                fun(i,adj,dfs,visited);
            }
        }
        return dfs;
    }
};
