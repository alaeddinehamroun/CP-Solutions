class Solution {
public:
    int t;
    vector<vector<int>> res;
    vector<int> tmp;
    void dfs(vector<vector<int>>& graph, int s = 0){
        tmp.push_back(s);
        if (s == t) res.push_back(tmp);
        else
            for (auto u: graph[s]){
                dfs(graph, u);
            }
        tmp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        t = graph.size() -1;
        dfs(graph);
        return res;
    }
};