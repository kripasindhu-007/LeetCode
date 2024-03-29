class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int,int>>v;
        
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            v.push_back({nums[i],i});
        }
        
        sort(v.begin(),v.end());
        
        int beg=0,end=v.size()-1;
        
        while(beg<=end){
            if(v[beg].first+v[end].first==target){
                ans.push_back(v[beg].second);
                ans.push_back(v[end].second);
                return ans;
            }
            
            else if (v[beg].first+v[end].first>target){
                end--;
            }
            else{
                beg++;
            }
        }
        
        return {-1,-1};
        
    }
};