#ifndef __PRETTY_LOG_PAIR__
#define __PRETTY_LOG_PAIR__

#include <ostream>

#include <utility>

template <class T1, class T2>
std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& p)
{
  std::cout<<"pair ("<<p.first<<", "
    <<p.second<<")";
  
  return os;
}

#endif
