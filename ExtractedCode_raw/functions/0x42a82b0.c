// rea decompile_all
// name: CakeOrder.InGame.UIPopupCakeConfirmUseBooster$$SetBoosterInfo
// address: 0x42a82b0
// body: available
// range: 0x42a82b0-0x42a86a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a869c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a86a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupCakeConfirmUseBooster__SetBoosterInfo
               (long param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095172a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_0919c370);
    FUN_03f5c2a4(&DAT_0919c378);
    FUN_03f5c2a4(&DAT_091a5c30);
    FUN_03f5c2a4(&DAT_091a5c38);
    FUN_03f5c2a4(&DAT_091a5c40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091be8d8);
    DAT_095172a1 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  local_60 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if ((param_2 == 0) || (*(long *)(param_1 + 0x1b8) == 0)) goto LAB_042a869c;
    UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x1b8),*(undefined8 *)(param_2 + 0x38),0);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x108);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (param_2 == 0) goto LAB_042a869c;
    plVar4 = *(long **)(param_1 + 0x108);
    uVar3 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(param_2,0);
    if (plVar4 == (long *)0x0) goto LAB_042a869c;
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
  }
  uVar3 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    if (param_2 == 0) goto LAB_042a869c;
    plVar4 = *(long **)(param_1 + 0x110);
    uVar3 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedDesc(param_2,0);
    if (plVar4 == (long *)0x0) goto LAB_042a869c;
    (**(code **)(*plVar4 + 0x558))(plVar4,uVar3,*(undefined8 *)(*plVar4 + 0x560));
  }
  if (*(long **)(param_1 + 0x1d0) == param_3) {
    return;
  }
  if ((*(long *)(param_1 + 0x1b0) != 0) &&
     (lVar2 = FUN_06f6b92c(*(long *)(param_1 + 0x1b0),DAT_0919c378), lVar2 != 0)) {
    FUN_0653bc44(&local_e0,lVar2,DAT_091be8d8);
    local_80 = local_e0;
    local_e0 = 0;
    puStack_78 = puStack_d8;
    uStack_68 = uStack_c8;
    local_70 = uStack_d0;
    local_60 = local_c0;
    puStack_d8 = &local_80;
    while (uVar1 = FUN_0726aaec(&local_80,DAT_091a5c38), (uVar1 & 1) != 0) {
      uStack_98 = uStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      uVar1 = FUN_0640f598(&local_a0,DAT_091977b8);
      if ((uVar1 & 1) != 0) {
        uVar3 = FUN_0640f7ac(&local_a0,DAT_09197800);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = FUN_0640f7ac(&local_a0,DAT_09197800);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_GameObject__SetActive(lVar2,0,0);
        }
      }
    }
    FUN_0726aae8(&local_80,DAT_091a5c30);
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0x1c8),0,0);
    if (*(long *)(param_1 + 0x1c8) != 0) {
      UnityEngine_CanvasGroup__set_alpha(0,*(long *)(param_1 + 0x1c8),0);
      *(long **)(param_1 + 0x1d0) = param_3;
      thunk_FUN_03f5d7b8(param_1 + 0x1d0,param_3);
      if ((param_3 != (long *)0x0) &&
         (uVar1 = (**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250)),
         (uVar1 & 1) != 0)) {
        if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_042a869c;
        uVar1 = FUN_06f6d800(*(long *)(param_1 + 0x1b0),param_3,&local_b8,DAT_0919c370);
        if (((uVar1 & 1) != 0) && (uVar1 = FUN_0640f598(&local_b8,DAT_091977b8), (uVar1 & 1) != 0))
        {
          uVar3 = FUN_0640f7ac(&local_b8,DAT_09197800);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
          if ((uVar1 & 1) != 0) {
            lVar2 = FUN_0640f7ac(&local_b8,DAT_09197800);
            if (lVar2 != 0) {
              UnityEngine_GameObject__SetActive(lVar2,1,0);
              uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                                (0x3f800000,0x3eb33333,*(undefined8 *)(param_1 + 0x1c8),0);
              FUN_04d9656c(uVar3,1,DAT_091dc008);
              return;
            }
            goto LAB_042a869c;
          }
        }
        CakeOrder_InGame_UIPopupCakeConfirmUseBooster__LoadAnimAsync(param_1,param_3);
      }
      return;
    }
  }
LAB_042a869c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

