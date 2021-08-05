// Given an integer N. Find the number of digits that appear in its factorial.
// Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:


    int digitsInFactorial(int n)
    {
        // code here
        if (n<0)
        return 1;
        else if (n<=1)
        return 1;
        else{

       double x = ((n * log10(n / M_E) +
                 log10(2 * M_PI * n) /
                 2.0));
 
        return floor(x)+1;
        }
    }
};

// { Driver Code Starts.

int main()
{
    int T;

    //taking testcases
    cin >> T;
    while (T--)
    {
        int N;

        //taking N
        cin >> N;
        Solution ob;
        //calling method digitsInFactorial()
        cout << ob.digitsInFactorial(N) << endl;
    }
    return 0;
}
// } Driver Code Ends