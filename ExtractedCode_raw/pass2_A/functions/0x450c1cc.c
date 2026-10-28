// rea decompile_all
// name: Utilities.SpineBoneIKControl$$UpdateIK
// address: 0x450c1cc
// body: available
// range: 0x450c1cc-0x450c2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450c2a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_SpineBoneIKControl__UpdateIK
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],undefined4 param_4,
               long param_5)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  if (*(long *)(param_5 + 0x38) != 0) {
    UnityEngine_Transform__get_position(*(long *)(param_5 + 0x38),0);
    if (*(long *)(param_5 + 0x20) != 0) {
      uVar6 = *(undefined8 *)(param_5 + 0x40);
      uVar7 = *(undefined8 *)(param_5 + 0x4c);
      lVar1 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0x20),0);
      if (lVar1 != 0) {
        fVar5 = 0.0;
        fVar4 = (param_2 + (float)((ulong)uVar6 >> 0x20)) * (float)((ulong)uVar7 >> 0x20);
        UnityEngine_Transform__InverseTransformPoint(lVar1,0);
        Spine_Unity_SkeletonExtensions__SetPositionSkeletonSpace(*(undefined8 *)(param_5 + 0x30),0);
        if (*(char *)(param_5 + 0x54) == '\0') {
          return;
        }
        if (*(long *)(param_5 + 0x38) != 0) {
          lVar1 = *(long *)(param_5 + 0x30);
          uVar2 = UnityEngine_Transform__get_localRotation(*(long *)(param_5 + 0x38),0);
          local_30 = CONCAT44(fVar4,uVar2);
          local_28 = CONCAT44(param_4,fVar5);
          fVar3 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_30,0);
          fVar5 = fVar5 * 57.29578;
          UnityEngine_Quaternion__Internal_MakePositive(fVar3 * 57.29578,fVar4 * 57.29578,0);
          if (lVar1 != 0) {
            *(float *)(lVar1 + 0x38) = fVar5;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

