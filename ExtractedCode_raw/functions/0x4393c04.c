// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$DescribeDatabaseIds
// address: 0x4393c04
// body: available
// range: 0x4393c04-0x4393e1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4393e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_InGame_LevelPlayLoadAndSetupControl__DescribeDatabaseIds(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 local_14;
  
  if ((DAT_09517a4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b68);
    FUN_03f5c2a4(&DAT_091f8320);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_09226670);
    FUN_03f5c2a4(&DAT_091f82b8);
    DAT_09517a4b = 1;
  }
  uVar2 = FUN_05a8f088(DAT_091b4b68);
  if ((uVar2 & 1) == 0) {
    puVar5 = &DAT_091f82b8;
  }
  else {
    lVar3 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar4 = (long *)CakeOrder_DataSO_CakeOrderDatabaseSO__GetAllCharacterIds
                               (**(long **)(lVar3 + 0xb8),0);
    if (plVar4 != (long *)0x0) {
      lVar3 = *plVar4;
      uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_0917b3d8) {
            puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04393d3c;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b3d8,0);
LAB_04393d3c:
      iVar1 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (iVar1 != 0) {
        lVar3 = *plVar4;
        uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar2 != 0) {
          piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_0917b3d8) {
              puVar5 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04393db0;
            }
            uVar2 = uVar2 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar2 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917b3d8,0);
LAB_04393db0:
        local_14 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        uVar6 = FUN_03f5c42c(DAT_09535420,&local_14);
        uVar7 = System_String__Join(DAT_091f5a98,plVar4,0);
        uVar6 = System_String__Format(DAT_09226670,uVar6,uVar7,0);
        return uVar6;
      }
    }
    puVar5 = &DAT_091f8320;
  }
  return *puVar5;
}

