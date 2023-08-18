ENTRY(Reset_Handler)

MEMORY
{
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 64K
  FLASH_FREE (rx) : ORIGIN = 0x0800f2e0, LENGTH = 0xd20
  SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 16K
}

SECTIONS
{ 
    .test 0x08005412 : 
    {
        *(.test)
    }
    .clearscreen 0x08005474 :
    {
    	*(.clearscreen)
    }
    lcd_on = 0x08009310;
	.lcd_on 0x08009310 :
    {
    	*(.lcd_on)
    }
    lcd_bright = 0x0800896c;
	.lcd_bright 0x0800896c :
    {
    	*(.lcd_bright)
    }
    .SetColor 0x08005b1c :
    {
    	*(.SetColor)
    }
    .DrawRect 0x08005ae4 :
    {
    	*(.DrawRect)
    }
    
  .vectors  : { KEEP(*(.vectors)) }   > FLASH_FREE
  .text :
  {
    *(.text)
  } > FLASH_FREE

  .rodata :
  {
    *(.rodata)
  } > FLASH_FREE

  .data :
  {
    *(.data)
  } > FLASH_FREE
  .bss :
  {
    *(.bss)
  } > SRAM
  /* Define the symbol clearscreen at address 0x08005474 */
  clearscreen = 0x08005474;
  SetColor = 0x08005b1c;
  DrawRect = 0x08005ae4;
}
