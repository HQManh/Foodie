// rea decompile_all
// name: CakeOrder.InGame.LevelPlayLoadAndSetupControl$$ReturnHomeAfterSetupFailure
// address: 0x4392c90
// body: available
// range: 0x4392c90-0x4392f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4392f64 to 0x425c35c CakeOrder.CakeOrderSceneLoader$$LoadHome (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4392f68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_LevelPlayLoadAndSetupControl__ReturnHomeAfterSetupFailure(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09517a44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091d2430);
    FUN_03f5c2a4(&DAT_091941b8);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_091b4978);
    FUN_03f5c2a4(&DAT_091ecaf8);
    FUN_03f5c2a4(&DAT_091923d8);
    FUN_03f5c2a4(&DAT_09222f68);
    FUN_03f5c2a4(&DAT_09211660);
    FUN_03f5c2a4(&DAT_0921e740);
    DAT_09517a44 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091923d8);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_04392f68;
  *(long *)(lVar1 + 0x10) = param_1;
  thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
  *(undefined8 *)(param_1 + 0x28) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
  uVar2 = FUN_05a8eda4(DAT_091b4978);
  if ((((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) &&
     (*(long *)(*(long *)(param_1 + 0x30) + 0xe0) != 0)) {
    lVar3 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if ((*(long *)(param_1 + 0x30) == 0) || (**(long **)(lVar3 + 0xb8) == 0)) goto LAB_04392f68;
    CakeOrder_HeartSystem_HeartSystemController__RecoverHeart
              (**(long **)(lVar3 + 0xb8),*(undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0),
               DAT_0921e740,1,0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_04392f68;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + 0xe0);
    *puVar4 = 0;
    thunk_FUN_03f5d7b8(puVar4,0);
  }
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09222f68,DAT_09211660,0);
  *(undefined8 *)(lVar1 + 0x18) = uVar5;
  thunk_FUN_03f5d7b8();
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 0x28), lVar3 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(lVar3 + 0x10);
  }
  lVar3 = *(long *)(DAT_091b4b80 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar5 = thunk_FUN_03f9944c(DAT_091941b8);
  SceneTransitionR1_SceneLoader_LoadedSceneCoroutineDelegate___ctor(uVar5,param_1,DAT_091d2430,0);
  uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar6,lVar1,DAT_091ecaf8,0);
  uVar7 = CakeOrder_SceneTransitionBehaviourWeather__CreateCustomDataSingleWeather(uVar8,0);
  if (lVar3 != 0) {
    CakeOrder_CakeOrderSceneLoader__LoadHome(lVar3,uVar5,0,uVar6,uVar7,0);
    return;
  }
LAB_04392f68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

