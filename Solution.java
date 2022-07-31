
public class Solution {

    public long zeroFilledSubarray(int[] nums) {
        int index = 0;
        long zeroFilledSubarrays = 0;

        while (index < nums.length) {
            long countConsecutiveZeros = 0;
            while (index < nums.length && nums[index++] == 0) {
                ++countConsecutiveZeros;
            }
            //sum of all elements of arithmetic progression with first member '1' and step of increase '1'.
            zeroFilledSubarrays += (1 + countConsecutiveZeros) * countConsecutiveZeros / 2;
        }
        return zeroFilledSubarrays;
    }
}
