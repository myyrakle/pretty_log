#ifndef __PRETTY_LOG_DEQUE__
#define __PRETTY_LOG_DEQUE__

#include <deque>
#include <sstream>
#include <string>

template <class T>
std::string to_string(const std::deque<T>& deq)
{
  std::ostringstream sout;
  
  sout<<"deque [ ";
  
  auto it = deq.begin();
  
  if(it!=deq.end())
  {
    sout<<*it;;
    it++;
  }
  
  while(it!=deq.end())
  {
    sout<<", "<<*it;
    it++;
  }
  
  sout<<" ]";
  
  return sout.str();
}

#include <ostream>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::deque<T>& s)
{
  os<<to_string(s);
  
  return os;
}


#endif
