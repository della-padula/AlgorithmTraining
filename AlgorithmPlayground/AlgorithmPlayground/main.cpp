//
//  main.cpp
//  AlgorithmPlayground
//
//  Created by denny on 2021/02/19.
//

#include <iostream>
#include <vector>
#include <algorithm>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// LeetCode : Reverse Integer
int reverse(int x) {
    int result = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        
        if (result > INT_MAX/10 || (result == INT_MAX / 10 && pop > 7)) {
            return 0;
        }
        
        if (result < INT_MIN/10 || (result == INT_MIN / 10 && pop < -8)) {
            return 0;
        }
        
        result = result * 10 + pop;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    std::cout << reverse(321) << std::endl;
    return 0;
}

// LeetCode : Add Two Numbers
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int sum = 0;
    ListNode *l3 = NULL;
    ListNode **node = &l3;
    
    while(l1 != NULL || l2 != NULL || sum > 0) {
        if(l1 != NULL) {
            sum += l1 -> val;
            l1 = l1 -> next;
        }
        if(l2 != NULL) {
            sum += l2 -> val;
            l2 = l2 -> next;
        }
        
        (*node) = new ListNode(sum % 10);
        sum /= 10;
        node = &((*node) -> next);
    }
    return l3;
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
