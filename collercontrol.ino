int c = A0;
int p;
int longDelayInSeconds;

void setup() {
  // put your setup code here, to run once:
  pinMode(c, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  p=0;
  digitalWrite(c, LOW);
  digitalWrite(13, HIGH);
  //delay(10000);
  longDelayInSeconds = 5; //time for switch to be 'on' in sec
  // longDelayInSeconds = 60 * x ; for 'x' minutes
  while (p < longDelayInSeconds) {
    delay(1000);
    p++;
  }
  digitalWrite(c, HIGH);
  digitalWrite(13, LOW);
  //delay(10000);
  p = 0;
  longDelayInSeconds = 5; //time for switch to be 'off' in sec
  // longDelayInSeconds = 60 * x ; for x minutes
  while (p < longDelayInSeconds) {
    delay(1000);
    p++;
  }
}
