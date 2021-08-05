# {
# Driver Code Starts
# Initial Template for Python 3


import math

# } Driver Code Ends

# User function Template for python3
import math


def SieveOfEratosthenes(n):
    prime = [True for i in range(n + 1)]
    p = 2
    while (p * p <= n):
        if (prime[p] == True):
            for i in range(p * p, n + 1, p):
                prime[i] = False
        p += 1

    lst = []
    # Print all prime numbers
    for p in range(2, n + 1):
        if prime[p]:
            lst.append(p)
    return lst


def exactly3Divisors(N):
    n = int(math.sqrt(N))
    prime = SieveOfEratosthenes(n)
    # print(prime)
    return len(prime)


# {
# Driver Code Starts.
def main():
    T = int(input())

    while (T > 0):
        N = int(input())

        print(exactly3Divisors(N))

        T -= 1


if __name__ == "__main__":
    main()
# } Driver Code Ends