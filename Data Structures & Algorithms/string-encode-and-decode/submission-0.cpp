class Solution {
public:

    string encode(vector<string>& strs) {
        string encode="";

        for(int i=0;i<strs.size();i++){
            encode+=to_string(strs[i].size())+"#"+strs[i];
        }

        return encode;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i=0;

        while(i<s.size()){
            int j=i;

            while(s[j]!='#'){
                j++;
            }

            int len=stoi(s.substr(i,j-i));
            j++;

            string str=s.substr(j,len);
            res.push_back(str);

            i=j+len;
        }

        return res;
    }
};
