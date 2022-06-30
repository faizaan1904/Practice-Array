 int maxProfit(vector<int>& prices) {
        int max=0,min=INT_MAX;
        int n=prices.size();
        /*for(int i =0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                
                int p=prices[j]-prices[i];
                if(p>max){
                    max=p;
                }
            }
                      
        }*/
        for(int i=0;i<n;i++){
            if(prices[i]<min){
                min=prices[i];
                
            }
            else if(prices[i]-min>max ){
                max=prices[i]-min;
            }
        }
        return max;
    }
