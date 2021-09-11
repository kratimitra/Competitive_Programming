class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        unordered_set<string> myset;
        if(bank.size()==0) 
            return -1;
        bool isPresent = false; 
        for(auto word: bank)
        {
            if(end.compare(word)==0)
                isPresent = true;
            myset.insert(word);    
        }
        if(isPresent==false)   
            return -1;
        
        queue<string> q;
        q.push(start);
        int depth = 0;
        
        while(!q.empty())
        {
            depth+=1;
            int lsize = q.size();   //No of elements at a level
            while(lsize--)
            {
                string curr = q.front();
                q.pop();
                for(int i=0;i<curr.length();++i)  
                {
                    string temp = curr;
                    for(char c='A';c<='Z';++c)  
                    {
                        temp[i] = c;
                        if(curr.compare(temp)==0)
                            continue;   
                        if(temp.compare(end)==0)
                            return depth; 
                        if(myset.find(temp)!=myset.end())
                        {
                            q.push(temp);
                            myset.erase(temp);
                        }
                    }
                }
            }
    }
        
        return -1;
    }
};
