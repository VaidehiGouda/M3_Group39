# BICOM SYSTEM


## INTRODUCTION
The extension of a unidirectional RKE system to a bidirectional RKE system is known as a BiCom system. The RKE delivers a radio wave to the receiver at a specific frequency, and the vehicle authenticates the fob by sending back the status. This project provides an overview of BiCom systems, covering their functional design and requirements, as well as their analysis and implementation on a variety of levels.

## HIGH LEVEL REQUIREMENTS

- Transmitter is required to transmit RF signals from the key.
- The signal must be received and verified by the receiver.
- Print window status when blue switch on.
- Print car battery info when blue switch press 3 times.
- Print Door status when blue switch press 4 times.

## LOW LEVEL REQUIREMENTS

- All LEDs should turn ON when switch flicked once.
- All LEDs should turn OFF when switch flicked twice.
- All LEDs should turn ON in clockwise manner when switch flicked thrice.
- All LEDs should turn ON in anticlockwise manner when switch flicked 4 times.
