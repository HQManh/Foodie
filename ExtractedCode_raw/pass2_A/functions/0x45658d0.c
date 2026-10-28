// rea decompile_all
// name: DG.Tweening.Plugins.QuaternionPlugin$$EvaluateAndApply
// address: 0x45658d0
// body: available
// range: 0x45658d0-0x4565df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4565dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4565ddc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4565df0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_QuaternionPlugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6,float param_7,undefined4 param_8,long *param_9,uint *param_10,
               long *param_11,undefined8 param_12,undefined8 param_13,long param_14)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  uint local_80;
  
  if ((DAT_09518846 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917f028);
    DAT_09518846 = 1;
  }
  if ((param_10[5] & 1) == 0) {
    if (param_11 == (long *)0x0) goto LAB_04565dd4;
    uVar10 = CONCAT44(param_6,param_5);
  }
  else {
    if (param_11 == (long *)0x0) {
      uStack_98 = *(undefined8 *)(param_10 + 2);
      local_a0 = *(undefined8 *)param_10;
      local_88 = *(long *)(param_10 + 6);
      uStack_90 = *(undefined8 *)(param_10 + 4);
      local_80 = param_10[8];
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((*(byte *)(*param_11 + 0x130) < *(byte *)(DAT_0917f028 + 0x130)) ||
       (*(long *)(*(long *)(*param_11 + 200) + (ulong)*(byte *)(DAT_0917f028 + 0x130) * 8 + -8) !=
        DAT_0917f028)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_11);
    }
    uStack_98 = *(undefined8 *)(param_10 + 2);
    local_a0 = *(undefined8 *)param_10;
    local_88 = *(long *)(param_10 + 6);
    uStack_90 = *(undefined8 *)(param_10 + 4);
    local_80 = param_10[8];
    *(uint *)(param_11 + 0x27) = local_80;
    param_11[0x26] = local_88;
    DG_Tweening_Plugins_Core_SpecialPluginsUtils__SetLookAt(param_11);
    (**(code **)(*param_9 + 0x1c8))(param_9,param_11,*(undefined8 *)(*param_9 + 0x1d0));
    param_7 = *(float *)((long)param_11 + 0x144);
    uVar10 = *(undefined8 *)((long)param_11 + 0x13c);
  }
  fVar13 = (float)uVar10;
  fVar16 = (float)((ulong)uVar10 >> 0x20);
  fVar2 = param_4;
  fVar14 = param_2;
  fVar15 = param_3;
  if ((int)param_11[0x15] == 2) {
    fVar2 = (float)(*(int *)((long)param_11 + 0x10c) - (int)*(char *)((long)param_11 + 0x111));
    fVar14 = param_2 + fVar13 * fVar2;
    fVar15 = param_3 + fVar16 * fVar2;
    fVar2 = param_4 + param_7 * fVar2;
  }
  if (*(char *)((long)param_11 + 0xe9) != '\0') {
    lVar1 = param_11[0x1e];
    if (lVar1 == 0) goto LAB_04565dd4;
    if (*(int *)(lVar1 + 0xa8) == 2) {
      fVar3 = 1.0;
      if ((int)param_11[0x15] == 2) {
        fVar3 = (float)*(int *)((long)param_11 + 0xa4);
      }
      fVar7 = (float)(*(int *)(lVar1 + 0x10c) - (int)*(char *)(lVar1 + 0x111));
      fVar14 = fVar14 + fVar13 * fVar3 * fVar7;
      fVar15 = fVar15 + fVar16 * fVar3 * fVar7;
      fVar2 = fVar2 + param_7 * fVar3 * fVar7;
    }
  }
  fVar7 = *(float *)(param_11 + 0x18);
  fVar8 = *(float *)((long)param_11 + 0xc4);
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_8,*(undefined4 *)((long)param_11 + 0xb4),param_11[0x17],0)
  ;
  if ((*param_10 & 0xfffffffe) == 2) {
    local_a0 = CONCAT44(param_3 * 0.017453292,param_2 * 0.017453292);
    param_4 = param_4 * 0.017453292;
    uStack_98._0_4_ = param_4;
    fVar2 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_a0,0);
    fVar13 = fVar3 * fVar13;
    fVar16 = fVar3 * fVar16;
    param_7 = param_7 * fVar3;
    if (*param_10 == 2) {
      local_a0 = CONCAT44(param_4,fVar2);
      fVar14 = fVar7;
      fVar15 = fVar8;
      uStack_98._0_4_ = fVar7;
      uStack_98._4_4_ = fVar8;
      fVar4 = (float)UnityEngine_Quaternion__Internal_Inverse(&local_a0,0);
      fVar16 = fVar16 * 0.017453292;
      param_7 = param_7 * 0.017453292;
      local_a0 = CONCAT44(fVar16,fVar13 * 0.017453292);
      uStack_98 = CONCAT44(uStack_98._4_4_,param_7);
      fVar13 = fVar15;
      fVar5 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_a0,0);
      if (param_14 == 0) {
LAB_04565dd4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar9 = ((fVar8 * fVar15 - fVar2 * fVar4) - param_4 * fVar3) - fVar7 * fVar14;
      fVar11 = (param_4 * fVar14 + fVar8 * fVar4 + fVar2 * fVar15) - fVar7 * fVar3;
      fVar12 = (fVar2 * fVar3 + fVar8 * fVar14 + fVar7 * fVar15) - param_4 * fVar4;
      fVar14 = (fVar7 * fVar4 + fVar8 * fVar3 + param_4 * fVar15) - fVar2 * fVar14;
      uVar6 = (ulong)(uint)((fVar7 * ((fVar12 * fVar5 + fVar9 * fVar16 + fVar14 * fVar13) -
                                     fVar11 * param_7) +
                            fVar2 * (((fVar9 * fVar13 - fVar11 * fVar5) - fVar14 * fVar16) -
                                    fVar12 * param_7) +
                            fVar8 * ((fVar14 * param_7 + fVar9 * fVar5 + fVar11 * fVar13) -
                                    fVar12 * fVar16)) -
                           param_4 * ((fVar11 * fVar16 + fVar9 * param_7 + fVar12 * fVar13) -
                                     fVar14 * fVar5));
    }
    else {
      fVar16 = fVar16 * 0.017453292;
      param_7 = param_7 * 0.017453292;
      local_a0 = CONCAT44(fVar16,fVar13 * 0.017453292);
      uStack_98 = CONCAT44(uStack_98._4_4_,param_7);
      fVar14 = fVar8;
      fVar15 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_a0,0);
      if (param_14 == 0) goto LAB_04565dd4;
      uVar6 = (ulong)(uint)((param_4 * param_7 + fVar8 * fVar15 + fVar2 * fVar14) - fVar7 * fVar16);
    }
  }
  else {
    local_a0 = CONCAT44((fVar15 + fVar16 * fVar3) * 0.017453292,
                        (fVar14 + fVar13 * fVar3) * 0.017453292);
    uStack_98 = CONCAT44(uStack_98._4_4_,(fVar2 + param_7 * fVar3) * 0.017453292);
    uVar6 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_a0,0);
    if (param_14 == 0) goto LAB_04565dd4;
  }
  (**(code **)(param_14 + 0x18))
            (uVar6,*(undefined8 *)(param_14 + 0x40),*(undefined8 *)(param_14 + 0x28));
  return;
}

