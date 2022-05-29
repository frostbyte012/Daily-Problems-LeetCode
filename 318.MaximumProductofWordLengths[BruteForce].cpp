 #include<bits/stdc++.h>
using namespace std; 

int max(int a ,int b)
    {
        return a>b?a:b;
    }
    
bool isNotHavingCommonElements(string s, string t)
    {
        int i,j;
        string smalllen=s.length()<=t.length()?s:t,
        largelen=t.length()>=s.length()?t:s;
        
        for(i=0;i<smalllen.length();i++)
            {
               for(j=0;j<largelen.length();j++)
               {
                  if(smalllen[i]==largelen[j])
                            return 0;                   
               }
            }
            return 1;
     }


 int maxProduct(vector<string>& words) {
        
        int maxProd=0,i,k,j;
        
         for(i=0;i<words.size();i++)
         {
             for(j=i+1;j<words.size()-1;j++)
             {
                if(isNotHavingCommonElements(words[i],words[j]))
                 {
                     maxProd = max(maxProd,words[i].length()*words[j].length());
                 }
             }
         }

        return maxProd;
    }
    

    
    


    int main()
    {
        vector <string> strs = {"eae","ea","aaf","bda","fcf","dc","ac","ce","cefde","dabae"};
        cout<<maxProduct(strs)<<endl;
        return 1;
    }