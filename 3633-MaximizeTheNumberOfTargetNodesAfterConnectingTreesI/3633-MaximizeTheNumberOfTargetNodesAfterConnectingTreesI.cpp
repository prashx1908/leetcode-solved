// Last updated: 28/05/2025, 11:52:24
class Solution {
public:
    int bfs(unordered_map<int,vector<int>>&adj,int k,int N,int curr){
        vector<bool>visited(N,false);
        queue<pair<int,int>>q;

        q.push({curr,0});
        visited[curr]=true;
        int count=0;

        while(!q.empty()){
            int node=q.front().first;
            int distance=q.front().second;
            q.pop();

            if(distance>k) continue;
            count++;

            for(auto &ngbr:adj[node]){
                if(!visited[ngbr]){
                    visited[ngbr]=true;
                    q.push({ngbr,distance+1});
                }
            }
        }
        return count;
    }
    vector<int> findCount(vector<vector<int>>&edges,int k){
        int N=edges.size()+1;
        unordered_map<int,vector<int>>adj;

        for(auto &vec:edges){
            int u=vec[0];
            int v=vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int>ans(N);
        for(int i=0;i<N;i++){
            ans[i]=bfs(adj,k,N,i);
        }
        return ans;
    }
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        vector<int>ans1=findCount(edges1,k);
        vector<int>ans2=findCount(edges2,k-1);

        int maxTargetNodesCount=*max_element(begin(ans2),end(ans2));

        for(int i=0;i<ans1.size();i++){
            ans1[i]+=maxTargetNodesCount;
        }
        return ans1;
    }
};