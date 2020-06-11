#ifndef __PRETTY_LOG_LIST__
#define __PRETTY_LOG_LIST__

#include <list>
#include <sstream>
#include <string>

template <class T>
std::string to_string(const std::list<T>& li)
{
  std::ostringstream sout;
  
  sout<<"list [";
  
  auto it = li.begin();
  
  if(it!=li.end())
  {
    sout<<*it;
    it++;
  }
  
  while(it!=li.end())
  {
    sout<<", "<<*it;
    it++;
  }
  
  sout<<']';
  
  return sout.str();
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::list<T>& li)
{
  os<<to_string(li);
  
  return os;
}

#endif
