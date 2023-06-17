#include "search.h"

using namespace roo_display;

// Image file ic_sharp_18_search_bathroom 18x18, 4-bit Alpha,  RLE, 72 bytes.
static const uint8_t ic_sharp_18_search_bathroom_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3D, 0x82, 0xD9, 0x9D, 0xD0, 0x03,
  0xC0, 0x94, 0x09, 0xC0, 0x03, 0xB0, 0xC6, 0x0C, 0xB0, 0x03, 0xB0, 0x86, 0x08, 0xB0, 0x03, 0xB0,
  0x66, 0x06, 0xB0, 0x03, 0xFF, 0x00, 0x3C, 0x84, 0x67, 0x66, 0x76, 0xC0, 0x03, 0xC8, 0x02, 0xEC,
  0x00, 0x3C, 0x84, 0x89, 0x88, 0x98, 0xC0, 0x03, 0xC8, 0x4B, 0xCC, 0xCC, 0xBC, 0x00, 0x3F, 0xF8,
  0x13, 0x0E, 0xFD, 0x0E, 0x38, 0x09, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_bathroom() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_bathroom_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_bed 18x18, 4-bit Alpha,  RLE, 58 bytes.
static const uint8_t ic_sharp_18_search_bed_data[] PROGMEM = {
  0x28, 0x92, 0x27, 0x77, 0x75, 0x57, 0x77, 0x72, 0x38, 0x11, 0xEE, 0x0F, 0xDA, 0x0F, 0xD8, 0x1E,
  0xE1, 0x28, 0x14, 0xF1, 0x30, 0x0A, 0x38, 0x11, 0xF4, 0x28, 0x94, 0x4F, 0x65, 0x55, 0xCC, 0x55,
  0x56, 0xF4, 0x20, 0xCF, 0xD8, 0x1C, 0x02, 0xFF, 0x02, 0x03, 0xFF, 0x00, 0x3F, 0xF8, 0x23, 0x3F,
  0x38, 0x06, 0x18, 0x43, 0xF3, 0x17, 0x17, 0x38, 0x11, 0x71,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_bed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 4, 16, 13), Box(0, 0, 17, 17),
      ic_sharp_18_search_bed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_bedroom_baby 18x18, 4-bit Alpha,  RLE, 81 bytes.
static const uint8_t ic_sharp_18_search_bedroom_baby_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3F, 0xF0, 0x03, 0xB8, 0x19, 0x5C,
  0xF9, 0x00, 0x3A, 0x82, 0xE2, 0x03, 0xF9, 0x00, 0x3A, 0x87, 0x81, 0x10, 0x33, 0x33, 0x8B, 0x00,
  0x3C, 0x04, 0x40, 0x40, 0xEB, 0x00, 0x3C, 0x03, 0x40, 0x3C, 0x00, 0x3A, 0x89, 0x09, 0x50, 0x9B,
  0xB9, 0x05, 0x9A, 0x00, 0x3A, 0x09, 0x28, 0x27, 0x99, 0x72, 0x09, 0xA0, 0x03, 0xB8, 0x1D, 0x62,
  0x28, 0x12, 0x6D, 0xB0, 0x03, 0xFF, 0x00, 0x3F, 0xF8, 0x13, 0x0E, 0xFD, 0x0E, 0x38, 0x09, 0x03,
  0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_bedroom_baby() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_bedroom_baby_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_bedroom_child 18x18, 4-bit Alpha,  RLE, 86 bytes.
static const uint8_t ic_sharp_18_search_bedroom_child_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3F, 0xF0, 0x03, 0xC8, 0x4A, 0x55,
  0x55, 0xAC, 0x00, 0x3B, 0x86, 0xE0, 0x33, 0x33, 0x0E, 0xB0, 0x03, 0xB8, 0x1D, 0x0C, 0xA8, 0x1C,
  0x0D, 0xB0, 0x03, 0xA8, 0x90, 0xD2, 0x01, 0x11, 0x10, 0x2D, 0xA0, 0x03, 0xA0, 0x80, 0x18, 0x02,
  0x80, 0x10, 0x8A, 0x00, 0x3A, 0x07, 0x18, 0x02, 0x51, 0x07, 0xA0, 0x03, 0xA0, 0x71, 0x80, 0x23,
  0x10, 0x7A, 0x00, 0x3A, 0x0A, 0x07, 0xE0, 0x70, 0xAA, 0x00, 0x3F, 0xF0, 0x03, 0xFF, 0x81, 0x30,
  0xEF, 0xD0, 0xE3, 0x80, 0x90, 0x32,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_bedroom_child() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_bedroom_child_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_bedroom_parent 18x18, 4-bit Alpha,  RLE, 87 bytes.
