class Solution {
public:

    bool solution(int index, string num, int n, vector<int>&ans){
        if(index>=n && ans.size()>=3) return 1;
        // now i have to form number (all possible numbers)
        long long int val=0;
        for(int i=index;i<n;i++){

            val=val*10+(num[i]-'0');

            if(val>INT_MAX) break;
            if(num[index]=='0' && i>index) break;
            if(ans.size()>2 && val>(1LL*ans.back()+ans[ans.size()-2])) break;

            // when we will push inside the ans
            if(ans.size()<2 || val==(1LL*ans.back()+1LL*ans[ans.size()-2])){
                ans.push_back(val);

                // call for next
                if(solution(i+1,num,n,ans)){
                    return 1;
                }
                ans.pop_back();
            }
        }
        return 0;
    }

    
    vector<int> splitIntoFibonacci(string num) {
        int n=num.size();
        if(n<3) return {};
        vector<int>ans;
        solution(0,num,n,ans);
        return ans;
        
    }
};