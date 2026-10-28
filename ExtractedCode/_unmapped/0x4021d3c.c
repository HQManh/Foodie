// rea decompile_all
// name: std::__ndk1::__codecvt_utf16<wchar_t,true>::do_out
// address: 0x4021d3c
// body: available
// range: 0x4021d3c-0x4021e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf16<wchar_t, true>::do_out(mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

undefined8 __thiscall
std::__ndk1::__codecvt_utf16<wchar_t,true>::do_out
          (__codecvt_utf16<wchar_t,true> *this,mbstate_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  int iVar1;
  wchar_t wVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x18);
  if (((byte)this[0x20] >> 1 & 1) != 0) {
    if ((long)param_6 - (long)param_5 < 2) {
LAB_04021d58:
      *param_4 = param_2;
      *param_7 = param_5;
      return 1;
    }
    param_5[0] = -1;
    param_5[1] = -2;
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
    if ((wVar2 & 0xffff0000U) == 0) {
      if ((long)param_6 - (long)param_5 < 2) goto LAB_04021d58;
      pbVar3 = (byte *)(param_5 + 2);
      *(short *)param_5 = (short)wVar2;
    }
    else {
      if ((long)param_6 - (long)param_5 < 4) goto LAB_04021d58;
      param_5[2] = (byte)wVar2;
      iVar1 = ((uint)wVar2 >> 10 & 0x7c0) + 0x3fc0;
      param_5[3] = (byte)((uint)wVar2 >> 8) & 3 | 0xdc;
      pbVar3 = (byte *)(param_5 + 4);
      *param_5 = (byte)iVar1 | (byte)((uint)wVar2 >> 10) & 0x3f;
      param_5[1] = (byte)((uint)iVar1 >> 8) | 0xd8;
    }
    param_2 = param_2 + 1;
    param_5 = (char *)pbVar3;
  } while( true );
}

