class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int srow  = 0 , erow = n-1;
        int scol = 0 , ecol = m-1;
        vector<int> ans;

        while( srow <= erow && scol <= ecol ){
            for(int i = scol ; i <= ecol ; i++){ // top boundry
                ans.push_back(matrix[srow][i]);
            }

            for(int i = srow+1 ; i <= erow ; i++){  // right boundry
                ans.push_back(matrix[i][ecol]);
            }

            for(int i = ecol-1 ; i >= scol ; i--){  // bottom boundry
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][i]);
            }

            for(int i  = erow-1 ;  i >= srow+1 ; i--){ // left boundry
                if(scol == ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }

            srow++, erow--;
            scol++, ecol--;
        }

        return ans;

    }
};