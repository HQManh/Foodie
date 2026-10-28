// rea decompile_all
// name: Lean.Common.LeanPlane$$GetClosest
// address: 0x7341884
// body: available
// range: 0x7341884-0x7341a8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7341a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Lean_Common_LeanPlane__GetClosest
                (undefined4 param_1,float param_2,undefined4 param_3,float param_4,long param_5)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double local_38;
  
  lVar1 = UnityEngine_Component__get_transform(param_5,0);
  if (lVar1 == 0) goto LAB_07341a8c;
  fVar2 = (float)UnityEngine_Transform__InverseTransformPoint(param_1,param_2,param_3,lVar1,0);
  fVar5 = fVar2;
  if (*(char *)(param_5 + 0x20) != '\0') {
    fVar6 = *(float *)(param_5 + 0x28);
    if (fVar2 <= *(float *)(param_5 + 0x28)) {
      fVar6 = fVar2;
    }
    fVar5 = *(float *)(param_5 + 0x24);
    if (*(float *)(param_5 + 0x24) <= fVar2) {
      fVar5 = fVar6;
    }
  }
  fVar2 = param_2;
  if (*(char *)(param_5 + 0x2c) != '\0') {
    fVar6 = *(float *)(param_5 + 0x34);
    if (param_2 <= *(float *)(param_5 + 0x34)) {
      fVar6 = param_2;
    }
    fVar2 = *(float *)(param_5 + 0x30);
    if (*(float *)(param_5 + 0x30) <= param_2) {
      fVar2 = fVar6;
    }
  }
  fVar6 = *(float *)(param_5 + 0x38);
  if (fVar6 != 0.0) {
    fVar5 = fVar5 / fVar6;
    dVar3 = modf((double)fVar5,&local_38);
    if (0.0 <= fVar5) {
      if (dVar3 == 0.5) {
        fVar4 = 1.0;
        goto LAB_07341958;
      }
      fVar5 = (float)(int)(fVar5 + 0.5);
    }
    else if (dVar3 == -0.5) {
      fVar4 = -1.0;
LAB_07341958:
      fVar5 = (float)local_38;
      if (((long)local_38 & 1U) != 0) {
        fVar5 = (float)local_38 + fVar4;
      }
    }
    else {
      fVar5 = (float)(int)(fVar5 + -0.5);
    }
    fVar5 = fVar6 * fVar5;
  }
  fVar6 = *(float *)(param_5 + 0x3c);
  if (fVar6 != 0.0) {
    fVar2 = fVar2 / fVar6;
    dVar3 = modf((double)fVar2,&local_38);
    if (0.0 <= fVar2) {
      if (dVar3 == 0.5) {
        fVar4 = 1.0;
        goto LAB_073419e0;
      }
      fVar2 = (float)(int)(fVar2 + 0.5);
    }
    else if (dVar3 == -0.5) {
      fVar4 = -1.0;
LAB_073419e0:
      fVar2 = (float)local_38;
      if (((long)local_38 & 1U) != 0) {
        fVar2 = (float)local_38 + fVar4;
      }
    }
    else {
      fVar2 = (float)(int)(fVar2 + -0.5);
    }
    fVar2 = fVar6 * fVar2;
  }
  lVar1 = UnityEngine_Component__get_transform(param_5,0);
  if (lVar1 != 0) {
    fVar5 = (float)UnityEngine_Transform__TransformPoint(fVar5,fVar2,0,lVar1,0);
    lVar1 = UnityEngine_Component__get_transform(param_5,0);
    if (lVar1 != 0) {
      fVar2 = (float)UnityEngine_Transform__get_forward(lVar1,0);
      return fVar5 + fVar2 * param_4;
    }
  }
LAB_07341a8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

