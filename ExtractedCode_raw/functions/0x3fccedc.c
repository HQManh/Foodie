// rea decompile_all
// name: FUN_03fccedc
// address: 0x3fccedc
// body: available
// range: 0x3fccedc-0x3fcd05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fccedc(ulong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar4 = param_1 + 0xfff;
  if (0xfffffffffffff000 < param_1) {
    uVar4 = 0xffffffffffffffff;
  }
  if ((long)uVar4 < 0) {
    return 0;
  }
  uVar7 = uVar4 >> 0xc;
  if (0x20 < uVar7) {
    if (uVar4 >> 0x14 == 0) {
      uVar7 = (ulong)(((int)uVar7 - 0x20U >> 3) + 0x20);
    }
    else {
      uVar7 = 0x3c;
    }
  }
  lVar2 = FUN_03fcddc0(param_1,param_2,param_3,uVar7 & 0xffffffff,0);
  if (lVar2 != 0) {
    return lVar2;
  }
  if (DAT_09748124 == 0 && DAT_09748500 == 0) {
    uVar5 = 1;
    uVar3 = 0x3c;
    if ((DAT_09535be8 - DAT_09535c08 < DAT_09535bf0) || (DAT_097480f0 != 0)) goto LAB_03fccf70;
    iVar1 = FUN_03fce274();
    if (iVar1 == 0) goto LAB_03fccf68;
    if (DAT_09535c48 <= DAT_09535be8 >> 4) {
      uVar4 = DAT_09535c10;
      uVar6 = 0x3c;
      do {
        uVar3 = uVar6;
        if (uVar3 == 0) break;
        uVar4 = (&DAT_09748310)[uVar3] + uVar4;
        uVar6 = uVar3 - 1;
      } while (uVar4 < DAT_09535c18);
      uVar5 = 1;
      if (0 < (int)uVar3) {
        uVar5 = 2;
      }
      goto LAB_03fccf70;
    }
    uVar3 = 0;
  }
  else {
LAB_03fccf68:
    uVar3 = 0x3c;
  }
  uVar5 = 1;
LAB_03fccf70:
  uVar6 = (uint)uVar7;
  if (uVar6 < 0x20) {
    uVar6 = uVar6 + 1;
  }
  if ((int)uVar6 <= (int)uVar3) {
    do {
      lVar2 = FUN_03fcddc0(param_1,param_2,param_3,uVar6,uVar5);
      if (lVar2 != 0) {
        return lVar2;
      }
      uVar6 = uVar6 + 1;
    } while (uVar3 + 1 != uVar6);
  }
  return 0;
}

