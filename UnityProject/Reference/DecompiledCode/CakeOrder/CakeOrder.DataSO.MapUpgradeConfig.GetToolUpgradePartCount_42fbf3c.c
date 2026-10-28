// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$GetToolUpgradePartCount
// address: 0x42fbf3c
// body: available
// range: 0x42fbf3c-0x42fc1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fc1c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc1cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc1d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc1d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fc1dc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042fc1d8) */

int CakeOrder_DataSO_MapUpgradeConfig__GetToolUpgradePartCount
              (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  if ((DAT_09517522 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a378);
    FUN_03f5c2a4(&DAT_0917aa18);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09517522 = 1;
  }
  uVar2 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  plVar3 = (long *)CakeOrder_DataSO_MapUpgradeConfig__EnumerateAllParts(param_1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *plVar3;
  uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar2 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a378) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_042fc018;
      }
      uVar2 = uVar2 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a378,0);
LAB_042fc018:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  iVar7 = 0;
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_042fc098;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_042fc098:
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar2 & 1) == 0) {
      if (plVar3 == (long *)0x0) {
        return iVar7;
      }
      lVar5 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 == 0) goto LAB_042fc184;
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar2 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917aa18) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_042fc0fc;
        }
        uVar2 = uVar2 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aa18,0);
LAB_042fc0fc:
    lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = CakeOrder_DataSO_BuildingUpgradePartSO__get_IsToolUpgrade(lVar5,0);
    if ((uVar2 & 1) != 0) {
      uVar1 = System_String__op_Equality(*(undefined8 *)(lVar5 + 0x50),param_2,0);
      iVar7 = iVar7 + (uVar1 & 1);
    }
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar6 = piVar6 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_042fc1a0;
    }
  }
LAB_042fc184:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_042fc1a0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return iVar7;
}

