WE are XORing all the numbers .Now ,XORing all the numbers would only the XOR of 2 special numbers appearing only once since XORing 
2 same numbers would cause the result to be 0 .
So basically ,we are XORing the numbers which appear only once. 
  
XORing 2 different numbers the output will not be 0  
  
  


```
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum=0;
        vector <int> res{0,0};
        for (int num:nums){
            sum^=num;
        }
        int lowbit=sum&(-sum);
        for (int num: nums){
            if (num&lowbit){
                res[0]^=num;
            }
            else 
                res[1]^=num;
        }
        return res;
        
        
    }
};
```
