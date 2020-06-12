#ifndef __PRETTY_LOG_ARRAY__
#define __PRETTY_LOG_ARRAY__

#include <array>

#include <sstream>
#include <string>

template <class T, size_t Len>
std::string to_string(const std::array<T, Len>& arr)
{
  std::ostringstream sout;
  
  sout<<"array [";
  
  auto it = arr.begin();
  
  if(it!=arr.end())
  {
    sout<<*it;
    it++;
  }
  
  while(it!=arr.end())
  {
    sout<<", "<<*it;
    it++;
  }
  
  sout<<']';
  
  return sout.str();
}

#include <ostream>

template <class T, size_t Len>
std::ostream& operator<<(std::ostream& os, const std::array<T, Len>& arr)
{
  os<<to_string(arr);
  
  return os;
}

#endif
