//
// Created by Hej on 9. 8. 2023.
//

#ifndef LEET_CODE_PRIJECTS_PRODUCT_H
#define LEET_CODE_PRIJECTS_PRODUCT_H
#include <vector>

using namespace std;
class Product {
    public:

        static vector<int> productExceptSelf(vector<int>& nums) {
            vector<int> result(nums.size());

            result.at(0) = 1;
            for (int i = 1; i < nums.size(); i++) {
                result.at(i) = result.at(i - 1) * nums.at(i - 1);
            }

            int currentMultiplier = 1;
            for (int i = nums.size() - 1; i >= 0 ; i--) {
                result.at(i) *= currentMultiplier;
                currentMultiplier *= nums.at(i);
            }

            return result;
        }

        //attempt to do it all in one go, didn't work :)
        static int getProductOfArray(vector<int>& nums) {
            if (nums.empty()) {
                return 1;
            }

            int last = nums.at(nums.size() - 1);
            nums.pop_back();
            return last * getProductOfArray(nums);

        }
};


#endif //LEET_CODE_PRIJECTS_PRODUCT_H
