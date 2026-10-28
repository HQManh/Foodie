// rea decompile_all
// name: std::__ndk1::__codecvt_utf8<char16_t>::do_in
// address: 0x402155c
// body: available
// range: 0x402155c-0x40216fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf8<char16_t>::do_in(mbstate_t&, char const*, char const*, char const*&,
   char16_t*, char16_t*, char16_t*&) const */

bool __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_in
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar16 *param_5,wchar16 *param_6,wchar16 **param_7)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  wchar16 *pwVar6;
  wchar16 *pwVar7;
  ulong uVar8;
  byte bVar9;
  wchar16 wVar10;
  ulong uVar11;
  long lVar12;
  
  if ((((2 < (long)param_3 - (long)param_2) && ((*(uint *)(this + 0x18) >> 2 & 1) != 0)) &&
      (*param_2 == -0x11)) && (param_2[1] == -0x45)) {
    lVar12 = 3;
    if (param_2[2] != -0x41) {
      lVar12 = 0;
    }
    param_2 = param_2 + lVar12;
  }
  if (param_3 <= param_2) {
    *param_4 = param_2;
    *param_7 = param_5;
    return false;
  }
  uVar8 = *(ulong *)(this + 0x10);
  do {
    pwVar6 = param_5;
    pwVar7 = pwVar6;
    if (param_6 <= pwVar6) break;
    bVar5 = *param_2;
    uVar1 = (uint)bVar5;
    wVar10 = (wchar16)bVar5;
    if ((char)bVar5 < '\0') {
      if (uVar1 < 0xc2) goto LAB_040216b4;
      if (uVar1 < 0xe0) {
        if ((long)param_3 - (long)param_2 < 2) goto LAB_040216ec;
        if (((param_2[1] & 0xc0U) != 0x80) ||
           (uVar2 = (ulong)(byte)param_2[1] & 0x3f | ((ulong)uVar1 & 0x1f) << 6, uVar8 < uVar2))
        goto LAB_040216b4;
        wVar10 = (wchar16)uVar2;
        lVar12 = 2;
        goto LAB_040215b4;
      }
      if (0xef < uVar1) goto LAB_040216b4;
      if ((long)param_3 - (long)param_2 < 2) goto LAB_040216ec;
      bVar4 = param_2[1];
      if (uVar1 == 0xed) {
        bVar9 = bVar4 & 0xe0;
LAB_04021680:
        if (bVar9 != 0x80) goto LAB_040216b4;
      }
      else {
        if (uVar1 != 0xe0) {
          bVar9 = bVar4 & 0xc0;
          goto LAB_04021680;
        }
        if ((bVar4 & 0xe0) != 0xa0) goto LAB_040216b4;
      }
      if ((long)param_3 - (long)param_2 == 2) {
LAB_040216ec:
        *param_4 = param_2;
        *param_7 = pwVar6;
        return true;
      }
      if (((param_2[2] & 0xc0U) != 0x80) ||
         (uVar11 = (ulong)bVar5 << 0xc, uVar2 = ((ulong)bVar4 & 0x3f) << 6,
         uVar3 = (ulong)(byte)param_2[2] & 0x3f,
         wVar10 = (ushort)uVar11 | (ushort)uVar2 | (ushort)uVar3,
         uVar8 < (uVar11 & 0xffc0 | uVar2 | uVar3))) {
LAB_040216b4:
        *param_4 = param_2;
        *param_7 = pwVar6;
        return (bool)2;
      }
      lVar12 = 3;
    }
    else {
      if (uVar8 < bVar5) goto LAB_040216b4;
      lVar12 = 1;
    }
LAB_040215b4:
    param_2 = param_2 + lVar12;
    *pwVar6 = wVar10;
    param_5 = pwVar6 + 1;
    pwVar7 = pwVar6 + 1;
  } while (param_2 < param_3);
  *param_4 = param_2;
  *param_7 = pwVar7;
  return param_6 <= pwVar6;
}

