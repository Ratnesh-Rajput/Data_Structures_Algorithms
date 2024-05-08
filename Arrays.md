1. Largest element:
    ```
    int largestElement(vector<int> &arr, int n) {
    
            int maxi=INT_MIN;
    
            for (int i=0;i<arr.size();i++) {
              if (arr[i] > maxi) {
              maxi=arr[i];
              }
            }
            return maxi;
    }
    ```
2. Check sorted array:
```
int isSorted(int n, vector<int> a) {
    
    
    for (int i=1;i<n;i++) {
      if (a[i - 1] > a[i]) {
          return 0;
      }
    }
    return 1;
}
```
=> 2A :Check if Array Is Sorted and Rotated:(Leetcode)
```
  bool check(vector<int>& a) {
        int count=0;
        for(int i=0;i<a.size()-1;i++){
        if(a[i]>a[i+1]){
            count++;
        }
        }
        if(count>1||(count==1&& a[0]<a[a.size()-1])){
            return false;
        }
        return true; 
    }

```
# 3.Remove duplicates from sorted array:
```
count the no. of changes between reccuring no.s, but can also be done using 2 pointer approach:
int removeDuplicates(vector<int> &arr, int n) {

		int count=1;
		for (int i=1;i<n;i++) {
                  if (arr[i-1]!=arr[i]) {
					  	count++;
                  }
                }
				return count;
}
```
=>3A: Leetcode
```
int removeDuplicates(vector<int>& nums) {
        int i=0,j=0,count=1;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                count++;
                i++ ;
            }
            else{
                j++;
            }
        }
        return count;
    }
```
