// rea decompile_all
// name: DG.Tweening.Plugins.Core.SpecialPluginsUtils$$SetCameraShakePosition
// address: 0x456c2cc
// body: available
// range: 0x456c2cc-0x456c47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456c474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456c478 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
DG_Tweening_Plugins_Core_SpecialPluginsUtils__SetCameraShakePosition
          (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  float *pfVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09518875 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518875 = 1;
  }
  uVar2 = DG_Tweening_Plugins_Core_SpecialPluginsUtils__SetShake(param_4);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (param_4 != 0) {
    plVar3 = *(long **)(param_4 + 0x48);
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
    }
    else if (*plVar3 != DAT_091822e8) {
      plVar3 = (long *)0x0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(plVar3,0,0);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    lVar4 = *(long *)(param_4 + 0x150);
    if ((lVar4 != 0) &&
       (fVar8 = (float)(**(code **)(lVar4 + 0x18))
                                 (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28)),
       plVar3 != (long *)0x0)) {
      fVar10 = param_2;
      fVar11 = param_3;
      lVar4 = UnityEngine_Component__get_transform(plVar3,0);
      if (*(long *)(param_4 + 0x130) != 0) {
        uVar2 = *(ulong *)(*(long *)(param_4 + 0x130) + 0x18);
        if (0 < (int)uVar2) {
          uVar5 = 0;
          lVar6 = 0x20;
          do {
            lVar7 = *(long *)(param_4 + 0x130);
            if (lVar7 == 0) goto LAB_0456c474;
            if (*(uint *)(lVar7 + 0x18) <= uVar5) {
LAB_0456c478:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (lVar4 == 0) goto LAB_0456c474;
            pfVar1 = (float *)(lVar7 + lVar6);
            UnityEngine_Transform__get_localRotation(lVar4,0);
            fVar9 = (float)UnityEngine_Quaternion__op_Multiply(0);
            if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0456c478;
            fVar10 = param_2 + fVar10;
            uVar5 = uVar5 + 1;
            fVar11 = param_3 + fVar11;
            lVar6 = lVar6 + 0xc;
            *pfVar1 = fVar8 + fVar9;
            pfVar1[1] = fVar10;
            pfVar1[2] = fVar11;
          } while ((uVar2 & 0xffffffff) != uVar5);
        }
        return 1;
      }
    }
  }
LAB_0456c474:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

