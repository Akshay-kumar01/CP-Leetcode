class Solution(object):
    def setZeroes(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: None Do not return anything, modify matrix in-place instead.
        """
        row=[]
        col=[]
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[i])):
                if matrix[i][j]==0:
                    row.append(i)
                    col.append(j)
        for i in range(0,len(matrix)):
            for j in range(0,len(matrix[i])):
                if i in row or j in col:
                    matrix[i][j]=0