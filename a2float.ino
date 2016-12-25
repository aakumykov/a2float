unsigned long a2ul(char* char_array, int len, bool debug=false) {
  if (debug) {
    Serial.print(F("a2ul("));
    for (int n=0; n<len; n++) { Serial.print(char_array[n]); }
    Serial.print(F(", "));
    Serial.print(len);
    Serial.println(F(")"));
  }
  
  float res = 0;
  
  for (int i=0, j=len-1; i<len; i++, j--) {
    if(debug){
      Serial.println(F(""));
      Serial.print(F("i,j: ")); Serial.print(i); Serial.print(F(",")); Serial.println(j);
    }
    
    char* letter = new char(char_array[i]);
    int num = atoi(letter);
    if(debug){
      Serial.print(F("num: ")); Serial.println(num);
    }
    
    float decimal = pow(10,j);
    if(debug){
      Serial.print(F("decimal: ")); Serial.println(decimal);
    }
    
    float num_piece = num * decimal;
    if(debug){
      Serial.print(F("num_piece: ")); Serial.println(num_piece);
    }

    res += num_piece;
    if(debug){
      Serial.print(F("res: ")); Serial.println(res);
    }
  }

  if (debug) {
    Serial.print(F("result to return: "));
    Serial.println(res);
  }

  // +1 это костыль для обхода глюка
  if (res > 199) res += 1;
  
  return (unsigned long)(res);
}

void setup() {
  Serial.begin(9600);
  Serial.println("=a2float=");

  Serial.println( a2ul("0", 1) );
  Serial.println( a2ul("1", 1) );
  Serial.println( a2ul("135", 3) );

  Serial.println( a2ul("198", 3) );
  Serial.println( a2ul("199", 3) );
  Serial.println( a2ul("200", 3) );
  
  Serial.println( a2ul("32768", 5) );

}
void loop() {
  // put your main code here, to run repeatedly:

}
