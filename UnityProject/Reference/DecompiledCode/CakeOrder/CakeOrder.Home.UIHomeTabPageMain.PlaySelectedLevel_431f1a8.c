// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMain$$PlaySelectedLevel
// address: 0x431f1a8
// body: available
// range: 0x431f1a8-0x431f4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431f468 to 0x4257b24 CakeOrder.AudioManagerCakeOrder$$PlaySfxAndHaptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431f4c8 to 0x44f6690 Utilities.AsyncExtension$$RunWithLogException (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431f4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMain__PlaySelectedLevel(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  if ((DAT_09517644 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091923f0);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4c48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba230);
    FUN_03f5c2a4(&DAT_091dcab0);
    DAT_09517644 = 1;
  }
  if ((*(int *)(param_1 + 0xe8) != 2) ||
     (iVar1 = CakeOrder_Home_UIHomeTabPageMain__GetSelectedMapMode(param_1), iVar1 != 3)) {
    return;
  }
  if ((*(long *)(param_1 + 0x50) == 0) ||
     (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar3 == 0)) goto LAB_0431f4cc;
  lVar3 = *(long *)(lVar3 + 0x30);
  if ((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x28), lVar3 == 0)) {
LAB_0431f2e4:
    uVar6 = 0xffffffff;
  }
  else {
    uVar7 = *(undefined8 *)(lVar3 + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar2 & 1) == 0) goto LAB_0431f2e4;
    if ((((*(long *)(param_1 + 0x50) == 0) ||
         (lVar3 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar3 == 0)) ||
        (*(long *)(lVar3 + 0x30) == 0)) ||
       ((lVar5 = *(long *)(*(long *)(lVar3 + 0x30) + 0x28), lVar5 == 0 ||
        (lVar5 = *(long *)(lVar5 + 0x60), lVar5 == 0)))) goto LAB_0431f4cc;
    lVar3 = CakeOrder_MapLevelMetadataConfig__GetLevelConfig(lVar5,*(undefined4 *)(lVar3 + 0x2c),0);
    if (lVar3 == 0) goto LAB_0431f2e4;
    uVar6 = *(undefined4 *)(lVar3 + 0x10);
  }
  lVar3 = *(long *)(DAT_091b4970 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    uVar2 = CakeOrder_HeartSystem_HeartSystemController__IsEnoughHeartToPlayLevel
                      (**(long **)(lVar3 + 0xb8),0);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x48);
      uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar7,param_1,DAT_091dcab0,0);
      if (lVar3 != 0) {
        uVar7 = CakeOrder_BaseUI_SceneMainUI__ShowPopupHeartRefill(lVar3,uVar7,0,0,0);
        Utilities_AsyncExtension__RunWithLogException(uVar7,0);
        return;
      }
    }
    else {
      lVar3 = *(long *)(DAT_091b4c48 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar3 + 0xb8);
      lVar3 = thunk_FUN_03f9944c(DAT_091923f0);
      CakeOrder_InGame_LevelPlayLoadAndSetupControl_MainLevelPlayConfig___ctor(lVar3,0);
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_1 + 0x50);
        *(undefined4 *)(lVar3 + 0x10) = 0;
        if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) {
          *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar4 + 0x20);
          thunk_FUN_03f5d7b8();
          if ((*(long *)(param_1 + 0x50) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar4 != 0)) {
            *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar4 + 0x2c);
            uVar7 = CakeOrder_SceneTransitionBehaviourWeather__CreateCustomDataSingleWeather
                              (uVar6,0);
            *(undefined8 *)(lVar3 + 0x28) = uVar7;
            thunk_FUN_03f5d7b8();
            if (lVar5 != 0) {
              auVar8 = CakeOrder_InGame_LevelPlayLoadAndSetupControl__PlayLevel(lVar5,lVar3,0);
              Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar8._0_8_,auVar8._8_8_,0);
              lVar3 = *(long *)(DAT_091b48d0 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              if (**(long **)(lVar3 + 0xb8) != 0) {
                CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic
                          (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x100),3,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0431f4cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

