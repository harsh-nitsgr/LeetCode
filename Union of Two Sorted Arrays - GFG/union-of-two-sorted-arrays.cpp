// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        
        vector<int>sarr;
        int temp=min(arr1[0],arr2[0]);
        sarr.push_back(temp);
        
        int c=0;
        int d=0;
        
        while(d<m and c<n){
            int m=(arr1[c]>arr2[d])?arr2[d++]:arr1[c++];
            if(sarr.back()!=m)
            sarr.push_back(m);
        }
        for(int i=c;i<n;i++)if(sarr.back()!=arr1[i])sarr.push_back(arr1[i]);
        for(int i=d;i<m;i++)if(sarr.back()!=arr2[i])sarr.push_back(arr2[i]);
        
        return sarr;
    }
};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends