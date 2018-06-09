int i;
int val;
int tmp;
char buffer[3];
void setup() {
 Serial.begin(9600);
}

int charToInt() //charToInt()(定义)
{
int tmp =0;
Serial.readBytes(buffer,3);
for(int i=0;i<3;i++)
{
tmp = tmp * 10 + (buffer[i] - 48);
Serial.println(buffer[i]);
}
return tmp;
}

void loop() {
if(Serial.available()>0)
 {//val=Serial.read();
 val = charToInt();
 }
 Serial.println(val);
 delay(1500);
}
