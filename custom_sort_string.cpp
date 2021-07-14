class Solution {
public:
    string customSortString(string order, string str) {
        vector<int> cnt(26,0);
        string res="";
        
        for(auto& c:str) 
            cnt[c-'a']++;
        for(auto& c:order)
        {
            
            res.append(cnt[c-'a'],c);
            cnt[c-'a']=0;    
        }
        for(int i=0;i<26;i++)
            if(cnt[i]>0)
                res.append(cnt[i],'a'+i);
        return res;
    }
};
