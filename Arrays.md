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
 1A: Second Largest
```
int print2largest(int arr[], int n) {
	    int firmax=INT_MIN,secmax=INT_MIN;
	    for(int i=0;i<n;i++){
	           if(arr[i]>firmax){
	               secmax=firmax;
	               firmax=arr[i];
	           }
	           else if(arr[i]>secmax && arr[i]!=firmax){
	               secmax=arr[i];
	           }
	    }
	    if(secmax==INT_MIN){
	        return -1;
	    }
	    return secmax;
	    
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
4. Move Zeros:

    a. using another array O(n) extra space comp.

    b.using O(1) space
   ```
    void moveZeroes(vector<int>& a) {
        int i=0,j=0;
        while(i<a.size() && j< a.size()){
           if(a[i]==0 && a[j]!=0){
             a[i]=a[j];
                a[j]=0;
           }
            if(a[j]==0 &&  a[i]==0){
                j++;
                continue;
            }
            if(a[i]!=0){
                i++;
                j++;
                continue;
            }
           
        }
        return ;
    }  ```

5.MaxConsecutiveOnes
   ```
   int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxcount=0,i=0;
        while(i<nums.size())
        {
            if(nums[i]==1){
                count++;
            }
            else{
               
                maxcount = max(maxcount,count);
                count=0;
                }
                i++;
        }
         maxcount=max (maxcount,count);
       return maxcount; 
    }
```
6.Find the number that appears once, and other numbers twice:

a. can be done using map(O(nlogn) time)

b.using bit manipulation(O(n) time)
```
int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x=x^nums[i];
        }
        return x;
    }
```
7.find Union:

a.can be done using map(O(nlogn) time)

b.using 2 pointers linear approach

```
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {   
        vector<int>v;
        int i=0,j=0;
        if(arr1[i]<arr2[j]){
          v.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>=arr2[j]){
          v.push_back(arr2[j]);
          j++;

        }
        while(i<n && j<m ){
            if(arr1[i]<arr2[j]){
                if(v[v.size()-1]<arr1[i]){v.push_back(arr1[i]);}
                i++;
            }
            else if(arr1[i]>arr2[j] ){
                if(v[v.size()-1]<arr2[j]){v.push_back(arr2[j]);}
                j++;
            }
            else{
               if(v[v.size()-1]<arr1[i]){v.push_back(arr1[i]);}
                i++;j++;
            }
        }
        while(i<n){
            
          if(v[v.size()-1]<arr1[i]){v.push_back(arr1[i]);}
            i++;
        }
        while(j<m){
           if(v[v.size()-1]<arr2[j]){v.push_back(arr2[j]);}
            j++;
        }
        return v;
    }
```
