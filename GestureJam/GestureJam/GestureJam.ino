
#include <CapacitiveSensor.h>
CapacitiveSensor Sensor1 = CapacitiveSensor(4, 6); // data1- black wire
CapacitiveSensor Sensor2 = CapacitiveSensor(8, 10); //data2- green wire
CapacitiveSensor Sensor3 = CapacitiveSensor(12, 13); //data3- red wire
long val1;
long val2;
long val3;
//int pos;
//#define led 13

void setup()
{
Serial.begin(9600);
}

void loop()
{
val1 = Sensor1.capacitiveSensor(30);
val2 = Sensor2.capacitiveSensor(30);
val3 = Sensor3.capacitiveSensor(30);
Serial.print(val1);
Serial.print(" ");
Serial.print("\t");
Serial.print(val2);
Serial.print(" ");
Serial.print("\t");
Serial.print(val3);
Serial.print(" ");
Serial.print("\t");
Serial.println();
delay(50);
}


