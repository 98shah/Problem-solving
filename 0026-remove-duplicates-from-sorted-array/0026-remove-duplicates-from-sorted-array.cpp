class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int flag = v[0];
        int k = 1;
        int size = v.size();
        
        int index = 1;
        while(size > index){
            if( flag != v[index] ){
                v[k] = v[index];
                k++;
                flag = v[index];
                
            }
            index++;
        }
        
        return k;
    }
};