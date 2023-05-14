# ZQ vapor essent se cfw

Your favourite color is not available? No problem!

Dump your own firmware over *SWD* using the 3 handy (coated) vias near the Inductor or over usbc-cc pins :)

With the battery connections being on the bottom:

connect SWCLK to the lowest, SWDIO to the middle one and 3.3V to the top one

In ST-Link utility, set reset mode to software system reset and set the dump size to 0x10000

Happy reverse engineering.



the screen is a tft0096-8 80x160 spi lcd from winstar

the mcu is STM32G031GxU UFQFPN28

ZQ logo (64x31, 1bpp) logo pos: d758-d84f


sram:

1c0:blue

1c4:green

1c8:orange

1CC: red color val

1d0 :purple

1d4 : some blue? not used.
