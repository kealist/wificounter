# wificounter

Based on STM32F723E-Discovery Board with a ESP-01 Wifi board attached, this project's goal is to have a handheld device that monitors and records Wifi networks at particular locations and records signal strength.

## Progress

* Implemented basic custom GPIO HAL driver (2017-07-24)

## Building

Currently this project uses Keil uVision5 project file for building.   Use the associated (.uprojx) file to compile.  

 * Required packs:
   * Keil::ARM_Compiler
   * Keil::STM32F7XX_DFP
   * ARM::CMSIS
 * Target Xtal: 25MHz
   
 
