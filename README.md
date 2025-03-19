# Arduino_Practice
# Bunch of Arduino Code
# ATmega328P Specifications:

# -->Microcontroller:
    ATmega328P

# -->Core & Architecture:
    Architecture: 8-bit AVR RISC,
    CPU: AVR,
    Operating Voltage: 1.8V – 5.5V,
    Clock Speed: 20 MHz (max),
    Instruction Set: RISC

# -->Memory:
    Flash Memory: 32 KB (0.5 KB used by bootloader),
    SRAM: 2 KB,
    EEPROM: 1 KB

# -->Power Consumption:
    Active Mode: 0.2 mA at 1 MHz, 1.8V,
    Power-down Mode: 0.1 µA at 1.8V

# -->GPIO (General Purpose Input/Output) Pins:
    Total GPIO Pins: 23 (Configurable as Input/Output)

# -->Interrupt Pins:
    INT0 (External Interrupt 0) → Pin-D2,
    INT1 (External Interrupt 1) → Pin-D3
    
# -->ATmega328P Port Information

PORTB (Digital Pins 8 - 13):
    PB0 → Digital Pin 8,
    PB1 → Digital Pin 9 (PWM),
    PB2 → Digital Pin 10 (PWM, SS for SPI),
    PB3 → Digital Pin 11 (PWM, MOSI for SPI),
    PB4 → Digital Pin 12 (MISO for SPI),
    PB5 → Digital Pin 13 (SCK for SPI, LED_BUILTIN),
    PB6 → Crystal Oscillator (XTAL1),
    PB7 → Crystal Oscillator (XTAL2)

PORTC (Analog Pins A0 - A5):
    PC0 → Analog Pin A0,
    PC1 → Analog Pin A1,
    PC2 → Analog Pin A2,
    PC3 → Analog Pin A3,
    PC4 → Analog Pin A4 (SDA for I2C),
    PC5 → Analog Pin A5 (SCL for I2C),
    PC6 → RESET (Active LOW)

PORTD (Digital Pins 0 - 7):
    PD0 → Digital Pin 0 (RX for Serial Communication),
    PD1 → Digital Pin 1 (TX for Serial Communication),
    PD2 → Digital Pin 2 (INT0 - External Interrupt 0),
    PD3 → Digital Pin 3 (PWM, INT1 - External Interrupt 1),
    PD4 → Digital Pin 4,
    PD5 → Digital Pin 5 (PWM),
    PD6 → Digital Pin 6 (PWM),
    PD7 → Digital Pin 7
    
# -->Timers & Watchdog:
    8-bit Timer: 2,
    16-bit Timer: 1,
    Watchdog Timer: Yes,
    Brown-out Detection: Yes

# -->Communication Interfaces:
    UART (Serial): 1,
    SPI: 1,
    I2C (TWI): 1

# -->Special Features:
    Sleep Modes: Multiple (Idle, ADC Noise Reduction, Power-down, Standby, etc.),
    In-System Programmable (ISP): Yes,
    Programmable Watchdog Timer: Yes

# -->Packages Available:
    PDIP (28-pin)(Used in Arduino Uno Dev Board),
    TQFP (32-pin),
    QFN (32-pin)


# Arduino Uno Specifications:

# -->Microcontroller:
    ATmega328P

# -->Dev Board Power:
    Operating Voltage: 5V,
    Input Voltage (Recommended): 7-12V,
    Input Voltage (Limit): 6-20V,
    DC Current per I/O Pin: 20 mA,
    DC Current for 3.3V Pin: 50 mA

# -->Clock & Timers & Interrupts:
    Clock Speed: 16 MHz,
    External Interrupts: 2,
    Watchdog Timer: Yes,
    Brown-out Detection: Yes,
    8-bit Timer: 2,
    16-bit Timer: 1

# -->I/O Pins:
    Digital I/O Pins: 14 (0-13) (6 support PWM output),
    PWM Digital I/O Pins: 6 (Pins: 3, 5, 6, 9, 10, 11),
    Digital I/O Pin-0 use as RX,
    Digital I/O Pin-1 use as TX,
    Analog Input Pins: 6 (A0-A5) support 10-bit ADC,
    Analog Pin-A4 use as SDA (Serial Data),
    Analog Pin-A5 use as SCL (Serial Clock),
    LED_BUILTIN: Pin 13
# -->The Arduino Uno doesn’t expose all 23 digital I/O pins because some of them are internally used for functions like the crystal oscillator, reset, and USB communication,

# -->Communication Interfaces:
    UART (Serial): Yes,
    SPI: Yes,
    I2C: Yes

# -->Connectivity & Ports:
    USB Connector: Type-B,
    Power Connector: Barrel Jack (2.1mm center-positive)

# -->Special Features:
    Sleep Modes: Multiple (Idle, ADC Noise Reduction, Power-down, Standby, etc.),
    In-System Programmable (ISP): Yes,
    Programmable Watchdog Timer: Yes


