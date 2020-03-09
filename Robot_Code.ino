
int FrontRight = 16;
int FrontLeft = 5;
int BackRight = 4;
int BackLeft = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(BackLeft, OUTPUT);
  pinMode(BackRight, OUTPUT);
  pinMode(FrontLeft, OUTPUT);
  pinMode(FrontRight, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(FrontLeft, HIGH); // turn the motors on
  digitalWrite(FrontRight, HIGH);
  digitalWrite(BackLeft, HIGH); 
  digitalWrite(BackRight, HIGH);
  delay(1000);
  digitalWrite(FrontLeft, LOW); // turn the motors ofF
  digitalWrite(FrontRight, LOW);
  digitalWrite(BackLeft, LOW); 
  digitalWrite(BackRight, LOW);
  delay(1000);
  digitalWrite(FrontLeft, HIGH); // turn the robot right
  digitalWrite(FrontRight, LOW);
  digitalWrite(BackLeft, HIGH); 
  digitalWrite(BackRight, LOW);
  delay(1000);
  digitalWrite(FrontLeft, LOW); // turn the robot LEFT
  digitalWrite(FrontRight, HIGH);
  digitalWrite(BackLeft, LOW); 
  digitalWrite(BackRight, HIGH);
  delay(1000);
  digitalWrite(FrontLeft, HIGH); // make it go forwards
  digitalWrite(FrontRight, HIGH);
  digitalWrite(BackLeft, HIGH); 
  digitalWrite(BackRight, HIGH);
  delay(1000);
}
