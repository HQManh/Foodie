// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue.<PlatesOf>d__30$$MoveNext
// address: 0x40d5930
// body: available
// range: 0x40d5930-0x40d5a8f inclusive
// range: 0x40d5ad4-0x40d5ae7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d5a84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d5a88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d5a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d5ae4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ShelfMergeQueue_<PlatesOf>d__30__MoveNext(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  long *plStack_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_09516006 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a58a8);
    FUN_03f5c2a4(&DAT_091a58b0);
    FUN_03f5c2a4(&DAT_091b3a30);
    DAT_09516006 = 1;
  }
  plStack_28 = &local_18;
  local_30 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
LAB_040d59f0:
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    do {
      uVar2 = FUN_071bd28c(param_1 + 0x40,DAT_091a58a8);
      if ((uVar2 & 1) == 0) {
        AnhPD_FoodOrder_ShelfMergeQueue_<PlatesOf>d__30__<>m__Finally1(local_18);
        uVar3 = 0;
        *(undefined8 *)(local_18 + 0x48) = 0;
        *(undefined8 *)(local_18 + 0x50) = 0;
        *(undefined8 *)(local_18 + 0x40) = 0;
        goto LAB_040d5a6c;
      }
      lVar1 = *(long *)(local_18 + 0x50);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      param_1 = local_18;
    } while (*(long *)(lVar1 + 0x18) != *(long *)(local_18 + 0x28));
    *(undefined8 *)(local_18 + 0x18) = *(undefined8 *)(lVar1 + 0x10);
    thunk_FUN_03f5d7b8((undefined8 *)(local_18 + 0x18));
    uVar3 = 1;
    *(undefined4 *)(local_18 + 0x10) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x28) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 0x10);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e185c(&local_68,lVar1,DAT_091b3a30);
        uStack_48 = uStack_60;
        local_50 = local_68;
        local_40 = local_58;
        *(undefined8 *)(local_18 + 0x48) = uStack_60;
        *(undefined8 *)(local_18 + 0x40) = local_68;
        *(undefined8 *)(local_18 + 0x50) = local_58;
        thunk_FUN_03f5d7b8(local_18 + 0x40,0);
        param_1 = local_18;
        goto LAB_040d59f0;
      }
    }
    uVar3 = 0;
  }
LAB_040d5a6c:
  lVar1 = local_30;
  if (local_30 == 0) {
    return uVar3;
  }
  FUN_039b0b7c(&plStack_28);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar1);
}

