#include <iostream>

class Singleton
{
public:
   Singleton(const Singleton&) = delete;
   Singleton& operator=(const Singleton&) = delete;
   Singleton(Singleton&&) = delete;
   Singleton& operator(Singleton&&) = delete;
   static S& getInstance()
   {
       static S instance;
       return instance;
   }
private:
   Singleton()=default;
};
