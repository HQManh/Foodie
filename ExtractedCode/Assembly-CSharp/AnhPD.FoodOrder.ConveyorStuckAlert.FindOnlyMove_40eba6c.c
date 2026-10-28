// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorStuckAlert$$FindOnlyMove
// address: 0x40eba6c
// body: available
// range: 0x40eba6c-0x40ebdf3 inclusive
// range: 0x40ebe4c-0x40ebe6f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ebddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ebde0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ebde4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ebde8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ebdec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ebdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ebe6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ConveyorStuckAlert__FindOnlyMove(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_60;
  long **pplStack_58;
  long *local_48;
  
  if ((DAT_095160ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8240);
    FUN_03f5c2a4(&DAT_091a8248);
    FUN_03f5c2a4(&DAT_091a8250);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160ab = 1;
  }
  uVar2 = 0;
  local_48 = (long *)0x0;
  if ((*(char *)(param_1 + 0x1c) == '\0') && (*(char *)(param_1 + 0x1d) == '\0')) {
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_040ebe6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar2);
    }
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x18) == '\0') {
      if (DAT_0951615c == '\0') {
        FUN_03f5c2a4(&DAT_0918c128);
        DAT_0951615c = '\x01';
      }
      if (**(char **)(DAT_0918c128 + 0xb8) == '\0') {
        lVar3 = *(long *)(DAT_091b4c28 + 0x20);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
        if ((uVar2 & 1) != 0) {
          if (lVar3 == 0) goto LAB_040ebe6c;
          uVar2 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract(lVar3,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
        }
        uVar2 = 0;
        if (((*(long *)(param_1 + 0x60) == 0) ||
            (uVar2 = FUN_053ebbdc(*(long *)(param_1 + 0x60),DAT_091a8248), param_2 == 0)) ||
           (*(long *)(param_2 + 0x20) == 0)) goto LAB_040ebe6c;
        local_48 = (long *)FUN_039afee4(0,DAT_0917a3f0);
        pplStack_58 = &local_48;
        local_60 = 0;
        lVar3 = 0;
        do {
          do {
            do {
              do {
                plVar1 = local_48;
                if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar5 = *local_48;
                uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar2 != 0) {
                  piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_040ebcc8;
                    }
                    uVar2 = uVar2 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar2 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_040ebcc8:
                uVar2 = (*(code *)*puVar4)(plVar1,puVar4[1]);
                plVar1 = local_48;
                if ((uVar2 & 1) == 0) {
                  uVar2 = FUN_039aeef4(&local_60);
                  if (*(long *)(param_1 + 0x60) != 0) {
                    if (*(int *)(*(long *)(param_1 + 0x60) + 0x20) < 2) {
                      return 0;
                    }
                    return lVar3;
                  }
                  goto LAB_040ebe6c;
                }
                if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar5 = *local_48;
                uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar2 != 0) {
                  piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == DAT_0917aa98) {
                      puVar4 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                      goto LAB_040ebd2c;
                    }
                    uVar2 = uVar2 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar2 != 0);
                }
                puVar4 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917aa98,0);
LAB_040ebd2c:
                lVar5 = (*(code *)*puVar4)(plVar1,puVar4[1]);
                if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar7 = *(long *)(lVar5 + 0x10);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar2 = UnityEngine_Object__op_Implicit(lVar7,0);
              } while (((uVar2 & 1) == 0) ||
                      (uVar2 = AnhPD_FoodOrder_ConveyorSlot__get_IsAtFrontRow(lVar5,0),
                      (uVar2 & 1) == 0));
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(char *)(lVar7 + 0xd1) != '\0') goto LAB_040ebdd0;
              if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = FUN_053ec72c(*(long *)(param_1 + 0x60),lVar7,DAT_091a8240);
            } while ((uVar2 & 1) == 0);
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = AnhPD_FoodOrder_ConveyorPickup__HasMoveFor(*(long *)(param_1 + 0x10),lVar7);
          } while ((uVar2 & 1) == 0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
          lVar3 = lVar7;
        } while ((uVar2 & 1) == 0);
LAB_040ebdd0:
        FUN_039aeef4(&local_60);
      }
    }
  }
  return 0;
}

