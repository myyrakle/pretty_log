#include "include/pretty_log.h"

#include <iostream>

int main()
{
    std::vector<int> v = {1,2,3,4,5,6};
    std::cout<<v<<std::endl;

    double raw[] = {0.1, 3.14, 4.1, 9.002};
    std::cout<<raw<<std::endl;

    std::map<std::string, int> m = {
        {"foo", 33}, {"bar", 1}, {"BOOM!!", 31}
    };
    std::cout<<m<<std::endl;
}