class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n2=nums2.size();
        for(int i=0;i<n2;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n1=nums1.size();
		    int m=n1/2;
		    double ans,div=2;
		    if(n1%2==0){
		        ans=(nums1[m]+nums1[m-1])/div;
		    }
		    else{
		        ans=nums1[m];
		    }
        return ans;
    }
};
