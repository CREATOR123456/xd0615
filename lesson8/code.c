void setup() {

  Serial.begin(9600); // ��ÿ��9600λ���ٶȳ�ʼ������ͨ�ţ�
}


void loop() {

  int sensorValue = analogRead(A0); // ��ȡģ������0�ϵ�����

  float voltage = sensorValue * (5.0 / 1023.0); // ��ȡģ������0�ϵ����뽫ģ���������0-1023��ת��Ϊ��ѹ��0-5V��

  Serial.println(voltage); // ���������ֵ
}
