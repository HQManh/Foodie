// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$Finish
// address: 0x41dd36c
// body: available
// range: 0x41dd36c-0x41dd617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dd610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dd614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__Finish(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_68;
  undefined8 *puStack_60;
  long *local_58;
  undefined8 local_50;
  undefined8 *puStack_48;
  long *local_40;
  
  if ((DAT_09516acd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac060);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516acd = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  lVar3 = *(long *)(param_1 + 0x68);
  local_40 = (long *)0x0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if (lVar3 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar3,0,0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x68),0);
  lVar3 = *(long *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    DG_Tweening_TweenExtensions__Kill(lVar3,0,0);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0xa8),0);
  AnhPD_FoodOrder_AutoCompleteOrderFx__DespawnPlate(param_1);
  AnhPD_FoodOrder_AutoCompleteOrderFx__StopTornado(param_1);
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    AnhPD_FoodOrder_ServeService__Release(*(long *)(param_1 + 0x28),*puVar5,0);
    *puVar5 = 0;
    thunk_FUN_03f5d7b8(puVar5,0);
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
    uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
    if ((uVar4 & 1) != 0) {
      if ((lVar3 == 0) || (*(long *)(lVar3 + 0x58) == 0)) goto LAB_041dd614;
      Utilities_BoolModifierWithRegisteredSource__RemoveModifier(*(long *)(lVar3 + 0x58),0x3ef,0);
      if (*(int *)(lVar3 + 0x50) < 5) {
        if (*(long *)(param_1 + 0x50) == 0) goto LAB_041dd614;
        FUN_057e185c(&local_68,*(long *)(param_1 + 0x50),DAT_091ac068);
        puStack_48 = puStack_60;
        local_50 = local_68;
        local_40 = local_58;
        local_68 = 0;
        puStack_60 = &local_50;
        while (uVar4 = FUN_071bd28c(&local_50,DAT_091a27d0), plVar2 = local_40, (uVar4 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(plVar2,0);
          if ((uVar4 & 1) != 0) {
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            (**(code **)(*plVar2 + 0x2a8))(plVar2,0,*(undefined8 *)(*plVar2 + 0x2b0));
          }
        }
        FUN_071bd288(&local_50,DAT_091a27c8);
      }
    }
    lVar3 = *(long *)(param_1 + 0x50);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      }
      lVar3 = *(long *)(param_1 + 0x48);
      *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_1 + 0x40);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
      }
      return;
    }
  }
LAB_041dd614:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

