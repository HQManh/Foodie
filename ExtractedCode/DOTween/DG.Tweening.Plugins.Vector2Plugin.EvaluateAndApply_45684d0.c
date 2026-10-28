// rea decompile_all
// name: DG.Tweening.Plugins.Vector2Plugin$$EvaluateAndApply
// address: 0x45684d0
// body: available
// range: 0x45684d0-0x4568893 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4568878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector2Plugin__EvaluateAndApply
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,undefined8 param_7,ulong param_8,long param_9,undefined8 param_10,
               long param_11,long param_12)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  double __x;
  double dVar5;
  double local_68;
  
  if ((DAT_09518859 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518859 = 1;
  }
  if (param_9 == 0) goto LAB_04568878;
  if (*(int *)(param_9 + 0xa8) == 2) {
    fVar3 = (float)(*(int *)(param_9 + 0x10c) - (int)*(char *)(param_9 + 0x111));
    param_2 = param_2 + param_4 * fVar3;
    param_3 = param_3 + param_5 * fVar3;
  }
  if (*(char *)(param_9 + 0xe9) != '\0') {
    lVar2 = *(long *)(param_9 + 0xf0);
    if (lVar2 == 0) goto LAB_04568878;
    if (*(int *)(lVar2 + 0xa8) == 2) {
      if (*(int *)(param_9 + 0xa8) == 2) {
        iVar1 = *(int *)(param_9 + 0xa4);
      }
      else {
        iVar1 = 1;
      }
      fVar3 = (float)(*(int *)(lVar2 + 0x10c) - (int)*(char *)(lVar2 + 0x111));
      param_2 = param_2 + param_4 * (float)iVar1 * fVar3;
      param_3 = param_3 + param_5 * (float)iVar1 * fVar3;
    }
  }
  fVar3 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (param_1,param_6,*(undefined4 *)(param_9 + 0xc0),
                            *(undefined4 *)(param_9 + 0xc4),*(undefined4 *)(param_9 + 0xb4),
                            *(undefined8 *)(param_9 + 0xb8),0);
  if ((int)param_8 == 4) {
    if (param_11 == 0) goto LAB_04568878;
    param_2 = (float)(**(code **)(param_11 + 0x18))
                               (*(undefined8 *)(param_11 + 0x40),*(undefined8 *)(param_11 + 0x28));
    param_6 = param_3 + param_5 * fVar3;
    if ((param_8 >> 0x20 & 1) == 0) goto joined_r0x04568824;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar5 = (double)param_6;
    dVar4 = modf(dVar5,&local_68);
    if (0.0 <= param_6) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568788;
      }
      local_68 = (double)(long)(dVar5 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568788:
      if (((long)local_68 & 1U) != 0) {
        local_68 = local_68 + dVar4;
      }
    }
    else {
      local_68 = (double)(long)(dVar5 + -0.5);
    }
LAB_04568820:
    param_6 = (float)local_68;
  }
  else if ((int)param_8 == 2) {
    if (param_11 == 0) goto LAB_04568878;
    (**(code **)(param_11 + 0x18))
              (*(undefined8 *)(param_11 + 0x40),*(undefined8 *)(param_11 + 0x28));
    param_2 = param_2 + param_4 * fVar3;
    if ((param_8 >> 0x20 & 1) == 0) goto joined_r0x04568824;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar5 = (double)param_2;
    dVar4 = modf(dVar5,&local_68);
    if (0.0 <= param_2) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568760;
      }
      local_68 = (double)(long)(dVar5 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568760:
      if (((long)local_68 & 1U) != 0) {
        local_68 = local_68 + dVar4;
      }
    }
    else {
      local_68 = (double)(long)(dVar5 + -0.5);
    }
    param_2 = (float)local_68;
  }
  else {
    param_2 = param_2 + param_4 * fVar3;
    param_6 = param_3 + param_5 * fVar3;
    if ((param_8 >> 0x20 & 1) != 0) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar5 = (double)param_2;
      dVar4 = modf(dVar5,&local_68);
      if (0.0 <= param_2) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_04568738;
        }
        dVar5 = (double)(long)(dVar5 + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_04568738:
        dVar5 = local_68;
        if (((long)local_68 & 1U) != 0) {
          dVar5 = local_68 + dVar4;
        }
      }
      else {
        dVar5 = (double)(long)(dVar5 + -0.5);
      }
      __x = (double)param_6;
      dVar4 = modf(__x,&local_68);
      if (0.0 <= param_6) {
        if (dVar4 == 0.5) {
          dVar4 = 1.0;
          goto LAB_045687f4;
        }
        local_68 = (double)(long)(__x + 0.5);
      }
      else if (dVar4 == -0.5) {
        dVar4 = -1.0;
LAB_045687f4:
        if (((long)local_68 & 1U) != 0) {
          local_68 = local_68 + dVar4;
        }
      }
      else {
        local_68 = (double)(long)(__x + -0.5);
      }
      param_2 = (float)dVar5;
      goto LAB_04568820;
    }
  }
joined_r0x04568824:
  if (param_12 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04568858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_12 + 0x18))
              (param_2,param_6,*(undefined8 *)(param_12 + 0x40),*(undefined8 *)(param_12 + 0x28));
    return;
  }
LAB_04568878:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