static const uint8_t ic_sharp_18_search_bedroom_parent_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3F, 0xF0, 0x03, 0xB8, 0x6E, 0x75,
  0x55, 0x57, 0xEB, 0x00, 0x3B, 0x86, 0x71, 0x31, 0x13, 0x07, 0xB0, 0x03, 0xB8, 0x66, 0x3F, 0x55,
  0xF3, 0x6B, 0x00, 0x3A, 0x82, 0xD2, 0x01, 0x28, 0x21, 0x02, 0xDA, 0x00, 0x3A, 0x08, 0x01, 0x80,
  0x28, 0x01, 0x08, 0xA0, 0x03, 0xA0, 0x71, 0x80, 0x25, 0x10, 0x7A, 0x00, 0x3A, 0x07, 0x18, 0x02,
  0x31, 0x07, 0xA0, 0x03, 0xA0, 0xA0, 0x7E, 0x07, 0x0A, 0xA0, 0x03, 0xFF, 0x00, 0x3F, 0xF8, 0x13,
  0x0E, 0xFD, 0x0E, 0x38, 0x09, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_bedroom_parent() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_bedroom_parent_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_blender 18x18, 4-bit Alpha,  RLE, 70 bytes.
static const uint8_t ic_sharp_18_search_blender_data[] PROGMEM = {
  0x58, 0x00, 0x33, 0x83, 0x23, 0x33, 0xDA, 0x82, 0xD3, 0x32, 0xFA, 0x84, 0xE4, 0xF0, 0xB9, 0x48,
  0x59, 0xB4, 0xF0, 0x9B, 0x48, 0x5B, 0x94, 0xF4, 0x8E, 0x48, 0x2E, 0x61, 0xDB, 0x01, 0x28, 0x11,
  0xF3, 0x28, 0x21, 0x2F, 0x42, 0x81, 0x4F, 0x14, 0x0E, 0x06, 0x20, 0x60, 0xE5, 0x84, 0xBA, 0x33,
  0xAB, 0x40, 0x20, 0xEC, 0x0E, 0x02, 0x30, 0xCA, 0x00, 0xDA, 0x0C, 0x3B, 0x00, 0x7B, 0x3F, 0x93,
  0x0C, 0xE0, 0xC4, 0x80, 0x23, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_blender() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 1, 12, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_blender_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_camera_indoor 18x18, 4-bit Alpha,  RLE, 55 bytes.
static const uint8_t ic_sharp_18_search_camera_indoor_data[] PROGMEM = {
  0x48, 0x23, 0xDD, 0x37, 0x06, 0xC0, 0x65, 0x0A, 0xE0, 0xA2, 0x02, 0x0D, 0xF9, 0x81, 0xD2, 0x6F,
  0xB0, 0x06, 0xA8, 0x3B, 0x77, 0x7D, 0xB0, 0x06, 0xA0, 0x43, 0x00, 0x7A, 0x00, 0x6A, 0x04, 0x40,
  0x4A, 0x00, 0x6A, 0x04, 0x30, 0x05, 0xA0, 0x06, 0xA8, 0x39, 0x55, 0x5D, 0xB0, 0x06, 0xFB, 0x00,
  0x6F, 0xB0, 0x60, 0x18, 0x06, 0x30, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_camera_indoor() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 14, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_camera_indoor_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_camera_outdoor 18x18, 4-bit Alpha,  RLE, 57 bytes.
static const uint8_t ic_sharp_18_search_camera_outdoor_data[] PROGMEM = {
  0x48, 0x23, 0xDD, 0x37, 0x84, 0x6F, 0xBB, 0xF6, 0x58, 0x1A, 0xF7, 0x28, 0x17, 0xFA, 0x28, 0x22,
  0xDE, 0x44, 0x85, 0x4E, 0xD2, 0x6F, 0x16, 0x83, 0x1F, 0x66, 0xE7, 0x18, 0x21, 0x06, 0xE4, 0x0E,
  0xA8, 0x3E, 0x12, 0x6E, 0x4C, 0x82, 0xD6, 0x6E, 0x4C, 0x82, 0xE6, 0x6E, 0x40, 0xEB, 0x82, 0x12,
  0x6E, 0x73, 0x06, 0xFB, 0x06, 0x01, 0x80, 0x63, 0x01,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_camera_outdoor() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 14, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_camera_outdoor_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_chair_alt 18x18, 4-bit Alpha,  RLE, 57 bytes.
static const uint8_t ic_sharp_18_search_chair_alt_data[] PROGMEM = {
  0x18, 0x04, 0x31, 0x0B, 0xF9, 0x81, 0xBE, 0x66, 0x82, 0x6E, 0xE7, 0x80, 0x21, 0x81, 0x7E, 0xBF,
  0x98, 0x90, 0xB0, 0x3E, 0x83, 0x38, 0xE3, 0x30, 0xE0, 0x62, 0x06, 0x0E, 0x20, 0x8F, 0x98, 0x18,
  0xE9, 0x80, 0x25, 0x82, 0x9E, 0xE6, 0x60, 0x60, 0xFE, 0x80, 0x2D, 0x0F, 0xE0, 0xA8, 0x02, 0x78,
  0x2A, 0xEE, 0x66, 0x82, 0x6E, 0x31, 0x60, 0x10, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_chair_alt() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 13, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_chair_alt_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_chair 18x18, 4-bit Alpha,  RLE, 79 bytes.
static const uint8_t ic_sharp_18_search_chair_data[] PROGMEM = {
  0x40, 0x18, 0x04, 0x30, 0x17, 0x01, 0x0E, 0xF9, 0x0E, 0x01, 0x60, 0x5F, 0xB0, 0x56, 0x06, 0xFB,
  0x06, 0x60, 0x20, 0xDF, 0x90, 0xD0, 0x24, 0x82, 0x7B, 0x24, 0xF9, 0x84, 0x42, 0xB7, 0x01, 0xA0,
  0x80, 0x1F, 0x90, 0x10, 0x8A, 0x00, 0x1A, 0x09, 0x18, 0x04, 0xB1, 0x09, 0xA0, 0x01, 0xA0, 0x97,
  0x30, 0x9A, 0x00, 0x1A, 0x0E, 0x80, 0x6D, 0x0E, 0xA8, 0x11, 0x0D, 0xFF, 0x0D, 0x28, 0x21, 0x7E,
  0xB8, 0x04, 0x78, 0x2B, 0xE7, 0x14, 0x0C, 0x07, 0x71, 0x07, 0x0C, 0x60, 0x27, 0x30, 0x23,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_chair() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(0, 2, 17, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_chair_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_coffee_maker 18x18, 4-bit Alpha,  RLE, 69 bytes.
static const uint8_t ic_sharp_18_search_coffee_maker_data[] PROGMEM = {
  0x10, 0x18, 0x05, 0x30, 0x10, 0x2F, 0xB8, 0x36, 0x6E, 0x1B, 0xE8, 0x48, 0x06, 0xE0, 0x38, 0x02,
  0x78, 0x21, 0x06, 0xE7, 0x30, 0x60, 0xE4, 0x08, 0x05, 0x40, 0x60, 0xE4, 0x03, 0x01, 0x40, 0x60,
  0xE7, 0x38, 0x26, 0xE0, 0xAE, 0x84, 0x70, 0x6E, 0x0A, 0xE8, 0x47, 0x06, 0xE0, 0xAE, 0x84, 0x70,
  0x6E, 0x0A, 0xE8, 0x47, 0x06, 0xE0, 0x8E, 0x84, 0x50, 0x6E, 0x13, 0xD8, 0x2E, 0x20, 0x2F, 0xB8,
  0x16, 0x01, 0x80, 0x53, 0x01,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_coffee_maker() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 1, 14, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_coffee_maker_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_coffee 18x18, 4-bit Alpha,  RLE, 59 bytes.
static const uint8_t ic_sharp_18_search_coffee_data[] PROGMEM = {
  0x10, 0x28, 0x05, 0x30, 0x22, 0x03, 0xFC, 0x82, 0x70, 0x6E, 0x78, 0x5D, 0x87, 0xF1, 0x6E, 0x78,
  0x4D, 0x73, 0xF2, 0x69, 0x80, 0x3B, 0x84, 0xED, 0xEB, 0x06, 0xFA, 0x0C, 0x07, 0x20, 0x5F, 0xA0,
  0x73, 0x02, 0xFA, 0x04, 0x40, 0xBF, 0x0D, 0x50, 0x10, 0xDD, 0x0E, 0x02, 0x68, 0x51, 0x9E, 0xFE,
  0x91, 0x77, 0x50, 0x6F, 0xB0, 0x62, 0x01, 0x80, 0x64, 0x01, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_coffee() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 2, 16, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_coffee_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_dining 18x18, 4-bit Alpha,  RLE, 92 bytes.
static const uint8_t ic_sharp_18_search_dining_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3B, 0x85, 0xBB, 0xCD, 0xFC, 0x9C,
  0x00, 0x3B, 0x83, 0x56, 0x8A, 0xE2, 0x07, 0xB0, 0x03, 0xB8, 0x34, 0x46, 0xAB, 0x20, 0x3B, 0x00,
  0x3B, 0x02, 0x20, 0xA0, 0xC2, 0x04, 0xB0, 0x03, 0xB8, 0x68, 0x02, 0xEF, 0x50, 0xCB, 0x00, 0x3C,
  0x04, 0x0C, 0xA0, 0xC0, 0x4C, 0x00, 0x3C, 0x04, 0x0C, 0xA0, 0xC0, 0x4C, 0x00, 0x3C, 0x04, 0x0C,
  0xA0, 0xC0, 0x4C, 0x00, 0x3C, 0x04, 0x0C, 0xA0, 0xC0, 0x4C, 0x00, 0x3C, 0x0A, 0x0D, 0xA0, 0xD0,
  0xAC, 0x00, 0x3F, 0xF8, 0x13, 0x0E, 0xFD, 0x0E, 0x38, 0x09, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_dining() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_dining_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_door_back 18x18, 4-bit Alpha,  RLE, 53 bytes.
static const uint8_t ic_sharp_18_search_door_back_data[] PROGMEM = {
  0x38, 0x04, 0x35, 0x0B, 0xF9, 0x0B, 0x40, 0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x40, 0xEF, 0x90,
  0xE4, 0x0E, 0xF9, 0x0E, 0x48, 0x3E, 0xFC, 0x1E, 0xC0, 0xE4, 0x83, 0xEF, 0xD7, 0xEC, 0x0E, 0x40,
  0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x40, 0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x20, 0x4F, 0xD0,
  0x40, 0x18, 0x09, 0x03, 0x01,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_door_back() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_door_back_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_doorbell 18x18, 4-bit Alpha,  RLE, 54 bytes.
static const uint8_t ic_sharp_18_search_doorbell_data[] PROGMEM = {
  0x48, 0x23, 0xDD, 0x37, 0x06, 0xC0, 0x65, 0x0A, 0xE0, 0xA2, 0x02, 0x0D, 0xF9, 0x81, 0xD2, 0x6C,
  0x00, 0x9C, 0x00, 0x6B, 0x08, 0x20, 0x8B, 0x00, 0x6B, 0x03, 0x20, 0x3B, 0x00, 0x6B, 0x03, 0x20,
  0x3B, 0x00, 0x6A, 0x84, 0xD4, 0x33, 0x4D, 0xA0, 0x06, 0xC0, 0x0A, 0xC0, 0x06, 0xFB, 0x00, 0x6F,
  0xB0, 0x60, 0x18, 0x06, 0x30, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_doorbell() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(3, 3, 14, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_doorbell_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_door_front 18x18, 4-bit Alpha,  RLE, 53 bytes.
static const uint8_t ic_sharp_18_search_door_front_data[] PROGMEM = {
  0x38, 0x04, 0x35, 0x0B, 0xF9, 0x0B, 0x40, 0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x40, 0xEF, 0x90,
  0xE4, 0x0E, 0xF9, 0x0E, 0x40, 0xEC, 0x83, 0xE1, 0xCF, 0xE4, 0x0E, 0xC8, 0x3E, 0x7D, 0xFE, 0x40,
  0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x40, 0xEF, 0x90, 0xE4, 0x0E, 0xF9, 0x0E, 0x20, 0x4F, 0xD0,
  0x40, 0x18, 0x09, 0x03, 0x01,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_door_front() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_door_front_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_door_sliding 18x18, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_sharp_18_search_door_sliding_data[] PROGMEM = {
  0x28, 0x90, 0x23, 0x33, 0x22, 0x33, 0x32, 0x30, 0x3C, 0x00, 0x8C, 0x03, 0x20, 0x6C, 0x00, 0x8C,
  0x06, 0x20, 0x6C, 0x00, 0x8C, 0x06, 0x20, 0x6C, 0x00, 0x8C, 0x06, 0x20, 0x6C, 0x00, 0x8C, 0x06,
  0x20, 0x6A, 0x84, 0x29, 0x88, 0x92, 0xA0, 0x62, 0x06, 0xA8, 0x48, 0xC8, 0x8C, 0x8A, 0x06, 0x20,
  0x6C, 0x00, 0x8C, 0x06, 0x20, 0x6C, 0x00, 0x8C, 0x06, 0x20, 0x6C, 0x00, 0x8C, 0x06, 0x20, 0x6C,
  0x00, 0x8C, 0x81, 0x60, 0x4F, 0xD0, 0x40, 0x18, 0x09, 0x03, 0x01,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_door_sliding() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_door_sliding_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_feed 18x18, 4-bit Alpha,  RLE, 75 bytes.
static const uint8_t ic_sharp_18_search_feed_data[] PROGMEM = {
  0x10, 0x28, 0x04, 0x34, 0x02, 0xFA, 0x07, 0x30, 0x4F, 0x82, 0xCB, 0xF7, 0x20, 0x4A, 0x89, 0x2E,
  0xDD, 0xDF, 0xC0, 0xBF, 0x70, 0x4A, 0x06, 0x39, 0x0C, 0x28, 0x2B, 0xF3, 0x4A, 0x89, 0x2D, 0xBB,
  0xBF, 0xEB, 0xBC, 0xF4, 0x4A, 0x0A, 0x80, 0x27, 0x0A, 0xA0, 0x04, 0xA0, 0x78, 0x02, 0x10, 0x7A,
  0x00, 0x4F, 0xD0, 0x04, 0xA0, 0x88, 0x02, 0x30, 0x8A, 0x00, 0x4A, 0x09, 0x80, 0x25, 0x09, 0xA0,
  0x04, 0xFD, 0x04, 0x02, 0xFD, 0x81, 0x20, 0x28, 0x06, 0x30, 0x21,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_feed() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_feed_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_flatware 18x18, 4-bit Alpha,  RLE, 105 bytes.
static const uint8_t ic_sharp_18_search_flatware_data[] PROGMEM = {
  0x18, 0x11, 0x21, 0x30, 0x32, 0x00, 0x12, 0x8A, 0x24, 0x9D, 0x94, 0x1D, 0xFD, 0x16, 0xF6, 0x04,
  0x9D, 0x94, 0x9B, 0x07, 0x06, 0xA8, 0x51, 0x49, 0xD9, 0x4B, 0xB0, 0xA0, 0x6A, 0x85, 0x44, 0xDF,
  0xD4, 0xAB, 0x08, 0x06, 0xA0, 0x40, 0x2B, 0x02, 0x03, 0xA8, 0x1E, 0x26, 0xA8, 0x34, 0x05, 0xF5,
  0x28, 0x35, 0xF3, 0x06, 0xA8, 0x34, 0x02, 0xF2, 0x28, 0x92, 0x3F, 0x10, 0x6F, 0xD4, 0x02, 0xF2,
  0x28, 0x43, 0xF1, 0x06, 0xE3, 0x81, 0x2F, 0x22, 0x84, 0x3F, 0x10, 0x6E, 0x38, 0x12, 0xF2, 0x28,
  0x43, 0xF1, 0x06, 0xE3, 0x81, 0x2F, 0x22, 0x84, 0x3F, 0x10, 0x6E, 0x38, 0x12, 0xF2, 0x28, 0x43,
  0xF1, 0x06, 0xE4, 0x03, 0x40, 0x32, 0x01, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_flatware() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_flatware_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_garage 18x18, 4-bit Alpha,  RLE, 84 bytes.
static const uint8_t ic_sharp_18_search_garage_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3F, 0xF0, 0x03, 0xB0, 0xA6, 0x0A,
  0xB0, 0x03, 0xB8, 0x64, 0x3B, 0xBB, 0xB4, 0x3B, 0x00, 0x3A, 0x89, 0x0D, 0x05, 0x99, 0x99, 0x50,
  0xDA, 0x00, 0x3A, 0x08, 0x71, 0x08, 0xA0, 0x03, 0xA8, 0x27, 0x06, 0x52, 0x82, 0x56, 0x07, 0xA0,
  0x03, 0xA8, 0x27, 0x04, 0x32, 0x82, 0x34, 0x07, 0xA0, 0x03, 0xA0, 0x77, 0x10, 0x7A, 0x00, 0x3A,
  0x08, 0x02, 0x80, 0x2D, 0x02, 0x08, 0xA0, 0x03, 0xFF, 0x00, 0x3F, 0xF8, 0x13, 0x0E, 0xFD, 0x0E,
  0x38, 0x09, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_garage() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_garage_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_light 18x18, 4-bit Alpha,  RLE, 62 bytes.
static const uint8_t ic_sharp_18_search_light_data[] PROGMEM = {
  0x60, 0x02, 0x75, 0x00, 0xA7, 0x50, 0x0A, 0x73, 0x84, 0x15, 0xCD, 0x61, 0x78, 0x37, 0xEF, 0xCC,
  0xA0, 0x75, 0x81, 0x8F, 0x84, 0x81, 0x8F, 0xA3, 0x81, 0x4F, 0x56, 0x81, 0x5F, 0x62, 0x0C, 0x0A,
  0x71, 0x84, 0x9D, 0x01, 0xF5, 0x71, 0x84, 0x4F, 0x23, 0xFC, 0x80, 0x4B, 0x86, 0xCF, 0x30, 0x89,
  0x9D, 0xC8, 0x2D, 0x99, 0x85, 0x07, 0xC0, 0x77, 0x20, 0xBA, 0x0B, 0x74, 0x00, 0x36,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_light() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_light_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_living 18x18, 4-bit Alpha,  RLE, 100 bytes.
static const uint8_t ic_sharp_18_search_living_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3B, 0x86, 0xE8, 0x77, 0x77, 0x8E,
  0xB0, 0x03, 0xB8, 0x63, 0x01, 0x11, 0x10, 0x3B, 0x00, 0x3A, 0x81, 0xE0, 0xAC, 0x81, 0xA0, 0xEA,
  0x00, 0x3A, 0x82, 0xC0, 0x4E, 0xA8, 0x2E, 0x40, 0xCA, 0x00, 0x3A, 0x82, 0x23, 0x17, 0xA8, 0x27,
  0x13, 0x2A, 0x00, 0x3A, 0x18, 0x69, 0x42, 0x77, 0x24, 0x91, 0xA0, 0x03, 0xA1, 0x86, 0x97, 0x33,
  0x33, 0x79, 0x1A, 0x00, 0x3A, 0x10, 0x9E, 0x09, 0x1A, 0x00, 0x3A, 0x04, 0x18, 0x02, 0x11, 0x04,
  0xA0, 0x03, 0xA0, 0xE0, 0x88, 0x02, 0x70, 0x80, 0xEA, 0x00, 0x3F, 0xF8, 0x13, 0x0E, 0xFD, 0x0E,
  0x38, 0x09, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_living() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_living_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_manage_search 18x18, 4-bit Alpha,  RLE, 64 bytes.
static const uint8_t ic_sharp_18_search_manage_search_data[] PROGMEM = {
  0x78, 0x35, 0xCD, 0xA2, 0x38, 0x93, 0x19, 0x99, 0x30, 0x7F, 0x97, 0xBF, 0x22, 0x86, 0x2B, 0xBB,
  0x40, 0xF7, 0x30, 0xB0, 0xA7, 0x81, 0x3F, 0x23, 0x07, 0x0D, 0x30, 0xF3, 0x82, 0x11, 0xF5, 0x30,
  0x90, 0xC2, 0x03, 0xB8, 0x76, 0x0A, 0xD5, 0x27, 0xF7, 0x30, 0xF1, 0x20, 0x10, 0xAA, 0x82, 0xEC,
  0xE3, 0x72, 0x01, 0x03, 0x28, 0x2B, 0xE3, 0x28, 0x03, 0xD5, 0x81, 0xBE, 0x18, 0x03, 0x76, 0x03,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_manage_search() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 4, 15, 13), Box(0, 0, 17, 17),
      ic_sharp_18_search_manage_search_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_podcasts 18x18, 4-bit Alpha,  RLE, 108 bytes.
static const uint8_t ic_sharp_18_search_podcasts_data[] PROGMEM = {
  0x70, 0x02, 0x74, 0x03, 0x0B, 0xC0, 0xB0, 0x37, 0x89, 0x09, 0xFB, 0x53, 0x35, 0xBF, 0x95, 0x89,
  0x29, 0xF5, 0x02, 0x66, 0x20, 0x5F, 0x93, 0x89, 0x43, 0xF5, 0x09, 0xFE, 0xEF, 0x90, 0x5F, 0x32,
  0x84, 0xBB, 0x09, 0xE4, 0x28, 0x44, 0xE9, 0x0B, 0xB2, 0x98, 0xA3, 0x52, 0xF4, 0x03, 0x30, 0x4F,
  0x25, 0xF0, 0x2F, 0x36, 0xE0, 0x3A, 0x89, 0x43, 0x0E, 0x63, 0xF2, 0x2F, 0x36, 0xE0, 0x2A, 0x8A,
  0x32, 0x0E, 0x63, 0xF2, 0x0F, 0x53, 0xF4, 0x0A, 0xA0, 0x4F, 0x35, 0x92, 0x89, 0x4B, 0xB0, 0xB7,
  0x0A, 0xA0, 0x7A, 0x0B, 0xB2, 0x81, 0x3F, 0x53, 0x00, 0xA3, 0x81, 0x5F, 0x33, 0x09, 0x07, 0x30,
  0x0A, 0x30, 0x70, 0x87, 0x20, 0x0A, 0x77, 0x00, 0xA7, 0x70, 0x02, 0x70,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_podcasts() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_podcasts_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_shower 18x18, 4-bit Alpha,  RLE, 52 bytes.
static const uint8_t ic_sharp_18_search_shower_data[] PROGMEM = {
  0x40, 0x02, 0x71, 0x00, 0xA6, 0x84, 0x39, 0xEE, 0x93, 0x30, 0x6E, 0x81, 0x60, 0x3F, 0x90, 0x30,
  0xAF, 0x90, 0xA0, 0xDF, 0x90, 0xD0, 0xEF, 0x90, 0xE8, 0x06, 0x52, 0x84, 0x20, 0x11, 0x02, 0x38,
  0x63, 0xF1, 0xAA, 0x1F, 0x33, 0x84, 0x40, 0x22, 0x04, 0x38, 0x63, 0xF1, 0xAA, 0x1F, 0x33, 0x84,
  0x30, 0x11, 0x03, 0x20,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_shower() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(4, 2, 13, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_shower_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_table_bar 18x18, 4-bit Alpha,  RLE, 58 bytes.
static const uint8_t ic_sharp_18_search_table_bar_data[] PROGMEM = {
  0x48, 0x61, 0x34, 0x55, 0x43, 0x15, 0x81, 0x29, 0xDF, 0x98, 0x4D, 0x92, 0x01, 0xEF, 0xD8, 0x2E,
  0x10, 0xBF, 0xD0, 0xB3, 0x82, 0x49, 0xCE, 0xC8, 0x2E, 0xC8, 0x47, 0x20, 0x0B, 0x77, 0x00, 0xA7,
  0x70, 0x0A, 0x74, 0x86, 0x19, 0xBE, 0xEB, 0x91, 0x71, 0x86, 0x9D, 0x99, 0x99, 0xD9, 0x78, 0x11,
  0xF4, 0x48, 0x14, 0xF1, 0x60, 0x20, 0x56, 0x05, 0x02, 0x30,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_table_bar() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 3, 16, 14), Box(0, 0, 17, 17),
      ic_sharp_18_search_table_bar_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_table_restaurant 18x18, 4-bit Alpha,  RLE, 63 bytes.
static const uint8_t ic_sharp_18_search_table_restaurant_data[] PROGMEM = {
  0x20, 0x48, 0x06, 0x50, 0x43, 0x02, 0xFD, 0x02, 0x20, 0x9F, 0xD0, 0x92, 0x0E, 0xFD, 0x82, 0xE0,
  0x1E, 0xFD, 0x0E, 0x01, 0x28, 0x15, 0xF3, 0x80, 0x21, 0x81, 0x6F, 0x24, 0x06, 0x98, 0x03, 0x78,
  0x19, 0xF3, 0x40, 0x90, 0xE8, 0x04, 0xB9, 0x06, 0x40, 0xB0, 0x97, 0x10, 0xC0, 0x84, 0x0E, 0x06,
  0x71, 0x09, 0x0B, 0x38, 0x12, 0xF3, 0x71, 0x06, 0x0E, 0x30, 0x10, 0x57, 0x20, 0x10, 0x52,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_table_restaurant() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 3, 16, 14), Box(0, 0, 17, 17),
      ic_sharp_18_search_table_restaurant_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_window 18x18, 4-bit Alpha,  RLE, 73 bytes.
static const uint8_t ic_sharp_18_search_window_data[] PROGMEM = {
  0x18, 0x94, 0x23, 0x33, 0x31, 0x13, 0x33, 0x32, 0x02, 0xD0, 0x05, 0xD0, 0x20, 0x4D, 0x00, 0x5D,
  0x00, 0x4D, 0x00, 0x5D, 0x00, 0x4D, 0x00, 0x5D, 0x00, 0x4D, 0x00, 0x5D, 0x04, 0x01, 0x80, 0x15,
  0x00, 0x18, 0x01, 0x50, 0x01, 0x80, 0x15, 0x00, 0x18, 0x01, 0x50, 0x10, 0x4D, 0x00, 0x5D, 0x00,
  0x4D, 0x00, 0x5D, 0x00, 0x4D, 0x00, 0x5D, 0x00, 0x4D, 0x00, 0x5D, 0x04, 0x02, 0xD0, 0x05, 0xD8,
  0x94, 0x20, 0x23, 0x33, 0x31, 0x13, 0x33, 0x32, 0x10,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_window() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_search_window_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_search_yard 18x18, 4-bit Alpha,  RLE, 81 bytes.
static const uint8_t ic_sharp_18_search_yard_data[] PROGMEM = {
  0x28, 0x09, 0x03, 0x30, 0xEF, 0xD8, 0x1E, 0x03, 0xFF, 0x00, 0x3E, 0x00, 0xBE, 0x00, 0x3C, 0x84,
  0xD7, 0x11, 0x7E, 0xC0, 0x03, 0xC8, 0x4A, 0x06, 0x60, 0xAC, 0x00, 0x3C, 0x84, 0xC0, 0xBB, 0x0C,
  0xC0, 0x03, 0xC0, 0xB0, 0x12, 0x01, 0x0B, 0xC0, 0x03, 0xE0, 0x06, 0xE0, 0x03, 0xB8, 0x18, 0x1A,
  0xA8, 0x1A, 0x18, 0xB0, 0x03, 0xB0, 0xC2, 0x00, 0xA2, 0x0C, 0xB0, 0x03, 0xC8, 0x49, 0x03, 0x30,
  0x9C, 0x00, 0x3D, 0x82, 0xD9, 0x9D, 0xD0, 0x03, 0xFF, 0x81, 0x30, 0xEF, 0xD0, 0xE3, 0x80, 0x90,
  0x32,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_search_yard() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_search_yard_data, Alpha4(color::Black));
  return value;
}
