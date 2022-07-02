  bool find3Numbers(int A[], int n, int X)
    /*{
        //Your Code Here
         sort(A,A+n);
         int f=0;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            f=X-A[i]-A[j];
           // cout<<f;
            for(int k=j+1;k<n;k++){
                if(f==A[k]){
                    return true;
                }
                
            }
            //bool temp=find(A.begin(),A.end(),X-sum)!=A.end()
            
        }
    }
    return false;
    }*/
     {
       unordered_map<int,int> m;
       
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(m[X-A[i]-A[j]]!=0){
                   return true;
               }
           }
           m[A[i]]++;
       }
       
       return false;
   }
