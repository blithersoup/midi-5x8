#include <Control_Surface.h>

USBMIDI_Interface midi;

CD74HC4067 mux0 { A2, {  5,  4,  2,  3 } };
CD74HC4067 mux1 { A1, {  9,  8,  6,  7 } };
CD74HC4051 mux2 { A0,     { 10, 11, 12 } };

CCPotentiometer controlPotentiometers[] {
  
  { mux0.pin( 0), { 0x0F, Channel_1} },
  { mux0.pin( 1), { 0x0E, Channel_1} },
  { mux0.pin( 2), { 0x0D, Channel_1} },
  { mux0.pin( 3), { 0x0C, Channel_1} },
  { mux0.pin( 4), { 0x0B, Channel_1} },
  { mux0.pin( 5), { 0x0A, Channel_1} },
  { mux0.pin( 6), { 0x09, Channel_1} },
  { mux0.pin( 7), { 0x08, Channel_1} },
  { mux0.pin( 8), { 0x07, Channel_1} },
  { mux0.pin( 9), { 0x06, Channel_1} },
  { mux0.pin(10), { 0x05, Channel_1} },
  { mux0.pin(11), { 0x04, Channel_1} },
  { mux0.pin(12), { 0x03, Channel_1} },
  { mux0.pin(13), { 0x02, Channel_1} },
  { mux0.pin(14), { 0x01, Channel_1} },
  { mux0.pin(15), { 0x00, Channel_1} },

  { mux1.pin( 0), { 0x22, Channel_1} },
  { mux1.pin( 1), { 0x21, Channel_1} },
  { mux1.pin( 2), { 0x19, Channel_1} },
  { mux1.pin( 3), { 0x1A, Channel_1} },
  { mux1.pin( 4), { 0x1B, Channel_1} },
  { mux1.pin( 5), { 0x1C, Channel_1} },
  { mux1.pin( 6), { 0x1D, Channel_1} },
  { mux1.pin( 7), { 0x14, Channel_1} },
  { mux1.pin( 8), { 0x15, Channel_1} },
  { mux1.pin( 9), { 0x16, Channel_1} },
  { mux1.pin(10), { 0x17, Channel_1} },
  { mux1.pin(11), { 0x18, Channel_1} },
  { mux1.pin(12), { 0x13, Channel_1} },
  { mux1.pin(13), { 0x12, Channel_1} },
  { mux1.pin(14), { 0x11, Channel_1} },
  { mux1.pin(15), { 0x10, Channel_1} },

  { mux2.pin( 0), { 0x1F, Channel_1} },
  { mux2.pin( 1), { 0x1E, Channel_1} },
  { mux2.pin( 2), { 0x27, Channel_1} },
  { mux2.pin( 3), { 0x20, Channel_1} },
  { mux2.pin( 4), { 0x26, Channel_1} },
  { mux2.pin( 5), { 0x23, Channel_1} },
  { mux2.pin( 6), { 0x25, Channel_1} },
  { mux2.pin( 7), { 0x24, Channel_1} },

};

void setup() {
  Control_Surface.begin();
}

void loop() {
  Control_Surface.loop();
}