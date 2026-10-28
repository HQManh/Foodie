// rea decompile_all
// name: CakeOrder.InGame.UIEndGameWin$$OnClickNext
// address: 0x429bff8
// body: available
// range: 0x429bff8-0x429c193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429c18c to 0x429c600 CakeOrder.InGame.UIEndGameWin$$DisableButtons (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x429c190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIEndGameWin__OnClickNext(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  if ((DAT_09517202 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921e738);
    DAT_09517202 = 1;
  }
  if ((*(char *)(param_1 + 0x1ba) == '\0') &&
     (fVar4 = (float)UnityEngine_Time__get_unscaledTime(0),
     *(float *)(param_1 + 0x118) + 3.0 <= fVar4)) {
    uVar5 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)(param_1 + 0x118) = uVar5;
    if (*(char *)(param_1 + 0x1b9) == '\0') {
      if (*(long *)(param_1 + 0x168) != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x1c0);
        uVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x168),0);
        CakeOrder_InGame_UIEndGameWin__ApplyBonusAndPlayAnimHardCurrencyFlyAndNext
                  (param_1,uVar5,0,uVar1,DAT_0921e738);
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
                    (**(long **)(lVar3 + 0xb8),*(undefined8 *)(param_1 + 0x198),3,0);
          uVar1 = *(undefined8 *)(param_1 + 0x1a8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(param_1 + 0x1a8) == 0) ||
               (lVar3 = UnityEngine_GameObject__get_gameObject(*(long *)(param_1 + 0x1a8),0),
               lVar3 == 0)) goto LAB_0429c190;
            UnityEngine_GameObject__SetActive(lVar3,1,0);
          }
          CakeOrder_InGame_UIEndGameWin__DisableButtons(param_1);
          return;
        }
      }
LAB_0429c190:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(param_1 + 0x120);
    if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0429c0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),param_1,2,0,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  return;
}

