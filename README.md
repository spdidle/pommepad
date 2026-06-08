# pommepad 🍎
<p align="center">
<img width="471" height="706" alt="image" src="https://github.com/user-attachments/assets/bc7dcbc2-ab7f-4102-a928-0c61e6e6d69f" />
</p>

## What is this?

The pommepad is an apple-shaped macropad featuring 6 programmable keys, per-key RGB LEDs, and an OLED display. It's cute, it's functional, and it's shaped like an apple !! 🍎

## Why did I make this?

My fingers always *hurt*. I spend way too long scrolling, gaming, and doing repetitive gestures on my tiny trackpad throughout the day, and it was starting to take a toll on my poor fingers. I wanted something small and cute that could sit next to my keyboard and handle the shortcuts and actions I use most, like pg dn & up, tab switching, clicking, or anything so my hands get a break.

I also just thought it would be fun to design a PCB that isn't a plain old rectangle, and I got inspired by my friend's apple themed airpod case. Also if you hate apples, doctors are coming after you.

## Features

- **6 mechanical key switches** — Fully programmable :)
- **Per-key RGB LEDs** — What can I say, they're cool
- **OLED display** — Probably just to show something fun, or which app or layer I'm currently on.

## How does it work?

Each of the 6 keys can be mapped to any keystroke, shortcut, or media control you want. The OLED display will show something cute so you never want to unplug the macropad, and the per-key LEDs improve aesthetics.

## Design

Designed in KiCad, schematic and board files are in this repo! There is also a firmware test, but it is not fully stable yet, unfortunately!
<p align="center">
  
<img width="1169" height="680" alt="image" src="https://github.com/user-attachments/assets/d3083035-487d-4b82-99bc-dcae38778b5b" />
  
<img width="1081" height="628" alt="image" src="https://github.com/user-attachments/assets/a2d4067e-5155-49e3-89cd-e091acb46606" />

<img width="1081" height="628" alt="image" src="https://github.com/user-attachments/assets/c72adaea-2290-4421-9322-8945fe568a23" />
</p>

Case was designed (+ rendered) in Fusion360!
<p align="center">
<img width="2740" height="1102" alt="image" src="https://github.com/user-attachments/assets/5f39c762-fae6-4b92-a30b-1b37d8f925b0" />
</p>

## BOM (Bill Of Materials)
| Name                | Qty | Unit | Price (CAD) | Price (USD) | Total (CAD) | Total (USD) | Source                                                                 |
|---------------------|-----|------|-------------|-------------|-------------|-------------|------------------------------------------------------------------------|
| Diode (1N4148)      | 6   | pcs  | $0.02       | $0.01       | $0.12       | $0.08       | https://www.aliexpress.com/item/1005012285965228.html?channel=twinner  |
| SK6812 MINI-E       | 6   | pcs  | $0.10       | $0.08       | $0.63       | $0.45       | https://www.aliexpress.com/item/1005008308801366.html?channel=twinner  |
| MX Switch           | 6   | pcs  | $0.14       | $0.10       | $0.85       | $0.61       | https://www.aliexpress.com/item/1005008998414457.html?channel=twinner  |
| Seeed XIAO RP2040   | 1   | pcs  | $6.05       | $4.36       | $6.05       | $4.36       | https://www.aliexpress.com/item/1005006987582110.html?channel=twinner  |
| OLED 0.91" 128x32   | 1   | pcs  | $3.72       | $2.68       | $3.72       | $2.68       | https://www.aliexpress.com/item/1005009116307818.html?channel=twinner  |
| M3 Screws, 4mm      | 4   | pcs  | $0.08       | $0.06       | $0.31       | $0.22       | https://www.aliexpress.com/item/1005010515160750.html?channel=twinner  |
| PLA 3D Printed Case | 1   | pcs  | $2.28       | $1.64       | $2.28       | $1.64       |                                                                        |
| PCB                 | 1   | pcs  | $1.11       | $0.80       | $1.11       | $0.80       | https://jlcpcb.com                                                     |
|                     |     |      |             |             |             |             |                                                                        |
| Project total:      |     |      |             |             | 15.07 CAD   | 10.85 USD   |                                                                        |

## Build & Assembly

### Required Tools
- Soldering iron
- Solder
- Tweezers
- Small screwdriver for M3 screws
- Computer with USB port
- 3D printer

### Assmebly  Steps
1. Solder all the THT diodes onto the PCB
2. Solder the LEDs to the PCB. I rotated the direction of the bottom row by accident so refer to the PCB layout if the orientation is confusing at all
3. Solder the microcontroller, OLED display, and switches to the PCB
4. To assemble the case, place the PCB into the bottom shell
5. Attach it to the top shell
6. Secure with M3 screws.
7. Since this build uses the RP2040, I will use QMK to install firmware
8. Plug in the RP2040 to your computer with a USB cable while holding BOOT
9. Flash the firmware using : "qmk flash -kb pommepad -km default"
10. Modify keymapping in firmware, and set the 6 keys to your desired shortcuts
11. Test your OLED (check I2C, SDA/SCL pins, etc)
12. Once everything works, you will have a fully functional pomme! 🍎
