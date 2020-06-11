#ifndef __PRETTY_LOG_TUPLE__
#define __PRETTY_LOG_TUPLE__

#include <ostream>

#include <sstream>
#include <string>

#include <tuple>
#include <type_traits>

template<std::size_t I = 0, class... T>
static typename std::enable_if<I == sizeof...(T), void>::type
  __print_tuples(const std::tuple<T...>& t, std::ostringstream& sout))
{ }

template<std::size_t I = 0, class... T>
static typename std::enable_if<I < sizeof...(T), void>::type
  __print_tuples(const std::tuple<T...>& t, std::ostringstream& sout)
{
  if(I!=0)
  {
    sout<<", ";
  }
    
  sout << std::get<I>(t, sout);
  __print_tuples<I+1, T...>(t, sout);
}

template <class ...T>
std::string to_string(const std::tuple<T...>& t)
{
  std::ostringstream sout;

  sout<<"tuple (";
  __print_tuples(t, sout);
  sout<<")";
  
  return sout.str();
}

template <class ...T>
std::ostream& operator<<(std::ostream& os, const std::tuple<T...>& t)
{
  os<<to_string(t);
  
  return os;
}

#endif
