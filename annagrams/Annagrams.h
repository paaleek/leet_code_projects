//
// Created by Hej on 7. 8. 2023.
//

#ifndef LEET_CODE_PRIJECTS_ANNAGRAMS_H
#define LEET_CODE_PRIJECTS_ANNAGRAMS_H
#include <vector>
#include <string>
#include <unordered_map>

using namespace::std;

class Annagrams {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count;

        for (char letter: s) {
            count[letter]++;
        }

        for (char letter: t) {
            count[letter]--;
        }

        for (auto val: count) {
            if (val.second != 0) {
                return false;
            }
        }
        return true;
    }
};


#endif //LEET_CODE_PRIJECTS_ANNAGRAMS_H
