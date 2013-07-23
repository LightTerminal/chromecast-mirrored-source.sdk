#include <common.h>
#include "memmap.h"
#include "global.h"
#include "io.h"

/*
 * CPU PLL
 */
#define CPUPLL_CTL_VAL	0x9948B005	//1200
#define CPUPLL_CTL1_VAL	0x0108312D	//1200
#define CPUPLL_CTL2_VAL	0x00100000


void initCpuPll_1200(void)
{
	volatile int delay;
	register unsigned int reg_val;

	//bypass ON
	reg_val = readl((MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_ClkSwitch));
	reg_val |= (1<<LSb32Gbl_ClkSwitch_cpu1PLLSWBypass);
	writel(reg_val, (MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_ClkSwitch));
	
	//change Pll frequency
	writel(CPUPLL_CTL_VAL, (MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_cpuPllCtl));
	writel(CPUPLL_CTL1_VAL, (MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_cpuPllCtl1));
	writel(CPUPLL_CTL2_VAL, (MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_cpuPllCtl2));
	
	//reset
	writel((1<<LSb32Gbl_ResetTrigger_cpu1PllSyncReset), (MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_ResetTrigger));
	
	//delay
	for(delay=500; delay>0; delay--);
	
	//bypass off
	reg_val = readl((MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_ClkSwitch));
	reg_val &= ~(1<<LSb32Gbl_ClkSwitch_cpu1PLLSWBypass);
	writel(reg_val, (MEMMAP_CHIP_CTRL_REG_BASE + RA_Gbl_ClkSwitch));
}
