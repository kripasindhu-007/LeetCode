class Solution {
    string rev(string st){
        string temp="";
        int size=st.length()-1;
        while(size>=0){
            temp+=st[size];
            size--;
        }
        return temp;
    }
public:
    string finalString(string s) {
        string ans="";
        int size=s.length();
        for(int i=0;i<size;i++){
            if(s[i]!='i') ans+=s[i];
            else  ans=rev(ans);
        }
        return ans;
        
    }
};