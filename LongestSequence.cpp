int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      /*set<int>s;
      vector<int>ans;
      int m=1,c=1,i,j,k=0;*/
      
      /*for(i=0;i<N;i++){
          s.insert(arr[i]);
      }
     
      for(auto it=s.begin();it!=s.end();it++){
          ans.push_back(*(it));
      }
      int n=ans.size();
      for(i=0;i<n-1;i++){
          c=1;
          for(j=i;j<n-1;j++){
              if(ans[j+1]-ans[j]==1){
                  c++;
              }
              else{
                  if(c>m){
                      m=c;
                  }
                   i=j;
                   break;
               }
          }
          if(j==n-1)
                return c;
      }
      return m;*/
      sort(arr,arr+N);
      int m=1,co=1;
      for(int i=1;i<N;i++){
          if(arr[i]==arr[i-1])
            continue;
          if(arr[i]==arr[i-1]+1)
            co++;
          else if(arr[i]!=arr[i-1]+1){
              m=max(m,co);
              co=1;
          }
      }
      return max(m,co);
    }
