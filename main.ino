/*
   Name: Taisir Hassan
   Teacher: Mr. Gunby TDR4M1
   Date: January. 28, 2021
   Project: Arduino Digital clock using Shift Register
   Description: Using a shift register, this clock accurately depicts
   a digital clock, usng a 7 segement display.
*/
// Global Variables
int datapin1= 2;
int outDataCLKpin1= 3;
int inDataCLKpin1= 4;

int datapin2= 5;
int outDataCLKpin2= 6;
int inDataCLKpin2= 7;

int datapin3= 8;
int outDataCLKpin3= 9;
int inDataCLKpin3= 10;

int datapin4= 11;
int outDataCLKpin4= 12;
int inDataCLKpin4= 13;

int datapin5= A0;
int outDataCLKpin5 =A1;
int inDataCLKpin5= A2;

int datapin6 =A3;
int outDataCLKpin6= A4;
int inDataCLKpin6= A5;
void setup() // Sets up the program using void function
{
  // Sets all pins to outputs
  pinMode(datapin1, OUTPUT);   
  pinMode(outDataCLKpin1, OUTPUT);
  pinMode(inDataCLKpin1, OUTPUT);

  pinMode(datapin2, OUTPUT);
  pinMode(outDataCLKpin2, OUTPUT);
  pinMode(inDataCLKpin2, OUTPUT);

  pinMode(datapin3, OUTPUT);
  pinMode(outDataCLKpin3, OUTPUT);
  pinMode(inDataCLKpin3, OUTPUT);

  pinMode(datapin4, OUTPUT);
  pinMode(outDataCLKpin4, OUTPUT);
  pinMode(inDataCLKpin4, OUTPUT);

  pinMode(datapin5, OUTPUT);
  pinMode(outDataCLKpin5, OUTPUT);
  pinMode(inDataCLKpin5, OUTPUT);

  pinMode(datapin6, OUTPUT);
  pinMode(outDataCLKpin6, OUTPUT);
  pinMode(inDataCLKpin6, OUTPUT);
}
// numbers from 0 to 9 in 7segment like this ABCDEFG and dot
int bits[]
{
  B11111100,    //  0
  B01100000,   //  1
  B11011010,   //  2
  B11110010,   //  3
  B01100110,   //  4
  B10110110,   //  5
  B10111110,   //  6
  B11100000,   //  7
  B11111110,   //  8
  B11110110    //  9
};
int h = 10; // variable 3ady
void loop()
{
  // this two loops for the hours
  // first loop to the first  7 segment in hours
  for (int i = 0 ; i < 2 ; i++) // for int i being 0, i is less than 2, and it increases incrementally
  {
    digitalWrite(outDataCLKpin1, LOW);
    shiftOut(datapin1, inDataCLKpin1, LSBFIRST, bits[i]); // shifts bits by i variable
    digitalWrite(outDataCLKpin1, HIGH);
    // second loop to the second 7 segment in hours
    for (int j = 0 ; j < h ; j++){
     digitalWrite(outDataCLKpin2, LOW);
     shiftOut(datapin2, inDataCLKpin2, LSBFIRST, bits[j]); // shifts bits by j variable
     digitalWrite(outDataCLKpin2, HIGH);
      // this two loops for the minutes
      // first loop to the first  7 segment in minutes
     for (int k = 0 ; k < 6 ; k++){ // if k is 0, it is less than 6, and increases incrementally 
        digitalWrite(outDataCLKpin3, LOW);
        shiftOut(datapin3, inDataCLKpin3, LSBFIRST, bits[k]); // shifts bits by k variable
        digitalWrite(outDataCLKpin3, HIGH);
        // second loop to the second 7 segment in hours
        for (int l = 0 ; l < 10 ; l++) { // if int l is 0, l is less than 10, and it increases incremenetally
          digitalWrite(outDataCLKpin4, LOW);
          shiftOut(datapin4, inDataCLKpin4, LSBFIRST, bits[l]); // shifts bits by l variable in for loop
          digitalWrite(outDataCLKpin4, HIGH);
          // this two loops for the seconds
          // first loop to the first  7 segment in seconds
          for (int m = 0 ; m < 6 ; m++) {
            digitalWrite(outDataCLKpin5, LOW);
            shiftOut(datapin5, inDataCLKpin5, LSBFIRST, bits[m]); // shifts bits by m variable in for loop
            digitalWrite(outDataCLKpin5, HIGH);
            // second loop to the second 7 segment in seconds
            for (int n = 0 ; n < 10 ; n++) {  // if int n is 0, and if it is less than 0, n increases incrementally
              digitalWrite(outDataCLKpin6, LOW); // Write A5 pin to be off
              shiftOut(datapin6, inDataCLKpin6, LSBFIRST, bits[n]);
              digitalWrite(outDataCLKpin6, HIGH); // Turns A5 pin to be on
              delay(1000); // Delay 1 second for tinkercad to run code properly
            }
          }
        }
      }

    }
    h = 3 ; // when clock = 12, after that it returns to the 0 0 0 0 0 0
  }
}