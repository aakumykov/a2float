#include <Arduino.h>

#ifndef A2Num_h
#define A2Num_h

class A2Num
{
  public:
    static unsigned int ui(char* char_array, int len);
    static long l(char* char_array, int len);
    static unsigned long ul(char* char_array, int len);

  private:
    static float f(char* char_array, int len);
};

#endif
