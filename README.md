# Intel SoC FPGA Documentation for Trusted Firmware-A

## Introduction

This README file describes TF-A support for Intel SoC FPGA.
For detailed information regarding the hardware product, please refer to
https://www.intel.com/content/www/us/en/products/programmable/soc.html

----

## Table of Contents

1. [Release Information](#1-release-information)
2. [Device Family Support and Compatibility](#2-device-family-support-and-compatibility)
3. [Feature Support](#3-tf-a-feature-support)
4. [Major Changes and Known Issues](#4-major-changes)
5. [Known Issues and Limitation](#5-known-issues-and-limitation)

----

## 1. Release Information

Version		|	Release Branch		|	TF-A Tag
-------		|	--------------		|	--------
Current (N)	|	socfpga_v2.5.1		|	v2.5
N - 1		|	socfpga_v2.5.0		|	v2.5
N - 2		|	socfpga_v2.4.1		|	v2.4

----

## 2. Device Family Support and Compatibility

This section details SoC FPGA and eASIC Device Family supported by TF-A and its underlying 
processor microarchitecture. Table below keeps track of Quartus version tested 
to be compatible with current TF-A release. All families support only BL2 and BL31


SoC FPGA / eASIC Device Family	|	Processor Microarchitecture	|	Quartus Prime Pro Edition
---------------------		|	---------------------------	|	-------------------------------
Stratix 10			|	Quad-core ARM Cortex-A53	|	21.2
Agilex				|	Quad-core ARM Cortex-A53	|	21.2
eASIC N5X			|	Quad-core ARM Cortex-A53	|	21.2

----

## 3. TF-A Feature Support

Hardware Feature		|	Stratix 10	|	Agilex		|	eASIC N5X
:----------------		|	:----------	|	:------		|	:------------
SDRAM				|	Yes		|	Yes		|	No
HPS Bridge (LWH2F, H2F, F2S)	|	Yes		|	Yes		|	No
HPS Cold/Warm Reset		|	Yes		|	Yes		|	Yes
HPS Linux SMP Boot		|	Yes		|	Yes		|	Yes
Ethernet (EMAC controller)	|	Yes		|	Yes		|	No
Synopsys UART controller	|	Yes		|	Yes		|	No
Synopsys Watchdog timer		|	Yes		|	Yes		|	No
Synopsys SDMMC controller	|	Yes		|	Yes		|	No
Cadence QSPI controller		|	Yes		|	Yes		|	No
Denali NAND controller		|	No		|	No		|	No
Synopsys GPIO controller	|	No		|	No		|	No
Synopsys USB controller		|	No		|	No		|	No
Synopsys I2C master controller	|	No		|	No		|	No

----

FPGA Feature			|	Stratix 10	|	Agilex		|	eASIC N5X
:------------			|	:----------	|	:------		|	:------------
FPGA Configuration		|	Yes		|	Yes		|	No
Partial Reconfiguration		|	Yes		|	Yes		|	No
Remote System Update (RSU)	|	Yes		|	Yes		|	No

----

FCS Feature<sup>1</sup>	|	Stratix 10	|	Agilex		|	eASIC N5X
:------------		|	:----------	|	:------		|	:------------
Attestation Services	|	Yes		|	Yes		|	No
SDOS Services		|	No		|	Yes		|	Yes
Single Certificate	|	No		|	Yes		|	No
Get Provision Data	|	No		|	Yes		|	Yes
Random Number Generator	|	No		|	Yes		|	Yes
AES Encryption and Decryption	|	No		|	Yes		|	No
SHA2 / HMAC Authentication Service	|	No		|	Yes		|	No
ECDSA Signing and Verification	|	No		|	Yes		|	No

----
### Notes
<sup>1</sup> FCS Feature Not supported in Intel Quartus Prime Pro 20.4

----

## 4. Major Changes

1. Upgrade Intel SoC FPGA TF-A to version socfpga_v2.5.1
	- Based on TF-A version 2.5 official release

2. Add new SiP SVC SMC V2 protocol
	- Extend seperated SMC function ID for non-mailbox and mailbox commands,
	  ranged from 0x400 to 0x4FF, the support will be started using by Zephyr

----

## 5. Known Issues and Limitation

1. Uboot + TF-A Boot Flow
	- Supported in altera-opensource/u-boot-socfpga branch:socfpga_v2020.04 onwards

2. TF-A eASIC N5X Support
	- Current release only have support for BL31
	- Hence TF-A only usable as secure monitor for eASIC N5X platform

3. Vendor Authorized Boot (VAB)
	- Not supported for TF-A + UEFI boot flow for this release
	- BL2 -> BL31 -> UEFI -> Linux

4. Double-Bit Error Handling in EL3
	- Linux EDAC framework failure in triggering DBE handling is reported
	- Processor cores are trapped in EL3
	- Fixes are delayed to next release cycle

