// rea decompile_all
// name: Coffee.UIExtensions.AnimatableProperty$$UpdateMaterialProperties
// address: 0x43fe598
// body: available
// range: 0x43fe598-0x43fe7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fe6a4 to 0x8619714 UnityEngine.Material$$SetFloat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43fe710 to 0x86197ec UnityEngine.Material$$SetColorImpl (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43fe784 to 0x8612368 UnityEngine.Material$$SetTextureImpl (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43fe7e4 to 0x8612270 UnityEngine.Material$$SetColorImpl (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43fe7fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_AnimatableProperty__UpdateMaterialProperties
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               long param_6,long param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09517e68 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517e68 = 1;
  }
  if (param_6 == 0) goto LAB_043fe7fc;
  uVar2 = UnityEngine_Material__HasProperty(param_6,*(undefined4 *)(param_5 + 0x1c),0);
  if ((uVar2 & 1) != 0) {
    iVar1 = *(int *)(param_5 + 0x18);
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        if (param_7 == 0) goto LAB_043fe7fc;
        fVar4 = (float)UnityEngine_MaterialPropertyBlock__GetColorImpl
                                 (param_7,*(undefined4 *)(param_5 + 0x1c),0);
        if (9.9999994e-11 <=
            param_4 * param_4 + param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2) {
          UnityEngine_Material__SetColorImpl(param_6,*(undefined4 *)(param_5 + 0x1c),0);
          return;
        }
      }
      else if (iVar1 == 1) {
        if (param_7 == 0) goto LAB_043fe7fc;
        fVar4 = (float)UnityEngine_MaterialPropertyBlock__GetVectorImpl
                                 (param_7,*(undefined4 *)(param_5 + 0x1c),0);
        if (9.9999994e-11 <=
            param_4 * param_4 + param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2) {
          UnityEngine_Material__SetColorImpl(param_6,*(undefined4 *)(param_5 + 0x1c),0);
          return;
        }
      }
    }
    else if (iVar1 - 2U < 2) {
      if (param_7 == 0) {
LAB_043fe7fc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar4 = (float)UnityEngine_MaterialPropertyBlock__GetFloat
                               (param_7,*(undefined4 *)(param_5 + 0x1c),0);
      if (DAT_09515cee == '\0') {
        FUN_03f5c2a4(&DAT_09187e98);
        DAT_09515cee = '\x01';
      }
      fVar5 = ABS(fVar4);
      if (ABS(fVar4) <= 0.0) {
        fVar5 = 0.0;
      }
      fVar7 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
      fVar6 = fVar5 * 1e-06;
      if (fVar5 * 1e-06 <= fVar7) {
        fVar6 = fVar7;
      }
      if (fVar6 <= ABS(0.0 - fVar4)) {
        UnityEngine_Material__SetFloat(fVar4,param_6,*(undefined4 *)(param_5 + 0x1c),0);
        return;
      }
    }
    else if (iVar1 == 4) {
      if (param_7 == 0) goto LAB_043fe7fc;
      uVar3 = UnityEngine_MaterialPropertyBlock__GetTextureImpl
                        (param_7,*(undefined4 *)(param_5 + 0x1c),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        UnityEngine_Material__SetTextureImpl(param_6,*(undefined4 *)(param_5 + 0x1c),uVar3,0);
        return;
      }
    }
  }
  return;
}

