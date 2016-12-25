
long a2long(char* char_array, int len) {
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

  return long(res);
}

void setup() {
  Serial.begin(9600);
  Serial.println("=atoi-test=");

  //Serial.println( long(5000.0) );

  Serial.println( a2long("532",3) );
}
void loop() {
  // put your main code here, to run repeatedly:

}
