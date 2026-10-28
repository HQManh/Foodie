// rea decompile_all
// name: DG.Tweening.Plugins.RectPlugin$$EvaluateAndApply
// address: 0x4567758
// body: available
// range: 0x4567758-0x4567bef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4567bec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_RectPlugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,ulong param_7,long param_8,undefined8 param_9,undefined8 param_10,
               long param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,
               undefined8 param_15,undefined4 param_16)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  ulong uVar6;
  double dVar7;
  double __x;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_78;
  
  uVar6 = (ulong)(uint)param_15._4_4_;
  if ((DAT_09518853 & 1) == 0) {
    FUN_03f5c2a4(uVar6,param_16,&DAT_09187e80);
    uVar6 = FUN_03f5c2a4(&DAT_09189c30);
    DAT_09518853 = 1;
  }
  if (param_8 == 0) goto LAB_04567bec;
  if (*(int *)(param_8 + 0xa8) == 2) {
    cVar2 = *(char *)(param_8 + 0x111);
    iVar4 = *(int *)(param_8 + 0x10c);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424(uVar6,param_16);
    }
    fVar5 = (float)(iVar4 - cVar2);
    param_2 = param_2 + (float)param_14 * fVar5;
    param_3 = param_3 + param_14._4_4_ * fVar5;
    param_4 = param_4 + (float)param_15 * fVar5;
    param_5 = param_5 + param_15._4_4_ * fVar5;
  }
  if (*(char *)(param_8 + 0xe9) != '\0') {
    lVar3 = *(long *)(param_8 + 0xf0);
    if (lVar3 == 0) goto LAB_04567bec;
    if (*(int *)(lVar3 + 0xa8) == 2) {
      if (*(int *)(param_8 + 0xa8) == 2) {
        iVar4 = *(int *)(param_8 + 0xa4);
      }
      else {
        iVar4 = 1;
      }
      cVar2 = *(char *)(lVar3 + 0x111);
      iVar1 = *(int *)(lVar3 + 0x10c);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar5 = (float)((iVar1 - cVar2) * iVar4);
      param_2 = param_2 + (float)param_14 * fVar5;
      param_3 = param_3 + param_14._4_4_ * fVar5;
      param_4 = param_4 + (float)param_15 * fVar5;
      param_5 = param_5 + param_15._4_4_ * fVar5;
    }
  }
  fVar5 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_16,*(undefined4 *)(param_8 + 0xc0),
                            *(undefined4 *)(param_8 + 0xc4),*(undefined4 *)(param_8 + 0xb4),
                            *(undefined8 *)(param_8 + 0xb8),0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  param_2 = param_2 + (float)param_14 * fVar5;
  param_3 = param_3 + param_14._4_4_ * fVar5;
  param_4 = param_4 + (float)param_15 * fVar5;
  param_5 = param_5 + param_15._4_4_ * fVar5;
  if ((param_7 & 1) != 0) {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar10 = (double)param_2;
    dVar7 = modf(dVar10,&local_78);
    if (0.0 <= param_2) {
      if (dVar7 == 0.5) {
        dVar7 = 1.0;
        goto LAB_04567a2c;
      }
      dVar10 = (double)(long)(dVar10 + 0.5);
    }
    else if (dVar7 == -0.5) {
      dVar7 = -1.0;
LAB_04567a2c:
      dVar10 = local_78;
      if (((long)local_78 & 1U) != 0) {
        dVar10 = local_78 + dVar7;
      }
    }
    else {
      dVar10 = (double)(long)(dVar10 + -0.5);
    }
    dVar9 = (double)param_3;
    dVar7 = modf(dVar9,&local_78);
    if (0.0 <= param_3) {
      if (dVar7 == 0.5) {
        dVar7 = 1.0;
        goto LAB_04567a98;
      }
      dVar9 = (double)(long)(dVar9 + 0.5);
    }
    else if (dVar7 == -0.5) {
      dVar7 = -1.0;
LAB_04567a98:
      dVar9 = local_78;
      if (((long)local_78 & 1U) != 0) {
        dVar9 = local_78 + dVar7;
      }
    }
    else {
      dVar9 = (double)(long)(dVar9 + -0.5);
    }
    dVar8 = (double)param_4;
    dVar7 = modf(dVar8,&local_78);
    if (0.0 <= param_4) {
      if (dVar7 == 0.5) {
        dVar7 = 1.0;
        goto LAB_04567b04;
      }
      dVar8 = (double)(long)(dVar8 + 0.5);
    }
    else if (dVar7 == -0.5) {
      dVar7 = -1.0;
LAB_04567b04:
      dVar8 = local_78;
      if (((long)local_78 & 1U) != 0) {
        dVar8 = local_78 + dVar7;
      }
    }
    else {
      dVar8 = (double)(long)(dVar8 + -0.5);
    }
    __x = (double)param_5;
    dVar7 = modf(__x,&local_78);
    if (0.0 <= param_5) {
      if (dVar7 == 0.5) {
        dVar7 = 1.0;
        goto LAB_04567b70;
      }
      local_78 = (double)(long)(__x + 0.5);
    }
    else if (dVar7 == -0.5) {
      dVar7 = -1.0;
LAB_04567b70:
      if (((long)local_78 & 1U) != 0) {
        local_78 = local_78 + dVar7;
      }
    }
    else {
      local_78 = (double)(long)(__x + -0.5);
    }
    param_2 = (float)dVar10;
    param_3 = (float)dVar9;
    param_4 = (float)dVar8;
    param_5 = (float)local_78;
  }
  if (param_11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04567be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_11 + 0x18))
              (param_2,param_3,param_4,param_5,*(undefined8 *)(param_11 + 0x40),
               *(undefined8 *)(param_11 + 0x28));
    return;
  }
LAB_04567bec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

