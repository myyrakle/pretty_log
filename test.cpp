#include "include/pretty_log.h"

#include <iostream>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6};
    std::cout<<v<<std::endl;

    auto tu = std::make_tuple(1, "foo", true, 0.14);
    std::cout<<tu<<std::endl;

    std::map<std::string, int> m = {
        {"foo", 33}, {"bar", 1}, {"BOOM!!", 31}
    };
    std::cout<<m<<std::endl;
}
