//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
        // int cnt = 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if((arr[j] - arr[i]) % k == 0){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;
        long long ans = 0;
        vector<long long> m(k, 0);
        for(int i=0;i<n;i++) m[arr[i] % k]++;
        for(int i=0;i<k;i++) ans += ((m[i]-1)*m[i])/2;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends