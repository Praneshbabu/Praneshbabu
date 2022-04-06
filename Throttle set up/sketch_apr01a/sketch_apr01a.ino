

float throttle_input=2;
double input;
double throttleinp_percentage;


void setup() {
  // put your setup code here, to run once:
pinMode(throttle_input, INPUT);
Serial.begin(9600);
}

void loop() {
  
  input=pulseIn(throttle_input,HIGH);
  delay(500);

  
  //throttleinp_percentage=((input)/19.86);
  throttleinp_percentage=((input - 985)/985)*100;
  Serial.println(throttleinp_percentage);
//  Serial.println(input);
  Serial.print("Throttle Percentage is - ");
  
  

}
