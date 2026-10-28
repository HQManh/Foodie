// rea decompile_all
// name: CakeOrder.InGame.UIPopupNewBooster$$TryShowAnim
// address: 0x437d2f0
// body: available
// range: 0x437d2f0-0x437d4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437d4b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupNewBooster__TryShowAnim(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_0951794e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_091977e8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_0919c370);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc008);
    DAT_0951794e = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (((*(char *)(param_1 + 0x120) == '\0') && (*(int *)(param_1 + 0x10c) == 1)) &&
     (*(long *)(param_1 + 0x110) != 0)) {
    if (*(long *)(param_1 + 0x118) == 0) {
LAB_0437d4b0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_06f6d800(*(long *)(param_1 + 0x118),*(long *)(param_1 + 0x110),&local_38,
                         DAT_0919c370);
    if ((((uVar2 & 1) != 0) && (uVar2 = FUN_0640f598(&local_38,DAT_091977b8), (uVar2 & 1) != 0)) &&
       ((uVar2 = FUN_0640f4f0(&local_38,DAT_091977e8), (uVar2 & 1) != 0 &&
        (iVar1 = FUN_0640f818(&local_38,DAT_09197808), iVar1 == 1)))) {
      uVar3 = FUN_0640f7ac(&local_38,DAT_09197800);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      uVar3 = DAT_09197800;
      if ((uVar2 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x10c) = 2;
        lVar4 = FUN_0640f7ac(&local_38,uVar3);
        if (lVar4 == 0) goto LAB_0437d4b0;
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 200),0,0);
        uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                          (0x3f800000,0x3eb33333,*(undefined8 *)(param_1 + 200),0);
        FUN_04d9656c(uVar3,1,DAT_091dc008);
      }
    }
  }
  return;
}

