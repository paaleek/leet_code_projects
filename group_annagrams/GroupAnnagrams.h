//
// Created by Hej on 7. 8. 2023.
//

#ifndef LEET_CODE_PRIJECTS_GROUPANNAGRAMS_H
#define LEET_CODE_PRIJECTS_GROUPANNAGRAMS_H

#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;
class GroupAnnagrams {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        for (string& word: strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end());

            map[sortedWord].push_back(std::move(word));

        }
        for (auto& node: map) {
            result.push_back(std::move(node.second));
        }
        return result;
    }
};


#endif //LEET_CODE_PRIJECTS_GROUPANNAGRAMS_H
