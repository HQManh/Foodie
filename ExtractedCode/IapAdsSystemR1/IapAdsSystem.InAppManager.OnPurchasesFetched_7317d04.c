// rea decompile_all
// name: IapAdsSystem.InAppManager$$OnPurchasesFetched
// address: 0x7317d04
// body: available
// range: 0x7317d04-0x7318147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7318068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318124 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731812c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731813c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7318144 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x073180ec) */
/* WARNING: Removing unreachable block (ram,0x07318140) */

void IapAdsSystem_InAppManager__OnPurchasesFetched(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  
  if ((DAT_09520559 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091c9b60);
    FUN_03f5c2a4(&DAT_09185728);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3d0);
    FUN_03f5c2a4(&DAT_0917aa78);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091861e0);
    FUN_03f5c2a4(&DAT_0920b1f8);
    DAT_09520559 = 1;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__Log(DAT_0920b1f8,0);
  if ((param_2 == 0) || (plVar8 = *(long **)(param_2 + 0x10), plVar8 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a3d0) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07317e38;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3d0,0);
LAB_07317e38:
  plVar8 = (long *)(*(code *)*puVar1)(plVar8,puVar1[1]);
  do {
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07317ecc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_07317ecc:
    uVar6 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar8 == (long *)0x0) goto LAB_073180e0;
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 == 0) goto LAB_073180b8;
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917aa78) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07317f30;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa78,0);
LAB_07317f30:
    lVar4 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar9 = *(long **)(lVar4 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185728) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07317f98;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185728,0);
LAB_07317f98:
    uVar2 = (*(code *)*puVar1)(plVar9,puVar1[1]);
    lVar5 = FUN_04ae45c0(uVar2,DAT_091c9b60);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x10), lVar5 != 0)) {
      lVar3 = UnityEngine_Purchasing_Product__get_definition(lVar5,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar3 + 0x28) != 0) {
        plVar9 = *(long **)(lVar4 + 0x18);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091861e0) {
              puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 4) * 0x10 + 0x138);
              goto LAB_07318028;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091861e0,4);
LAB_07318028:
        uVar2 = (*(code *)*puVar1)(plVar9,puVar1[1]);
        uVar6 = IapAdsSystem_InAppManager__ValidateProductReceipt(param_1,uVar2);
        if ((uVar6 & 1) != 0) {
          lVar4 = UnityEngine_Purchasing_Product__get_definition(lVar5,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          IapAdsSystem_InAppManager__MarkNonConsumableAsEntitled
                    (param_1,*(undefined8 *)(lVar4 + 0x18));
        }
      }
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_073180d4;
    }
  }
LAB_073180b8:
  puVar1 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_073180d4:
  (*(code *)*puVar1)(plVar8,puVar1[1]);
LAB_073180e0:
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  return;
}

