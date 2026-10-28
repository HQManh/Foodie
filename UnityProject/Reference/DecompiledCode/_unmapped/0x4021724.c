// rea decompile_all
// name: std::__ndk1::__codecvt_utf8<char16_t>::do_length
// address: 0x4021724
// body: available
// range: 0x4021724-0x402188f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__codecvt_utf8<char16_t>::do_length(mbstate_t&, char const*, char const*, unsigned
   long) const */

int __thiscall
std::__ndk1::__codecvt_utf8<char16_t>::do_length
          (__codecvt_utf8<char16_t> *this,mbstate_t *param_1,char *param_2,char *param_3,
          ulong param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  
  iVar5 = (int)param_2;
  if ((((2 < (long)param_3 - (long)param_2) && ((*(uint *)(this + 0x18) >> 2 & 1) != 0)) &&
      (*param_2 == -0x11)) && (param_2[1] == -0x45)) {
    lVar1 = 3;
    if (param_2[2] != -0x41) {
      lVar1 = 0;
    }
    param_2 = param_2 + lVar1;
  }
  if ((param_4 != 0) && (param_2 < param_3)) {
    uVar6 = *(ulong *)(this + 0x10);
    uVar7 = 1;
    do {
      bVar3 = *param_2;
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xc2) break;
        if (bVar3 < 0xe0) {
          if ((((long)param_3 - (long)param_2 < 2) || ((param_2[1] & 0xc0U) != 0x80)) ||
             (uVar6 < ((ulong)(byte)param_2[1] & 0x3f | ((ulong)bVar3 & 0x1f) << 6))) break;
          param_2 = param_2 + 2;
        }
        else {
          if ((0xef < bVar3) || ((long)param_3 - (long)param_2 < 3)) break;
          bVar2 = param_2[1];
          if (bVar3 == 0xed) {
            bVar8 = bVar2 & 0xe0;
LAB_04021848:
            if (bVar8 != 0x80) break;
          }
          else {
            if (bVar3 != 0xe0) {
              bVar8 = bVar2 & 0xc0;
              goto LAB_04021848;
            }
            if ((bVar2 & 0xe0) != 0xa0) break;
          }
          if (((param_2[2] & 0xc0U) != 0x80) ||
             (uVar6 < (((ulong)bVar3 & 0xf) << 0xc | ((ulong)bVar2 & 0x3f) << 6 |
                      (ulong)(byte)param_2[2] & 0x3f))) break;
          param_2 = param_2 + 3;
        }
      }
      else {
        if (uVar6 < bVar3) break;
        param_2 = param_2 + 1;
      }
      if ((param_3 <= param_2) || (bVar4 = param_4 <= uVar7, uVar7 = uVar7 + 1, bVar4)) break;
    } while( true );
  }
  return (int)param_2 - iVar5;
}

