 bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum=0;
        /*for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                s+=arr[j];
                if(s==0)
                    return true;
            }
            s=0;
        }*/
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0)
                return true;
            if(s.find(sum)!=s.end())
                return true;
            s.insert(sum);
        }
        
        return false;
    }
