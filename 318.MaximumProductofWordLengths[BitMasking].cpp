#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector <string> words)
{
    int max_prod=0,bin=0,i,j,w_len=words.size();
    vector<int> word_bin(w_len,0);
    vector<int> word_len(w_len,0);
    string word;

    for(i=0;i<w_len;i++)
    {
        word=words[i];
        bin=0;
        for(j=0;j<word.length();j++)
            bin|= 1<<(word[j]-'a');
        word_bin[i]=bin;
        word_len[i]=word.length();
        
    }
    for(i=0;i<w_len-1;i++)
    {
        for(j=i+1;j<w_len;j++)
        {
            if((word_bin[i]&word_bin[j])==0)
               max_prod=max(max_prod,word_len[i]*word_len[j]);
        }
    }

return max_prod;

}

int main()
{

    vector<string> words={"abcw","baz","foo","bar","xtfn","abcdef"};
    // words={"a","ab","abc","d","cd","bcd","abcd"};
    // words={"a","aa","aaa","aaaa"};
    cout<<maxProduct(words)<<endl;
    return 1;

}