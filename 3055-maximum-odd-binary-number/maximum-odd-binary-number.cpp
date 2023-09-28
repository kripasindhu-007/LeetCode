class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(auto it:s){
            if(it=='1') count++;
        }
        string ans="";
        int length=s.length();
        int temp=length;
        int count1=count;
        
        if(count==1){
            while(length-1>0){
                ans+='0';
                length--;
            }
            ans+='1';
            return ans;
        }
        else{
            while(count-1>0){
                ans+='1';
                count--;
            }
            while(temp-count1>0){
                ans+='0';
                temp--;
            }
            ans+='1';
            return ans;
        }
        return NULL;
        
    }
};