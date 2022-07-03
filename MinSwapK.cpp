class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
           int count=0;
       for(int i=0;i<n;i++){
           if(arr[i]<=k){
               count++;
           }
           
       }
       int requiredSwap=0;
       for(int i=0;i<count;i++){
           if(arr[i]>k){
               requiredSwap++;
           }
       }
       
       int ans=requiredSwap;
       
       for(int i=0, j=count; j<n;i++,j++){
           if(arr[i]>k){
               requiredSwap--;
           }
           if(arr[j]>k)
               {
                   requiredSwap++;
               }
           ans=min(ans,requiredSwap);    
       }
       return ans;
    }
};
