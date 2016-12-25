#include "A2Num.h"

void setup() {
  Serial.begin(9600);
  Serial.println("=a2float=");

  Serial.println( A2Num::ui("532",3) );
  Serial.println( A2Num::l("532",3) );
  Serial.println( A2Num::ul("532",3) );
}
void loop() {
  // put your main code here, to run repeatedly:

}
