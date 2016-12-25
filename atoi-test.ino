
long a2float(char* char_array, int len) {
  Serial.print(F("a2float("));
  for (int n=0; n<len; n++) { Serial.print(char_array[n]); }
  Serial.print(F(","));
  Serial.print(len);
  Serial.println(F(")"));
  
  float res = 0;
  int i=0;
  int j=len-1;

  char letter = char_array[i];
  Serial.print("letter: "); Serial.println(letter);
  
  if (NULL==letter) return NULL;

  while (i<len) {
    Serial.println(F(""));
    
    Serial.print("i,j: "); Serial.print(i); Serial.print(","); Serial.println(j);

    Serial.print("letter: "); Serial.println(letter);
    
    char* letter_ptr = new char(letter);
    Serial.print("letter_ptr: "); Serial.println(*letter_ptr);
    
    int num = atoi(letter_ptr);
    Serial.print("num: "); Serial.println(num);
    
    float decimal = pow(10,j);
    Serial.print("decimal: "); Serial.println(decimal);
    
    float num_piece = num * decimal;
    Serial.print("num_piece: "); Serial.println(num_piece);

    res += num_piece;
    Serial.print("res: "); Serial.println(res);

    delete letter_ptr;

    i++;
    j--;
    
    char letter = char_array[i];
    Serial.print("letter: "); Serial.println(letter);

    if (NULL==letter) {
      Serial.println(F("NULL characer reached"));
      break;
    }
  }

  return res;
}

void setup() {
  Serial.begin(9600);
  Serial.println("=atoi-test=");

  //Serial.println( long(5000.0) );

  Serial.println( a2float("532",3) );
}
void loop() {
  // put your main code here, to run repeatedly:

}
