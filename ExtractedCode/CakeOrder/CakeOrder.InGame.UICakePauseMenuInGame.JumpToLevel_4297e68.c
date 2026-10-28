// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$JumpToLevel
// address: 0x4297e68
// body: available
// range: 0x4297e68-0x4298027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429800c to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4298024 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__JumpToLevel
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if ((DAT_095171cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    FUN_03f5c2a4(&DAT_091923f0);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09218b88);
    DAT_095171cd = 1;
  }
  lVar2 = *(long *)(DAT_091b4c48 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (lVar2 != 0) {
    lVar6 = *(long *)(lVar2 + 0x30);
    if (lVar6 == 0) {
      return;
    }
    if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    CakeOrder_InGame_CookingBotAutoRetry__Reset(DAT_09218b88,0);
    CakeOrder_InGame_UICakePauseMenuInGame__CloseCheatPanel(param_1);
    lVar4 = thunk_FUN_03f9944c(DAT_091923f0);
    CakeOrder_InGame_LevelPlayLoadAndSetupControl_MainLevelPlayConfig___ctor(lVar4,0);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar6 + 0x20);
      *(undefined8 *)(lVar4 + 0x18) = param_2;
      *(undefined4 *)(lVar4 + 0x10) = uVar1;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x18),param_2);
      lVar6 = *(long *)(lVar6 + 0x28);
      *(undefined4 *)(lVar4 + 0x20) = param_3;
      if (lVar6 != 0) {
        uVar5 = CakeOrder_SceneTransitionBehaviourWeather__CreateCustomDataSingleWeather
                          (*(undefined4 *)(lVar6 + 0x10),0);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
        thunk_FUN_03f5d7b8();
        auVar7 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__PlayLevel(lVar2,lVar4,0);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar7._0_8_,auVar7._8_8_,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

