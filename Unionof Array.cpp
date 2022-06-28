int doUnion(int a[], int n, int b[], int m)  {
        //code here
        /*int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]){
                    break;
                }
                else if(j==n-1){
                    c++;
                }
            }
        }
        //cout<<c;
        n+=c;
        return n;*/
        set<int> st;
        for(int i=0;i<n;i++)
            st.insert(a[i]);
        for(int i=0;i<m;i++)
            st.insert(b[i]);
        return st.size();
    }
