class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mapped ; 
        //map the occurance of elements of the arr into "mapped"  {number:frequency}
        for (int i = 0 ; i < arr.size(); i++){
            mapped[arr[i]]++;
        }
        set<int>st;
        for (auto j: mapped){
            if(st.count(j.second) > 0)
                return false;
            else st.insert(j.second);
        }
        return true;
    }
};