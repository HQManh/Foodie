// rea decompile_all
// name: FUN_03f945d4
// address: 0x3f945d4
// body: available
// range: 0x3f945d4-0x3f9474f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f945d4(code *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  int local_78 [3];
  uint local_6c;
  undefined4 uStack_68;
  
  if (DAT_09534f78 != 0) {
    lVar8 = 0;
    uVar9 = 0;
    lVar3 = 0;
    lVar6 = 0;
    do {
      lVar5 = *(long *)(DAT_09534f70 + lVar8);
      lVar1 = lVar3;
      lVar7 = lVar6;
      if (((lVar5 != 0) &&
          (lVar1 = thunk_FUN_03facaac(*(undefined8 *)(DAT_09534f70 + lVar8 + 8)), lVar7 = lVar5,
          lVar6 != 0)) && (lVar3 != 0)) {
        local_90 = (int)lVar5 - (int)lVar6;
        if (4999 < local_90) {
          local_90 = 5000;
        }
        local_98 = lVar6;
        uVar2 = FUN_03f94100(lVar6,local_78);
        if ((uVar2 & 1) == 0) {
          local_88 = 0;
          local_80 = 0;
        }
        else {
          local_88 = DAT_09534ef0 + (ulong)local_6c;
          local_80 = uStack_68;
        }
        (*param_1)(lVar3,&local_98,param_2);
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
      lVar3 = lVar1;
      lVar6 = lVar7;
    } while (uVar9 < DAT_09534f78);
    if ((lVar7 != 0) && (lVar1 != 0)) {
      iVar4 = 5000;
      uVar9 = FUN_03f87dc0();
      if ((uVar9 & 1) != 0) {
        FUN_03f87e10(&local_98,local_78);
        iVar4 = local_78[0] - (int)lVar7;
        if (4999 < iVar4) {
          iVar4 = 5000;
        }
      }
      local_98 = lVar7;
      local_90 = iVar4;
      uVar9 = FUN_03f94100(lVar7,local_78);
      if ((uVar9 & 1) == 0) {
        local_88 = 0;
        local_80 = 0;
      }
      else {
        local_88 = DAT_09534ef0 + (ulong)local_6c;
        local_80 = uStack_68;
      }
      (*param_1)(lVar1,&local_98,param_2);
    }
  }
  return;
}

