class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        	int n = edges.size();
	vector<int> indeg(n + 2, 0);

	for(auto &v : edges) {
		++indeg[v[0]];
		++indeg[v[1]];
	}

	for(int i = 1; i < n + 2; ++i)
		if(indeg[i] == n)
			return i;

	return -1;
    }
};