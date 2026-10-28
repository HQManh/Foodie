// rea decompile_all
// name: CakeOrder.InGame.CustomerVisual.<LoadCharacterAnimControl>d__16$$MoveNext
// address: 0x438d4a0
// body: available
// range: 0x438d4a0-0x438d87b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438d848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d84c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d85c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d868 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d86c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438d874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CustomerVisual_<LoadCharacterAnimControl>d__16__MoveNext(int *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_60;
  undefined8 local_58;
  
  if ((DAT_095179fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197810);
    FUN_03f5c2a4(&DAT_091c2ba0);
    FUN_03f5c2a4(&DAT_091cd888);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc308);
    FUN_03f5c2a4(&DAT_091bc310);
    FUN_03f5c2a4(&DAT_091bcc08);
    DAT_095179fc = 1;
  }
  lVar8 = *(long *)(param_1 + 10);
  local_58 = 0;
  local_60 = 0;
  if (*param_1 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0x38) + 0x48);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(&local_98,uVar5,DAT_091bf638);
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_70 = local_88;
    *(undefined8 *)(lVar8 + 0x50) = uStack_90;
    *(undefined8 *)(lVar8 + 0x48) = local_98;
    *(undefined8 *)(lVar8 + 0x58) = local_88;
    thunk_FUN_03f5d7b8(lVar8 + 0x48,0);
    lVar1 = FUN_0640f884(lVar8 + 0x48,DAT_09197810);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58 = FUN_062ee710(lVar1,DAT_091bcc08);
    uVar2 = FUN_06209cac(&local_58,DAT_091bc310);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_58;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c035c(param_1 + 2,&local_58,param_1,DAT_091c2ba0);
      return;
    }
  }
  FUN_06209cec(&local_58,DAT_091bc308);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = FUN_0640f7ac(lVar8 + 0x48,DAT_09197800);
  uVar7 = *(undefined8 *)(lVar8 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = FUN_04c35338(uVar5,uVar7,DAT_091d4bc0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = FUN_04b7c324(lVar1,DAT_091cd888);
  plVar6 = (long *)(lVar8 + 0x40);
  *plVar6 = lVar1;
  thunk_FUN_03f5d7b8(plVar6);
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = UnityEngine_Component__get_transform(*plVar6,0);
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  puVar3 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  uVar11 = puVar3[2];
  if (DAT_09515ed5 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar3 = *(undefined4 **)(DAT_091898c0 + 0xb8);
  UnityEngine_Transform__SetLocalPositionAndRotation
            (uVar9,uVar10,uVar11,*puVar3,puVar3[1],puVar3[2],puVar3[3],lVar1,0);
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = UnityEngine_Component__get_transform(*plVar6,0);
  if (DAT_09515cf3 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515cf3 = '\x01';
  }
  if (lVar1 != 0) {
    lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(lVar4 + 0xc),*(undefined4 *)(lVar4 + 0x10),
               *(undefined4 *)(lVar4 + 0x14),lVar1,0);
    if (*(long *)(lVar8 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = *(long *)(*(long *)(lVar8 + 0x20) + 0x20);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar8 + 0x40);
    UnityEngine_Gradient__Evaluate(*(undefined4 *)(lVar8 + 100),lVar1,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_InGame_CakeCharacterAnimControl__SetBlendColor(lVar4);
    if (*plVar6 != 0) {
      *param_1 = -2;
      System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

