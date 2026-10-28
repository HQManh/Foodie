// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$SyncToolLevels
// address: 0x42fb560
// body: available
// range: 0x42fb560-0x42fba67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fba44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba5c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fba64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042fb954) */
/* WARNING: Removing unreachable block (ram,0x042fba58) */

void CakeOrder_DataSO_MapUpgradeConfig__SyncToolLevels(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong local_88;
  undefined8 local_80;
  int local_6c;
  long *local_68;
  
  if ((DAT_09517521 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a378);
    FUN_03f5c2a4(&DAT_0917aa18);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a9818);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4a60);
    DAT_09517521 = 1;
  }
  local_68 = (long *)0x0;
  local_6c = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  uVar3 = CakeOrder_DataSO_MapUpgradeConfig__get_HasTopology(param_1);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = FUN_05a8eda4(DAT_091b4a60);
  if ((uVar3 & 1) == 0) {
    return;
  }
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x40),0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar4 = CakeOrder_DataSO_MapUpgradeConfig__GetBoughtLookup(param_1);
  lVar5 = thunk_FUN_03f9944c(DAT_09176b28);
  FUN_06fc96ac(lVar5,DAT_0919f978);
  plVar6 = (long *)CakeOrder_DataSO_MapUpgradeConfig__EnumerateAllParts(param_1);
  if (plVar6 != (long *)0x0) {
    lVar8 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a378) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_042fb740;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a378,0);
LAB_042fb740:
    local_68 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    do {
      plVar6 = local_68;
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *local_68;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_042fb7d4;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_042fb7d4:
      uVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      plVar6 = local_68;
      if ((uVar3 & 1) == 0) {
        if (local_68 == (long *)0x0) goto LAB_042fb948;
        lVar4 = *local_68;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 == 0) goto LAB_042fb920;
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_042fb908;
      }
      if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *local_68;
      uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar3 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917aa18) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_042fb838;
          }
          uVar3 = uVar3 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar3 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917aa18,0);
LAB_042fb838:
      lVar8 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = CakeOrder_DataSO_BuildingUpgradePartSO__get_IsToolUpgrade(lVar8,0);
      if ((((uVar3 & 1) != 0) &&
          (uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar8 + 0x50),0), (uVar3 & 1) == 0))
         && ((param_2 == 0 ||
             (uVar3 = System_String__op_Inequality(*(undefined8 *)(lVar8 + 0x50),param_2,0),
             (uVar3 & 1) == 0)))) {
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fcbf70(lVar5,*(undefined8 *)(lVar8 + 0x50),&local_6c,DAT_0919f9c8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar10 = *(undefined8 *)(lVar8 + 0x50);
        uVar1 = FUN_053ebc3c(lVar4,*(undefined8 *)(lVar8 + 0x18),DAT_091a86c8);
        FUN_06fca434(lVar5,uVar10,local_6c + (uVar1 & 1),DAT_0919f9f0);
      }
    } while( true );
  }
  goto LAB_042fba54;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
LAB_042fb908:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar7 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_042fb93c;
    }
  }
LAB_042fb920:
  puVar7 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_042fb93c:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_042fb948:
  lVar4 = *(long *)(DAT_091b4a58 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (lVar5 != 0) {
    lVar4 = **(long **)(lVar4 + 0xb8);
    FUN_06fca844(&local_a0,lVar5,DAT_0919f9b0);
    uVar1 = 0;
    while (uVar3 = FUN_07272f90(&local_a0,DAT_091a6758), (uVar3 & 1) != 0) {
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SetToolLevel
                        (lVar4,*(undefined8 *)(param_1 + 0x40),local_90,local_88 & 0xffffffff,0);
      uVar1 = uVar1 | uVar2;
    }
    FUN_072730b4(&local_a0,DAT_091a6750);
    if ((uVar1 & 1) != 0) {
      if (lVar4 == 0) goto LAB_042fba54;
      CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData(lVar4,0);
    }
    return;
  }
LAB_042fba54:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

