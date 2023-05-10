//Speed control with 2 motors and a potentiometer 

//motor 2
#define enA 9 // should be pwm pin(~)
#define in1 8
#define in2 7


////motor 2
#define in3 5
#define in4 4
#define enB 3 //pwm for motor 2

//potentiometer
#define pot A0
int potVal = 255;


void setup() {

  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // pinMode(pot, INPUT);
  Serial.begin(9600);

  //initialize off
//  digitalWrite(in1, LOW);
//  digitalWrite(in2, LOW);
//  digitalWrite(in3, LOW);
//  digitalWrite(in4, LOW);

}

void loop() {

  // potVal = analogRead(pot);
  Serial.println(potVal);

  // potVal = map(potVal, 0, 1023, 0, 255);
  
  analogWrite(enA, potVal);
  analogWrite(enB, potVal);

  //try changing these from HIGH to LOW. 
  
  digitalWrite(in1, HIGH); //motor 1
  digitalWrite(in2, LOW);  //motor 1
  digitalWrite(in3, LOW);  //motor 2
  digitalWrite(in4, HIGH); //motor 2

}