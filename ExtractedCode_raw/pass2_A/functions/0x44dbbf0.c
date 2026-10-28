// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<WaitForChoreography>d__177$$MoveNext
// address: 0x44dbbf0
// body: available
// range: 0x44dbbf0-0x44dbd33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44dbd30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation_<WaitForChoreography>d__177__MoveNext
          (long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((DAT_09518329 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a7e28);
    FUN_03f5c2a4(&DAT_091a86e8);
    DAT_09518329 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 - 2U < 2) {
    lVar4 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_044dbd30;
    uVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_IsChoreographing(lVar4,0);
    if (((uVar2 & 1) == 0) && (*(int *)(lVar4 + 700) < 1)) {
      if (*(long *)(lVar4 + 0x370) == 0) {
LAB_044dbd30:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(lVar4 + 0x370) + 0x20) < 1) {
        if (*(long *)(lVar4 + 0x3b8) != 0) {
          uVar2 = FUN_053ebe0c(*(long *)(lVar4 + 0x3b8),*(undefined8 *)(param_1 + 0x28),DAT_091a7e28
                              );
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          lVar4 = *(long *)(param_1 + 0x28);
          if (lVar4 == 0) {
            return 0;
          }
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return 0;
        }
        goto LAB_044dbd30;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar3 = 3;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  return 1;
}

