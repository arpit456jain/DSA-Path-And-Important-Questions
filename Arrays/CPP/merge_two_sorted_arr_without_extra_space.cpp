// Merge two sorted array without extra space

/*
Input format:-
    first line takes the no. of test cases
    second line takes n & m - the no of elements in arr1 and arr 2
    third lines takes input of n space seperated elements
    fourth lines takes input of m space seperated elements

Testcases:-
    Input:-
    1
    5 6 
    1 2 5 8 9
    3 4 5 6 6 9
    Output:-
    1 2 3 4 5 5 6 6 8 9 9
*/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	   // logic is very simple
	   // move all smaller elements in arr1
	   // and larger in arr2
	   // finally sort the array
	    int j=0, i=n-1;
	    while(j < m && i > -1 && arr2[j] < arr1[i])
            	swap(arr2[j++],arr1[i--]);
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
	    }
	
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends
