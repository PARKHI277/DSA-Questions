class Solution {
public:
    void merge(vector<int>& nums, int l, int h){
        int mid=l+(h-l)/2;
        
        int n1=mid-l+1;
        int n2=h-mid;
        
        int a[n1];
        int b[n2];

        int i = 0, j = 0, k = l;

        for(int i = 0; i < n1; i++) {
            a[i] = nums[i + l];
        }

        for(int j = 0; j < n2; j++) {
            b[j] = nums[mid + 1 + j];
        }

        while(i < n1 && j < n2) {
            if(a[i] <= b[j]) nums[k++] = a[i++];
            else nums[k++] = b[j++];
        }
        while(i < n1) 
            nums[k++] = a[i++];

        while(j < n2) 
            nums[k++] = b[j++];
        
    }
    
    void mergeSort(vector<int>& nums, int low, int high){
        if(low>=high)
            return;
        
        int mid=low+(high-low)/2;
        
        //sorting the left part of the array
        mergeSort(nums, low, mid);
        
        //sorting the right part of the array
        mergeSort(nums, mid+1, high);
        
        //lastly merge the sorted arrays
        merge(nums, low, high);
    }
    
    
    
    vector<int> sortArray(vector<int>& nums) {
        int low=0, high=nums.size()-1;
        mergeSort(nums, low, high);
        return nums;
    }
};