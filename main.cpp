#include <iostream>
#include "group_annagrams/GroupAnnagrams.h"
#include "product_of_array_exept_self/Product.h"

void nothing(string s) {
    std::cout << s << endl;
}

int main() {
//    GroupAnnagrams* groupAnnagrams = new GroupAnnagrams();
//    vector<string> strs;
//    strs.push_back("eat");
//    strs.push_back("tea");
//    strs.push_back("tan");
//    strs.push_back("ate");
//    strs.push_back("nat");
//    strs.push_back("nat");
//    strs.push_back("bat");
//    groupAnnagrams->groupAnagrams(strs);

//    int a = 3;
//    int b = std::move(a);
//
//    std::cout<< "a: " << a << endl << "b: " << b << endl;
//
//    std::string one = "one";
//    std::string two = std::move(one);
//
//    std::cout<< "one: " << one << endl << "two: " << two;
//    std::cout<< "--------------------" << endl;
//

    std::vector<int> vec {1,2,3,4};

    Product::productExceptSelf(vec);

        return 0;
}
