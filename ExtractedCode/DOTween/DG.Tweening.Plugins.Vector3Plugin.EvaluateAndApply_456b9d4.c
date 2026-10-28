// rea decompile_all
// name: DG.Tweening.Plugins.Vector3Plugin$$EvaluateAndApply
// address: 0x456b9d4
// body: available
// range: 0x456b9d4-0x456befb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456bef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector3Plugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,float param_7,float param_8,undefined8 param_9,ulong param_10,
               long param_11,undefined8 param_12,long param_13,long param_14)

{
  long lVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double __x;
  double dVar6;
  double dVar7;
  double local_78;
  
  if ((DAT_0951886f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951886f = 1;
  }
  if (param_11 == 0) goto LAB_0456bef8;
  if (*(int *)(param_11 + 0xa8) == 2) {
    fVar3 = (float)(*(int *)(param_11 + 0x10c) - (int)*(char *)(param_11 + 0x111));
    param_2 = param_2 + param_5 * fVar3;
    param_3 = param_3 + param_6 * fVar3;
    param_4 = param_4 + param_7 * fVar3;
  }
  if (*(char *)(param_11 + 0xe9) != '\0') {
    lVar1 = *(long *)(param_11 + 0xf0);
    if (lVar1 == 0) goto LAB_0456bef8;
    if (*(int *)(lVar1 + 0xa8) == 2) {
      if (*(int *)(param_11 + 0xa8) == 2) {
        iVar2 = *(int *)(param_11 + 0xa4);
      }
      else {
        iVar2 = 1;
      }
      fVar3 = (float)iVar2;
      fVar5 = (float)(*(int *)(lVar1 + 0x10c) - (int)*(char *)(lVar1 + 0x111));
      param_2 = param_2 + param_5 * fVar3 * fVar5;
      param_3 = param_3 + param_6 * fVar3 * fVar5;
      param_4 = param_4 + param_7 * fVar3 * fVar5;
    }
  }
  fVar5 = *(float *)(param_11 + 0xc0);
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_8,fVar5,*(undefined4 *)(param_11 + 0xc4),
                            *(undefined4 *)(param_11 + 0xb4),*(undefined8 *)(param_11 + 0xb8),0);
  iVar2 = (int)param_10;
  if (iVar2 == 8) {
    if (param_13 == 0) goto LAB_0456bef8;
    param_2 = (float)(**(code **)(param_13 + 0x18))
                               (*(undefined8 *)(param_13 + 0x40),*(undefined8 *)(param_13 + 0x28));
    fVar5 = param_4 + param_7 * fVar3;
    if ((param_10 >> 0x20 & 1) == 0) goto LAB_0456beb8;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar7 = (double)fVar5;
    dVar4 = modf(dVar7,&local_78);
    if (0.0 <= fVar5) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0456bd34;
      }
      local_78 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0456bd34:
      if (((long)local_78 & 1U) != 0) {
        local_78 = local_78 + dVar4;
      }
    }
    else {
      local_78 = (double)(long)(dVar7 + -0.5);
    }
LAB_0456be64:
    fVar5 = (float)local_78;
  }
  else if (iVar2 == 4) {
    if (param_13 == 0) goto LAB_0456bef8;
    param_2 = (float)(**(code **)(param_13 + 0x18))
                               (*(undefined8 *)(param_13 + 0x40),*(undefined8 *)(param_13 + 0x28));
    param_8 = param_3 + param_6 * fVar3;
    if ((param_10 >> 0x20 & 1) == 0) goto LAB_0456beb8;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar7 = (double)param_8;
    dVar4 = modf(dVar7,&local_78);
    if (0.0 <= param_8) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0456bd0c;
      }
      local_78 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0456bd0c:
      if (((long)local_78 & 1U) != 0) {
        local_78 = local_78 + dVar4;
      }
    }
    else {
      local_78 = (double)(long)(dVar7 + -0.5);
    }
    param_8 = (float)local_78;
  }
  else if (iVar2 == 2) {
    if (param_13 == 0) goto LAB_0456bef8;
    (**(code **)(param_13 + 0x18))
              (*(undefined8 *)(param_13 + 0x40),*(undefined8 *)(param_13 + 0x28));
    param_2 = param_2 + param_5 * fVar3;
    if ((param_10 >> 0x20 & 1) == 0) goto LAB_0456beb8;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar7 = (double)param_2;
    dVar4 = modf(dVar7,&local_78);
    if (0.0 <= param_2) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0456bd5c;
      }
      local_78 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0456bd5c:
      if (((long)local_78 & 1U) != 0) {
        local_78 = local_78 + dVar4;
      }
    }
    else {
      local_78 = (double)(long)(dVar7 + -0.5);
    }
    param_2 = (float)local_78;
  }
  else {
    param_2 = param_2 + param_5 * fVar3;
    param_8 = param_3 + param_6 * fVar3;
    fVar5 = param_4 + param_7 * fVar3;
    if ((param_10 >> 0x20 & 1) != 0) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar7 = (double)param_2;
      dVar4 = modf(dVar7,&local_78);
      if (0.0 <= param_2) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_0456bce4;
        }
        dVar7 = (double)(long)(dVar7 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_0456bce4:
        dVar7 = local_78;
        if (((long)local_78 & 1U) != 0) {
          dVar7 = local_78 + dVar4;
        }
      }
      else {
        dVar7 = (double)(long)(dVar7 + -0.5);
      }
      dVar6 = (double)param_8;
      dVar4 = modf(dVar6,&local_78);
      if (0.0 <= param_8) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_0456bdc8;
        }
        dVar6 = (double)(long)(dVar6 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_0456bdc8:
        dVar6 = local_78;
        if (((long)local_78 & 1U) != 0) {
          dVar6 = local_78 + dVar4;
        }
      }
      else {
        dVar6 = (double)(long)(dVar6 + -0.5);
      }
      __x = (double)fVar5;
      dVar4 = modf(__x,&local_78);
      if (0.0 <= fVar5) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_0456be34;
        }
        local_78 = (double)(long)(__x + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_0456be34:
        if (((long)local_78 & 1U) != 0) {
          local_78 = local_78 + dVar4;
        }
      }
      else {
        local_78 = (double)(long)(__x + -0.5);
      }
      param_2 = (float)dVar7;
      param_8 = (float)dVar6;
      goto LAB_0456be64;
    }
  }
LAB_0456beb8:
  if (param_14 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456bef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_14 + 0x18))
              (param_2,param_8,fVar5,*(undefined8 *)(param_14 + 0x40),
               *(undefined8 *)(param_14 + 0x28));
    return;
  }
LAB_0456bef8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

