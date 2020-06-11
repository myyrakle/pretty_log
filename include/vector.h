#ifndef __PRETTY_LOG_VECTOR__

#include <sstream>
#include <string>
#include <vector>

template <class T>
std::string to_string(const std::vector<T>& vec)
{
  std::ostringstream sout;
  
  sout<<"vector [";
  
  auto it = vec.begin();
  
  if(it!=vec.end())
  {
    sout<<*it;
    it++;
  }
  
  while(it!=vec.end())
  {
    sout<<", "<<*it;
    it++;
  }
  
  sout<<']';
  
  return sout.str();
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
  os<<to_string(vec);
  
  return os;
}
