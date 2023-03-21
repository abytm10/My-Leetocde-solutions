class Solution {
public:

    int charToNum(char &c){
        switch(c){
                case 'I' : return 1;
                case 'V' : return 5;
                case 'X' : return 10;
                case 'L' : return 50;
                case 'C' : return 100;
                case 'D' : return 500;
                case 'M' : return 1000; 
        }
        return 0;
    }

    int romanToInt(string s) {
        
        int num = 0;
        vector<int> nums;
        int i;

        for( i = 0;i < s.length(); i++){
            nums.push_back(charToNum(s[i]));
        }

        for( i = 0;i < nums.size(); i++){
            if(i+1 == nums.size()){
                num = num + nums[i];
                continue;
            }

            if(nums[i] < nums[i+1]){
                num = num - nums[i];
                continue;
            }
            num = num + nums[i];
            //cout << num <<endl;
        }

        return num;
    }

};
