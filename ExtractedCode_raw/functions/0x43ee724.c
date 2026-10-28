// rea decompile_all
// name: Coffee.UIEffects.UIEffectBase$$CanModifyMesh
// address: 0x43ee724
// body: available
// range: 0x43ee724-0x43ee8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ee8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Coffee_UIEffects_UIEffectBase__CanModifyMesh
               (undefined1 param_1 [16],float param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09517dd7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517dd7 = 1;
  }
  uVar1 = Coffee_UIEffects_UIEffectBase__get_graphic(param_3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar1,0);
  if ((uVar2 & 1) == 0) {
    return false;
  }
  lVar3 = Coffee_UIEffects_UIEffectBase__get_graphic(param_3);
  if (lVar3 != 0) {
    uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(lVar3,0);
    if ((uVar2 & 1) == 0) {
      return false;
    }
    uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_3,0);
    if ((uVar2 & 1) == 0) {
      return false;
    }
    lVar3 = (**(code **)(*param_3 + 0x2f8))(param_3,*(undefined8 *)(*param_3 + 0x300));
    uVar1 = UnityEngine_Component__get_transform(param_3,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(uVar1,lVar3,0);
    if ((uVar2 & 1) != 0) {
      return true;
    }
    if (lVar3 != 0) {
      fVar4 = (float)UnityEngine_Transform__get_lossyScale(lVar3,0);
      fVar7 = param_2;
      lVar3 = UnityEngine_Component__get_transform(param_3,0);
      if (lVar3 != 0) {
        fVar5 = (float)UnityEngine_Transform__get_lossyScale(lVar3,0);
        fVar7 = fVar7 * fVar4 * param_2 * fVar5;
        if (DAT_09515cee == '\0') {
          FUN_03f5c2a4(&DAT_09187e98);
          DAT_09515cee = '\x01';
        }
        fVar4 = ABS(fVar7);
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        fVar6 = **(float **)(DAT_09187e98 + 0xb8) * 8.0;
        fVar5 = fVar4 * 1e-06;
        if (fVar4 * 1e-06 <= fVar6) {
          fVar5 = fVar6;
        }
        return fVar5 <= ABS(0.0 - fVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

