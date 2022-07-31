
/**
 * @param {number[]} nums
 * @return {number}
 */
var zeroFilledSubarray = function (nums) {
    let index = 0;
    let zeroFilledSubarrays = 0;

    while (index < nums.length) {
        let countConsecutiveZeros = 0;
        while (index < nums.length && nums[index++] === 0) {
            ++countConsecutiveZeros;
        }
        //sum of all elements of arithmetic progression with first member '1' and step of increase '1'.
        zeroFilledSubarrays += Math.floor((1 + countConsecutiveZeros) * countConsecutiveZeros / 2);
    }
    return zeroFilledSubarrays;
};
