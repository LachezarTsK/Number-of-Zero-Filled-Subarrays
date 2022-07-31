
#include <vector>
using namespace std;

class Solution {
    
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int index = 0;
        long long zeroFilledSubarrays = 0;

        while (index < nums.size()) {
            long countConsecutiveZeros = 0;
            while (index < nums.size() && nums[index++] == 0) {
                ++countConsecutiveZeros;
            }
            //sum of all elements of arithmetic progression with first member '1' and step of increase '1'.
            zeroFilledSubarrays += (1 + countConsecutiveZeros) * countConsecutiveZeros / 2;
        }
        return zeroFilledSubarrays;
    }
};
