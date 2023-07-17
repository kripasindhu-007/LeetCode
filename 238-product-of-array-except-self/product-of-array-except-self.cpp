class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int>preProd(size);
        vector<int>postProd(size);


        postProd[size-1]=nums[size-1];
        for(int i=size-2;i>=0;i--){
            postProd[i]=postProd[i+1]*nums[i];
        }
        
        preProd[0]=nums[0];
        for(int i=1;i<size;i++){
            preProd[i]=preProd[i-1]*nums[i];
        }

        vector<int>ans(size);
        ans[0]=postProd[1];
        ans[size-1]=preProd[size-2];

        for(int i=1;i<size-1;i++){
            ans[i]=preProd[i-1]*postProd[i+1];
        }

        return ans;
        
    }
};