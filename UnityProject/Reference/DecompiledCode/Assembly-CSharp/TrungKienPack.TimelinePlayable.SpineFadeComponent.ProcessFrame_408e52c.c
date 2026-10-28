// rea decompile_all
// name: TrungKienPack.TimelinePlayable.SpineFadeComponent$$ProcessFrame
// address: 0x408e52c
// body: available
// range: 0x408e52c-0x408e5e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408e5e0 to 0x79464b0 Spine.Unity.SkeletonExtensions$$SetColor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408e5e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_TimelinePlayable_SpineFadeComponent__ProcessFrame(float param_1,long param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  if (*(long *)(param_2 + 0x58) != 0) {
    fVar4 = *(float *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    fVar8 = *(float *)(param_2 + 0x50);
    param_1 = param_1 / *(float *)(param_2 + 0x30);
    uVar1 = UnityEngine_AnimationCurve__Evaluate(param_1,*(long *)(param_2 + 0x58),0);
    if (*(long *)(param_2 + 0x28) != 0) {
      fVar3 = 1.0;
      if (param_1 <= 1.0) {
        fVar3 = param_1;
      }
      fVar2 = 0.0;
      if (0.0 <= param_1) {
        fVar2 = fVar3;
      }
      fVar5 = (float)uVar6;
      fVar3 = (float)((ulong)uVar6 >> 0x20);
      fVar3 = fVar3 + ((float)((ulong)uVar7 >> 0x20) - fVar3) * fVar2;
      uVar6 = Spine_Unity_SkeletonRenderer__get_Skeleton(*(long *)(param_2 + 0x28),0);
      Spine_Unity_SkeletonExtensions__SetColor
                (CONCAT44(fVar3,fVar5 + ((float)uVar7 - fVar5) * fVar2),fVar3,
                 fVar4 + fVar2 * (fVar8 - fVar4),uVar1,uVar6,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

