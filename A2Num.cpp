#include "A2Num.h"

/*  Не понимает десятичной части, 
float нужен лишь для математических операций. */
static float A2Num::f(char* char_array, int len) {
  float res = 0;
  
  for (int i=0, j=len-1; i<len; i++, j--) {
//    Serial.print("i,j: "); Serial.print(i); Serial.print(","); Serial.println(j);
    
    char* letter = new char(char_array[i]);
    int num = atoi(letter);
//    Serial.print("num: "); Serial.println(num);
    
    float decimal = pow(10,j);
//    Serial.print("decimal: "); Serial.println(decimal);
    
    float num_piece = num * decimal;
//    Serial.print("num_piece: "); Serial.println(num_piece);

    res += num_piece;
//    Serial.print("res: "); Serial.println(res);
  }

  return res;
}

static unsigned int A2Num::ui(char* char_array, int len) {
  float num = A2Num::f(char_array, len);
  return (unsigned int)(num);
}

static long A2Num::l(char* char_array, int len) {
  return long( A2Num::f(char_array, len) );
}

static unsigned long A2Num::ul(char* char_array, int len) {
  return (unsigned long)( A2Num::f(char_array, len) );
}

