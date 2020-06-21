#include <bits/stdc++.h>
#include <boost/preprocessor.hpp>

namespace hecomi
{

template <typename T>
struct Type
{
  static std::string Get()
  {
    return "undefined";
  }
};

#define HECOMI_GETTYPE_BASE_TYPE(type) \
  template <>                          \
  struct Type<type>                    \
  {                                    \
    static std::string Get()           \
    {                                  \
      return #type;                    \
    }                                  \
  };                                   \
  template <>                          \
  struct Type<type *>                  \
  {                                    \
    static std::string Get()           \
    {                                  \
      return #type "*";                \
    }                                  \
  };

HECOMI_GETTYPE_BASE_TYPE(int)
HECOMI_GETTYPE_BASE_TYPE(float)
HECOMI_GETTYPE_BASE_TYPE(std::string)

#define HECOMI_GETTYPE_CONTAINER_INNER_TYPE(z, n, max) \
  Type<BOOST_PP_CAT(T, n)>::Get()                      \
      BOOST_PP_IF(BOOST_PP_EQUAL(n, BOOST_PP_SUB(max, 1)), , +", " +)

#define HECOMI_GETTYPE_CONTAINER_TYPE(type, n)                                             \
  template <BOOST_PP_ENUM_PARAMS(n, typename T) /* typename T##n, ... */>                  \
  struct Type<type<BOOST_PP_ENUM_PARAMS(n, T) /* T##n, ... */>>                            \
  {                                                                                        \
    static std::string Get()                                                               \
    {                                                                                      \
      return #type "<" + BOOST_PP_REPEAT(n, HECOMI_GETTYPE_CONTAINER_INNER_TYPE, n) + ">"; \
    }                                                                                      \
  };

HECOMI_GETTYPE_CONTAINER_TYPE(std::vector, 2)
HECOMI_GETTYPE_CONTAINER_TYPE(std::allocator, 1)

template <typename T>
std::string GetTypeName(const T &x)
{
  return Type<T>::Get();
}

} // namespace hecomi

int main()
{
  std::vector<int> v;
  std::cout << hecomi::GetTypeName(v) << std::endl;
  return 0;
}