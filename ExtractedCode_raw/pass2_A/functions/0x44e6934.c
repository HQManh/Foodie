// rea decompile_all
// name: CookOrder.Cooking.Implement.IngCellStateColorLock$$PlayUnlock
// address: 0x44e6934
// body: available
// range: 0x44e6934-0x44e6bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e6bc0 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44e6bf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_IngCellStateColorLock__PlayUnlock(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_095183a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe78);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091eb920);
    FUN_03f5c2a4(&DAT_09191710);
    DAT_095183a7 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191710);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar6 = (long *)(lVar1 + 0x10);
    *plVar6 = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) == 0) {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x044e6be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0x30),0,0);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(DAT_091b48d0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_044e6bf8;
      CakeOrder_AudioManagerCakeOrder__PlaySfx
                (0x3f800000,**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x48),4,0);
    }
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = DG_Tweening_DOTween__Sequence(0);
    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalMoveY
                      (*(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x38),
                       *(undefined4 *)(param_1 + 0x3c),*(undefined8 *)(param_1 + 0x30),0,0);
    uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbeb0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append(uVar5,uVar4,0);
    uVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate
                      (0,0x43340000,0,*(undefined4 *)(param_1 + 0x40),
                       *(undefined8 *)(param_1 + 0x30),3,0);
    uVar4 = FUN_04d95e8c(uVar4,7,DAT_091dbe78);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append(uVar5,uVar4,0);
    uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
    DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091eb920,0);
    FUN_04d956bc(uVar5,uVar4,DAT_091dbd18);
    return;
  }
LAB_044e6bf8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

