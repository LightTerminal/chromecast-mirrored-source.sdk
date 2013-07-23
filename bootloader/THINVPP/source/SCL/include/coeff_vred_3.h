const unsigned short coeff_vred_3[33][12] = {
    {0x001e, 0x007d, 0x00e4, 0x0110, 0x00e4, 0x007d, 0x001e, 0x080e, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x001d, 0x007b, 0x00e2, 0x0110, 0x00e5, 0x007f, 0x001f, 0x080d, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x001c, 0x0079, 0x00e1, 0x0111, 0x00e6, 0x0080, 0x0020, 0x080d, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x001b, 0x0078, 0x00df, 0x0110, 0x00e7, 0x0082, 0x0022, 0x080d, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x001a, 0x0076, 0x00de, 0x010f, 0x00e8, 0x0084, 0x0023, 0x080c, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0019, 0x0074, 0x00dd, 0x010f, 0x00ea, 0x0085, 0x0024, 0x080c, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0018, 0x0073, 0x00db, 0x010f, 0x00eb, 0x0087, 0x0025, 0x080c, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0017, 0x0071, 0x00da, 0x010e, 0x00ec, 0x0089, 0x0026, 0x080b, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0016, 0x006f, 0x00d8, 0x010f, 0x00ed, 0x008a, 0x0028, 0x080b, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0015, 0x006d, 0x00d7, 0x010f, 0x00ee, 0x008c, 0x0029, 0x080b, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0014, 0x006c, 0x00d5, 0x010e, 0x00ef, 0x008e, 0x002a, 0x080a, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0013, 0x006a, 0x00d4, 0x010f, 0x00f0, 0x008f, 0x002b, 0x080a, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0012, 0x0068, 0x00d2, 0x010f, 0x00f1, 0x0091, 0x002d, 0x080a, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0011, 0x0067, 0x00d1, 0x010c, 0x00f3, 0x0093, 0x002e, 0x0809, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0010, 0x0065, 0x00cf, 0x010d, 0x00f4, 0x0095, 0x002f, 0x0809, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000f, 0x0063, 0x00ce, 0x010d, 0x00f5, 0x0096, 0x0030, 0x0808, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000e, 0x0062, 0x00cc, 0x010c, 0x00f6, 0x0098, 0x0032, 0x0808, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000d, 0x0060, 0x00cb, 0x010b, 0x00f7, 0x009a, 0x0033, 0x0807, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000c, 0x005e, 0x00c9, 0x010d, 0x00f8, 0x009b, 0x0034, 0x0807, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000b, 0x005d, 0x00c8, 0x010a, 0x00f9, 0x009d, 0x0036, 0x0806, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000a, 0x005b, 0x00c6, 0x010b, 0x00fa, 0x009f, 0x0037, 0x0806, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x000a, 0x005a, 0x00c4, 0x010a, 0x00fa, 0x00a0, 0x0039, 0x0805, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0009, 0x0058, 0x00c3, 0x010a, 0x00fb, 0x00a2, 0x003a, 0x0805, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0008, 0x0056, 0x00c1, 0x010a, 0x00fc, 0x00a4, 0x003b, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0007, 0x0055, 0x00c0, 0x0109, 0x00fd, 0x00a5, 0x003d, 0x0804, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0006, 0x0053, 0x00be, 0x0109, 0x00fe, 0x00a7, 0x003e, 0x0803, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0006, 0x0052, 0x00bd, 0x0106, 0x00ff, 0x00a9, 0x0040, 0x0803, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0005, 0x0050, 0x00bb, 0x0107, 0x0100, 0x00aa, 0x0041, 0x0802, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0004, 0x004f, 0x00b9, 0x0106, 0x0100, 0x00ac, 0x0043, 0x0801, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0003, 0x004d, 0x00b8, 0x0106, 0x0101, 0x00ae, 0x0044, 0x0801, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0003, 0x004c, 0x00b6, 0x0104, 0x0102, 0x00af, 0x0046, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0002, 0x004a, 0x00b4, 0x0104, 0x0103, 0x00b1, 0x0047, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000},
    {0x0001, 0x0048, 0x00b3, 0x0104, 0x0104, 0x00b3, 0x0048, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000},
};
