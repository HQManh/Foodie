// rea decompile_all
// name: Coffee.UIEffects.TmpProxy$$SetVerticesDirty
// address: 0x43f8128
// body: available
// range: 0x43f8128-0x43f82cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f8228 to 0x53ec72c FUN_053ec72c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f82c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43f82cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_TmpProxy__SetVerticesDirty(undefined8 param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong local_28;
  
  if ((DAT_09517e1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a87c0);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_0918bb78);
    FUN_03f5c2a4(&DAT_0918be78);
    DAT_09517e1d = 1;
  }
  if (param_2 != (long *)0x0) {
    if (((*(byte *)(DAT_0918bb78 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
        (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_0918bb78 + 0x130) * 8 + -8) ==
         DAT_0918bb78)) &&
       (uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_2,0), (uVar1 & 1) != 0)) {
      if ((param_3 & 1) != 0) {
        if (*(int *)(DAT_0918be78 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918be78 + 0xb8) + 0x28);
        if (lVar2 != 0) {
          FUN_053ec72c(lVar2,param_2,DAT_091a87c0);
          return;
        }
LAB_043f82c8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = TMPro_TMP_Text__get_textInfo(param_2,0);
      if ((lVar2 != 0) && (*(long *)(lVar2 + 0x60) != 0)) {
        local_28 = 0;
        FUN_05c3078c(&local_28,*(undefined4 *)(*(long *)(lVar2 + 0x60) + 0x18),DAT_091b6f98);
        if (((local_28 & 0xff) != 0) && (0 < (int)(local_28 >> 0x20))) {
          lVar2 = TMPro_TMP_Text__get_textInfo(param_2,0);
          if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x60), lVar2 == 0)) goto LAB_043f82c8;
          if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (0 < *(int *)(lVar2 + 0x28)) {
            (**(code **)(*param_2 + 0x808))(param_2,*(undefined8 *)(*param_2 + 0x810));
          }
        }
      }
    }
  }
  return;
}

