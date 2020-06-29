void setup() {

  Serial.begin(9600); // 以每秒9600位的速度初始化串行通信：
}


void loop() {

  int sensorValue = analogRead(A0); // 读取模拟引脚0上的输入

  float voltage = sensorValue * (5.0 / 1023.0); // 读取模拟引脚0上的输入将模拟读数（从0-1023）转换为电压（0-5V）

  Serial.println(voltage); // 输出读到的值
}
