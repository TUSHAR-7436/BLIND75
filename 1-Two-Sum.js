/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var a = nums.length;
    for(var i=0;i<a;i++){
        for(var j=i+1;j<a;j++){
            if(nums[i]+nums[j]== target)
        return [i,j];
        }
    }
    return [];
};
