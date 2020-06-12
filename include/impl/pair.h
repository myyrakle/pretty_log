#ifndef __PRETTY_LOG_PAIR__
#define __PRETTY_LOG_PAIR__

#include <ostream>
#include <sstream>
#include <string>
#include <utility>

template <class T1, class T2>
std::string to_string(const std::pair<T1, T2>& p)
{
  std::ostringstream sout;
  
  sout<<"pair ("<<p.first<<", "<<p.second<<")";
  
  return sout.str();
}

template <class T1, class T2>
std::ostream& operator<<(std::ostream& os, const std::pair<T1, T2>& p)
{
  os<<to_string(p);
  
  return os;
}

#endif
