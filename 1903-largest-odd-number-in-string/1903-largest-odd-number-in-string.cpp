class Solution {
public:
    string largestOddNumber(string num) {
        int idx = -1;
        string ans = "";
        for(int i = 0 ; i < num.size(); i++){
            if(int(num[i]) % 2 != 0 ){
                idx = i;
            }
        }

        if(idx >= 0){
            return num.substr(0,idx+1);
        }
        return "";
    }
};