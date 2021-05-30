## Dapper Mime

This unearths the name of a weekend project that I did in 2014.  Both then and now, this is a port of [ARM's CMSIS-DAP code](https://github.com/arm-software/CMSIS_5) to a platform without the need for an expensive proprietary compiler and USB drivers.

Whereas the original code used ST's STM32 USB drivers, this new iteration uses [TinyUSB](https://github.com/hathach/tinyusb), an open source cross-platform USB stack for embedded systems.

## Variants

Most [TinyUSB supported MCUs](https://github.com/hathach/tinyusb/blob/master/docs/boards.md) can run this code; a subdirectory under bsp needs to be added for the "BOARD" name with a DAP_config.h to control the SWD/JTAG GPIOs and a unique.h to provide unique serial number (if any) and prefix to the USB product name.

Already added BOARD variants include:

For BOARD=raspberry_pi_pico, this project results in a standards-based CMSIS-DAP alternative to the approaches suggested in Chapter 5 and Appendix A of [Getting Started with Raspberry Pi Pico](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf).  This uses two RP2040 boards (see wiring loom shown in Figure 34 of Appendix A) where one RP2040 is the debugger and the other RP2040 is being debugged.  The instructions in Chapter 5 apply, except no Raspberry Pi is needed.

Alternatively, a special one RP2040 “Raspberry Pi Pico” variant is [available here](https://github.com/majbthrd/pico-debug).

For BOARD=stm32f072disco, the inexpensive [32F072BDISCOVERY evaluation board](https://www.st.com/en/evaluation-tools/32f072bdiscovery.html) can be used as a CMSIS-DAP SWD debugger.

## Building

After initially downloading this project's code, issue the following command to download TinyUSB and CMSIS_5 code:

```
git submodule update --init
```

Follow the TinyUSB build instructions [available here](https://github.com/hathach/tinyusb/tree/master/docs), but issue the make command in the base directory of Dapper Mime.

Note that each TinyUSB board name being targeted needs a corresponding subdirectory under the Dapper Mime ./bsp/ subdirectory and a customized version of DAP_config.h for the target.

Alternatively, one can compile with CMake:

```
mkdir cmake-build && cd cmake-build
cmake -DBOARD=raspberry_pi_pico -DFAMILIY=rp2040 -DCMAKE_BUILD_TYPE=Debug ..
```

## Usage

The pin mapping is as follows:

| Pin number | Usage (SWD mode) | Usage (JTAG mode) |
|:---------- |:---------------- |:----------------- |
| GP2        | SWCLK            | TCK               |
| GP3        | SWDIO            | TMS               |
| GP4        | UART TX          | UART TX           |
| GP5        | UART RX          | UART RX           |
| GP6        |                  | TDI               |
| GP7        |                  | TDO               |
| GP8        |                  | nTRST             |
| GP9        |                  | nRESET            |

The UART pins are for connecting to the device to be debugged, the data is
echoed back over the USB CDC interface (typically a `/dev/ttyAMAx` device on
Linux).

In SWD mode, the pin mapping is entirely as with the standard Picoprobe setup,
as described in Chapter 5 and Appendix A of [Getting Started with Raspberry Pi
Pico](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf)

JTAG mode is currently untested.

## License

TinyUSB is licensed under the [MIT license](https://opensource.org/licenses/MIT).

ARM's CMSIS_5 code is licensed under the [Apache 2.0 license](https://opensource.org/licenses/Apache-2.0).

