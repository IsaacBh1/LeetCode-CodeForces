#include<algorithm>
#include<vector>
using namespace std ; 
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int mincln = 0 , minln=0 , maxcln = matrix[0].size() -1  , maxln = matrix.size() -1 ; 
        bool end = false ; 
        vector<int> arr ; 
        while (!end)
        {
            end = true ; 
            for (int i = mincln; i <= maxcln; i++)
            {
                arr.push_back(matrix[minln][i]) ; 
                end = false ; 
            }
            minln ++ ; 
            for (int i = minln; i <= maxln; i++)
            {
                arr.push_back(matrix[i][maxcln]) ; 
                end = false ; 

            }
            maxcln -- ; 

           for (int i = maxcln; i >= mincln; i--)
           {
                arr.push_back(matrix[maxln][i]) ; 
                end = false ; 
           }
           maxln -- ; 

           for (int i = maxln; i >= minln; i--)
           {
                arr.push_back(matrix[i][mincln]) ; 
                end = false ; 
           }
           mincln ++ ; 
        }
        return arr ; 
    }
};