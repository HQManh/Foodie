// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$StartCoinRoutine
// address: 0x42c9838
// body: available
// range: 0x42c9838-0x42c99d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c99b0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c99d0 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c99d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__StartCoinRoutine
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0951735f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c55a0);
    FUN_03f5c2a4(&DAT_091cd868);
    FUN_03f5c2a4(&DAT_091ac158);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951735f = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x148);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x130) == 0) goto LAB_042c99d4;
    uVar6 = FUN_04a6a14c(*(long *)(param_1 + 0x130),DAT_091c55a0);
    *(undefined8 *)(param_1 + 0x148) = uVar6;
    thunk_FUN_03f5d7b8(param_1 + 0x148,uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x148);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(param_1 + 0x130) == 0) ||
         (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x130),0), lVar3 == 0))
      goto LAB_042c99d4;
      uVar6 = FUN_04b7c294(lVar3,DAT_091cd868);
      *(undefined8 *)(param_1 + 0x148) = uVar6;
      thunk_FUN_03f5d7b8(param_1 + 0x148,uVar6);
    }
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    lVar5 = *(long *)(param_1 + 0x140);
    uVar6 = UnityEngine_MonoBehaviour__StartCoroutine(*(long *)(param_1 + 0x148),param_2,0);
    lVar3 = DAT_091ac158;
    if (lVar5 != 0) {
      lVar4 = *(long *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_03f5d7b8();
          return;
        }
        FUN_057e0c68(lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
LAB_042c99d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

