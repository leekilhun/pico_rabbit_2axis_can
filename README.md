# rp2040_fw
---

## 준비
sudo python3 -m pip install pyserial

## CMake 설정 for Windows 
cmake -S . -B build -G "MinGW Makefiles" -DPICO_BOARD=rp2040_rabbit_2axis_can

## CMake 설정 for macOS 
cmake -S . -B build -DPICO_BOARD=rp2040_rabbit_2axis_can -DPICO_SDK_PATH="D:/_develop/pico/pico-sdk"

## CMake 빌드
cmake --build build -j16

## 다운로드
python .\down.py


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