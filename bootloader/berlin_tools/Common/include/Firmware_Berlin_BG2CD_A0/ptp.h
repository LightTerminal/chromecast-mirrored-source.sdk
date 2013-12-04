//////
/// don't edit! auto-generated by docc: ptp.h
////////////////////////////////////////////////////////////
#ifndef ptp_h
#define ptp_h (){}


#include "ctypes.h"

#pragma pack(1)
#ifdef __cplusplus
  extern "C" {
#endif

#ifndef _DOCC_H_BITOPS_
#define _DOCC_H_BITOPS_ (){}

    #define _bSETMASK_(b)                                      ((b)<32 ? (1<<((b)&31)) : 0)
    #define _NSETMASK_(msb,lsb)                                (_bSETMASK_((msb)+1)-_bSETMASK_(lsb))
    #define _bCLRMASK_(b)                                      (~_bSETMASK_(b))
    #define _NCLRMASK_(msb,lsb)                                (~_NSETMASK_(msb,lsb))
    #define _BFGET_(r,msb,lsb)                                 (_NSETMASK_((msb)-(lsb),0)&((r)>>(lsb)))
    #define _BFSET_(r,msb,lsb,v)                               do{ (r)&=_NCLRMASK_(msb,lsb); (r)|=_NSETMASK_(msb,lsb)&((v)<<(lsb)); }while(0)

#endif



//////
/// 
/// $INTERFACE oneReg                                   (4,4)
///     # # ----------------------------------------------------------
///     @ 0x00000                      (R-)
///               %unsigned 32 0x00000000                
///                                    ###
///                                    * One Register in an external IP block (i.e., PEX)
///                                    ###
///     # # ----------------------------------------------------------
/// $ENDOFINTERFACE  # size:       4B, bits:      32b, padding:     0B
////////////////////////////////////////////////////////////
#ifndef h_oneReg
#define h_oneReg (){}

    #define     BA_oneReg_0x00000000                           0x0000
    #define     B16oneReg_0x00000000                           0x0000
    #define   LSb32oneReg_0x00000000                              0
    #define   LSb16oneReg_0x00000000                              0
    #define       boneReg_0x00000000                           32
    #define   MSK32oneReg_0x00000000                              0xFFFFFFFF
    ///////////////////////////////////////////////////////////

    typedef struct SIE_oneReg {
    ///////////////////////////////////////////////////////////
    #define   GET32oneReg_0x00000000(r32)                      _BFGET_(r32,31, 0)
    #define   SET32oneReg_0x00000000(r32,v)                    _BFSET_(r32,31, 0,v)

            UNSG32 u_0x00000000                                : 32;
    ///////////////////////////////////////////////////////////
    } SIE_oneReg;

    ///////////////////////////////////////////////////////////
     SIGN32 oneReg_drvrd(SIE_oneReg *p, UNSG32 base, SIGN32 mem, SIGN32 tst);
     SIGN32 oneReg_drvwr(SIE_oneReg *p, UNSG32 base, SIGN32 mem, SIGN32 tst, UNSG32 *pcmd);
       void oneReg_reset(SIE_oneReg *p);
     SIGN32 oneReg_cmp  (SIE_oneReg *p, SIE_oneReg *pie, char *pfx, void *hLOG, SIGN32 mem, SIGN32 tst);
    #define oneReg_check(p,pie,pfx,hLOG) oneReg_cmp(p,pie,pfx,(void*)(hLOG),0,0)
    #define oneReg_print(p,    pfx,hLOG) oneReg_cmp(p,0,  pfx,(void*)(hLOG),0,0)

#endif
//////
/// ENDOFINTERFACE: oneReg
////////////////////////////////////////////////////////////

//////
/// 
/// $INTERFACE PTP_REG                                  (4,4)
///     # # ----------------------------------------------------------
///     @ 0x00000                      (P)
///     # 0x00000 dummy                
///               $oneReg              dummy             REG    [8192]
///     # # ----------------------------------------------------------
/// $ENDOFINTERFACE  # size:   32768B, bits:  262144b, padding:     0B
////////////////////////////////////////////////////////////
#ifndef h_PTP_REG
#define h_PTP_REG (){}

    #define     RA_PTP_REG_dummy                               0x0000
    ///////////////////////////////////////////////////////////

    typedef struct SIE_PTP_REG {
    ///////////////////////////////////////////////////////////
              SIE_oneReg                                       ie_dummy[8192];
    ///////////////////////////////////////////////////////////
    } SIE_PTP_REG;

    ///////////////////////////////////////////////////////////
     SIGN32 PTP_REG_drvrd(SIE_PTP_REG *p, UNSG32 base, SIGN32 mem, SIGN32 tst);
     SIGN32 PTP_REG_drvwr(SIE_PTP_REG *p, UNSG32 base, SIGN32 mem, SIGN32 tst, UNSG32 *pcmd);
       void PTP_REG_reset(SIE_PTP_REG *p);
     SIGN32 PTP_REG_cmp  (SIE_PTP_REG *p, SIE_PTP_REG *pie, char *pfx, void *hLOG, SIGN32 mem, SIGN32 tst);
    #define PTP_REG_check(p,pie,pfx,hLOG) PTP_REG_cmp(p,pie,pfx,(void*)(hLOG),0,0)
    #define PTP_REG_print(p,    pfx,hLOG) PTP_REG_cmp(p,0,  pfx,(void*)(hLOG),0,0)

#endif
//////
/// ENDOFINTERFACE: PTP_REG
////////////////////////////////////////////////////////////

//////
/// 
/// $INTERFACE Ptp                     biu              (4,4)
///     # # ----------------------------------------------------------
///     @ 0x00000                      (R-)
///     # 0x00000 cfgReg               
///               $PTP_REG             cfgReg            MEM          
///                                    ###
///                                    * PEX Register Space, 64KB. (Hier:3)
///                                    ###
///     @ 0x08000                      (P)
///               %unsigned 1  clkSel                    0x0
///                                    ###
///                                    * Clock Select for Video Clock.
///                                    ###
///               %%        31         # Stuffing bits...
///     @ 0x08004                      (W-)
///     #         # Stuffing bytes...
///               %% 262112
///     # # ----------------------------------------------------------
/// $ENDOFINTERFACE  # size:   65536B, bits:      33b, padding:     0B
////////////////////////////////////////////////////////////
#ifndef h_Ptp
#define h_Ptp (){}

    #define     RA_Ptp_cfgReg                                  0x0000
    ///////////////////////////////////////////////////////////

    #define     BA_Ptp_clkSel                                  0x8000
    #define     B16Ptp_clkSel                                  0x8000
    #define   LSb32Ptp_clkSel                                     0
    #define   LSb16Ptp_clkSel                                     0
    #define       bPtp_clkSel                                  1
    #define   MSK32Ptp_clkSel                                     0x00000001
    ///////////////////////////////////////////////////////////

    typedef struct SIE_Ptp {
    ///////////////////////////////////////////////////////////
              SIE_PTP_REG                                      ie_cfgReg;
    ///////////////////////////////////////////////////////////
    #define   GET32Ptp_clkSel(r32)                             _BFGET_(r32, 0, 0)
    #define   SET32Ptp_clkSel(r32,v)                           _BFSET_(r32, 0, 0,v)
    #define   GET16Ptp_clkSel(r16)                             _BFGET_(r16, 0, 0)
    #define   SET16Ptp_clkSel(r16,v)                           _BFSET_(r16, 0, 0,v)

            UNSG32 u_clkSel                                    :  1;
            UNSG32 RSVDx8000_b1                                : 31;
    ///////////////////////////////////////////////////////////
             UNSG8 RSVDx8004                                   [32764];
    ///////////////////////////////////////////////////////////
    } SIE_Ptp;

    ///////////////////////////////////////////////////////////
     SIGN32 Ptp_drvrd(SIE_Ptp *p, UNSG32 base, SIGN32 mem, SIGN32 tst);
     SIGN32 Ptp_drvwr(SIE_Ptp *p, UNSG32 base, SIGN32 mem, SIGN32 tst, UNSG32 *pcmd);
       void Ptp_reset(SIE_Ptp *p);
     SIGN32 Ptp_cmp  (SIE_Ptp *p, SIE_Ptp *pie, char *pfx, void *hLOG, SIGN32 mem, SIGN32 tst);
    #define Ptp_check(p,pie,pfx,hLOG) Ptp_cmp(p,pie,pfx,(void*)(hLOG),0,0)
    #define Ptp_print(p,    pfx,hLOG) Ptp_cmp(p,0,  pfx,(void*)(hLOG),0,0)

#endif
//////
/// ENDOFINTERFACE: Ptp
////////////////////////////////////////////////////////////



#ifdef __cplusplus
  }
#endif
#pragma  pack()

#endif
//////
/// ENDOFFILE: ptp.h
////////////////////////////////////////////////////////////
