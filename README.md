# ZQ vapor essent se cfw

Your favourite color is not available? No problem!

the screen is a tft0096-8 80x160 spi lcd from winstar

the mcu is STM32G031GxU UFQFPN28

Dump your own firmware over *SWD* using the 3 handy (coated) vias near the Inductor!

With the battery connections being on the bottom:

connect SWCLK to the lowest, SWDIO to the middle one and 3.3V to the top one

In ST-Link utility, set reset mode to software system reset and set the dump size to 0x10000

Happy reverse engineering.
