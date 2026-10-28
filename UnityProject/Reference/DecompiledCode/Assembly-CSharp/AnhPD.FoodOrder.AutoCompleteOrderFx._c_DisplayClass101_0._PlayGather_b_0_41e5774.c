// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx.<>c__DisplayClass101_0$$<PlayGather>b__0
// address: 0x41e5774
// body: available
// range: 0x41e5774-0x41e593f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e5930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e5934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e5938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41e593c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass101_0__<PlayGather>b__0(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_09516afe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4f88);
    FUN_03f5c2a4(&DAT_091a4f90);
    FUN_03f5c2a4(&DAT_091a4f98);
    FUN_03f5c2a4(&DAT_091b2128);
    FUN_03f5c2a4(&DAT_091b2130);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516afe = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8);
    *puVar2 = 0;
    thunk_FUN_03f5d7b8(puVar2,0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xa0), lVar3 != 0)) {
      FUN_057e185c(&local_78,lVar3,DAT_091b2130);
      local_50 = local_68;
      puStack_58 = puStack_70;
      local_60 = local_78;
      local_78 = 0;
      puStack_70 = &local_60;
      while (uVar4 = FUN_071bd28c(&local_60,DAT_091a4f90), lVar3 = local_50, (uVar4 & 1) != 0) {
        if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = *(undefined8 *)(local_50 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar5 = AnhPD_FoodOrder_DragItemBase__get_Tf(*(long *)(lVar3 + 0x10),0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_Transform__set_localScale
                    (*(undefined4 *)(lVar3 + 0x24),*(undefined4 *)(lVar3 + 0x28),
                     *(undefined4 *)(lVar3 + 0x2c),lVar5,0);
        }
      }
      FUN_071bd288(&local_60,DAT_091a4f88);
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 != 0) && (lVar5 = *(long *)(lVar3 + 0xa0), lVar5 != 0)) {
        iVar1 = *(int *)(lVar5 + 0x18);
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
          lVar3 = *(long *)(param_1 + 0x10);
          if (lVar3 == 0) goto LAB_041e593c;
        }
        AnhPD_FoodOrder_AutoCompleteOrderFx__MergeAndServe
                  (lVar3,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
                   *(undefined8 *)(param_1 + 0x28),0);
        return;
      }
    }
  }
LAB_041e593c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

