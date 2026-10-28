// rea decompile_all
// name: FUN_03fa9070
// address: 0x3fa9070
// body: available
// range: 0x3fa9070-0x3fa91f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fa9070(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *local_48;
  
  uVar2 = *(ushort *)(param_2 + 0x12a);
  if (((((uint)param_3 & 0xffff) < (uint)uVar2) && (*(long *)(param_2 + 0x70) != 0)) &&
     (lVar6 = *(long *)(*(long *)(param_2 + 0x70) + 0x28), lVar6 != 0)) {
    local_48 = (long *)FUN_03fa8d98(param_1,lVar6);
    if (local_48 != (long *)0x0) {
LAB_03fa90c0:
      return param_2 + (param_3 & 0xffff) * 0x10 + 0x138;
    }
    iVar3 = (**(code **)**(undefined8 **)(param_1 + 0x10))
                      (*(undefined8 **)(param_1 + 0x10),lVar6,&local_48);
    if (-1 < iVar3) {
      uVar4 = FUN_03fa8e28(param_1,lVar6,local_48);
      plVar5 = local_48;
      if ((uVar4 & 1) == 0) {
        (**(code **)(*local_48 + 0x10))();
        plVar5 = (long *)FUN_03fa8d98(param_1,lVar6);
      }
      if (plVar5 != (long *)0x0) goto LAB_03fa90c0;
    }
  }
  if ((*(ushort *)(param_2 + 0x135) >> 0xc & 1) == 0) {
    FUN_03fae000(param_1);
    uVar4 = (ulong)*(uint *)(param_1 + 0xa0);
    if (0 < (int)*(uint *)(param_1 + 0xa0)) {
      puVar7 = (undefined8 *)(param_1 + 0x18);
      do {
        lVar6 = FUN_03fc2c84(*puVar7);
        if ((lVar6 != 0) && (lVar6 = FUN_03fa8f44(lVar6,param_2,param_3 & 0xffffffff), lVar6 != 0))
        goto LAB_03fa91d4;
        uVar4 = uVar4 - 1;
        puVar7 = puVar7 + 2;
      } while (uVar4 != 0);
    }
    uVar1 = *(uint *)(param_1 + 0xa4);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      do {
        lVar6 = FUN_03fc2c84(*(undefined8 *)(*(long *)(param_1 + 0x98) + lVar8));
        if ((lVar6 != 0) && (lVar6 = FUN_03fa8f44(lVar6,param_2,param_3 & 0xffffffff), lVar6 != 0))
        goto LAB_03fa91d4;
        lVar8 = lVar8 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar8 != 0);
    }
    if (((uint)param_3 & 0xffff) < (uint)uVar2) {
      lVar6 = param_2 + (param_3 & 0xffff) * 0x10 + 0x138;
    }
    else {
      lVar6 = 0;
    }
LAB_03fa91d4:
    FUN_03fae338(param_1);
  }
  else {
    lVar6 = 0;
  }
  return lVar6;
}

