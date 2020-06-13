#ifndef __PRETTY_LOG_EXCEPTION__
#define __PRETTY_LOG_EXCEPTION__

#include <sstream>
#include <string>
#include <ostream>
#include <exception>

std::string to_string(const std::exception& e)
{
  std::ostringstream sout;
  
  sout<<"exception: "<<e.what();
  
  return sout.str();
}

#include <ostream>

std::ostream& operator<<(std::ostream& os, const std::exception& e)
{
  os<<to_string(e);
  
  return os;
}

#endif
