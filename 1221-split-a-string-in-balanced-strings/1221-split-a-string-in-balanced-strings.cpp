class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0;
        int countL = 0;
        int ans = 1;

        for(int i = 0 ; i < s.length(); i++){
            if(countR != 0 && countR == countL){
                ans++;
                countR = 0;
                countL = 0;
            }
            if(s[i] == 'R'){
                countR++;
            }else{
                countL++;
            }
        }
        return ans;
    }
};