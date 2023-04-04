//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfs(vector<int> adjl[],int v,int st,vector<int>&vis)
    {
        vis[st]=1;
        
        for(int i=0;i<adjl[st].size();i++)
        {
            int j=adjl[st][i];
            if(vis[j]==1) continue;
            dfs(adjl,v,j,vis);
        }
    }
   
  
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> adjl[V];
        
        for(int i=0;i<V;i++)
        {
            for(int j=0;j<V;j++)
            {
                if(adj[i][j] == 1 && i!=j)
                {
                    adjl[i].push_back(j);
                    adjl[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        int cnt=0;
        
        for(int i=0;i<V;i++)
        {
            if(vis[i]!=1) 
            {
                cnt++;
                dfs(adjl,V,i,vis);
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends