// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$TryRefineInPlace
// address: 0x40fe5c8
// body: available
// range: 0x40fe5c8-0x40fe7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40fe7b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40fe7b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStation__TryRefineInPlace(long *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint local_34;
  
  if ((DAT_09516160 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516160 = 1;
  }
  lVar6 = param_1[0xd];
  local_34 = 0;
  if (lVar6 != 0) {
    if ((((*(char *)(lVar6 + 0x50) == '\0') || (*(int *)(lVar6 + 0x58) != 1)) ||
        ((char)param_1[0x12] != '\0')) ||
       ((*(char *)((long)param_1 + 0x91) != '\0' ||
        (uVar4 = AnhPD_FoodOrder_CookingStation__get_IsViewIntakeBusy(param_1), (uVar4 & 1) != 0))))
    {
      return;
    }
    if (param_1[0xc] != 0) {
      uVar1 = *(uint *)(param_1[0xc] + 0x14);
      uVar5 = (**(code **)(*param_1 + 0x228))(param_1,uVar1,*(undefined8 *)(*param_1 + 0x230));
      uVar4 = AnhPD_FoodOrder_CookingStation__TryGetAcceptingGroup(param_1,uVar5,&local_34);
      uVar3 = local_34;
      if ((uVar4 & 1) == 0) {
        return;
      }
      if (local_34 == uVar1) {
        return;
      }
      lVar6 = param_1[0xb];
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar6 + (long)(int)local_34 * 8 + 0x20);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) != 0) {
            return;
          }
          uVar7 = **(undefined8 **)(DAT_091881a0 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar4 & 1) == 0) {
            return;
          }
          if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
            lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
            if (lVar6 == 0) {
              return;
            }
            uVar7 = (**(code **)(*param_1 + 0x228))(param_1,uVar3,*(undefined8 *)(*param_1 + 0x230))
            ;
            uVar4 = AnhPD_FoodOrder_LevelInfo__WantsRefineInPlace(lVar6,uVar7,0);
            if ((uVar4 & 1) == 0) {
              return;
            }
            lVar6 = param_1[0xd];
            if ((lVar6 != 0) && (*(long *)(lVar6 + 0x10) != 0)) {
              cVar2 = *(char *)(lVar6 + 0x50);
              *(undefined1 *)(*(long *)(lVar6 + 0x10) + 0x11) = 1;
              if (cVar2 != '\0') {
                AnhPD_FoodOrder_StationOrchestrator__PumpPending();
              }
              uVar4 = (**(code **)(*param_1 + 0x1a8))
                                (param_1,uVar5,*(undefined8 *)(*param_1 + 0x1b0));
              if ((uVar4 & 0x8000000080000000) == 0) {
                if (uVar3 == (uint)uVar4) {
                    /* WARNING: Could not recover jumptable at 0x040fe79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*param_1 + 0x1f8))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x200));
                  return;
                }
                return;
              }
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

