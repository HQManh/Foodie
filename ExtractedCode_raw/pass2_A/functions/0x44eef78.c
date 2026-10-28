// rea decompile_all
// name: CW.Common.CwInput$$.cctor
// address: 0x44eef78
// body: available
// range: 0x44eef78-0x44efac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44efabc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44efac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CW_Common_CwInput___cctor(void)

{
  long lVar1;
  
  if ((DAT_0951840f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183148);
    FUN_03f5c2a4(&DAT_0919e840);
    FUN_03f5c2a4(&DAT_0919e838);
    FUN_03f5c2a4(&DAT_09176778);
    DAT_0951840f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176778);
  FUN_06f2fb54(lVar1,DAT_0919e838);
  if (lVar1 != 0) {
    FUN_06f308f8(lVar1,8,0x41,DAT_0919e840);
    FUN_06f308f8(lVar1,9,3,DAT_0919e840);
    FUN_06f308f8(lVar1,0xc,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0xd,2,DAT_0919e840);
    FUN_06f308f8(lVar1,0x13,0x4c,DAT_0919e840);
    FUN_06f308f8(lVar1,0x1b,0x3c,DAT_0919e840);
    FUN_06f308f8(lVar1,0x20,1,DAT_0919e840);
    FUN_06f308f8(lVar1,0x21,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x22,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x23,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x24,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x25,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x26,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x27,5,DAT_0919e840);
    FUN_06f308f8(lVar1,0x28,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x29,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x2a,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x2b,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x2c,7,DAT_0919e840);
    FUN_06f308f8(lVar1,0x2d,0xd,DAT_0919e840);
    FUN_06f308f8(lVar1,0x2e,8,DAT_0919e840);
    FUN_06f308f8(lVar1,0x2f,9,DAT_0919e840);
    FUN_06f308f8(lVar1,0x31,0x29,DAT_0919e840);
    FUN_06f308f8(lVar1,0x32,0x2a,DAT_0919e840);
    FUN_06f308f8(lVar1,0x33,0x2b,DAT_0919e840);
    FUN_06f308f8(lVar1,0x34,0x2c,DAT_0919e840);
    FUN_06f308f8(lVar1,0x35,0x2d,DAT_0919e840);
    FUN_06f308f8(lVar1,0x36,0x2e,DAT_0919e840);
    FUN_06f308f8(lVar1,0x37,0x2f,DAT_0919e840);
    FUN_06f308f8(lVar1,0x38,0x30,DAT_0919e840);
    FUN_06f308f8(lVar1,0x39,0x31,DAT_0919e840);
    FUN_06f308f8(lVar1,0x30,0x32,DAT_0919e840);
    FUN_06f308f8(lVar1,0x3a,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x3b,6,DAT_0919e840);
    FUN_06f308f8(lVar1,0x3c,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x3d,0xe,DAT_0919e840);
    FUN_06f308f8(lVar1,0x3e,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x3f,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x40,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x5b,0xb,DAT_0919e840);
    FUN_06f308f8(lVar1,0x5c,10,DAT_0919e840);
    FUN_06f308f8(lVar1,0x5d,0xc,DAT_0919e840);
    FUN_06f308f8(lVar1,0x5e,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x5f,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x60,4,DAT_0919e840);
    FUN_06f308f8(lVar1,0x61,0xf,DAT_0919e840);
    FUN_06f308f8(lVar1,0x62,0x10,DAT_0919e840);
    FUN_06f308f8(lVar1,99,0x11,DAT_0919e840);
    FUN_06f308f8(lVar1,100,0x12,DAT_0919e840);
    FUN_06f308f8(lVar1,0x65,0x13,DAT_0919e840);
    FUN_06f308f8(lVar1,0x66,0x14,DAT_0919e840);
    FUN_06f308f8(lVar1,0x67,0x15,DAT_0919e840);
    FUN_06f308f8(lVar1,0x68,0x16,DAT_0919e840);
    FUN_06f308f8(lVar1,0x69,0x17,DAT_0919e840);
    FUN_06f308f8(lVar1,0x6a,0x18,DAT_0919e840);
    FUN_06f308f8(lVar1,0x6b,0x19,DAT_0919e840);
    FUN_06f308f8(lVar1,0x6c,0x1a,DAT_0919e840);
    FUN_06f308f8(lVar1,0x6d,0x1b,DAT_0919e840);
    FUN_06f308f8(lVar1,0x6e,0x1c,DAT_0919e840);
    FUN_06f308f8(lVar1,0x6f,0x1d,DAT_0919e840);
    FUN_06f308f8(lVar1,0x70,0x1e,DAT_0919e840);
    FUN_06f308f8(lVar1,0x71,0x1f,DAT_0919e840);
    FUN_06f308f8(lVar1,0x72,0x20,DAT_0919e840);
    FUN_06f308f8(lVar1,0x73,0x21,DAT_0919e840);
    FUN_06f308f8(lVar1,0x74,0x22,DAT_0919e840);
    FUN_06f308f8(lVar1,0x75,0x23,DAT_0919e840);
    FUN_06f308f8(lVar1,0x76,0x24,DAT_0919e840);
    FUN_06f308f8(lVar1,0x77,0x25,DAT_0919e840);
    FUN_06f308f8(lVar1,0x78,0x26,DAT_0919e840);
    FUN_06f308f8(lVar1,0x79,0x27,DAT_0919e840);
    FUN_06f308f8(lVar1,0x7a,0x28,DAT_0919e840);
    FUN_06f308f8(lVar1,0x7b,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x7c,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x7d,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x7e,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x7f,0x47,DAT_0919e840);
    FUN_06f308f8(lVar1,0x100,0x54,DAT_0919e840);
    FUN_06f308f8(lVar1,0x101,0x55,DAT_0919e840);
    FUN_06f308f8(lVar1,0x102,0x56,DAT_0919e840);
    FUN_06f308f8(lVar1,0x103,0x57,DAT_0919e840);
    FUN_06f308f8(lVar1,0x104,0x58,DAT_0919e840);
    FUN_06f308f8(lVar1,0x105,0x59,DAT_0919e840);
    FUN_06f308f8(lVar1,0x106,0x5a,DAT_0919e840);
    FUN_06f308f8(lVar1,0x107,0x5b,DAT_0919e840);
    FUN_06f308f8(lVar1,0x108,0x5c,DAT_0919e840);
    FUN_06f308f8(lVar1,0x109,0x5d,DAT_0919e840);
    FUN_06f308f8(lVar1,0x10a,0x52,DAT_0919e840);
    FUN_06f308f8(lVar1,0x10b,0x4e,DAT_0919e840);
    FUN_06f308f8(lVar1,0x10c,0x4f,DAT_0919e840);
    FUN_06f308f8(lVar1,0x10d,0x51,DAT_0919e840);
    FUN_06f308f8(lVar1,0x10e,0x50,DAT_0919e840);
    FUN_06f308f8(lVar1,0x10f,0x4d,DAT_0919e840);
    FUN_06f308f8(lVar1,0x110,0x53,DAT_0919e840);
    FUN_06f308f8(lVar1,0x111,0x3f,DAT_0919e840);
    FUN_06f308f8(lVar1,0x112,0x40,DAT_0919e840);
    FUN_06f308f8(lVar1,0x113,0x3e,DAT_0919e840);
    FUN_06f308f8(lVar1,0x114,0x3d,DAT_0919e840);
    FUN_06f308f8(lVar1,0x115,0x46,DAT_0919e840);
    FUN_06f308f8(lVar1,0x116,0x44,DAT_0919e840);
    FUN_06f308f8(lVar1,0x117,0x45,DAT_0919e840);
    FUN_06f308f8(lVar1,0x118,0x43,DAT_0919e840);
    FUN_06f308f8(lVar1,0x119,0x42,DAT_0919e840);
    FUN_06f308f8(lVar1,0x11a,0x5e,DAT_0919e840);
    FUN_06f308f8(lVar1,0x11b,0x5f,DAT_0919e840);
    FUN_06f308f8(lVar1,0x11c,0x60,DAT_0919e840);
    FUN_06f308f8(lVar1,0x11d,0x61,DAT_0919e840);
    FUN_06f308f8(lVar1,0x11e,0x62,DAT_0919e840);
    FUN_06f308f8(lVar1,0x11f,99,DAT_0919e840);
    FUN_06f308f8(lVar1,0x120,100,DAT_0919e840);
    FUN_06f308f8(lVar1,0x121,0x65,DAT_0919e840);
    FUN_06f308f8(lVar1,0x122,0x66,DAT_0919e840);
    FUN_06f308f8(lVar1,0x123,0x67,DAT_0919e840);
    FUN_06f308f8(lVar1,0x124,0x68,DAT_0919e840);
    FUN_06f308f8(lVar1,0x125,0x69,DAT_0919e840);
    FUN_06f308f8(lVar1,0x126,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x127,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x128,0,DAT_0919e840);
    FUN_06f308f8(lVar1,300,0x49,DAT_0919e840);
    FUN_06f308f8(lVar1,0x12d,0x48,DAT_0919e840);
    FUN_06f308f8(lVar1,0x12e,0x4b,DAT_0919e840);
    FUN_06f308f8(lVar1,0x12f,0x34,DAT_0919e840);
    FUN_06f308f8(lVar1,0x130,0x33,DAT_0919e840);
    FUN_06f308f8(lVar1,0x131,0x38,DAT_0919e840);
    FUN_06f308f8(lVar1,0x132,0x37,DAT_0919e840);
    FUN_06f308f8(lVar1,0x133,0x36,DAT_0919e840);
    FUN_06f308f8(lVar1,0x134,0x35,DAT_0919e840);
    FUN_06f308f8(lVar1,0x135,0x3a,DAT_0919e840);
    FUN_06f308f8(lVar1,0x136,0x39,DAT_0919e840);
    FUN_06f308f8(lVar1,0x137,0x39,DAT_0919e840);
    FUN_06f308f8(lVar1,0x138,0x3a,DAT_0919e840);
    FUN_06f308f8(lVar1,0x139,0x36,DAT_0919e840);
    FUN_06f308f8(lVar1,0x13b,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x13c,0x4a,DAT_0919e840);
    FUN_06f308f8(lVar1,0x13d,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x13e,0,DAT_0919e840);
    FUN_06f308f8(lVar1,0x13f,0x3b,DAT_0919e840);
    **(long **)(DAT_09183148 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183148 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

