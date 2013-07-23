const unsigned short coeff_hred_2_7[33][12] = {
    {0x0817, 0x0822, 0x000b, 0x0082, 0x010a, 0x0147, 0x010a, 0x0082, 0x000b, 0x0822, 0x0817, 0x0803},
    {0x0817, 0x0823, 0x000a, 0x007f, 0x0109, 0x0148, 0x010d, 0x0084, 0x000c, 0x0822, 0x0818, 0x0803},
    {0x0817, 0x0823, 0x0008, 0x007d, 0x0107, 0x0149, 0x010e, 0x0086, 0x000e, 0x0822, 0x0818, 0x0803},
    {0x0816, 0x0823, 0x0007, 0x007b, 0x0105, 0x0149, 0x0110, 0x0088, 0x000f, 0x0822, 0x0818, 0x0804},
    {0x0816, 0x0823, 0x0006, 0x0079, 0x0104, 0x0148, 0x0112, 0x008b, 0x0010, 0x0822, 0x0819, 0x0804},
    {0x0816, 0x0823, 0x0005, 0x0077, 0x0102, 0x0147, 0x0114, 0x008d, 0x0012, 0x0822, 0x0819, 0x0804},
    {0x0815, 0x0823, 0x0003, 0x0074, 0x0100, 0x0148, 0x0115, 0x008f, 0x0013, 0x0821, 0x0819, 0x0804},
    {0x0815, 0x0823, 0x0002, 0x0072, 0x00fe, 0x0148, 0x0117, 0x0092, 0x0015, 0x0821, 0x081a, 0x0805},
    {0x0814, 0x0823, 0x0001, 0x0070, 0x00fc, 0x0147, 0x0119, 0x0094, 0x0016, 0x0821, 0x081a, 0x0805},
    {0x0814, 0x0823, 0x0000, 0x006e, 0x00fa, 0x0147, 0x011a, 0x0096, 0x0018, 0x0821, 0x081a, 0x0805},
    {0x0814, 0x0823, 0x0801, 0x006c, 0x00f8, 0x0147, 0x011c, 0x0098, 0x0019, 0x0820, 0x081b, 0x0805},
    {0x0813, 0x0823, 0x0803, 0x006a, 0x00f7, 0x0146, 0x011d, 0x009b, 0x001b, 0x0820, 0x081b, 0x0806},
    {0x0813, 0x0823, 0x0804, 0x0068, 0x00f5, 0x0146, 0x011f, 0x009d, 0x001c, 0x0820, 0x081b, 0x0806},
    {0x0813, 0x0823, 0x0805, 0x0065, 0x00f3, 0x0146, 0x0121, 0x009f, 0x001e, 0x081f, 0x081c, 0x0806},
    {0x0812, 0x0823, 0x0806, 0x0063, 0x00f1, 0x0145, 0x0122, 0x00a2, 0x001f, 0x081f, 0x081c, 0x0806},
    {0x0812, 0x0823, 0x0807, 0x0061, 0x00ef, 0x0145, 0x0124, 0x00a4, 0x0021, 0x081f, 0x081c, 0x0807},
    {0x0812, 0x0823, 0x0808, 0x005f, 0x00ed, 0x0145, 0x0125, 0x00a6, 0x0023, 0x081e, 0x081d, 0x0807},
    {0x0811, 0x0823, 0x0809, 0x005d, 0x00eb, 0x0144, 0x0127, 0x00a8, 0x0024, 0x081e, 0x081d, 0x0807},
    {0x0811, 0x0823, 0x080a, 0x005b, 0x00e9, 0x0143, 0x0128, 0x00ab, 0x0026, 0x081d, 0x081d, 0x0808},
    {0x0810, 0x0823, 0x080b, 0x0059, 0x00e6, 0x0144, 0x0129, 0x00ad, 0x0028, 0x081d, 0x081e, 0x0808},
    {0x0810, 0x0823, 0x080c, 0x0057, 0x00e4, 0x0143, 0x012b, 0x00af, 0x0029, 0x081c, 0x081e, 0x0808},
    {0x0810, 0x0823, 0x080d, 0x0055, 0x00e2, 0x0142, 0x012c, 0x00b2, 0x002b, 0x081c, 0x081e, 0x0808},
    {0x080f, 0x0823, 0x080e, 0x0053, 0x00e0, 0x0142, 0x012d, 0x00b4, 0x002d, 0x081b, 0x081f, 0x0809},
    {0x080f, 0x0823, 0x080e, 0x0051, 0x00de, 0x0140, 0x012f, 0x00b6, 0x002f, 0x081b, 0x081f, 0x0809},
    {0x080f, 0x0822, 0x080f, 0x004f, 0x00dc, 0x013f, 0x0130, 0x00b8, 0x0030, 0x081a, 0x081f, 0x0809},
    {0x080e, 0x0822, 0x0810, 0x004d, 0x00da, 0x013e, 0x0131, 0x00bb, 0x0032, 0x081a, 0x081f, 0x080a},
    {0x080e, 0x0822, 0x0811, 0x004b, 0x00d8, 0x013e, 0x0132, 0x00bd, 0x0034, 0x0819, 0x0820, 0x080a},
    {0x080e, 0x0822, 0x0812, 0x0049, 0x00d5, 0x013e, 0x0134, 0x00bf, 0x0036, 0x0819, 0x0820, 0x080a},
    {0x080d, 0x0822, 0x0812, 0x0047, 0x00d3, 0x013c, 0x0134, 0x00c2, 0x0038, 0x0818, 0x0820, 0x080b},
    {0x080d, 0x0822, 0x0813, 0x0045, 0x00d1, 0x013b, 0x0136, 0x00c4, 0x0039, 0x0817, 0x0820, 0x080b},
    {0x080d, 0x0821, 0x0814, 0x0043, 0x00cf, 0x013b, 0x0137, 0x00c6, 0x003b, 0x0817, 0x0821, 0x080b},
    {0x080c, 0x0821, 0x0815, 0x0041, 0x00cd, 0x013a, 0x0138, 0x00c8, 0x003d, 0x0816, 0x0821, 0x080c},
    {0x080c, 0x0821, 0x0815, 0x003f, 0x00ca, 0x0139, 0x0139, 0x00ca, 0x003f, 0x0815, 0x0821, 0x080c},
};
