#include <myDSP.h>
#include <mydsp_signalMean.h>
//#include "waveformes.ino"

#define NUM_SAMPLES 320

extern double InputSignal_1kHz_15kHz[NUM_SAMPLES];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting test of the Static Signal Mean Calculator Function:");
  double mean = SignalMeanCalculatorStatic<double>(InputSignal_1kHz_15kHz, NUM_SAMPLES);
  Serial.print("The mean was calculated to be: ");
  Serial.println(mean);
  Serial.println("The result should be .04");
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
