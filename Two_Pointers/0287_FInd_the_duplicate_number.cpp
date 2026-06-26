class Solution {
public:
/* It can also done by using hash map concept with sc 0(n) but by using floyd's cycle algorithm
       it can be done with sc 0(1).*/
    int findDuplicate(vector<int>& nums) {
       int slow=nums[0];
       int fast=nums[0];
       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
       }
       while(slow!=fast);
        

        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

        return slow;

    }
};
