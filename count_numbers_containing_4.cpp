//Easy Solution from https://www.geeksforgeeks.org/count-numbers-from-1-to-n-that-have-4-as-a-a-digit/

class Solution {
  public:
    int countNumberswith4(int N) {
        // code here
        int cnt=0;
        
        for(int i=4;i<=N;i++){
            int x = i;
            while(x>0){
                if(x%10==4){
                    cnt++;
                    break;
                }
                x = x/10;
            }
        }
        
        return cnt;
    }
};
