int sensor = A1;

void setup(){
  Serial.begin(115200);
  }

void loop(){
  int sensor_result = analogRead(sensor);
  Serial.println(sensor_result);
  
  delay(200);
  }
