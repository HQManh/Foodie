// rea decompile_all
// name: DG.Tweening.Plugins.SpiralPlugin$$EvaluateAndApply
// address: 0x455d130
// body: available
// range: 0x455d130-0x455d43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455d43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_SpiralPlugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               float *param_6,long param_7,undefined8 param_8,undefined8 param_9,long param_10)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float in_s7;
  double __x;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_78;
  float fStack_74;
  double local_28;
  
  if ((DAT_0951880c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951880c = 1;
  }
  if (param_7 == 0) goto LAB_0455d43c;
  fVar10 = param_6[2];
  fVar8 = *param_6;
  fVar9 = param_6[1];
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,in_s7,*(undefined4 *)(param_7 + 0xc0),
                            *(undefined4 *)(param_7 + 0xc4),param_7,0);
  fVar6 = fVar3;
  if (0.5 < fVar3 && param_6[3] == 1.4013e-45) {
    fVar6 = 0.5 - (fVar3 + -0.5);
  }
  if (*(int *)(param_7 + 0xa8) == 2) {
    iVar1 = *(int *)(param_7 + 0x10c);
    if (param_6[3] == 1.4013e-45) {
      iVar2 = iVar1 + -1;
      if (*(char *)(param_7 + 0x111) == '\0') {
        iVar2 = iVar1 + 1;
      }
      fVar8 = fVar8 * (float)iVar2;
      fVar9 = fVar9 / (float)iVar2;
      fVar10 = (fVar10 / (10.0 / param_6[1])) * (10.0 / fVar9);
    }
    else {
      fVar3 = fVar3 + (float)(int)(iVar1 - (uint)(*(char *)(param_7 + 0x111) != '\0'));
      fVar6 = fVar3;
    }
  }
  fVar6 = fVar6 * fVar10 * in_s7;
  param_6[5] = fVar6;
  sincosf(fVar3 * fVar10 * in_s7 * fVar9,&fStack_74,&local_78);
  fVar10 = param_6[8];
  fVar9 = param_6[7];
  fVar6 = (float)UnityEngine_Quaternion__op_Multiply
                           (param_6[6],fVar9,fVar10,param_6[9],fVar6 * local_78,fVar6 * fStack_74,
                            fVar3 * fVar8,0);
  param_2 = param_2 + fVar6;
  param_3 = param_3 + fVar9;
  param_4 = param_4 + fVar10;
  if (((uint)param_6[4] & 1) != 0) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar7 = (double)param_2;
    dVar4 = modf(dVar7,&local_28);
    if (0.0 <= param_2) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0455d2f0;
      }
      dVar7 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0455d2f0:
      dVar7 = local_28;
      if (((long)local_28 & 1U) != 0) {
        dVar7 = local_28 + dVar4;
      }
    }
    else {
      dVar7 = (double)(long)(dVar7 + -0.5);
    }
    dVar5 = (double)param_3;
    dVar4 = modf(dVar5,&local_28);
    if (0.0 <= param_3) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0455d35c;
      }
      dVar5 = (double)(long)(dVar5 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0455d35c:
      dVar5 = local_28;
      if (((long)local_28 & 1U) != 0) {
        dVar5 = local_28 + dVar4;
      }
    }
    else {
      dVar5 = (double)(long)(dVar5 + -0.5);
    }
    __x = (double)param_4;
    dVar4 = modf(__x,&local_28);
    if (0.0 <= param_4) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0455d3c8;
      }
      local_28 = (double)(long)(__x + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0455d3c8:
      if (((long)local_28 & 1U) != 0) {
        local_28 = local_28 + dVar4;
      }
    }
    else {
      local_28 = (double)(long)(__x + -0.5);
    }
    param_2 = (float)dVar7;
    param_3 = (float)dVar5;
    param_4 = (float)local_28;
  }
  if (param_10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0455d438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_10 + 0x18))
              (param_2,param_3,param_4,*(undefined8 *)(param_10 + 0x40),
               *(undefined8 *)(param_10 + 0x28));
    return;
  }
LAB_0455d43c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

