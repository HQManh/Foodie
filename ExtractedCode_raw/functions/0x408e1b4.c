// rea decompile_all
// name: TrungKienPack.TimelinePlayable.LoopPositionComponent$$ProcessFrame
// address: 0x408e1b4
// body: available
// range: 0x408e1b4-0x408e297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408e288 to 0x866b604 UnityEngine.Transform$$set_localPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408e294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_TimelinePlayable_LoopPositionComponent__ProcessFrame(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(param_2 + 0x50);
  fVar2 = fmodf(param_1,fVar5);
  fVar2 = fVar2 / fVar5;
  fVar3 = 0.0;
  fVar5 = 0.0;
  fVar7 = *(float *)(param_2 + 0x60);
  fVar6 = *(float *)(param_2 + 100);
  lVar1 = *(long *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x68);
  if (*(char *)(param_2 + 0x30) != '\0') {
    if (*(long *)(param_2 + 0x38) == 0) goto LAB_0408e294;
    fVar5 = (float)UnityEngine_AnimationCurve__Evaluate(fVar2,*(long *)(param_2 + 0x38),0);
  }
  if (*(char *)(param_2 + 0x31) != '\0') {
    if (*(long *)(param_2 + 0x40) == 0) goto LAB_0408e294;
    fVar3 = (float)UnityEngine_AnimationCurve__Evaluate(fVar2,*(long *)(param_2 + 0x40),0);
  }
  if (*(char *)(param_2 + 0x32) == '\0') {
    fVar2 = 0.0;
  }
  else {
    if (*(long *)(param_2 + 0x48) == 0) goto LAB_0408e294;
    fVar2 = (float)UnityEngine_AnimationCurve__Evaluate(fVar2,*(long *)(param_2 + 0x48),0);
  }
  if (lVar1 != 0) {
    fVar4 = *(float *)(param_2 + 0x54);
    UnityEngine_Transform__set_localPosition
              (fVar7 + fVar5 * fVar4,fVar6 + fVar3 * fVar4,fVar8 + fVar2 * fVar4,lVar1,0);
    return;
  }
LAB_0408e294:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

