// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$TickAutoplay
// address: 0x44c2718
// body: available
// range: 0x44c2718-0x44c283f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c2828 to 0x44c51bc CookOrder.Cooking.Implement.CookingGameplayController$$ReportBotSettings (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44c283c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__TickAutoplay
               (long param_1,ulong param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_09518275 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09518275 = 1;
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    bVar1 = *(char *)(param_1 + 0xe0) == '\0';
  }
  else {
    bVar1 = false;
  }
  if (((param_3 == 0) && (!bVar1)) && ((param_2 & 1) == 0)) {
    lVar2 = *(long *)(param_1 + 0x130);
    if (lVar2 == 0) {
      if (*(char *)(param_1 + 0xe0) == '\0') {
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_0951660a == '\0') {
          FUN_03f5c2a4(&DAT_09182cc0);
          DAT_0951660a = '\x01';
        }
        if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = *(undefined8 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x10);
      }
      else {
        uVar4 = 0;
      }
      CookOrder_Cooking_Implement_CookingGameplayController__InitializeBot(param_1,uVar4);
      lVar2 = *(long *)(param_1 + 0x130);
      *(undefined1 *)(param_1 + 0x169) = 1;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x169) = 1;
    }
    uVar3 = CookingGraph_CookingEstimatorBot__Tick(lVar2,0);
    if ((uVar3 & 1) != 0) {
      CookOrder_Cooking_Implement_CookingGameplayController__ReportBotSettings(param_1);
      return;
    }
  }
  return;
}

