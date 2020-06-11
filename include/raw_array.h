#ifndef __PRETTY_LOG_RAW_ARRAY__
#define __PRETTY_LOG_RAW_ARRAY__

#include <sstream>
#include <string>

template <class T, size_t Len>
std::string to_string(const T(&arr)[Len])
{
  std::ostringstream sout;
  
  sout<<"raw array [";
  
  size_t i = 0;
  
  if(i!=(Len-1))
  {
    sout<<arr[i];
    i++;
  }
  
  while(i!=Len)
  {
    sout<<", "<<arr[i];
    i++;
  }
  
  sout<<']';
  
  return sout.str();
}

#include <ostream>

template <class T, size_t Len>
std::ostream& operator<<(std::ostream& os, const T (&arr)[Len])
{
  os<<to_string(arr);
  
  return os;
}

#endif
