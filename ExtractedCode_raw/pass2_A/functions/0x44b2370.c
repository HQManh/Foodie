// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$get_HasPendingChoreography
// address: 0x44b2370
// body: available
// range: 0x44b2370-0x44b24ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b24f8 to 0x4ab6f28 FUN_04ab6f28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44b24fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingGameplayPresentation__get_HasPendingChoreography(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_0951822f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f558);
    FUN_03f5c2a4(&DAT_0919d648);
    FUN_03f5c2a4(&DAT_091c9410);
    FUN_03f5c2a4(&DAT_09178670);
    FUN_03f5c2a4(&DAT_091e6fc8);
    FUN_03f5c2a4(&DAT_0918f030);
    DAT_0951822f = 1;
  }
  uVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_IsShifting(param_1);
  if (((uVar2 & 1) != 0) || (0 < *(int *)(param_1 + 700))) {
    return 1;
  }
  if (*(long *)(param_1 + 0x420) != 0) {
    iVar1 = FUN_06fd810c(*(long *)(param_1 + 0x420),DAT_0919f558);
    if (0 < iVar1) {
      return 1;
    }
    uVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_IsChoreographing(param_1);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    if (*(long *)(param_1 + 0x308) != 0) {
      uVar3 = FUN_06ef0310(*(long *)(param_1 + 0x308),DAT_0919d648);
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
      }
      puVar5 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      lVar6 = puVar5[0x1c];
      if (lVar6 == 0) {
        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f030);
          puVar5 = *(undefined8 **)(DAT_0918f030 + 0xb8);
        }
        uVar7 = *puVar5;
        lVar6 = thunk_FUN_03f9944c(DAT_09178670);
        FUN_05322d94(lVar6,uVar7,DAT_091e6fc8,0);
        plVar4 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0xe0);
        *plVar4 = lVar6;
        thunk_FUN_03f5d7b8(plVar4,lVar6);
      }
      uVar3 = FUN_04ab6f28(uVar3,lVar6,DAT_091c9410);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

