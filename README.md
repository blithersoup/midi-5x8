# midi-5x8.v1

## 2/22/25

Here I start work on the midi 5x8 knob board!

### Background

I want to use a midi controller with just a bunch of knobs to make music, but I cannot 
find one.  Upon more searching, I have found the 

* Akai midimix- $110, center detent, small knobs
* Nakedboards MC32- $115, kind of but site does not work
* Midi fighter twister- $240, expensive and not many knobs
* Shik N32B Slim, $300, expensive and not on sale
* Faderfox PC12- $720, expensive
* Intech PO16- $130, modular, not enough knobs

Overall, there is nothing exactly like what I am looking for.  I believe I could make a 
product like the Intech PO16 or Shik N32B but more competetively priced, targeting the 
market of people like me- looking for more knobs for less money.  I believe I could market 
the product as a workflow to people that may otherwise not think they wanted it as well.  
More importantly, I think this product would benefit me and could benefit those that would 
end up buying it.

### Design requirements

First, the most basic functionality is that there should be 40 knobs, and they should send 
midi input over usb.  Upon further research, I found that also outputting to mini trs could 
be helpful.  From there, expanding to all midi signals that could be sent from knobs could 
be added.  In order to do this, we need to have an app that configures the device over usb.  
This app should be able to receive updates and update the firmware of the device if needed.  
Also, the app should act as a midi monitor to show what is being outputted.  Then, presets 
should be able to be created and loaded.  Optional- midi through input.

### Design

#### Hardware

As of now, I want an ATmega32U4 microcontroller with usbc and mini trs output.  I want to 
have 40 knobs in a 5x8 array on the pcb, which will be read from 2x16 and 1x8 multiplexers, 
needing 11 digital outputs and 3 analog inputs.  This all should be covered by the chosen 
mcu.  On top of this some passives may be required for the muxes and usb.  The potentiometers 
will be through hole, and the rest of the components should be surface mounted.

For the case, I may do plastic or metal.  The design will be two pieces for top and bottom, 
with consideration for the integrity of the pcb.  I also need to figure out logo printing as 
well as branding.

#### Components

* ATmega32u4- $5
* USB interface- $2-4
* TRS jack- $1
* Multiplexers- $2
* Passives- $3
* Pots- for production 40x0.5
* Knobs- undecided, at the moment 40x0.5
* PCB- $5-10
* PCBA- $10-30
* Case- $20

As of now, I expect to be able to price this reasonably if doing a sizeable production run.

#### Firmware

I believe I can do this with the arduino control surface library.  Versioning and updates 
can be done with SysEx calls via MIDI 2.0.  Also, bootloader could be entered through code 
with SysEx midi calls.

#### Software

I plan on making an electron app for the application side.  I want it to show the controller 
state and when each knob is clicked on I want an option pane on the side to select what it 
should output.  The app should be able to receive updates, and update firmware.  I will need 
to host releases for each of these.

#### Production

I need to figure out how to load a bootloader and load the software initially.  I believe I 
can do this over usb.  My plan as of now is to pay for PCBA and assemble the case myself.  
Packaging and distribution- up in the air, as is marketing.

### Order of steps

1. Write firmware using Arduino IDE and
2. Hardware prototype using breadboard
3. App design, integrated with hardware
4. PCB design
5. Case design
6. Production considerations/compliance
