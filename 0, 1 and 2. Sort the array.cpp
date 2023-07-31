class Solution {
public:
    void sortColors(vector<int>& nums) {
        int d=0,b=0,c = 0;
        for(int i=0; i<nums.size(); i++){
            switch (nums[i]) {
        case 0:
            d++;
            break;
        case 1:
            b++;
            break;
        case 2:
            c++;
            break;
        }
        }
        int i=0;
        while(d>0){
            nums[i++]=0;
            d--;
        }
        while(b>0){
            nums[i++]=1;
            b--;
        }
        while(c>0){
            nums[i++]=2;
            c--;
        }
    }
};
