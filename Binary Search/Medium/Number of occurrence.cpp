int soccur(vector<int>&arr,int n,int x){
    int start=0;
    int end=n-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==x){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<x){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int foccur(vector<int>&arr,int n,int x){
       int start=0;
       int end=n-1;
       int ans=-1;
       while(start<=end){
           int mid=start+(end-start)/2;
           if(arr[mid]==x){
               ans=mid;
               end=mid-1;
           }else if(arr[mid]<x){
               start=mid+1;
           }
           else{
               end=mid-1;
           }
       }
       return ans;
}
int count(vector<int>& arr, int n, int x) {
    int first=foccur(arr,n,x);
    if(first==-1)return 0;
    int last=soccur(arr,n,x);
    return (last-first)+1;
}


https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?leftPanelTabValue=PROBLEM
