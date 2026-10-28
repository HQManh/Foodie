// rea decompile_all
// name: DG.Tweening.Plugins.RectOffsetPlugin$$SetFrom
// address: 0x4565fe8
// body: available
// range: 0x4565fe8-0x4566153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4566150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_RectOffsetPlugin__SetFrom(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_2 == 0) || (lVar4 = *(long *)(param_2 + 0x148), lVar4 == 0)) goto LAB_04566150;
  uVar5 = *(undefined8 *)(param_2 + 0x130);
  uVar3 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  *(undefined8 *)(param_2 + 0x130) = uVar3;
  thunk_FUN_03f5d7b8(param_2 + 0x130,uVar3);
  *(undefined8 *)(param_2 + 0x128) = uVar5;
  thunk_FUN_03f5d7b8(param_2 + 0x128,uVar5);
  if ((param_3 & 1) != 0) {
    lVar4 = *(long *)(param_2 + 0x128);
    if (lVar4 == 0) goto LAB_04566150;
    iVar1 = UnityEngine_RectOffset__get_left(lVar4,0);
    if (*(long *)(param_2 + 0x130) == 0) goto LAB_04566150;
    iVar2 = UnityEngine_RectOffset__get_left(*(long *)(param_2 + 0x130),0);
    UnityEngine_RectOffset__set_left(lVar4,iVar2 + iVar1,0);
    lVar4 = *(long *)(param_2 + 0x128);
    if (lVar4 == 0) goto LAB_04566150;
    iVar1 = UnityEngine_RectOffset__get_right(lVar4,0);
    if (*(long *)(param_2 + 0x130) == 0) goto LAB_04566150;
    iVar2 = UnityEngine_RectOffset__get_right(*(long *)(param_2 + 0x130),0);
    UnityEngine_RectOffset__set_right(lVar4,iVar2 + iVar1,0);
    lVar4 = *(long *)(param_2 + 0x128);
    if (lVar4 == 0) goto LAB_04566150;
    iVar1 = UnityEngine_RectOffset__get_top(lVar4,0);
    if (*(long *)(param_2 + 0x130) == 0) goto LAB_04566150;
    iVar2 = UnityEngine_RectOffset__get_top(*(long *)(param_2 + 0x130),0);
    UnityEngine_RectOffset__set_top(lVar4,iVar2 + iVar1,0);
    lVar4 = *(long *)(param_2 + 0x128);
    if (lVar4 == 0) goto LAB_04566150;
    iVar1 = UnityEngine_RectOffset__get_bottom(lVar4,0);
    if (*(long *)(param_2 + 0x130) == 0) goto LAB_04566150;
    iVar2 = UnityEngine_RectOffset__get_bottom(*(long *)(param_2 + 0x130),0);
    UnityEngine_RectOffset__set_bottom(lVar4,iVar2 + iVar1,0);
  }
  lVar4 = *(long *)(param_2 + 0x150);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(param_2 + 0x128),
               *(undefined8 *)(lVar4 + 0x28));
    return;
  }
LAB_04566150:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

