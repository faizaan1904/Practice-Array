vector<int> factorial(int N){
        // code here
        vector<int>ans;
        /*long long f=1;
        for(int i=2;i<=N;i++)
            f*=i;
        for(;f!=0;){
            ans.push_back(f%10);
            f/=10;
        }
        reverse(ans.begin(),ans.end());
       // cout<<ans[0];
        return ans;*/
        int i, j, carry=0, val;
        ans.emplace_back(N);
        for(i=N-1; i>1; i--){
            for(j=0; j<ans.size(); j++){
                val = ans[j]*i+carry;
                ans[j] = val%10;
                carry = val/10;
            }
            while(carry){
                ans.emplace_back(carry%10);
                carry /= 10;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
