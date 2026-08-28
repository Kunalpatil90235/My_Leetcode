class Solution {
public:
    

         bool fun(unordered_map<char,int>ran,unordered_map<char,int>mag){
            for(auto i:ran){
                char c=i.first;
                int fneed=i.second;
                int fmag=mag[c];
                if(fneed>fmag){
                return false;
            }
            }
            return true;
        }
        bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>ran;
        unordered_map<char,int>mag;
         
        for(int i=0;i<ransomNote.size();i++){
            ran[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mag[magazine[i]]++;
            
        }
        return fun(ran,mag);
      
      
    }
};