
#ifndef _BLOCK0_H_
#define _BLOCK0_H_

#define DDR2	2
#define DDR3	3
#define DDR_DUAL_CHANNEL	2
#define DDR_SINGLE_CHANNEL	1

typedef struct _block0_t_ {
	unsigned char bparam[2048];

	unsigned int 	ndtr0cs0; 
	unsigned int	ndtr1cs0; 
	unsigned int	ndredel; 
	unsigned int	ddr_CSL; 
	unsigned int 	ddr_timing1; 
	unsigned int	ddr_timing2; 
	unsigned int 	ddr_timing3;
	unsigned int	first_burn_flag;
	unsigned char	ddr_type	: 4;
	unsigned char	ddr_channel	: 4;
	unsigned char	cpu_type[2];
} block0_t;

#endif
