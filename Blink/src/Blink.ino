/*
 * Project Blink
 * Description: blink first name 
 * Author: Duvaldi Marneweck
 */

int led = D6;
int led2 = D7;
// enter message to blink in lowercase (26 alphabet caracters only)
char message[] = "duvaldi";


const int arrSize = *(&message + 1) - message;

// letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
// morseCode[26] = {"*-", "-***", "-*-*", "-**","*","**-*", "--*", "****", "**", "*---","-*-", "*-**","--","-*", "---", "*--*", "--*-", "*-*", "***", "-","**-", "***-", "*--", "-**-","-*--", "--**"};

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);

}


void loop() 
{
  for (int i = 0; i < arrSize ; i++)
  {
    switch (message[i]) {
    case 'a':
    {
        s();
        l();
        break;
    }    
    case 'b':
    {
        l();
        s();
        s();
        s();
        break;
    } 
    case 'c':
    {
        l();
        s();
        l();
        s();
        break;
    } 
    case 'd':
    {
        l();
        s();
        s();
        break;
    } 
    case 'e':
    {
        s();
        break;
    } 
    case 'f':
    {
        s();
        s();
        l();
        s();
        break;
    } 
    case 'g':
    {
        l();
        l();
        s();
        break;
    } 
    case 'h':
    {
        s();
        s();
        s();
        s();
        break;
    } 
    case 'i':
    {
        s();
        s();
        break;
    } 
    case 'j':
    {
        s();
        l();
        l();
        l();
        break;
    } 
    case 'k':
    {
        l();
        s();
        l();
        break;
    } 
    case 'l':
    {
        s();
        l();
        s();
        s();
        break;
    } 
    case 'm':
    {
        l();
        l();
        break;
    } 
    case 'n':
    {
        l();
        s();
        break;
    } 
    case 'o':
    {
        l();
        l();
        l();
        break;
    } 
    case 'p':
    {
        s();
        l();
        l();
        s();
        break;
    } 
    case 'q':
    {
        l();
        l();
        s();
        l();
        break;
    } 
    case 'r':
    {
        s();
        l();
        s();
        break;
    } 
    case 's':
    {
        s();
        s();
        s();
        break;
    } 
    case 't':
    {
        l();
        break;
    } 
    case 'u':
    {
        s();
        s();
        l();
        break;
    } 
    case 'v':
    {
        s();
        s();
        s();
        l();
        break;
    } 
    case 'w':
    {
        s();
        l();
        l();
        break;
    } 
    case 'x':
    {
        l();
        s();
        s();
        l();
        break;
    } 
    case 'y':
    {
        l();
        s();
        l();
        l();
        break;
    } 
    case 'z':
    {
        l();
        l();
        s();
        s();
        break;
    } 
    case ' ':
    {
        delay(1000);
        break;
    } 
    }
    delay(500);
  }
  delay(5000);
}
// a long blink
void l()
{
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  delay(500);
}
//a short blink 
void s()
{
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  digitalWrite(led2, LOW);
  delay(500);
}