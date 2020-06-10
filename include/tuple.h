#ifndef __PRETTY_LOG_TUPLE__
#define __PRETTY_LOG_TUPLE__

#include <ostream>

#include <tuple>
template<std::size_t I = 0, class... T>
static typename std::enable_if<I == sizeof...(T), void>::type
  __print_tuples(const std::tuple<T...>& t)
{ }

template<std::size_t I = 0, class... T>
static typename std::enable_if<I < sizeof...(T), void>::type
  __print_tuples(const std::tuple<T...>& t)
{
  if(I!=0)
  {
    std::cout<<", ";
  }
    
  std::cout << std::get<I>(t);
  __print_tuples<I+1, T...>(t);
}


template <class ...T>
std::ostream& operator<<(std::ostream& os, const std::tuple<T...>& t)
{
  std::cout<<"tuple (";
  __print_tuples(t);
  std::cout<<")";
  
  return os;
}

#endif
