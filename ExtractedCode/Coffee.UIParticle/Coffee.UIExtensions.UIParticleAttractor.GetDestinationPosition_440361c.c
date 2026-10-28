// rea decompile_all
// name: Coffee.UIExtensions.UIParticleAttractor$$GetDestinationPosition
// address: 0x440361c
// body: available
// range: 0x440361c-0x4403873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4403870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Coffee_UIExtensions_UIParticleAttractor__GetDestinationPosition
                (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
                long param_5,long param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((DAT_09517e82 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e82 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_5,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = 1;
  }
  else {
    if (param_5 == 0) goto LAB_04403870;
    uVar1 = UnityEngine_Behaviour__get_enabled(param_5,0);
    uVar1 = uVar1 ^ 1;
  }
  if ((param_6 != 0) && (lVar3 = UnityEngine_Component__get_transform(param_6,0), lVar3 != 0)) {
    fVar4 = (float)UnityEngine_Transform__get_position(lVar3,0);
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position(lVar3,0);
      if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Coffee_UIParticleInternal_ParticleSystemExtensions__IsLocalSpace(param_6);
      if ((uVar2 & 1) != 0) {
        lVar3 = UnityEngine_Component__get_transform(param_6,0);
        if (lVar3 == 0) goto LAB_04403870;
        fVar5 = (float)UnityEngine_Transform__InverseTransformPoint(fVar5,param_2,param_3,lVar3,0);
      }
      if ((uVar1 & 1) == 0) {
        if (param_5 == 0) goto LAB_04403870;
        uVar10 = *(undefined4 *)(param_5 + 0x14c);
        uVar11 = *(undefined4 *)(param_5 + 0x150);
        fVar6 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse
                                 (*(undefined4 *)(param_5 + 0x148),uVar10,uVar11);
        fVar7 = (float)Coffee_UIExtensions_UIParticle__get_scale3DForCalc(param_5);
        fVar8 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse();
        fVar5 = fVar5 * fVar6 * fVar8;
        if (*(int *)(param_5 + 0x104) == 0) {
          lVar3 = UnityEngine_Component__get_transform(param_5,0);
          if (lVar3 == 0) goto LAB_04403870;
          fVar8 = (float)UnityEngine_Transform__get_position(lVar3,0);
          fVar9 = (float)Coffee_UIParticleInternal_Vector3Extensions__Inverse(fVar7,uVar10,uVar11);
          fVar5 = fVar5 + fVar9 * (fVar7 - fVar6) * (fVar8 - fVar4);
        }
      }
      return fVar5;
    }
  }
LAB_04403870:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

