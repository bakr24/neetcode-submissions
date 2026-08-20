class Solution {
public:
    int maxScore(string s){
        int onesRight=0;
        for (char c:s){
            if (c=='1') {
                onesRight++;
            }
        }
        int zerosLeft = 0;
        int maxScore = 0;

        for (int i=0; i<s.length()-1; i++){
            if(s[i]=='0'){
                zerosLeft++;
            }else{
                onesRight--;
            }
            int score=zerosLeft+onesRight;
            maxScore=max(maxScore,score);
        }
        return maxScore;
    }
};