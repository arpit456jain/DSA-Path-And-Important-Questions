/*
Input format:-
    first line takes the no. of test cases
    second line takes n - the no of query 
    third lines takes input of k space seperated elements

Testcases:-
    Input :-
        2
        1
        6
        2
        6 10
    Output :-
        1
        1
        2
    Explanation:-
        for 6 there is only 4 which have exactly three divisors
        for 10 there are 4 and 9 only with exactly three divisors
*/
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    int m = 1000001;

    void seive(vector<long long>&isprime,vector<long long>&primes){
     
        isprime[0] = 0;
        isprime[1] = 0;
        
        for(int i = 2; i <= sqrt(m); i++){
            
            if(isprime[i]){
                for(int j = 2; j*i <= m; j++){
                    isprime[j*i] = 0;
                }
            }
        }
        int count = 0;
        for(int i = 2; i <= m; i++){
            
            if(isprime[i])
            count++;
            
            primes[i] = count;
        }
    }
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        
        vector<long long>isprime(1000001,1);
        vector<long long>primes(1000001,0);
        
        seive(isprime,primes);
        
        vector<int>v;
        for(int i = 0; i < q; i++){
            int p = primes[int(sqrt(query[i]))];
            v.push_back(p);
        }
        
        return v;
    }
};

int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}  