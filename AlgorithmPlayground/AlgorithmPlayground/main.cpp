//
//  main.cpp
//  AlgorithmPlayground
//
//  Created by denny on 2021/02/19.
//

#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main(int argc, const char * argv[]) {
    
    return 0;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if(nums[i] + nums[j] == target) {
                std::vector<int> result = {i, j};
                return result;
            }
        }
    }
    
    std::vector<int> sampleResult = {0, 0};
    return sampleResult;
}
