	int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n=v.size();
		    int m=n/2;
		    int ans;
		    if(n%2==0){
		        ans=(v[m]+v[m-1])/2;
		    }
		    else{
		        ans=v[m];
		    }
		    return ans;
		}
};
