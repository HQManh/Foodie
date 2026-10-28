// rea decompile_all
// name: DG.Tweening.Plugins.Vector4Plugin$$EvaluateAndApply
// address: 0x4569138
// body: available
// range: 0x4569138-0x45697db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45697d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector4Plugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,ulong param_7,long param_8,undefined8 param_9,long param_10,
               long param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,
               undefined8 param_15,float param_16)

{
  long lVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double __x;
  double dVar7;
  double dVar8;
  double dVar9;
  double local_78;
  
  if ((DAT_0951885d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951885d = 1;
  }
  if (param_8 == 0) goto LAB_045697d8;
  if (*(int *)(param_8 + 0xa8) == 2) {
    fVar3 = (float)(*(int *)(param_8 + 0x10c) - (int)*(char *)(param_8 + 0x111));
    param_2 = param_2 + (float)param_14 * fVar3;
    param_3 = param_3 + param_14._4_4_ * fVar3;
    param_4 = param_4 + (float)param_15 * fVar3;
    param_5 = param_5 + param_15._4_4_ * fVar3;
  }
  if (*(char *)(param_8 + 0xe9) != '\0') {
    lVar1 = *(long *)(param_8 + 0xf0);
    if (lVar1 == 0) goto LAB_045697d8;
    if (*(int *)(lVar1 + 0xa8) == 2) {
      if (*(int *)(param_8 + 0xa8) == 2) {
        iVar2 = *(int *)(param_8 + 0xa4);
      }
      else {
        iVar2 = 1;
      }
      fVar3 = (float)iVar2;
      fVar5 = (float)(*(int *)(lVar1 + 0x10c) - (int)*(char *)(lVar1 + 0x111));
      param_2 = param_2 + (float)param_14 * fVar3 * fVar5;
      param_3 = param_3 + param_14._4_4_ * fVar3 * fVar5;
      param_4 = param_4 + (float)param_15 * fVar3 * fVar5;
      param_5 = param_5 + param_15._4_4_ * fVar3 * fVar5;
    }
  }
  fVar5 = *(float *)(param_8 + 0xc0);
  fVar6 = *(float *)(param_8 + 0xc4);
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_16,fVar5,fVar6,*(undefined4 *)(param_8 + 0xb4),
                            *(undefined8 *)(param_8 + 0xb8),0);
  iVar2 = (int)param_7;
  if (iVar2 < 5) {
    if (iVar2 == 2) {
      if (param_10 == 0) goto LAB_045697d8;
      (**(code **)(param_10 + 0x18))
                (*(undefined8 *)(param_10 + 0x40),*(undefined8 *)(param_10 + 0x28));
      param_2 = param_2 + (float)param_14 * fVar3;
      if ((param_7 >> 0x20 & 1) == 0) goto LAB_04569794;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar9 = (double)param_2;
      dVar4 = modf(dVar9,&local_78);
      if (0.0 <= param_2) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_045695ac;
        }
        local_78 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_045695ac:
        if (((long)local_78 & 1U) != 0) {
          local_78 = local_78 + dVar4;
        }
      }
      else {
        local_78 = (double)(long)(dVar9 + -0.5);
      }
      param_2 = (float)local_78;
    }
    else {
      if (iVar2 != 4) goto LAB_0456939c;
      if (param_10 == 0) goto LAB_045697d8;
      param_2 = (float)(**(code **)(param_10 + 0x18))
                                 (*(undefined8 *)(param_10 + 0x40),*(undefined8 *)(param_10 + 0x28))
      ;
      param_16 = param_3 + param_14._4_4_ * fVar3;
      if ((param_7 >> 0x20 & 1) == 0) goto LAB_04569794;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar9 = (double)param_16;
      dVar4 = modf(dVar9,&local_78);
      if (0.0 <= param_16) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_0456955c;
        }
        local_78 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_0456955c:
        if (((long)local_78 & 1U) != 0) {
          local_78 = local_78 + dVar4;
        }
      }
      else {
        local_78 = (double)(long)(dVar9 + -0.5);
      }
      param_16 = (float)local_78;
    }
  }
  else if (iVar2 == 8) {
    if (param_10 == 0) goto LAB_045697d8;
    param_2 = (float)(**(code **)(param_10 + 0x18))
                               (*(undefined8 *)(param_10 + 0x40),*(undefined8 *)(param_10 + 0x28));
    fVar5 = param_4 + (float)param_15 * fVar3;
    if ((param_7 >> 0x20 & 1) == 0) goto LAB_04569794;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar9 = (double)fVar5;
    dVar4 = modf(dVar9,&local_78);
    if (0.0 <= fVar5) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04569584;
      }
      local_78 = (double)(long)(dVar9 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04569584:
      if (((long)local_78 & 1U) != 0) {
        local_78 = local_78 + dVar4;
      }
    }
    else {
      local_78 = (double)(long)(dVar9 + -0.5);
    }
    fVar5 = (float)local_78;
  }
  else {
    if (iVar2 == 0x10) {
      if (param_10 == 0) goto LAB_045697d8;
      param_2 = (float)(**(code **)(param_10 + 0x18))
                                 (*(undefined8 *)(param_10 + 0x40),*(undefined8 *)(param_10 + 0x28))
      ;
      fVar6 = param_5 + param_15._4_4_ * fVar3;
      if ((param_7 >> 0x20 & 1) == 0) goto LAB_04569794;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar9 = (double)fVar6;
      dVar4 = modf(dVar9,&local_78);
      if (0.0 <= fVar6) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_04569534;
        }
        local_78 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_04569534:
        if (((long)local_78 & 1U) != 0) {
          local_78 = local_78 + dVar4;
        }
      }
      else {
        local_78 = (double)(long)(dVar9 + -0.5);
      }
    }
    else {
LAB_0456939c:
      param_2 = param_2 + (float)param_14 * fVar3;
      param_16 = param_3 + param_14._4_4_ * fVar3;
      fVar5 = param_4 + (float)param_15 * fVar3;
      fVar6 = param_5 + param_15._4_4_ * fVar3;
      if ((param_7 >> 0x20 & 1) == 0) goto LAB_04569794;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar9 = (double)param_2;
      dVar4 = modf(dVar9,&local_78);
      if (0.0 <= param_2) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_0456950c;
        }
        dVar9 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_0456950c:
        dVar9 = local_78;
        if (((long)local_78 & 1U) != 0) {
          dVar9 = local_78 + dVar4;
        }
      }
      else {
        dVar9 = (double)(long)(dVar9 + -0.5);
      }
      dVar8 = (double)param_16;
      dVar4 = modf(dVar8,&local_78);
      if (0.0 <= param_16) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_04569618;
        }
        dVar8 = (double)(long)(dVar8 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_04569618:
        dVar8 = local_78;
        if (((long)local_78 & 1U) != 0) {
          dVar8 = local_78 + dVar4;
        }
      }
      else {
        dVar8 = (double)(long)(dVar8 + -0.5);
      }
      dVar7 = (double)fVar5;
      dVar4 = modf(dVar7,&local_78);
      if (0.0 <= fVar5) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_04569684;
        }
        dVar7 = (double)(long)(dVar7 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_04569684:
        dVar7 = local_78;
        if (((long)local_78 & 1U) != 0) {
          dVar7 = local_78 + dVar4;
        }
      }
      else {
        dVar7 = (double)(long)(dVar7 + -0.5);
      }
      __x = (double)fVar6;
      dVar4 = modf(__x,&local_78);
      if (0.0 <= fVar6) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_045696f0;
        }
        local_78 = (double)(long)(__x + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_045696f0:
        if (((long)local_78 & 1U) != 0) {
          local_78 = local_78 + dVar4;
        }
      }
      else {
        local_78 = (double)(long)(__x + -0.5);
      }
      param_2 = (float)dVar9;
      param_16 = (float)dVar8;
      fVar5 = (float)dVar7;
    }
    fVar6 = (float)local_78;
  }
LAB_04569794:
  if (param_11 != 0) {
                    /* WARNING: Could not recover jumptable at 0x045697d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_11 + 0x18))
              (param_2,param_16,fVar5,fVar6,*(undefined8 *)(param_11 + 0x40),
               *(undefined8 *)(param_11 + 0x28));
    return;
  }
LAB_045697d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

