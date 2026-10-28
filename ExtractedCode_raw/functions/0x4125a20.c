// rea decompile_all
// name: AnhPD.FoodOrder.TutorialTalkView$$ShowLine
// address: 0x4125a20
// body: available
// range: 0x4125a20-0x4125b1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4125b14 to 0x4125de0 AnhPD.FoodOrder.TutorialTalkView$$PlayTalkSfx (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4125b18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4125b1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialTalkView__ShowLine(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095162cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162cc = 1;
  }
  lVar3 = *(long *)(param_1 + 0xa0);
  if (lVar3 != 0) {
    if (*(uint *)(lVar3 + 0x18) <= *(uint *)(param_1 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar4 = *(undefined8 *)(lVar3 + (long)(int)*(uint *)(param_1 + 0xb0) * 8 + 0x20);
    AnhPD_FoodOrder_TutorialTalkView__ShowTapHint(param_1,*(char *)(param_1 + 0xac) == '\0');
    if (*(int *)(param_1 + 0xa8) == 0) {
      plVar1 = *(long **)(param_1 + 0x30);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x558))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x560));
        uVar4 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar2 & 1) != 0) {
          plVar1 = *(long **)(param_1 + 0x50);
          if (plVar1 == (long *)0x0) goto LAB_04125b18;
          (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
        }
        AnhPD_FoodOrder_TutorialTalkView__PlayTalkSfx(param_1);
        return;
      }
    }
    else {
      plVar1 = *(long **)(param_1 + 0x38);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04125aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x558))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x560));
        return;
      }
    }
  }
LAB_04125b18:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

