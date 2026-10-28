// rea decompile_all
// name: CakeOrder.CakeOrderCloudSaveController.<ShowPromptResolveConflictData>d__23$$MoveNext
// address: 0x425c8e8
// body: available
// range: 0x425c8e8-0x425cbc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425cbb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425cbb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425cbb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425cbbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x425cbc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderCloudSaveController_<ShowPromptResolveConflictData>d__23__MoveNext
               (int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_40;
  undefined8 local_38;
  
  if ((DAT_09516f59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197810);
    FUN_03f5c2a4(&DAT_091c2b98);
    FUN_03f5c2a4(&DAT_091cdab8);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc308);
    FUN_03f5c2a4(&DAT_091bc310);
    FUN_03f5c2a4(&DAT_091bcc08);
    DAT_09516f59 = 1;
  }
  lVar4 = *(long *)(param_1 + 10);
  local_38 = 0;
  local_40 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = FUN_0640f598(lVar4 + 0x60,DAT_091977b8);
    if ((uVar1 & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x58);
      if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b711d8(&local_78,uVar5,DAT_091bf638);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      *(undefined8 *)(lVar4 + 0x68) = uStack_70;
      *(undefined8 *)(lVar4 + 0x60) = local_78;
      *(undefined8 *)(lVar4 + 0x70) = local_68;
      thunk_FUN_03f5d7b8(lVar4 + 0x60,0);
    }
    lVar2 = FUN_0640f884(lVar4 + 0x60,DAT_09197810);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = FUN_062ee710(lVar2,DAT_091bcc08);
    uVar1 = FUN_06209cac(&local_38,DAT_091bc310);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049bf9a4(param_1 + 2,&local_38,param_1,DAT_091c2b98);
      return;
    }
  }
  FUN_06209cec(&local_38,DAT_091bc308);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar6 = (long *)(lVar4 + 0x78);
  lVar2 = *plVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
  if ((uVar1 & 1) == 0) {
    uVar5 = FUN_0640f7ac(lVar4 + 0x60,DAT_09197800);
    uVar3 = UnityEngine_Component__get_transform(lVar4,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04c35338(uVar5,uVar3,DAT_091d4bc0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = FUN_04b7c324(lVar4,DAT_091cdab8);
    *plVar6 = lVar4;
    thunk_FUN_03f5d7b8(plVar6);
    if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    PlatformServiceR1_UIPopupConfirmUseCloudData__Show(*plVar6,*(undefined8 *)(param_1 + 0xc),0);
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}

