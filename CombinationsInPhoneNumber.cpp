class Solution {

private:
    void solve(string digits,vector<string> &ans,string output,vector<string> mapping,int index,int size){
        if(index >= size){
            ans.push_back(output);
            return;
        }

        string s = mapping[digits[index]-'0'];
        for(int i = 0 ; i < s.length() ; i++){
            output.push_back(s[i]);
            solve(digits,ans,output,mapping,index + 1,size);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string output = "";
        if(digits.size() == 0)
            return ans;
            
        vector<string> mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index = 0;

        solve(digits,ans,output,mapping,index,digits.size());
        sort(ans.begin(),ans.end());

        return ans;
    }
};
