// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$ReleaseResult
// address: 0x4101080
// body: available
// range: 0x4101080-0x41012e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41012d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41012d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41012d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41012dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41012e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStation__ReleaseResult
               (long *param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined1 local_44 [4];
  
  if ((DAT_0951616b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    DAT_0951616b = 1;
  }
  local_44[0] = 0;
  local_58 = 0;
  if (0 < param_3) {
    uVar3 = UnityEngine_Object__GetName(param_1,0);
    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189140);
    }
    local_44[0] = AnhPD_FoodOrder_PieceLedger__From(3,uVar3,param_1,0);
    uVar3 = (**(code **)(*param_1 + 0x228))(param_1,param_2,*(undefined8 *)(*param_1 + 0x230));
    iVar2 = AnhPD_FoodOrder_CookingStation__CountRegularHomes(param_1,param_2,param_3);
    iVar1 = param_3;
    if (iVar2 <= param_3) {
      iVar1 = iVar2;
    }
    uVar6 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar4 & 1) != 0) {
      if (**(long **)(DAT_091881a0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x18), lVar5 != 0)) {
        AnhPD_FoodOrder_LevelPieceBook__RecordProduced(lVar5,uVar3,param_3,0);
      }
    }
    *(int *)((long)param_1 + 0x8c) = param_3;
    if (0 < iVar1) {
      if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = **(long **)(DAT_091881a0 + 0xb8);
      UnityEngine_Transform__get_position(param_1[4],0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      AnhPD_FoodOrder_MessyController__SpawnIngredient(lVar5,uVar3,iVar1,2,param_4,0);
    }
    if (iVar2 < param_3) {
      param_3 = param_3 - iVar1;
      do {
        *(int *)((long)param_1 + 0x8c) = param_3;
        uVar4 = AnhPD_FoodOrder_CookingStation__TryPickSwapRaw(param_1,&local_58);
        if ((uVar4 & 1) == 0) {
          if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = **(long **)(DAT_091881a0 + 0xb8);
          UnityEngine_Transform__get_position(param_1[4],0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          AnhPD_FoodOrder_MessyController__SpawnIngredient(lVar5,uVar3,1,2,param_4,0);
        }
        else {
          AnhPD_FoodOrder_CookingStation__SwapResultWithRaw(param_1,uVar3,local_58,param_4);
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
    AnhPD_FoodOrder_PieceLedger_Scope__Dispose(local_44,0);
  }
  return;
}

