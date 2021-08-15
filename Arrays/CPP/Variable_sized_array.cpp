#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;                                  //number of Arrays
    int q;                                  //number of Queries
    int tempValue;                          //would be used to store the input value of each element in inner vector
    
    //storing the number of arrays in 'n' and number of queries in 'q'
    std::cin >> n >> q;                    
    
    
    /*creation of vectors*/
    
    
    //creating 'n' number of vector<int>
    std::vector<std::vector<int>> a(n);
    

    int numberOfElements;                    //number of elements in each inner vector
    //for each vector
    for(int i = 0; i < n; i++){
        //store the number of elements desired
        std::cin >> numberOfElements;
        //runs 'numberOfElements times
        for(int j = 0; j < numberOfElements; j++){
            std::cin >> tempValue;
            a[i].push_back(tempValue);
        }
    }
    
    
    /*queries of vectors*/
    
    
    int outVector;                          //stores the queried outer vector index
    int inVector;                           //stores the queried inner vector index
    //runs 'q' times
    for(int i = 0; i < q; i++){
        std::cin >> outVector >> inVector;
        std::cout << a[outVector][inVector];
        std::cout << std::endl;
    }
  
    return 0;
}       