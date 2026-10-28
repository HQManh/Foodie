// rea decompile_all
// name: Lean.Touch.LeanDragTranslate$$Translate
// address: 0x73486f4
// body: available
// range: 0x73486f4-0x73488a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734885c to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73488a0 to 0x85f71fc UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73488a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanDragTranslate__Translate(float param_1,float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = param_2;
  if ((DAT_095206f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09202460);
    DAT_095206f0 = 1;
  }
  uVar5 = *(undefined8 *)(param_4 + 0x28);
  uVar1 = UnityEngine_Component__get_gameObject(param_4,0);
  if (*(int *)(DAT_09183140 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183140);
  }
  lVar2 = CW_Common_CwHelper__GetCamera(uVar5,uVar1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Inequality(lVar2,0,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if ((lVar4 != 0) && (UnityEngine_Transform__get_position(lVar4,0), lVar2 != 0)) {
      fVar6 = (float)UnityEngine_Camera__WorldToScreenPoint(lVar2,0);
      fVar8 = *(float *)(param_4 + 0x30);
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      UnityEngine_Camera__ScreenToWorldPoint
                (fVar6 + param_1 * fVar8,fVar7 + param_2 * fVar8,param_3 + fVar8 * 0.0,lVar2,0);
      if (lVar4 != 0) {
        UnityEngine_Transform__set_position(lVar4,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogError(DAT_09202460,param_4,0);
  return;
}

