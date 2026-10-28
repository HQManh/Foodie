// rea decompile_all
// name: CakeOrder.InGame.UIPopupCakeConfirmUseBooster.<LoadAnimAsync>d__6$$MoveNext
// address: 0x42afb44
// body: available
// range: 0x42afb44-0x42afdfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42afde4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42afde8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42afdec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42afdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42afdf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42afdf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupCakeConfirmUseBooster_<LoadAnimAsync>d__6__MoveNext(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_28;
  
  if ((DAT_095172a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197810);
    FUN_03f5c2a4(&DAT_091c2ba8);
    FUN_03f5c2a4(&DAT_0919c380);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc308);
    FUN_03f5c2a4(&DAT_091bc310);
    FUN_03f5c2a4(&DAT_091bcc08);
    FUN_03f5c2a4(&DAT_091dc008);
    DAT_095172a6 = 1;
  }
  lVar6 = *(long *)(param_1 + 0xc);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    plVar1 = *(long **)(param_1 + 10);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(*plVar1 + 0x250));
    if ((uVar2 & 1) == 0) goto LAB_042afdbc;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = *(undefined8 *)(param_1 + 10);
    uVar5 = *(undefined8 *)(lVar6 + 0x1c0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_AddressableAssets_Addressables__InstantiateAsync(&local_50,uVar4,uVar5,0,1,0);
    uStack_68 = uStack_48;
    local_70 = local_50;
    local_60 = local_40;
    if (*(long *)(lVar6 + 0x1b0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06f6bb08(*(long *)(lVar6 + 0x1b0),*(undefined8 *)(param_1 + 10),&local_50,DAT_0919c380);
    lVar3 = FUN_0640f884(&local_70,DAT_09197810);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = FUN_062ee710(lVar3,DAT_091bcc08);
    uVar2 = FUN_06209cac(&local_28,DAT_091bc310);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049c3458(param_1 + 2,&local_28,param_1,DAT_091c2ba8);
      return;
    }
  }
  lVar3 = FUN_06209cec(&local_28,DAT_091bc308);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar6 + 0x1d0) == *(long *)(param_1 + 10)) {
      uVar4 = DG_Tweening_DOTweenModuleUI__DOFade
                        (0x3f800000,0x3eb33333,*(undefined8 *)(lVar6 + 0x1c8),0);
      FUN_04d9656c(uVar4,1,DAT_091dc008);
    }
    else {
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_GameObject__SetActive(lVar3,0,0);
    }
  }
LAB_042afdbc:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

