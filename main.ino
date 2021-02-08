#define temp_pin A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float temp = read_temperature();
  Serial.println(temp);

  delay(30000);
}

float read_temperature()
{
	int value = analogRead(temp_pin);
  // covert value to degrees
  loat temp = (value * 5.0 / 1024.0 - 0.5) * 100.0;
  return (temp);
}
