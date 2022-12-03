class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        // code here
        if(n==1)
        return true;
        sort(arr,arr+n);
        
        int d=arr[1]-arr[0];
        
        for(int i=2;i<n;i++){
            if(arr[i]-arr[i-1]!=d)
            return false;
        }
        return true;
        
    }

};