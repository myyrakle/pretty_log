#ifndef __PRETTY_LOG_UNORDERED_MAP__
#define __PRETTY_LOG_UNORDERED_MAP__

#include <unordered_map>
#include <sstream>
#include <string>

template <class K, class V>
std::string to_string(const std::unordered_map<K, V>& m)
{
  std::ostringstream sout;
  
  sout<<"unordered_map { ";
  
  auto it = m.begin();
  
  if(it!=m.end())
  {
    sout<<it->first<<":"<<it->second;
    it++;
  }
  
  while(it!=m.end())
  {
    sout<<", "<<it->first<<":"<<it->second;
    it++;
  }
  
  sout<<" }";
  
  return sout.str();
}

#include <ostream>

template <class K, class V>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<K, V>& m)
{
  os<<to_string(m);
  
  return os;
}



template <class K, class V>
std::string to_string(const std::unordered_multimap<K, V>& m)
{
  std::ostringstream sout;
  
  sout<<"unordered_multimap { ";
  
  auto it = m.begin();
  
  if(it!=m.end())
  {
    sout<<it->first<<":"<<it->second;
    it++;
  }
  
  while(it!=m.end())
  {
    sout<<", "<<it->first<<":"<<it->second;
    it++;
  }
  
  sout<<" }";
  
  return sout.str();
}

#include <ostream>

template <class K, class V>
std::ostream& operator<<(std::ostream& os, const std::unordered_multimap<K, V>& m)
{
  os<<to_string(m);
  
  return os;
}

#endif
