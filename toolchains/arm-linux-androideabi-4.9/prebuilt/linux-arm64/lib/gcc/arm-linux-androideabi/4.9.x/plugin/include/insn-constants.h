/* Generated automatically by the program `genconstants'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CONSTANTS_H
#define GCC_INSN_CONSTANTS_H

#define CMP_CMP 0
#define DOM_CC_NX_OR_Y 1
#define DOM_CC_X_OR_Y 2
#define NUM_OF_COND_CMP 4
#define CC_REGNUM 100
#define WCGR3 99
#define SP_REGNUM 13
#define R1_REGNUM 1
#define PC_REGNUM 15
#define WCGR0 96
#define VFPCC_REGNUM 101
#define CMP_CMN 2
#define WCGR2 98
#define R0_REGNUM 0
#define WCGR1 97
#define CMN_CMP 1
#define LR_REGNUM 14
#define DOM_CC_X_AND_Y 0
#define CMN_CMN 3
#define IP_REGNUM 12
#define LAST_ARM_REGNUM 15

enum unspec {
  UNSPEC_PUSH_MULT = 0,
  UNSPEC_PIC_SYM = 1,
  UNSPEC_PIC_BASE = 2,
  UNSPEC_PRLG_STK = 3,
  UNSPEC_REGISTER_USE = 4,
  UNSPEC_CHECK_ARCH = 5,
  UNSPEC_WSHUFH = 6,
  UNSPEC_WACC = 7,
  UNSPEC_TMOVMSK = 8,
  UNSPEC_WSAD = 9,
  UNSPEC_WSADZ = 10,
  UNSPEC_WMACS = 11,
  UNSPEC_WMACU = 12,
  UNSPEC_WMACSZ = 13,
  UNSPEC_WMACUZ = 14,
  UNSPEC_CLRDI = 15,
  UNSPEC_WALIGNI = 16,
  UNSPEC_TLS = 17,
  UNSPEC_PIC_LABEL = 18,
  UNSPEC_PIC_OFFSET = 19,
  UNSPEC_GOT_PREL_SYM = 20,
  UNSPEC_GOTSYM_OFF = 21,
  UNSPEC_THUMB1_CASESI = 22,
  UNSPEC_RBIT = 23,
  UNSPEC_SYMBOL_OFFSET = 24,
  UNSPEC_MEMORY_BARRIER = 25,
  UNSPEC_UNALIGNED_LOAD = 26,
  UNSPEC_UNALIGNED_STORE = 27,
  UNSPEC_PIC_UNIFIED = 28,
  UNSPEC_PROLOGUE_USE = 29,
  UNSPEC_LL = 30,
  UNSPEC_VRINTZ = 31,
  UNSPEC_VRINTP = 32,
  UNSPEC_VRINTM = 33,
  UNSPEC_VRINTR = 34,
  UNSPEC_VRINTX = 35,
  UNSPEC_VRINTA = 36,
  UNSPEC_WADDC = 37,
  UNSPEC_WMADDS = 38,
  UNSPEC_WMADDU = 39,
  UNSPEC_WABS = 40,
  UNSPEC_WQMULWMR = 41,
  UNSPEC_WQMULMR = 42,
  UNSPEC_WQMULWM = 43,
  UNSPEC_WQMULM = 44,
  UNSPEC_WQMIAxyn = 45,
  UNSPEC_WQMIAxy = 46,
  UNSPEC_TANDC = 47,
  UNSPEC_TORC = 48,
  UNSPEC_TORVSC = 49,
  UNSPEC_TEXTRC = 50,
  UNSPEC_ASHIFT_SIGNED = 51,
  UNSPEC_ASHIFT_UNSIGNED = 52,
  UNSPEC_CRC32B = 53,
  UNSPEC_CRC32H = 54,
  UNSPEC_CRC32W = 55,
  UNSPEC_CRC32CB = 56,
  UNSPEC_CRC32CH = 57,
  UNSPEC_CRC32CW = 58,
  UNSPEC_AESD = 59,
  UNSPEC_AESE = 60,
  UNSPEC_AESIMC = 61,
  UNSPEC_AESMC = 62,
  UNSPEC_SHA1C = 63,
  UNSPEC_SHA1M = 64,
  UNSPEC_SHA1P = 65,
  UNSPEC_SHA1H = 66,
  UNSPEC_SHA1SU0 = 67,
  UNSPEC_SHA1SU1 = 68,
  UNSPEC_SHA256H = 69,
  UNSPEC_SHA256H2 = 70,
  UNSPEC_SHA256SU0 = 71,
  UNSPEC_SHA256SU1 = 72,
  UNSPEC_VMULLP64 = 73,
  UNSPEC_LOAD_COUNT = 74,
  UNSPEC_VABD = 75,
  UNSPEC_VABDL = 76,
  UNSPEC_VADD = 77,
  UNSPEC_VADDHN = 78,
  UNSPEC_VADDL = 79,
  UNSPEC_VADDW = 80,
  UNSPEC_VBSL = 81,
  UNSPEC_VCAGE = 82,
  UNSPEC_VCAGT = 83,
  UNSPEC_VCEQ = 84,
  UNSPEC_VCGE = 85,
  UNSPEC_VCGEU = 86,
  UNSPEC_VCGT = 87,
  UNSPEC_VCGTU = 88,
  UNSPEC_VCLS = 89,
  UNSPEC_VCONCAT = 90,
  UNSPEC_VCVT = 91,
  UNSPEC_VCVT_N = 92,
  UNSPEC_VEXT = 93,
  UNSPEC_VHADD = 94,
  UNSPEC_VHSUB = 95,
  UNSPEC_VLD1 = 96,
  UNSPEC_VLD1_LANE = 97,
  UNSPEC_VLD2 = 98,
  UNSPEC_VLD2_DUP = 99,
  UNSPEC_VLD2_LANE = 100,
  UNSPEC_VLD3 = 101,
  UNSPEC_VLD3A = 102,
  UNSPEC_VLD3B = 103,
  UNSPEC_VLD3_DUP = 104,
  UNSPEC_VLD3_LANE = 105,
  UNSPEC_VLD4 = 106,
  UNSPEC_VLD4A = 107,
  UNSPEC_VLD4B = 108,
  UNSPEC_VLD4_DUP = 109,
  UNSPEC_VLD4_LANE = 110,
  UNSPEC_VMAX = 111,
  UNSPEC_VMIN = 112,
  UNSPEC_VMLA = 113,
  UNSPEC_VMLAL = 114,
  UNSPEC_VMLA_LANE = 115,
  UNSPEC_VMLAL_LANE = 116,
  UNSPEC_VMLS = 117,
  UNSPEC_VMLSL = 118,
  UNSPEC_VMLS_LANE = 119,
  UNSPEC_VMLSL_LANE = 120,
  UNSPEC_VMOVL = 121,
  UNSPEC_VMOVN = 122,
  UNSPEC_VMUL = 123,
  UNSPEC_VMULL = 124,
  UNSPEC_VMUL_LANE = 125,
  UNSPEC_VMULL_LANE = 126,
  UNSPEC_VPADAL = 127,
  UNSPEC_VPADD = 128,
  UNSPEC_VPADDL = 129,
  UNSPEC_VPMAX = 130,
  UNSPEC_VPMIN = 131,
  UNSPEC_VPSMAX = 132,
  UNSPEC_VPSMIN = 133,
  UNSPEC_VPUMAX = 134,
  UNSPEC_VPUMIN = 135,
  UNSPEC_VQABS = 136,
  UNSPEC_VQADD = 137,
  UNSPEC_VQDMLAL = 138,
  UNSPEC_VQDMLAL_LANE = 139,
  UNSPEC_VQDMLSL = 140,
  UNSPEC_VQDMLSL_LANE = 141,
  UNSPEC_VQDMULH = 142,
  UNSPEC_VQDMULH_LANE = 143,
  UNSPEC_VQDMULL = 144,
  UNSPEC_VQDMULL_LANE = 145,
  UNSPEC_VQMOVN = 146,
  UNSPEC_VQMOVUN = 147,
  UNSPEC_VQNEG = 148,
  UNSPEC_VQSHL = 149,
  UNSPEC_VQSHL_N = 150,
  UNSPEC_VQSHLU_N = 151,
  UNSPEC_VQSHRN_N = 152,
  UNSPEC_VQSHRUN_N = 153,
  UNSPEC_VQSUB = 154,
  UNSPEC_VRECPE = 155,
  UNSPEC_VRECPS = 156,
  UNSPEC_VREV16 = 157,
  UNSPEC_VREV32 = 158,
  UNSPEC_VREV64 = 159,
  UNSPEC_VRSQRTE = 160,
  UNSPEC_VRSQRTS = 161,
  UNSPEC_VSHL = 162,
  UNSPEC_VSHLL_N = 163,
  UNSPEC_VSHL_N = 164,
  UNSPEC_VSHR_N = 165,
  UNSPEC_VSHRN_N = 166,
  UNSPEC_VSLI = 167,
  UNSPEC_VSRA_N = 168,
  UNSPEC_VSRI = 169,
  UNSPEC_VST1 = 170,
  UNSPEC_VST1_LANE = 171,
  UNSPEC_VST2 = 172,
  UNSPEC_VST2_LANE = 173,
  UNSPEC_VST3 = 174,
  UNSPEC_VST3A = 175,
  UNSPEC_VST3B = 176,
  UNSPEC_VST3_LANE = 177,
  UNSPEC_VST4 = 178,
  UNSPEC_VST4A = 179,
  UNSPEC_VST4B = 180,
  UNSPEC_VST4_LANE = 181,
  UNSPEC_VSTRUCTDUMMY = 182,
  UNSPEC_VSUB = 183,
  UNSPEC_VSUBHN = 184,
  UNSPEC_VSUBL = 185,
  UNSPEC_VSUBW = 186,
  UNSPEC_VTBL = 187,
  UNSPEC_VTBX = 188,
  UNSPEC_VTRN1 = 189,
  UNSPEC_VTRN2 = 190,
  UNSPEC_VTST = 191,
  UNSPEC_VUZP1 = 192,
  UNSPEC_VUZP2 = 193,
  UNSPEC_VZIP1 = 194,
  UNSPEC_VZIP2 = 195,
  UNSPEC_MISALIGNED_ACCESS = 196,
  UNSPEC_VCLE = 197,
  UNSPEC_VCLT = 198,
  UNSPEC_NVRINTZ = 199,
  UNSPEC_NVRINTP = 200,
  UNSPEC_NVRINTM = 201,
  UNSPEC_NVRINTX = 202,
  UNSPEC_NVRINTA = 203,
  UNSPEC_NVRINTN = 204
};
#define NUM_UNSPEC_VALUES 205
extern const char *const unspec_strings[];

enum unspecv {
  VUNSPEC_BLOCKAGE = 0,
  VUNSPEC_EPILOGUE = 1,
  VUNSPEC_THUMB1_INTERWORK = 2,
  VUNSPEC_ALIGN = 3,
  VUNSPEC_POOL_END = 4,
  VUNSPEC_POOL_1 = 5,
  VUNSPEC_POOL_2 = 6,
  VUNSPEC_POOL_4 = 7,
  VUNSPEC_POOL_8 = 8,
  VUNSPEC_POOL_16 = 9,
  VUNSPEC_TMRC = 10,
  VUNSPEC_TMCR = 11,
  VUNSPEC_ALIGN8 = 12,
  VUNSPEC_WCMP_EQ = 13,
  VUNSPEC_WCMP_GTU = 14,
  VUNSPEC_WCMP_GT = 15,
  VUNSPEC_EH_RETURN = 16,
  VUNSPEC_ATOMIC_CAS = 17,
  VUNSPEC_ATOMIC_XCHG = 18,
  VUNSPEC_ATOMIC_OP = 19,
  VUNSPEC_LL = 20,
  VUNSPEC_SC = 21,
  VUNSPEC_LAX = 22,
  VUNSPEC_SLX = 23,
  VUNSPEC_LDA = 24,
  VUNSPEC_STL = 25
};
#define NUM_UNSPECV_VALUES 26
extern const char *const unspecv_strings[];

#endif /* GCC_INSN_CONSTANTS_H */
