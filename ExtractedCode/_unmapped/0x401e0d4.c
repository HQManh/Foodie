// rea decompile_all
// name: std::__ndk1::ctype<char>::do_widen
// address: 0x401e0d4
// body: available
// range: 0x401e0d4-0x401e1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ctype<char>::do_widen(char const*, char const*, char*) const */

char * __thiscall
std::__ndk1::ctype<char>::do_widen(ctype<char> *this,char *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar2 = (long)param_2 - (long)param_1;
  if ((7 < uVar2) && (0x1f < (ulong)((long)param_3 - (long)param_1))) {
    if (uVar2 < 0x20) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar2 & 0xffffffffffffffe0;
      pcVar4 = param_1 + 0x10;
      pcVar3 = param_3 + 0x10;
      uVar7 = uVar5;
      do {
        pcVar1 = pcVar4 + -8;
        uVar8 = *(undefined8 *)(pcVar4 + -0x10);
        uVar10 = *(undefined8 *)(pcVar4 + 8);
        uVar9 = *(undefined8 *)pcVar4;
        uVar7 = uVar7 - 0x20;
        pcVar4 = pcVar4 + 0x20;
        *(undefined8 *)(pcVar3 + -8) = *(undefined8 *)pcVar1;
        *(undefined8 *)(pcVar3 + -0x10) = uVar8;
        *(undefined8 *)(pcVar3 + 8) = uVar10;
        *(undefined8 *)pcVar3 = uVar9;
        pcVar3 = pcVar3 + 0x20;
      } while (uVar7 != 0);
      if (uVar2 == uVar5) {
        return param_2;
      }
      if ((uVar2 & 0x18) == 0) {
        param_1 = param_1 + uVar5;
        param_3 = param_3 + uVar5;
        goto LAB_0401e18c;
      }
    }
    uVar7 = uVar2 & 0xfffffffffffffff8;
    lVar6 = uVar5 - uVar7;
    pcVar4 = param_1 + uVar5;
    pcVar3 = param_3 + uVar5;
    do {
      lVar6 = lVar6 + 8;
      *(undefined8 *)pcVar3 = *(undefined8 *)pcVar4;
      pcVar4 = pcVar4 + 8;
      pcVar3 = pcVar3 + 8;
    } while (lVar6 != 0);
    param_3 = param_3 + uVar7;
    param_1 = param_1 + uVar7;
    if (uVar2 == uVar7) {
      return param_2;
    }
  }
LAB_0401e18c:
  do {
    pcVar4 = param_1 + 1;
    *param_3 = *param_1;
    param_3 = param_3 + 1;
    param_1 = pcVar4;
  } while (pcVar4 != param_2);
  return param_2;
}

