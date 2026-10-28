// rea decompile_all
// name: DG.Tweening.Plugins.RectPlugin$$SetFrom
// address: 0x4566f40
// body: available
// range: 0x4566f40-0x456727f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456727c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_RectPlugin__SetFrom
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               ,long param_6,ulong param_7)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  double __x;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_58;
  
  if ((DAT_0951884e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951884e = 1;
  }
  if (param_6 == 0) goto LAB_0456727c;
  uVar5 = *(undefined8 *)(param_6 + 0x13c);
  uVar3 = *(undefined8 *)(param_6 + 0x134);
  lVar1 = *(long *)(param_6 + 0x158);
  if (lVar1 == 0) goto LAB_0456727c;
  fVar2 = (float)(**(code **)(lVar1 + 0x18))
                           (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  *(float *)(param_6 + 0x134) = fVar2;
  *(float *)(param_6 + 0x138) = param_2;
  *(float *)(param_6 + 0x13c) = param_3;
  *(float *)(param_6 + 0x140) = param_4;
  *(undefined8 *)(param_6 + 300) = uVar5;
  *(undefined8 *)(param_6 + 0x124) = uVar3;
  if ((param_7 & 1) == 0) {
    fVar2 = *(float *)(param_6 + 0x124);
    param_2 = *(float *)(param_6 + 0x128);
    param_3 = *(float *)(param_6 + 300);
    param_4 = *(float *)(param_6 + 0x130);
  }
  else {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
      fVar2 = *(float *)(param_6 + 0x134);
      param_2 = *(float *)(param_6 + 0x138);
      param_3 = *(float *)(param_6 + 0x13c);
      param_4 = *(float *)(param_6 + 0x140);
    }
    fVar2 = *(float *)(param_6 + 0x124) + fVar2;
    param_2 = *(float *)(param_6 + 0x128) + param_2;
    param_3 = *(float *)(param_6 + 300) + param_3;
    param_4 = *(float *)(param_6 + 0x130) + param_4;
    *(float *)(param_6 + 0x124) = fVar2;
    *(float *)(param_6 + 0x128) = param_2;
    *(float *)(param_6 + 300) = param_3;
    *(float *)(param_6 + 0x130) = param_4;
  }
  if (*(char *)(param_6 + 0x154) != '\0') {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar8 = (double)fVar2;
    dVar4 = modf(dVar8,&local_58);
    if (0.0 <= fVar2) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_045670bc;
      }
      dVar8 = (double)(long)(dVar8 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_045670bc:
      dVar8 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar8 = local_58 + dVar4;
      }
    }
    else {
      dVar8 = (double)(long)(dVar8 + -0.5);
    }
    dVar7 = (double)param_2;
    dVar4 = modf(dVar7,&local_58);
    if (0.0 <= param_2) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04567128;
      }
      dVar7 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04567128:
      dVar7 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar7 = local_58 + dVar4;
      }
    }
    else {
      dVar7 = (double)(long)(dVar7 + -0.5);
    }
    dVar6 = (double)param_3;
    dVar4 = modf(dVar6,&local_58);
    if (0.0 <= param_3) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04567194;
      }
      dVar6 = (double)(long)(dVar6 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04567194:
      dVar6 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar6 = local_58 + dVar4;
      }
    }
    else {
      dVar6 = (double)(long)(dVar6 + -0.5);
    }
    __x = (double)param_4;
    dVar4 = modf(__x,&local_58);
    if (0.0 <= param_4) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04567200;
      }
      local_58 = (double)(long)(__x + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04567200:
      if (((long)local_58 & 1U) != 0) {
        local_58 = local_58 + dVar4;
      }
    }
    else {
      local_58 = (double)(long)(__x + -0.5);
    }
    fVar2 = (float)dVar8;
    param_2 = (float)dVar7;
    param_3 = (float)dVar6;
    param_4 = (float)local_58;
  }
  lVar1 = *(long *)(param_6 + 0x160);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04567278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (fVar2,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0x40),
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
LAB_0456727c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

