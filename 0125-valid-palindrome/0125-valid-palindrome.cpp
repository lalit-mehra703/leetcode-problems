class Solution {
public:

    bool isAlphaNum(char ch){
        if(ch >= '0' && ch <= '9' || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
        int st = 0 , end = s.length()-1;

        while(st < end){
            if(!isAlphaNum(s[st])){ //check the st pointer is alphanum or not
                st++;
                continue;
            }

            if(!isAlphaNum(s[end])){  // check the end pointer is alphanum or not 
                end--;
                continue;
            }

            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++ , end--;
        }
        return true;
    }
};