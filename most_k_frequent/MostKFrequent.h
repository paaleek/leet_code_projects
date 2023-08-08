//
// Created by Hej on 8. 8. 2023.
//

#ifndef LEET_CODE_PRIJECTS_MOSTKFREQUENT_H
#define LEET_CODE_PRIJECTS_MOSTKFREQUENT_H
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

class MostKFrequent {
public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b) {
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;

        for (int number: nums) {
            counts[number]++;
        }

        vector<pair<int, int>> pairs;

        for (auto& iter: counts) {
            pairs.push_back(iter);
        }
        counts.erase(counts.begin()); //little benefit in memmory, and runs slightly slower

        sort(pairs.begin(), pairs.end(), cmp);

        vector<int> result;

        for (int i = 0; i < k; i++) {
            result.push_back(pairs.at(i).first);
        }

        return result;
    }
};


#endif //LEET_CODE_PRIJECTS_MOSTKFREQUENT_H
