class Solution {
public:
void solve(string digits , int index, string& temp,vector<string>& result, vector<string> values){
    if(index>=digits.size()){
        result.push_back(temp);
        return;
    }
    int digit=digits[index]-'0';
    string value=values[digit];
    for(int i=0;i<value.size();i++){
        temp.push_back(value[i]);
        solve(digits, index+1,temp, result,values);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        
        vector<string> result;
        if(digits.size()==0){
            return result;
        }
        string temp="";
        int index=0;
        vector<string> values={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits, index, temp, result, values);
        return result;
    }
};