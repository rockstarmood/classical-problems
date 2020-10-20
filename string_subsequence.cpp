//Link : https://www.geeksforgeeks.org/find-number-times-string-occurs-given-string/

class Solution{
public:
    int count(string s1, string s2, int n, int m){
        if(m==0 || (m==0 and n==0)){
            return 1;
        }    
        
        if(n==0){
            return 0;
        }
        
    }
    
    int countWays(string s1, string s2){
        return count(s1,s2,s1.size(),s2.size());
    }
};
