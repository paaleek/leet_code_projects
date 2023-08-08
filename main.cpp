#include <iostream>
#include "group_annagrams/GroupAnnagrams.h"

int main() {
    GroupAnnagrams* groupAnnagrams = new GroupAnnagrams();
    vector<string> strs;
    strs.push_back("eat");
    strs.push_back("tea");
    strs.push_back("tan");
    strs.push_back("ate");
    strs.push_back("nat");
    strs.push_back("nat");
    strs.push_back("bat");
    groupAnnagrams->groupAnagrams(strs);
    return 0;
}
