#pragma once

#include <stdint.h>

typedef struct
{
	uint8_t dpad;
	uint8_t lx;
	uint8_t ly;
	uint8_t rx;
	uint8_t ry;
	uint8_t rt;
	uint8_t lt;
	uint8_t buttons1;
	uint8_t buttons2;
	uint8_t battery;
} BluetoothReport;


static const uint8_t bluetooth_report_descriptor[] = 
{
	0x05, 0x01,        // Usage Page (Generic Desktop Ctrls)
	0x09, 0x05,        // Usage (Game Pad)
	0xA1, 0x01,        // Collection (Application)
	0x85, 0x03,        //   Report ID (3)
	0x05, 0x01,        //   Usage Page (Generic Desktop Ctrls)
	0x15, 0x00,        //   Logical Minimum (0)
	0x25, 0x07,        //   Logical Maximum (7)
	0x46, 0x3B, 0x01,  //   Physical Maximum (315)
	0x95, 0x01,        //   Report Count (1)
	0x75, 0x04,        //   Report Size (4)
	0x65, 0x14,        //   Unit (System: English Rotation, Length: Centimeter)
	0x09, 0x39,        //   Usage (Hat switch)
	0x81, 0x42,        //   Input (Data,Var,Abs,No Wrap,Linear,Preferred State,Null State)
	0x75, 0x01,        //   Report Size (1)
	0x95, 0x04,        //   Report Count (4)
	0x81, 0x01,        //   Input (Const,Array,Abs,No Wrap,Linear,Preferred State,No Null Position)
	0x15, 0x00,        //   Logical Minimum (0)
	0x26, 0xFF, 0x00,  //   Logical Maximum (255)
	0x09, 0x30,        //   Usage (X)
	0x09, 0x31,        //   Usage (Y)
	0x09, 0x32,        //   Usage (Z)
	0x09, 0x35,        //   Usage (Rz)
	0x95, 0x04,        //   Report Count (4)
	0x75, 0x08,        //   Report Size (8)
	0x81, 0x02,        //   Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
	0x05, 0x02,        //   Usage Page (Sim Ctrls)
	0x15, 0x00,        //   Logical Minimum (0)
	0x26, 0xFF, 0x00,  //   Logical Maximum (255)
	0x09, 0xC4,        //   Usage (Accelerator)
	0x09, 0xC5,        //   Usage (Brake)
	0x95, 0x02,        //   Report Count (2)
	0x75, 0x08,        //   Report Size (8)
	0x81, 0x02,        //   Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
	0x05, 0x09,        //   Usage Page (Button)
	0x19, 0x01,        //   Usage Minimum (0x01)
	0x29, 0x10,        //   Usage Maximum (0x10)
	0x15, 0x00,        //   Logical Minimum (0)
	0x25, 0x01,        //   Logical Maximum (1)
	0x75, 0x01,        //   Report Size (1)
	0x95, 0x10,        //   Report Count (16)
	0x81, 0x02,        //   Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
	0x05, 0x06,        //   Usage Page (Generic Dev Ctrls)
	0x09, 0x20,        //   Usage (Battery Strength)
	0x15, 0x00,        //   Logical Minimum (0)
	0x25, 0x64,        //   Logical Maximum (100)
	0x75, 0x08,        //   Report Size (8)
	0x95, 0x01,        //   Report Count (1)
	0x81, 0x02,        //   Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
	0x05, 0x0F,        //   Usage Page (PID Page)
	0x09, 0x70,        //   Usage (0x70)
	0x85, 0x05,        //   Report ID (5)
	0x15, 0x00,        //   Logical Minimum (0)
	0x25, 0x64,        //   Logical Maximum (100)
	0x75, 0x08,        //   Report Size (8)
	0x95, 0x04,        //   Report Count (4)
	0x91, 0x02,        //   Output (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
	0xC0,              // End Collection
	0x09, 0x02,        // Usage (0x02)
	0x07, 0x35, 0x08, 0x35, 0x06,  // Usage Page (0x06350835)
	0x09, 0x04,        // Usage (0x04)
};

static const uint8_t pnp_service_data[] = {
    0x36, 0x00, 0x68, 0x09, 0x00, 0x00, 0x0a, 0x00, 
    0x01, 0x00, 0x00, 0x09, 0x00, 0x01, 0x35, 0x03,
    0x19, 0x12, 0x00, 0x09, 0x00, 0x04, 0x35, 0x0d,
    0x35, 0x06, 0x19, 0x01, 0x00, 0x09, 0x00, 0x01,
    0x35, 0x03, 0x19, 0x00, 0x01, 0x09, 0x00, 0x05,
    0x35, 0x03, 0x19, 0x10, 0x02, 0x09, 0x00, 0x06,
    0x35, 0x09, 0x09, 0x65, 0x6e, 0x09, 0x00, 0x6a,
    0x09, 0x01, 0x00, 0x09, 0x00, 0x09, 0x35, 0x08,
    0x35, 0x06, 0x19, 0x12, 0x00, 0x09, 0x01, 0x00,
    0x09, 0x02, 0x00, 0x09, 0x22, 0x00, 0x09, 0x02,
    0x01, 0x09, 0x2E, 0x8A, 0x09, 0x02, 0x02, 0x09,
    0x19, 0x19, 0x09, 0x02, 0x03, 0x09, 0x01, 0x00,
    0x09, 0x02, 0x04, 0x28, 0x01, 0x09, 0x02, 0x05,
    0x09, 0x00, 0x02
};

