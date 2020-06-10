#ifndef __PRETTY_LOG_STL__
#define __PRETTY_LOG_STL__

#include <ostream>

#include <vector>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec)
{
  std::cout<<"vector [";
  
  auto it = vec.begin();
  std::cout<<*it;
  
  it++;
  
  while(it!=vec.end())
  {
    std::cout<<", "<<*it;
    it++;
  }
  
  std::cout<<']';
  
  return os;
}

#include <array>

template <class T>
std::ostream& operator<<(std::ostream& os, const std::list<T>& vec)
{
  std::cout<<"vector [";
  
  auto it = vec.begin();
  std::cout<<*it;
  
  it++;
  
  while(it!=vec.end())
  {
    std::cout<<", "<<*it;
    it++;
  }
  
  std::cout<<']';
  
  return os;
}

#endif
