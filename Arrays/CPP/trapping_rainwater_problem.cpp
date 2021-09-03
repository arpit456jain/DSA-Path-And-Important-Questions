/*
Input format:-
    first line takes the no. of test cases
    second line takes n - the no of elements
    third lines takes input of n space seperated elements

Testcases:-
    Input:-
    3
    6
    3 0 0 2 0 4 
    4
    7 4 0 9
    3 
    6 9 9
    Output:-
    10
    10 
    0
    
*/

#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int left=0,right=n-1;
        int leftmax=0,rightmax=0;
        int res=0;
        while(left<=right){

            if(arr[left]<=arr[right]){
                if(arr[left]>=leftmax) 
                    leftmax=arr[left];
                else 
                res+=leftmax-arr[left];
            left++;
            }
            else{
                if(arr[right]>=rightmax)
                    rightmax=arr[right];
                else 
                    res+=rightmax-arr[right];
                right--;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends