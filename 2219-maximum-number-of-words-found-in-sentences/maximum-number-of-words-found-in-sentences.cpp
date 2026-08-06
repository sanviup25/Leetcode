class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int count = 1;
        int maxi = 0;
        for(int i=0; i<n; i++){
            string s = sentences[i];
            for(int j=0; j<s.size(); j++){
                char ch = s[j];
                if(ch == ' '){
                    count++;
                }
            }
            maxi = max(maxi,count);
            count = 1;
        }
        return maxi;
    }
};