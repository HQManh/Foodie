// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationSharedFirstOnDemand$$WantsAutoIntake
// address: 0x4103e30
// body: available
// range: 0x4103e30-0x41040b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41040a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41040a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41040a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41040ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41040b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte AnhPD_FoodOrder_CookingStationSharedFirstOnDemand__WantsAutoIntake
               (long *param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  char local_34 [4];
  
  if ((DAT_09516183 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e68);
    FUN_03f5c2a4(&DAT_0919f4a0);
    FUN_03f5c2a4(&DAT_0919f4b8);
    FUN_03f5c2a4(&DAT_0919f4d8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516183 = 1;
  }
  local_34[0] = '\0';
  iVar2 = AnhPD_FoodOrder_CookingStationSharedFirst__InteractingGroup(param_1);
  if (iVar2 < 0) {
    uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar4 & 1) != 0) {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
LAB_041040ac:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
        lVar6 = param_1[0x15];
        iVar2 = UnityEngine_Time__get_frameCount(0);
        if ((int)lVar6 != iVar2) {
          uVar3 = UnityEngine_Time__get_frameCount(0);
          *(undefined4 *)(param_1 + 0x15) = uVar3;
          if (param_1[0x16] == 0) goto LAB_041040ac;
          FUN_06f82378(param_1[0x16],DAT_0919f4a0);
          *(undefined1 *)(param_1 + 0x19) = 0;
        }
        if (param_1[0x16] == 0) goto LAB_041040ac;
        uVar4 = FUN_06f83d1c(param_1[0x16],param_2,local_34,DAT_0919f4b8);
        if ((uVar4 & 1) == 0) {
          bVar1 = 1;
          if (**(char **)(DAT_09182e68 + 0xb8) == '\0') {
            lVar6 = param_1[0xb];
            **(char **)(DAT_09182e68 + 0xb8) = '\x01';
            bVar1 = 0;
            if (lVar6 != 0) {
              uVar8 = 0;
              do {
                if (((int)*(uint *)(lVar6 + 0x18) <= (int)uVar8) || ((bVar1 & 1) != 0)) {
                  **(undefined1 **)(DAT_09182e68 + 0xb8) = 0;
                  if (param_1[0x16] == 0) goto LAB_041040ac;
                  FUN_06f821cc(param_1[0x16],param_2,bVar1 & 1,DAT_0919f4d8);
                  goto LAB_04103f88;
                }
                if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar6 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
                if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar4 = AnhPD_FoodOrder_StationInteractGroup__AcceptsId(lVar6,param_2);
                if ((uVar4 & 1) == 0) {
                  bVar1 = 0;
                }
                else {
                  if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if ((*(int *)(*(long *)(lVar6 + 0x10) + 0x18) < 2) ||
                     (iVar2 = (**(code **)(*param_1 + 0x238))
                                        (param_1,uVar8,*(undefined8 *)(*param_1 + 0x240)), 0 < iVar2
                     )) {
                    bVar1 = 1;
                  }
                  else {
                    bVar1 = AnhPD_FoodOrder_CookingStationSharedFirstOnDemand__RestOnGrid
                                      (param_1,lVar5,lVar6,param_2);
                  }
                }
                lVar6 = param_1[0xb];
                uVar8 = uVar8 + 1;
              } while (lVar6 != 0);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        else {
          bVar1 = local_34[0] != '\0';
        }
        goto LAB_04103f88;
      }
    }
  }
  bVar1 = 1;
LAB_04103f88:
  return bVar1 & 1;
}

