# rp2040_fw
---

## 준비
sudo python3 -m pip install pyserial

## CMake 설정 for Windows 
cmake -S . -B build -G "MinGW Makefiles" -DPICO_BOARD=rp2040_rabbit_2axis_can

## CMake 빌드
cmake --build build -j14

## 다운로드
python .\down.py

## 생성기
C:\tools\xpack-windows-build-tools-4.2.1-2\bin\make.exe

## 컴파일러  
C:\tools\gcc-arm-none-eabi-9-2020-q2-update-win32\bin\arm-none-eabi-gcc.exe  
C:\tools\gcc-arm-none-eabi-9-2020-q2-update-win32\bin\arm-none-eabi-g++.exe

C:\tools\mingw32\bin

## rs2040 RP2-B2  
Key features:
• Dual ARM Cortex-M0+ @ 133MHz  
• 264kB on-chip SRAM in six independent banks  
• Support for up to 16MB of off-chip Flash memory via dedicated QSPI bus  
• DMA controller  
• Fully-connected AHB crossbar  
• Interpolator and integer divider peripherals  
• On-chip programmable LDO to generate core voltage  
• 2 on-chip PLLs to generate USB and core clocks  
• 30 GPIO pins, 4 of which can be used as analogue inputs  
• Peripherals
  - 2 UARTs
  - 2 SPI controllers
  - 2 I2C controllers
  - 16 PWM channels
  - USB 1.1 controller and PHY, with host and device support
  - 8 PIO state machines
Whatever your microcontroller application, from machine learning to motor control, from agriculture to audio, RP2040
has the performance, feature set, and support to make your product fly.

## Pin 
| gpio | function          | pcb silk |           |                              |
| ---- | ----------------- | -------- | --------- | ---------------------------- |
| 17   | state led         | X        |           |                              |
| 13   | UART0 RX          | IO13     |           |                              |
| 12   | UART0 TX          | IO12     |           |                              |
| 25   | I2C0 SDA/UART1 RX | IO25     | 풀업 없음 |                              |
| 24   | I2C0 SCL/UART1 TX | IO24     | 풀업 없음 |                              |
| 11   | I2C1 SDA          | IO11     | pull up   |                              |
| 10   | I2C1 SCL          | IO10     | pull up   |                              |
| 29   | SPI1 CSn          | IO29     |           |                              |
| 28   | SPI1 RX           | IO28     |           |                              |
| 27   | SPI1 TX           | IO27     |           |                              |
| 26   | SPI1 SCK          | IO26     |           |                              |
| 21   |                   | IO21     | servo     |                              |
| 20   |                   | IO20     | end stop  |                              |
| 15   |                   | IO15     | enencoder |                              |
| 14   |                   | IO14     | extra     |                              |
| 3    |                   | GPIO3    | en        | select motor                 |
| 1    |                   | GPIO1    | dir       | select motor                 |
| 2    |                   | GPIO2    | step      | select motor                 |
| 0    |                   | GPIO0    | uart      | select motor                 |
| 22   |                   | GPIO22   | diag      | select motor                 |
| 6    |                   | GPIO6    | en        | gear motor                   |
| 8    |                   | GPIO8    | dir       | gear motor                   |
| 7    |                   | GPIO7    | step      | gear motor                   |
| 9    |                   | GPIO9    | uart      | gear motor                   |
| 23   |                   | GPIO23   | diag      | gear motor                   |
| 4    | UART1 TX          | GPIO4    | RXD       | TJA1051 can transceiver 4pin |
| 5    | UART1 RX          | GPIO5    | TXD       | TJA1051 can transceiver 1pin |
| 16   | SPI0 RX           | GPIO16   | tmc2209   | 1k 저항을 거쳐 각 모터로 감  |
| 18   | SPI0 CLK          | GPIO18   | tmc2209   | 1k 저항을 거쳐 각 모터로 감  |
| 19   | SPI0 TX           | GPIO19   | tmc2209   | 1k 저항을 거쳐 각 모터로 감  |
•