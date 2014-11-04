int Relay = 12; 
void setup() 
{ 
 pinMode(Relay, OUTPUT);     //Set Pin12 as output 
 digitalWrite(Relay, HIGH);   //Turn off relay 
} 
void loop() 
{ 
         digitalWrite(Relay, HIGH);   //Turn off relay 
         delay(2000); 
         digitalWrite(Relay, LOW);    //Turn on relay 
         delay(2000); 
}
