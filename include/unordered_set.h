#ifndef __PRETTY_LOG_UNORDERED_SET__
#define __PRETTY_LOG_UNORDERED_SET__

#include <unordered_set>
#include <sstream>
#include <string>

template <class T>
std::string to_string(const std::unordered_set<T>& s)
{
  std::ostringstream sout;
  
  sout<<"unordered_set { ";
  
  auto it = s.begin();
  
  if(it!=s.end())
  {
    sout<<*it;;
    it++;
  }
  
  while(it!=s.end())
  {
    sout<<", "<<*it;
    it++;
  }
  
  sout<<" }";
  
  return sout.str();
}

#include <ostream>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::unordered_set<T>& s)
{
  os<<to_string(s);
  
  return os;
}



template <class T>
std::string to_string(const std::unordered_multiset<T>& s)
{
  std::ostringstream sout;
  
  sout<<"unordered_multimap { ";
  
  auto it = s.begin();
  
  if(it!=s.end())
  {
    sout<<*it;
    it++;
  }
  
  while(it!=s.end())
  {
    sout<<", "<<*it;
    it++;
  }
  
  sout<<" }";
  
  return sout.str();
}

#include <ostream>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::unordered_multiset<T>& s)
{
  os<<to_string(s);
  
  return os;
}

#endif
