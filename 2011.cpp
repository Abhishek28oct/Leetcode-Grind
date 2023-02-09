class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int c=0;
        string s[4] = {"++X","X++","--X","X--"}; 
        for(int i=0;i<operations.size();i++){
             if(operations[i]==s[0] || operations[i]==s[1])
            c++;
            else
            c--;
        }
        return c;
    }
};