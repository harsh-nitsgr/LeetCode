// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends


// User function Template for C
#define ll long long int
struct pair getMinMax(long long int arr[], long long int n) {
    
    ll Min=arr[0];
    ll Max=arr[0];
    
    for(ll i=0;i<n;i++){
        if(arr[i]<Min)Min=arr[i];
        if(arr[i]>Max)Max=arr[i];
    }
    struct pair p;
    p.min=Min;
    p.max=Max;
    return p;
    
}