class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int len=s.length();
        vector<string>ans;

        for(int i=0;i<=len-k;i++){
            string st="";
            int counter=0;
            for(int j=i;j<len;j++){
                
                st+=s[j];
                if(s[j]=='1') counter++;
                if(counter==k) break;
                
            }
            if(counter==k){
                ans.push_back(st);
                
                }
            
        }
        if(ans.size()==0){
            return "";
        }
        int mini=len;
        for(auto &it:ans){
            int temp=it.size();
            mini=min(temp,mini);
        }
        sort(ans.begin(),ans.end());
         for(auto &it:ans){
             if(it.size()==mini) return it;
         }

         return ans[0];
        
    }
};