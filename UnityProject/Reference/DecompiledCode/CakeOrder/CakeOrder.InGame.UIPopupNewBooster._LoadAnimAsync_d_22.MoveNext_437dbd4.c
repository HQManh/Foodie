// rea decompile_all
// name: CakeOrder.InGame.UIPopupNewBooster.<LoadAnimAsync>d__22$$MoveNext
// address: 0x437dbd4
// body: available
// range: 0x437dbd4-0x437e05b inclusive
// range: 0x437e19c-0x437e19f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437e044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437e048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437e04c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437e050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437e054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437e058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437e19c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupNewBooster_<LoadAnimAsync>d__22__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  if ((DAT_09517954 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_09197810);
    FUN_03f5c2a4(&DAT_09181740);
    FUN_03f5c2a4(&DAT_091c2bb0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919c368);
    FUN_03f5c2a4(&DAT_0919c380);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc308);
    FUN_03f5c2a4(&DAT_091bc310);
    FUN_03f5c2a4(&DAT_091bcc08);
    FUN_03f5c2a4(&DAT_092144a0);
    DAT_09517954 = 1;
  }
  lVar6 = *(long *)(param_1 + 0xc);
  local_38 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = *(undefined8 *)(param_1 + 10);
    uVar8 = *(undefined8 *)(lVar6 + 0xc0);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_AddressableAssets_Addressables__InstantiateAsync(&local_60,uVar7,uVar8,0,1,0);
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_58;
    *(undefined8 *)(param_1 + 0xe) = local_60;
    *(undefined8 *)(param_1 + 0x12) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(long *)(lVar6 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uStack_58 = *(undefined8 *)(param_1 + 0x10);
    local_60 = *(undefined8 *)(param_1 + 0xe);
    local_50 = *(undefined8 *)(param_1 + 0x12);
    FUN_06f6bb08(*(long *)(lVar6 + 0x118),*(undefined8 *)(param_1 + 10),&local_60,DAT_0919c380);
    lVar3 = FUN_0640f884(param_1 + 0xe,DAT_09197810);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar3,DAT_091bcc08);
    uVar4 = FUN_06209cac(&local_38,DAT_091bc310);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      FUN_049c36c4(param_1 + 2,&local_38,param_1,DAT_091c2bb0);
      return;
    }
  }
  FUN_06209cec(&local_38,DAT_091bc308);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar6 + 0x120) == '\0') {
    iVar1 = FUN_0640f818(param_1 + 0xe,DAT_09197808);
    if (iVar1 == 1) {
      uVar7 = FUN_0640f7ac(param_1 + 0xe,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_0640f7ac(param_1 + 0xe,DAT_09197800);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_GameObject__SetActive(lVar3,0,0);
        if (*(long *)(lVar6 + 0x110) == *(long *)(param_1 + 10)) {
          CakeOrder_InGame_UIPopupNewBooster__TryShowAnim(lVar6);
        }
        goto LAB_0437e010;
      }
    }
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar7 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
    uVar2 = FUN_0640f818(param_1 + 0xe,DAT_09197808);
    local_60 = CONCAT44(local_60._4_4_,uVar2);
    uVar8 = FUN_03f5c42c(DAT_09181740,&local_60);
    uVar7 = System_String__Format(DAT_092144a0,uVar7,uVar8,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(uVar7,0);
    uVar4 = FUN_0640f598(param_1 + 0xe,DAT_091977b8);
    if ((uVar4 & 1) != 0) {
      uStack_58 = *(undefined8 *)(param_1 + 0x10);
      local_60 = *(undefined8 *)(param_1 + 0xe);
      local_50 = *(undefined8 *)(param_1 + 0x12);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_c8 = uStack_58;
      local_d0 = local_60;
      local_c0 = local_50;
      UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_d0,0);
    }
    if (*(long *)(lVar6 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06f6d194(*(long *)(lVar6 + 0x118),*(undefined8 *)(param_1 + 10),DAT_0919c368);
    if (*(long *)(lVar6 + 0x110) == *(long *)(param_1 + 10)) {
      *(undefined8 *)(lVar6 + 0x110) = 0;
      thunk_FUN_03f5d7b8(lVar6 + 0x110,0);
    }
  }
  else {
    uVar4 = FUN_0640f598(param_1 + 0xe,DAT_091977b8);
    if ((uVar4 & 1) != 0) {
      uStack_58 = *(undefined8 *)(param_1 + 0x10);
      local_60 = *(undefined8 *)(param_1 + 0xe);
      local_50 = *(undefined8 *)(param_1 + 0x12);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_a8 = uStack_58;
      local_b0 = local_60;
      local_a0 = local_50;
      UnityEngine_AddressableAssets_Addressables__ReleaseInstance(&local_b0,0);
    }
  }
LAB_0437e010:
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

