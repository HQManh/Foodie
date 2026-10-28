// rea decompile_all
// name: FUN_03fab084
// address: 0x3fab084
// body: available
// range: 0x3fab084-0x3fab1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fab084(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_c8 [80];
  undefined4 local_78 [2];
  long local_70;
  long lStack_68;
  
  lVar5 = DAT_09535218;
  iVar2 = *(int *)(DAT_09535220 + 0x160);
  iVar3 = *(int *)(DAT_09535220 + 0x158);
  iVar9 = iVar2;
  if (iVar2 < 0) {
    iVar9 = iVar2 + 1;
  }
  FUN_03fb03c4(param_1,(long)((iVar9 >> 1) + 1));
  FUN_03fb0f04(param_2,(long)iVar2);
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      iVar4 = 0;
      if (iVar2 != 0) {
        iVar4 = *(int *)(DAT_09535220 + 0x15c) / iVar2;
      }
      uVar6 = FUN_03f99040(lVar5 + iVar3 + (long)(iVar4 * iVar9),&DAT_0953522c);
      if (uVar6 < 0xffffffff00000000) {
        uVar8 = *(undefined8 *)(*(long *)(DAT_09535208 + 0x38) + ((long)uVar6 >> 0x20) * 8);
      }
      else {
        uVar8 = 0;
      }
      lVar1 = DAT_09535218 + *(int *)(DAT_09535220 + 0x164) + (long)(int)uVar6;
      lVar7 = FUN_03fbe574(uVar8,1);
      if ((*(long *)(lVar7 + 0x60) == 0) || ((*(ushort *)(lVar7 + 0x135) >> 3 & 1) == 0)) {
        local_78[0] = 0;
        local_70 = lVar1;
        lStack_68 = lVar7;
        FUN_03fb04dc(param_1,1);
        FUN_03fb18d8(auStack_c8,param_1,local_78);
      }
      local_78[0] = 0;
      local_70 = lVar7;
      lStack_68 = lVar1;
      FUN_03fb101c(param_2,1);
      FUN_03f5f178(auStack_c8,param_2,local_78);
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  return;
}

