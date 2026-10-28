// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$<RetryDayInMidGame>g__StartPlay|87_0
// address: 0x439821c
// body: available
// range: 0x439821c-0x43982db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43982d4 to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43982d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__<RetryDayInMidGame>g__StartPlay_87_0
               (long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_09517a77 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091923f0);
    DAT_09517a77 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091923f0);
  System_Object___ctor(lVar2,0);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((lVar4 != 0) && (lVar2 != 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar4 + 0x10);
    *(undefined4 *)(lVar2 + 0x10) = uVar1;
    thunk_FUN_03f5d7b8();
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x28);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(lVar4 + 0x1c);
      if (lVar5 != 0) {
        uVar3 = CakeOrder_SceneTransitionBehaviourWeather__CreateCustomDataSingleWeather
                          (*(undefined4 *)(lVar5 + 0x10),0);
        *(undefined8 *)(lVar2 + 0x28) = uVar3;
        thunk_FUN_03f5d7b8();
        auVar6 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__PlayLevel(param_1,lVar2);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar6._0_8_,auVar6._8_8_,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

