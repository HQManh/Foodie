// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI$$<ShowPopupInStack>g__OnClose|28_0
// address: 0x42d3a78
// body: available
// range: 0x42d3a78-0x42d3b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d3b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_SceneMainUI__<ShowPopupInStack>g__OnClose_28_0
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((DAT_095173b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bb498);
    FUN_03f5c2a4(&DAT_091bb4a0);
    FUN_03f5c2a4(&DAT_091bb4b0);
    DAT_095173b5 = 1;
  }
  if (*(char *)((long)param_1 + 0x61) == '\0') {
    lVar1 = param_1[0xb];
    if (lVar1 == 0) {
LAB_042d3b9c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(lVar1 + 0x18)) {
      uVar2 = FUN_061a18a4(lVar1,DAT_091bb498);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar2,param_2,0);
      if ((uVar3 & 1) != 0) {
        if (param_1[0xb] == 0) goto LAB_042d3b9c;
        FUN_061a18e8(param_1[0xb],DAT_091bb4a0);
      }
    }
  }
  CakeOrder_BaseUI_SceneMainUI__RefreshAudioDuck(param_1);
  if (*(char *)((long)param_1 + 0x61) == '\0') {
    CakeOrder_BaseUI_SceneMainUI__RefreshPopupStack(param_1);
  }
  (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
  if (*(char *)((long)param_1 + 0x61) != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x042d3b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  return;
}

