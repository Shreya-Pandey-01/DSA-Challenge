class Solution {
private:
    void solve(int k, int n,vector<vector<int>> &ans,vector<int> output,int num,int sum){
        //base case
        if(k == 0){
            sort(output.begin(),output.end());

            if(sum == n && (find(ans.begin(),ans.end(),output) == ans.end())){
                ans.push_back(output);
            }
            return ;
        }

        for(int i = num ; i <= 9 ; i++){
            output.push_back(i);
            solve(k-1,n,ans,output,i + 1,sum + i);
            output.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> output ;
        int num = 1;
        int sum = 0;

        solve(k,n,ans,output,num,sum);

        return ans;
    }
};
