class Solution {
public:
// vector<vector<int>> dp;
// int rec=0;

    int change(int amount, vector<int>& coins) {
        
        int n=coins.size();
        // dp=vector<vector<int>>(n,vector<int>(n+1,-1));
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        return helper(amount,coins,n-1,dp);
    }
    int helper(int amount, vector<int>& coins, int index,vector<vector<int>>&dp){

            if(index==0 &&  amount%coins[index]==0) return 1;
            if(index==0) return 0;
            if(amount ==0 ) return 1;
            if(dp[index][amount]!=-1) return dp[index][amount];

            
            int nottakecoins= helper(amount,coins,index-1,dp);
            int takecoins=0;
            if(coins[index]<=amount) 
                takecoins=helper(amount-coins[index],coins,index,dp);
            return dp[index][amount] =takecoins+nottakecoins;




    }
};