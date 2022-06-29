 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int c=0,k=0;
        //sort(intervals.rbegin(),intervals.rend(),sortcol);
        int l=intervals.size();
        vector<vector<int>> ans(0,vector(2,0));
        int i=0;
        for(;i<l-1;i++){
            if((intervals[i][1]>=intervals[i+1][0]&&intervals[i][0]<=intervals[i+1][0])||(intervals[i][0]>=intervals[i+1][0]&&intervals[i][0]<=intervals[i+1][1])){
                //ans[k][0]=intervals[i][0];
                //ans[k][1]=intervals[i+1][1];
                ans.push_back({min(intervals[i][0],intervals[i+1][0]),max(intervals[i][1],intervals[i+1][1])});
                c=1;
            }
            else{
                if(c==1){
                    k++;
                    c=0;
                }
                else if(c==0){
                   // ans[k][0]=intervals[i][0];
                   // ans[k][1]=intervals[i][1];
                    ans.push_back({intervals[i][0],intervals[i][1]});
                    k++;
                }
            }
            
        }
        if(c==0){
             //ans[k][0]=intervals[i][0];
            //ans[k][1]=intervals[i][1];
           ans.push_back({intervals[i][0],intervals[i][1]});
        }
        return ans;
    }
};
