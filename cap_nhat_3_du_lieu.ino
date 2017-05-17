String readString;
String readString1;
String String1;
int x,y,z;
int i, j ;
char* myStrings[]={};
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  x = y = z = 0;
}

void loop() {
  while (Serial.available()) {
   // 
    delay(3);  
    char c = Serial.read();
    readString += c;
  for (i = 0; i < readString.length(); i++) {
  if (readString.substring(i, i+1) == ",") {
    x = readString.substring(0, i).toInt();
    break;
  }
  }
  for ( j = 0; j < readString.length(); j++) {
  if (readString.substring(j, j+1) == ";") {
    y = readString.substring(i+1,j+1).toInt();
    z = readString.substring(j+1).toInt();
    break;
  }
}
Serial.print("quat\t");
Serial.print(x);
Serial.print("\t");
Serial.print(y);
Serial.print("\t");
Serial.print(z);
Serial.print("\t");
Serial.print(readString);
Serial.print("\t");
Serial.println(readString1);

  }

/*
if (readString.substring(0,1) == "x"){
  readString.remove(0, 1);
  Serial.println(readString);
  x = readString.toInt();
 }
if (readString.substring(0,1) == "y"){
  readString.remove(0, 1);
  Serial.println(readString);
  y = readString.toInt();
 }  
Serial.println(readString);
Serial.print("quat\t");
Serial.print(x);
Serial.print("\t");
Serial.println(y);*/
delay(1000);
readString="";

}
