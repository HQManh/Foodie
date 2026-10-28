// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$InitializeAutoplay
// address: 0x44c4dfc
// body: available
// range: 0x44c4dfc-0x44c4ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c4ea8 to 0x44c4c68 CookOrder.Cooking.Implement.CookingGameplayController$$StartAutoplay (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c4eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__InitializeAutoplay(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09518270 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09518270 = 1;
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x130,0);
  *(undefined1 *)(param_1 + 0x16a) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    uVar1 = *(undefined4 *)(lVar3 + 0x1c);
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = CakeOrder_InGame_CookingBotAutoRetry__ShouldAutoResume(uVar4,uVar1,0);
    if ((uVar2 & 1) != 0) {
      CookOrder_Cooking_Implement_CookingGameplayController__StartAutoplay(param_1);
      return;
    }
  }
  else {
    CookOrder_Cooking_Implement_CookingGameplayController__InitializeBot(param_1,0);
    *(undefined1 *)(param_1 + 0x169) = 1;
  }
  return;
}

