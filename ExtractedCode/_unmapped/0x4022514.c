// rea decompile_all
// name: std::__ndk1::__codecvt_utf16<char32_t,false>::do_out
// address: 0x4022514
// body: available
// range: 0x4022514-0x4022607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf16<char32_t, false>::do_out(mbstate_t&, char32_t const*, char32_t
   const*, char32_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<char32_t,false>::do_out
          (__codecvt_utf16<char32_t,false> *this,mbstate_t *param_1,wchar32 *param_2,
          wchar32 *param_3,wchar32 **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar32 wVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(this + 0x10);
  if (((byte)this[0x18] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_04022530:
      *param_4 = param_2;
      *param_7 = param_5;
      return 1;
    }
    param_5[0] = -2;
    param_5[1] = -1;
    param_5 = param_5 + 2;
  }
  do {
    if (param_3 <= param_2) {
      *param_4 = param_2;
      *param_7 = param_5;
      return 0;
    }
    wVar2 = *param_2;
    if ((uint)wVar2 >> 0xb == 0x1b || uVar4 < (uint)wVar2) {
      *param_4 = param_2;
      *param_7 = param_5;
      return 2;
    }
    bVar3 = (byte)((uint)wVar2 >> 8);
    if ((uint)wVar2 >> 0x10 == 0) {
      if ((long)param_6 - (long)param_5 < 2) goto LAB_04022530;
      pbVar5 = (byte *)(param_5 + 1);
      *param_5 = bVar3;
      lVar6 = 2;
    }
    else {
      if ((long)param_6 - (long)param_5 < 4) goto LAB_04022530;
      iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
      param_5[2] = bVar3 & 3 | 0xdc;
      *param_5 = (byte)((uint)iVar1 >> 8) | 0xd8;
      lVar6 = 4;
      param_5[1] = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
      pbVar5 = (byte *)(param_5 + 3);
    }
    param_2 = param_2 + 1;
    *pbVar5 = (byte)wVar2;
    param_5 = param_5 + lVar6;
  } while( true );
}

