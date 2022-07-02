string isSubset(int a1[], int a2[], int n, int m) {
    int c=0;
    set<int> s1,s2;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        s1.insert(a1[i]);
    }
    for(int i=0;i<m;i++){
        s2.insert(a2[i]);
    }
    for(auto it=s1.begin();it!=s1.end();it++)
        mp[*(it)]++;
    for(auto it=s2.begin();it!=s2.end();it++)
        mp[*(it)]++;
    for(auto it:mp){
        if(it.second==2)
            c++;
    }
    if(c==m)
        return "Yes";
    else
        return "No";
}
