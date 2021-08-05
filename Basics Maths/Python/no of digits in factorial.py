# User function Template for python3

def digitsInFactorial(N):
    num=fact(N)
    # print(num)
    k = math.floor(math.log10(num) + 1)
    # print(k)
    return k
import math

def fact(n):
    ans=1
    for i in range(2,n+1):
        ans = ans*i
    # print(ans)
    return ans
def main():
    T = int(input())

    while (T > 0):
        N = int(input())

        print(digitsInFactorial(N))

        T -= 1


if __name__ == "__main__":
    main()
# } Driver Code Ends