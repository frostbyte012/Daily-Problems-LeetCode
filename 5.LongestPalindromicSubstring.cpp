class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        int st=0,end=0,len=0;
        for(int i=0;i<s.size();i++){
            int l=i,h=i;
            while(l>=0 && h<s.size() && s[l]==s[h]){
                if(h-l+1>len){
                    len=h-l+1;
                    st=l,end=h;
                }
                l--,h++;
            }
            l=i,h=i+1;
             while(l>=0 && h<s.size() && s[l]==s[h]){
                if(h-l+1>len){
                    len=h-l+1;
                    st=l,end=h;
                }
                 h++,l--;
            }
        }
        for(int i=st;i<=end;i++){
            ans+=s[i];
        }
        return ans;
    }
};