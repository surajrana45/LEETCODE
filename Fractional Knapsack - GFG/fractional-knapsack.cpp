//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    
    bool static cmp(Item a1,Item a2)
    {
        // int w1 = a1.weight;
        // int v1 = a1.value;
        // int w2 = a2.weight;
        // int v2 = a2.value;
        
        return (a1.value)/(double)(a1.weight)>=(a2.value)/(double)(a2.weight);
    }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,cmp);
        
        double sum=0.0;
        for(int i=0;i<n;i++)
        {
            if(W>=arr[i].weight)
            {
                sum+=arr[i].value;
                W-=arr[i].weight;
            }
            else{
                
               sum+=((arr[i].value)/(double)(arr[i].weight))*(double)W; 
               break;
            }
        }
        return sum;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends