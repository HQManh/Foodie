// rea decompile_all
// name: CakeOrder.DataSO.MapUpgradeConfig$$CountBuiltItems
// address: 0x42fc81c
// body: available
// range: 0x42fc81c-0x42fcae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42fca34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fcac8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fcacc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fcad0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42fcae0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042fcadc) */

int CakeOrder_DataSO_MapUpgradeConfig__CountBuiltItems(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  
  if ((DAT_09517527 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091a86e8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a378);
    FUN_03f5c2a4(&DAT_0917aa18);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09517527 = 1;
  }
  lVar2 = CakeOrder_DataSO_MapUpgradeConfig__GetBoughtLookup(param_1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x20) == 0) {
      return 0;
    }
    plVar3 = (long *)CakeOrder_DataSO_MapUpgradeConfig__EnumerateAllParts(param_1);
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a378) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_042fc918;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a378,0);
LAB_042fc918:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (plVar3 != (long *)0x0) {
        iVar8 = 0;
        do {
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_042fc9a0;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_042fc9a0:
          uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar3 == (long *)0x0) {
              return iVar8;
            }
            lVar2 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
            if (uVar6 == 0) goto LAB_042fca80;
            piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            goto LAB_042fca68;
          }
          if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917aa18) {
                puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_042fca04;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917aa18,0);
LAB_042fca04:
          lVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = FUN_053ebc3c(lVar2,*(undefined8 *)(lVar5 + 0x18),DAT_091a86c8);
          iVar8 = iVar8 + (uVar1 & 1);
        } while (plVar3 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_042fca68:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_042fca9c;
    }
  }
LAB_042fca80:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_042fca9c:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return iVar8;
}

