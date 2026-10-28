// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder$$<PrepareWinFirework>b__103_0
// address: 0x42a35d4
// body: available
// range: 0x42a35d4-0x42a36cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a36b8 to 0x42a1cb8 CakeOrder.InGame.UIInLevelCakeOrder$$PlayWinFirework (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42a36cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder__<PrepareWinFirework>b__103_0
               (long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09517243 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517243 = 1;
  }
  iVar1 = FUN_0640f818(param_2,DAT_09197808);
  if (iVar1 == 1) {
    uVar2 = FUN_0640f7ac(param_2,DAT_09197800);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = FUN_0640f7ac(param_2,DAT_09197800);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar4,0,0);
      if (*(char *)(param_1 + 0x1d0) != '\0') {
        CakeOrder_InGame_UIInLevelCakeOrder__PlayWinFirework(param_1);
        return;
      }
    }
  }
  return;
}

