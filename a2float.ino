unsigned long a2ul(char* char_array, int len) {
//float a2ul(char* char_array, int len) {
  Serial.print(F("a2ul("));
  for (int n=0; n<len; n++) { Serial.print(char_array[n]); }
  Serial.print(F(", "));
  Serial.print(len);
  Serial.println(F(")"));
  
  float res = 0;
  
  for (int i=0, j=len-1; i<len; i++, j--) {
    Serial.println(F(""));
    Serial.print(F("i,j: ")); Serial.print(i); Serial.print(","); Serial.println(j);
    
    char* letter = new char(char_array[i]);
    int num = atoi(letter);
    Serial.print("num: "); Serial.println(num);
    
    float decimal = pow(10,j);
    Serial.print("decimal: "); Serial.println(decimal);
    
    float num_piece = num * decimal;
    Serial.print("num_piece: "); Serial.println(num_piece);

    res += num_piece;
    Serial.print("res: "); Serial.println(res);
  }

  Serial.print(F("result to return: "));
  Serial.println(res);
  
  return (unsigned long)(res);
//  return res;
}

unsigned long a2ul_short(char* char_array, int len) {
  float res = 0;
  for (int i=0, j=len-1; i<len; i++, j--) {
    char* letter = new char(char_array[i]);
    res += atoi(letter) * pow(10,j);
  }
  return (unsigned long)(res);
}

unsigned long qwerty(float a) {
  return (unsigned long)(a);
}

void setup() {
  Serial.begin(9600);
  Serial.println("=a2float=");

  float a = a2ul("32711", 5);
  Serial.println(a);
  float b = 32711;
  Serial.println( (unsigned long)(b) );
  Serial.println( qwerty(b) );
}
void loop() {
  // put your main code here, to run repeatedly:

}
