# -*- coding: utf-8 -*-
"""RotateMatrix.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1LX-dZFuQCyBXDNVosTp0MHaZZxoc5T4I
"""

#Function to rotate matrix by 90 degree
def rotate(mat):
 
    # `N × N` matrix
    N = len(mat)
 
    # Transpose the matrix
    for i in range(N):
        for j in range(i):
            temp = mat[i][j]
            mat[i][j] = mat[j][i]
            mat[j][i] = temp
 
    # swap columns
    for i in range(N):
        for j in range(N // 2):
            temp = mat[i][j]
            mat[i][j] = mat[i][N - j - 1]
            mat[i][N - j - 1] = temp
 
 
if __name__ == '__main__':
 #Declaring matrix
    mat = [
        [1, 2, 3, 4],
        [5, 6, 7, 8],
        [9, 10, 11, 12],
        [13, 14, 15, 16]
    ]
 
    rotate(mat)

#printing matrix 
    for i in mat:
        print(i)

