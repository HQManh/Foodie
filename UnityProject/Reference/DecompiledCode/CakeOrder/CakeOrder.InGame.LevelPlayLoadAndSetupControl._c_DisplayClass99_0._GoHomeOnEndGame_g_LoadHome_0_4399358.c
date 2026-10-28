// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl.<>c__DisplayClass99_0$$<GoHomeOnEndGame>g__LoadHome|0
// address: 0x4399358
// body: available
// range: 0x4399358-0x43994b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43994b0 to 0x425c35c CakeOrder.CakeOrderSceneLoader$$LoadHome (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43994b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl_<>c__DisplayClass99_0__<GoHomeOnEndGame>g__LoadHome_0
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09517a80 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d2430);
    FUN_03f5c2a4(&DAT_091d2448);
    FUN_03f5c2a4(&DAT_091941b8);
    FUN_03f5c2a4(&DAT_091b4b80);
    DAT_09517a80 = 1;
  }
  lVar1 = *(long *)(DAT_091b4b80 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = **(long **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_091941b8);
  SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor(uVar2,uVar4,DAT_091d2430,0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar4,uVar5,DAT_091d2448,0);
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x30), lVar3 != 0)) &&
      (lVar3 = *(long *)(lVar3 + 0x28), lVar3 != 0)) &&
     (uVar5 = CakeOrder_SceneTransitionBehaviourWeather__CreateCustomDataChangeNight
                        (*(undefined4 *)(lVar3 + 0x10),*(undefined4 *)(param_1 + 0x18),0),
     lVar1 != 0)) {
    CakeOrder_CakeOrderSceneLoader__LoadHome(lVar1,uVar2,0,uVar4,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

