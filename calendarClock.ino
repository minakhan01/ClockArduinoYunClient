#include <Bridge.h>
#include <HttpClient.h>

void setup() {
  // put your setup code here, to run once:
  Bridge.begin();   // Initialize the Bridge
  Serial.begin(9600);
  Process p;
  p.runShellCommand("curl -k 'http://192.168.86.109:3030/getCalendarEvents:mina'");
  while (p.available()>0) {
      char c = p.read();
      Serial.print(c);
    }
  Serial.flush();
}

void loop() {
  // put your main code here, to run repeatedly:
}
