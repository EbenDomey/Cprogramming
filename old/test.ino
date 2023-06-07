int signal=A0;
int value=0;
void setup()
{
  Serial.begin(9600);          // opens serial port, sets data rate to 9600 bps
  pinMode(signal,INPUT);
}
void loop()
{
  delay(500);
  value=analogRead(signal);
  Serial.println(value);
  delay(500);
