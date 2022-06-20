class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
       vector<int> adj[n];
        vector<int> visit(n, 0);
        //create the bi-directional graph
        for (int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> qu;
        qu.push(source);
        int node;
        //do BFS
        while (!qu.empty()){
            node = qu.front();
            qu.pop();
            if (destination == node)
                return true;
            if (visit[node] == 0){
                visit[node] = 1;
                for (int i=0;i<adj[node].size();i++){
                    if (visit[adj[node][i]] == 0)
                        qu.push(adj[node][i]);
                }
            }
        }
        return false;
    }
};