# Pocket Flashlight

A small pocket flashlight built around the ATtiny412.

This project started as a way to learn PCB design in KiCad and get more comfortable with embedded electronics. Instead of making something complicated, I wanted to build a simple device that I could actually understand from start to finish.

## Features

- ATtiny412 microcontroller
- Push button to turn the light on
- Automatic brightness adjustment using a photoresistor
- Low component count
- Compact PCB design

## Components

- ATtiny412-SS
- White LED
- 100 Ω resistor
- 10 kΩ resistor
- Photoresistor (LDR)
- Push button
- Power switch
- 100 nF capacitor
- Coin cell battery

## Files

- `PocketLight.kicad_sch` — schematic
- `PocketLight.kicad_pcb` — PCB layout
- `pocketlightlight.ino` — Arduino firmware
- `BOM.csv` — bill of materials
- `gerbers.zip` — manufacturing files

## What I learned

This project helped me understand:

- generating Gerber files
- working with the ATtiny412
- reading input from a photoresistor
- controlling an LED with a microcontroller
  <img width="2560" height="1398" alt="2026-07-16_12-31-07" src="https://github.com/user-attachments/assets/ae08c132-9651-4977-b497-db4ac8ee0fc6" />

