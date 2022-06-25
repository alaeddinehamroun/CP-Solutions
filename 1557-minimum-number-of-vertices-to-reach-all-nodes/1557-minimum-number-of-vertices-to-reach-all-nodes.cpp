class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> reachable_nodes (n);
        vector<int> res;
        for (auto& e: edges) {   
            reachable_nodes[e[1]] = 1;
        }
        for (int j = 0; j<n; j++){
            if (!reachable_nodes[j])
                res.push_back(j);
        }
        return res;
    }
};