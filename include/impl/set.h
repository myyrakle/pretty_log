#ifndef __PRETTY_LOG_SET__
#define __PRETTY_LOG_SET__

#include <set>
#include <sstream>
#include <string>

template <class T>
std::string to_string(const std::set<T>& s)
{
  std::ostringstream sout;
  
  sout<<"set { ";
  
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
std::ostream& operator<<(std::ostream& os, const std::set<T>& s)
{
  os<<to_string(s);
  
  return os;
}



template <class T>
std::string to_string(const std::multiset<T>& s)
{
  std::ostringstream sout;
  
  sout<<"multiset { ";
  
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
std::ostream& operator<<(std::ostream& os, const std::multiset<T>& s)
{
  os<<to_string(s);
  
  return os;
}

#endif
