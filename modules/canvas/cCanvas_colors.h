namespace o3{

	unsigned int css_lut[133][26] = {
		{0x1,0x5,0xa,0xf,0,0x26,0x27,0x2f,0x31,0,0xfff0e68c,0x35,0x4e,0x57,0x5a,0x64,0,0x6a,0x6e,0x79,0,0xffee82ee,0x7a,0,0x7f,0},
		{0,0,0,0,0,0,0,0,0,0,0,0xfff0f8ff,0,0xfffaebd7,0,0,0x2,0,0,0,0,0,0,0,0,0xfff0ffff},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x3,0,0,0,0,0},
		{0x4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0xff7fffd4,0,0,0,0xff00ffff,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0xfff5f5dc,0,0,0,0xffffe4c4,0,0,0x6,0,0,0,0,0,0xffa52a2a,0,0,0xffdeb887,0,0,0,0,0},
		{0x7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x8,0,0,0,0,0},
		{0,0,0xff000000,0,0,0,0,0,0,0,0,0,0,0xffffebcd,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xff0000ff,0,0,0,0,0xff8a2be2,0,0,0,0},
		{0xff5f9ea0,0,0,0,0,0,0,0xb,0,0,0,0,0,0,0xc,0,0,0xffdc143c,0,0,0,0,0,0,0xff00ffff,0},
		{0xff7fff00,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffd2691e,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xd,0,0,0,0,0,0,0,0},
		{0xffff7f50,0,0,0,0,0,0,0,0,0,0,0,0,0xe,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0xff6495ed,0,0,0,0,0,0,0,0,0,0,0,0,0xfffff8dc,0,0,0,0,0,0,0},
		{0x10,0,0,0,0x1f,0,0,0,0x22,0,0,0,0,0,0xff1e90ff,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x11,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0x12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0xff00008b,0xff008b8b,0,0,0,0x13,0,0,0,0xffbdb76b,0,0xff8b008b,0,0x16,0,0,0xff8b0000,0x18,0xff00ced1,0,0xff9400d3,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffb8860b,0,0,0x14,0,0,0,0,0,0,0,0},
		{0xffa9a9a9,0,0,0,0x15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0xff006400,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffa9a9a9,0},
		{0,0,0,0,0,0,0,0,0,0,0,0xff556b2f,0,0,0,0,0,0x17,0,0,0,0,0,0,0,0},
		{0xffff8c00,0,0xff9932cc,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0xffe9967a,0,0,0,0xff8fbc8f,0,0,0,0,0,0,0x19,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0x1a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1b,0,0,0,0,0,0},
		{0,0,0,0,0x1c,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0xff483d8b,0,0,0,0,0x1d,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1e,0,0,0,0,0,0,0,0},
		{0xff2f4f4f,0,0,0,0xff2f4f4f,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x21,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffff1493,0,0,0xff00bfff,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0x23,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0x24,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x25,0,0,0,0,0,0,0,0},
		{0xff696969,0,0,0,0xff696969,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0xffb22222,0,0,0xfffffaf0,0,0,0xff228b22,0,0,0,0,0,0xffff00ff,0,0,0,0,0},
		{0xffdcdcdc,0,0,0,0,0,0,0xfff8f8ff,0,0,0,0,0,0,0x28,0,0,0x2b,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0x29,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0x2a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0xffdaa520,0,0,0,0,0,0,0,0,0,0,0,0xffffd700,0,0,0,0,0,0,0,0,0},
		{0xff808080,0,0,0,0x2c,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x2d,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xff808080,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0x2e,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xff008000,0,0,0,0,0,0,0,0xffadff2f,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x30,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0xfff0fff0,0,0,0,0,0,0xffff69b4,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0x32,0,0,0,0,0,0,0,0xfffffff0,0,0,0,0},
		{0,0,0,0x33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0x34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0xffcd5c5c,0,0,0,0,0,0xff4b0082,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0x36,0,0,0,0xfffffacd,0,0,0,0x3d,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x37,0xff7cfc00,0,0,0},
		{0,0,0,0,0x38,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0x39,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0x3a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x3b,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x3c,0,0,0,0,0,0,0,0},
		{0,0xfffff0f5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffe6e6fa,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0x3e,0,0,0,0,0,0x4c,0xfffaf0e6,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0x3f,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x40,0,0,0,0,0,0},
		{0,0xffadd8e6,0x41,0,0,0,0x42,0,0,0,0,0,0,0,0,0xffffb6c1,0,0,0x45,0,0,0,0,0,0xffffffe0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xfff08080,0,0,0,0,0,0,0,0,0,0xffe0ffff,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xfffafad2,0,0,0x43,0,0,0,0,0,0,0,0},
		{0xffd3d3d3,0,0,0,0x44,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0xff90ee90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffd3d3d3,0},
		{0xffffa07a,0,0,0,0xff20b2aa,0,0,0,0,0,0xff87cefa,0x46,0,0,0,0,0,0,0,0xffb0c4de,0,0,0,0,0,0},
		{0x47,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x48,0,0,0,0,0,0},
		{0,0,0,0,0x49,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0x4a,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x4b,0,0,0,0,0,0,0,0},
		{0xff778899,0,0,0,0xff778899,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x4d,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0xff32cd32,0,0,0,0,0,0,0,0,0,0xff00ff00,0,0,0,0,0,0,0,0,0},
		{0x4f,0,0,0,0x50,0,0,0,0x56,0,0,0,0,0,0xffffe4b5,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0xffff00ff,0,0,0,0,0,0,0,0,0,0,0xff800000,0,0,0,0,0,0,0,0},
		{0,0,0,0x51,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0x52,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x53,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0x54,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0xff66cdaa,0xff0000cd,0,0,0,0,0,0,0,0,0,0,0,0,0xffba55d3,0xff9370db,0,0,0x55,0xff48d1cc,0,0xffc71585,0,0,0,0},
		{0,0,0,0,0xff3cb371,0,0,0,0,0,0,0xff7b68ee,0,0,0,0xff00fa9a,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0xff191970,0,0,0,0,0,0,0,0,0,0xfff5fffa,0,0,0,0,0xffffe4e1,0,0,0,0,0,0,0},
		{0x58,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x59,0,0,0,0},
		{0xffffdead,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xff000080,0},
		{0,0,0,0,0,0,0,0,0,0,0,0x5b,0,0,0,0,0,0x5f,0,0,0,0,0,0,0,0},
		{0,0,0,0xfffdf5e6,0,0,0,0,0x5c,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x5d,0,0,0,0},
		{0,0,0,0,0x5e,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0xff6b8e23,0,0,0,0,0,0,0,0,0,0,0,0,0xff808000,0,0,0,0,0,0,0,0,0},
		{0x60,0,0xffda70d6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0x61,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0x62,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x63,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffffa500,0xffff4500,0,0,0,0,0,0,0,0},
		{0x65,0,0,0,0x69,0,0,0,0xffffc0cb,0,0,0xffdda0dd,0,0,0xffb0e0e6,0,0,0,0,0,0xff800080,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0x66,0,0,0,0xffffefd5,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0x67,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0x68,0,0,0,0,0,0,0,0,0,0,0,0,0xffafeeee,0,0xffdb7093,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffeee8aa,0,0,0xff98fb98,0,0,0,0,0,0,0,0},
		{0xffffdab9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffcd853f,0,0,0,0,0,0,0,0},
		{0,0,0,0,0xffff0000,0,0x6b,0,0,0,0,0,0,0,0x6d,0,0,0,0,0,0,0,0,0,0,0},
		{0,0x6c,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0x2f000000,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1f000000,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffbc8f8f,0,0,0,0,0,0xff4169e1,0},
		{0x6f,0,0,0,0x70,0,0,0,0x72,0,0xff87ceeb,0x73,0,0xfffffafa,0,0xff00ff7f,0,0,0,0xff4682b4,0,0,0,0,0,0},
		{0,0,0,0xff8b4513,0,0,0,0,0,0,0,0xfffa8072,0,0xfff4a460,0,0,0,0,0,0,0,0,0,0,0,0},
		{0x71,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0xff2e8b57,0,0,0,0,0,0,0,0,0,0,0,0xfffff5ee,0,0,0,0,0,0,0},
		{0,0,0,0,0xffa0522d,0,0,0,0,0,0,0xffc0c0c0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0x74,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x75,0,0,0,0,0,0},
		{0,0,0,0,0x76,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0xff6a5acd,0,0,0,0,0x77,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x78,0,0,0,0,0,0,0,0},
		{0xff708090,0,0,0,0xff708090,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0xffd2b48c,0,0,0,0xff008080,0,0,0xffd8bfd8,0,0,0,0,0,0,0xffff6347,0,0,0,0,0,0xff40e0d0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0x7b,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0xfff5deb3,0,0,0,0x7c,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x7d,0,0,0,0,0,0},
		{0,0,0,0,0x7e,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0xffffffff,0,0xfff5f5f5,0,0,0,0,0,0,0},
		{0,0,0,0,0x80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0x81,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0x82,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x83,0,0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x84,0,0,0},
		{0,0,0,0,0,0,0xff9acd32,0,0,0,0,0,0,0,0,0,0xffffff00,0,0,0,0,0,0,0,0,0}
	};

}