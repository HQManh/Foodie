// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$Park
// address: 0x4233840
// body: available
// range: 0x4233840-0x4233b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4233b64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__Park
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_28;
  undefined4 local_24;
  
  if ((DAT_09516dd4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09183cf0);
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091ac6a8);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_0918cb68);
    FUN_03f5c2a4(&DAT_09220a98);
    FUN_03f5c2a4(&DAT_09226578);
    FUN_03f5c2a4(&DAT_09220a90);
    FUN_03f5c2a4(&DAT_09213fa8);
    DAT_09516dd4 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_3 + 0xe0) != 0) {
    uVar2 = FUN_057e1004(*(long *)(param_3 + 0xe0),param_4,DAT_091ac6a8);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (param_4 != (long *)0x0) {
      uVar3 = (**(code **)(*param_4 + 0x1b8))(param_4,*(undefined8 *)(*param_4 + 0x1c0));
      local_24 = *(undefined4 *)((long)param_4 + 0xec);
      uVar4 = FUN_03f5c42c(DAT_09183cf0,&local_24);
      uVar3 = System_String__Format(DAT_09213fa8,uVar3,uVar4,0);
      lVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf(param_4,0);
      if (lVar5 != 0) {
        local_38 = UnityEngine_Transform__get_position(lVar5,0);
        uStack_34 = param_2;
        uVar4 = FUN_03f5c42c(DAT_0918cb68,&local_38);
        if (*(long *)(param_3 + 0xc0) != 0) {
          uVar6 = AnhPD_FoodOrder_IngCellFinder__DebugPending(*(long *)(param_3 + 0xc0));
          uVar4 = System_String__Format(DAT_09226578,uVar4,uVar6,0);
          if (*(long *)(param_3 + 0xe0) != 0) {
            local_28 = *(int *)(*(long *)(param_3 + 0xe0) + 0x18) + 1;
            uVar6 = FUN_03f5c42c(DAT_09535420,&local_28);
            uVar6 = System_String__Format(DAT_09220a90,uVar6,0);
            uVar3 = System_String__Concat(uVar3,uVar4,uVar6,0);
            if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_091835d0);
            }
            UnityEngine_Debug__LogError(uVar3,param_4,0);
            AnhPD_FoodOrder_DragItem__UnregisterCell(param_4,0);
            AnhPD_FoodOrder_DragItem__StartParkedFloat(param_4,0);
            lVar5 = DAT_091ac690;
            lVar7 = *(long *)(param_3 + 0xe0);
            if (lVar7 != 0) {
              lVar8 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar7 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = (long)param_4;
                  thunk_FUN_03f5d7b8(plVar9,param_4);
                }
                else {
                  FUN_057e0c68(lVar7,param_4,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(param_3 + 0xc0) != 0) {
                  AnhPD_FoodOrder_IngCellFinder__AddOwed(*(long *)(param_3 + 0xc0),param_4);
                  if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  AnhPD_FoodOrder_PieceLedger__Step(param_4,DAT_09220a98,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

