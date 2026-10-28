// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfig.<AnchorChoices>d__5$$MoveNext
// address: 0x40b6374
// body: available
// range: 0x40b6374-0x40b64b3 inclusive
// range: 0x40b64c4-0x40b652f inclusive
// range: 0x40b655c-0x40b656f inclusive
// range: 0x40b6588-0x40b663b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b64b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b656c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b6630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b6634 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b6638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_RecipeConfig_<AnchorChoices>d__5__MoveNext(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long *plStack_30;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_09515f1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f58);
    FUN_03f5c2a4(&DAT_091a3f60);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091a8698);
    FUN_03f5c2a4(&DAT_09179ee0);
    FUN_03f5c2a4(&DAT_091af628);
    DAT_09515f1d = 1;
  }
  plStack_30 = &local_28;
  local_38 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    goto LAB_040b65d8;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar1 = thunk_FUN_03f9944c(DAT_09179ee0);
    FUN_053eb530(uVar1,DAT_091a8698);
    *(undefined8 *)(local_28 + 0x30) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(local_28 + 0x30),uVar1);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar5 + 0x18);
    uVar1 = 0;
    if (lVar5 != 0) {
      FUN_057e185c(&local_68,lVar5,DAT_091af628);
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
      *(undefined8 *)(local_28 + 0x40) = uStack_60;
      *(undefined8 *)(local_28 + 0x38) = local_68;
      *(undefined8 *)(local_28 + 0x48) = local_58;
      thunk_FUN_03f5d7b8(local_28 + 0x38,0);
      *(undefined4 *)(local_28 + 0x10) = 0xfffffffd;
      while( true ) {
        uVar2 = FUN_071bd28c(local_28 + 0x38,DAT_091a3f58);
        if ((uVar2 & 1) == 0) break;
        if ((*(long *)(local_28 + 0x48) != 0) &&
           (lVar5 = *(long *)(*(long *)(local_28 + 0x48) + 0x10), lVar5 != 0)) {
          *(long *)(local_28 + 0x50) = lVar5;
          thunk_FUN_03f5d7b8();
          uVar4 = 0;
          *(undefined4 *)(local_28 + 0x58) = 0;
          param_1 = local_28;
          while( true ) {
            plVar3 = (long *)(param_1 + 0x50);
            lVar5 = *plVar3;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if ((int)*(uint *)(lVar5 + 0x18) <= (int)uVar4) break;
            if (*(uint *)(lVar5 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar5 = *(long *)(lVar5 + (long)(int)uVar4 * 8 + 0x20);
            if ((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == 0)) {
              uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0x18),0);
              param_1 = local_28;
              if ((uVar2 & 1) == 0) {
                if (*(long *)(local_28 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = FUN_053ec72c(*(long *)(local_28 + 0x30),*(undefined8 *)(lVar5 + 0x18),
                                     DAT_091a86b8);
                param_1 = local_28;
                if ((uVar2 & 1) != 0) {
                  *(undefined8 *)(local_28 + 0x18) = *(undefined8 *)(lVar5 + 0x18);
                  thunk_FUN_03f5d7b8((undefined8 *)(local_28 + 0x18));
                  uVar1 = 1;
                  *(undefined4 *)(local_28 + 0x10) = 1;
                  goto LAB_040b6518;
                }
              }
            }
LAB_040b65d8:
            uVar4 = *(int *)(param_1 + 0x58) + 1;
            *(uint *)(param_1 + 0x58) = uVar4;
          }
          *plVar3 = 0;
          thunk_FUN_03f5d7b8(plVar3,0);
        }
      }
      AnhPD_FoodOrder_RecipeConfig_<AnchorChoices>d__5__<>m__Finally1();
      uVar1 = 0;
      *(undefined8 *)(local_28 + 0x40) = 0;
      *(undefined8 *)(local_28 + 0x48) = 0;
      *(undefined8 *)(local_28 + 0x38) = 0;
    }
  }
  else {
    uVar1 = 0;
  }
LAB_040b6518:
  lVar5 = local_38;
  if (local_38 == 0) {
    return uVar1;
  }
  FUN_039b06fc(&plStack_30);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548(lVar5);
}

