// rea decompile_all
// name: DG.Tweening.Core.Easing.EaseCurve$$Evaluate
// address: 0x457a530
// body: available
// range: 0x457a530-0x457a5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457a5c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Core_Easing_EaseCurve__Evaluate(float param_1,float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined8 local_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  lVar2 = *(long *)(param_3 + 0x10);
  local_50 = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_3c = 0;
  if (lVar2 != 0) {
    iVar1 = UnityEngine_AnimationCurve__get_length(lVar2,0);
    UnityEngine_AnimationCurve__get_Item(&local_6c,lVar2,iVar1 + -1,0);
    uStack_48 = uStack_64;
    local_50 = local_6c;
    uStack_3c = (undefined4)uStack_58;
    local_38 = (undefined4)((ulong)uStack_58 >> 0x20);
    uStack_44 = uStack_60;
    local_40 = uStack_5c;
    fVar3 = (float)UnityEngine_Keyframe__get_time(&local_50,0);
    if (*(long *)(param_3 + 0x10) != 0) {
      UnityEngine_AnimationCurve__Evaluate((param_1 / param_2) * fVar3,*(long *)(param_3 + 0x10),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

