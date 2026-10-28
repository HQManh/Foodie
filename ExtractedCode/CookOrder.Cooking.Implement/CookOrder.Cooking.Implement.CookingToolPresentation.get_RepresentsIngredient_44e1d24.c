// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingToolPresentation$$get_RepresentsIngredient
// address: 0x44e1d24
// body: available
// range: 0x44e1d24-0x44e1ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e1ea0 to 0x4ab6f28 FUN_04ab6f28 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e1ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookOrder_Cooking_Implement_CookingToolPresentation__get_RepresentsIngredient(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0951836a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e028);
    FUN_03f5c2a4(&DAT_091c9570);
    FUN_03f5c2a4(&DAT_09179430);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e8098);
    FUN_03f5c2a4(&DAT_0918f788);
    DAT_0951836a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if (((uVar1 & 1) != 0) &&
     (uVar1 = CookOrder_Cooking_Implement_CookingToolPresentation__get_IsCooking(param_1),
     (uVar1 & 1) != 0)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar4 = FUN_06ef0310(*(long *)(param_1 + 0x70),DAT_0919e028);
    if (*(int *)(DAT_0918f788 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f788);
    }
    puVar3 = *(undefined8 **)(DAT_0918f788 + 0xb8);
    lVar5 = puVar3[2];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f788 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f788);
        puVar3 = *(undefined8 **)(DAT_0918f788 + 0xb8);
      }
      uVar6 = *puVar3;
      lVar5 = thunk_FUN_03f9944c(DAT_09179430);
      FUN_05322d94(lVar5,uVar6,DAT_091e8098,0);
      plVar2 = (long *)(*(long *)(DAT_0918f788 + 0xb8) + 0x10);
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
    }
    uVar4 = FUN_04ab6f28(uVar4,lVar5,DAT_091c9570);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

