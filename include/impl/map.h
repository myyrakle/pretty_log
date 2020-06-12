#ifndef __PRETTY_LOG_MAP__
#define __PRETTY_LOG_MAP__

#include <map>
#include <sstream>
#include <string>
#include <ostream>

template <class K, class V>
std::string to_string(const std::map<K, V>& m)
{
  std::ostringstream sout;
  
  sout<<"map { ";
  
  auto it = m.begin();
  
  if(it!=m.end())
  {
    sout<< it->first << ":" << it->second;
    it++;
  }
  
  while(it!=m.end())
  {
    sout<<", "<< it->first << ":" << it->second;
    it++;
  }
  
  sout<<" }";
  
  return sout.str();
}

template <class K, class V>
std::ostream& operator<<(std::ostream& os, const std::map<K, V>& m)
{
  os<<to_string(m);
  
  return os;
}



template <class K, class V>
std::string to_string(const std::multimap<K, V>& m)
{
  std::ostringstream sout;
  
  sout<<"multimap { ";
  
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
std::ostream& operator<<(std::ostream& os, const std::multimap<K, V>& m)
{
  os<<to_string(m);
  
  return os;
}

#endif
