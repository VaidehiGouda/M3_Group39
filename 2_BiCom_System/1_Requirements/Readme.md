## Introduction

The extension of a unidirectional RKE system to a bidirectional RKE system is known as a BiCom system. The RKE deliver a radio wave to the receiver at a specific frequency, and the vehicle authenticates the fob by sending back the status. This project provides an overview of BiCom systems, covering their functional design and requirements, as well as their analysis and implementation on a variety of levels.

## SWOT Analysis

1. Strength
	Automatic lock/ unlock
	Reduces the manual key work
	Bi- directional confirmation to the user
2. Weakness
	Costly technology
	Need to be properly encrypted, else the hacker/ thieves can access
	Incomplete communication may leave the car unlocked

3. Opportunities
	High level security by the RKE model

4. Threats
	Imcomplete convenience can leave the car unlocked
	Hacker may find a chance to access the car

## Requirements

### High Level Requirements

| HLR ID | Description |
| --- | --- |
| HLR1 | Transmitter is required to transmit RF signals from the key |
| HLR2 | Windows status |
| HLR3 | Alarm status |
| HLR4 | Battery status |
| HLR5 | Door status |

### Low Level Requirements

| LLR ID | HLR1 |
| --- | --- |
| LLR1.1 | The signal must be received and verified by the receiver |

| LLR ID | HLR2 |
| --- | --- |
| LLR2.1 | Press blue button once |
| LLR2.2 | All LEDs on |

| LLR ID | HLR3 |
| --- | --- |
| LLR3.1 | Press blue button twice |
| LLR3.2 | All LEDs off |

| LLR ID | HLR4 |
| --- | --- |
| LLR4.1 | Press blue button thrice |
| LLR4.2 | All LEDs on clockwise direction |

| LLR ID | HLR5 |
| --- | --- |
| LLR5.1 | Press blue button four times |
| LLR5.2 | All LEDs on anti- clockwise |

## Applications

- By using the Bi-directional communication it can prevent possible outcomes of stoping the car thief.
- The Key fob system provided another level of security to the Remote Keyless entry system. 
