// rea decompile_all
// name: DG.Tweening.Plugins.Vector3ArrayPlugin$$EvaluateAndApply
// address: 0x456228c
// body: available
// range: 0x456228c-0x4562a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4562a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4562a7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector3ArrayPlugin__EvaluateAndApply
               (float param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
               undefined8 param_6,long param_7,long param_8,long param_9,long param_10)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double __x;
  float fVar15;
  double dVar16;
  double local_68;
  
  if ((DAT_0951883c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951883c = 1;
  }
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  if (param_5 == 0) goto LAB_04562a78;
  fVar15 = **(float **)(DAT_0918cbd0 + 0xb8);
  uVar13 = *(undefined8 *)(*(float **)(DAT_0918cbd0 + 0xb8) + 1);
  if ((*(int *)(param_5 + 0xa8) == 2) &&
     (iVar5 = *(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111), 0 < iVar5)) {
    if (param_9 == 0) goto LAB_04562a78;
    if (*(int *)(param_9 + 0x18) == 0) goto LAB_04562a7c;
    if (param_10 == 0) goto LAB_04562a78;
    uVar1 = *(int *)(param_9 + 0x18) - 1;
    if (*(uint *)(param_10 + 0x18) <= uVar1) goto LAB_04562a7c;
    lVar4 = param_9 + (long)(int)uVar1 * 0xc;
    lVar3 = param_10 + (long)(int)uVar1 * 0xc;
    uVar13 = *(undefined8 *)(lVar4 + 0x24);
    uVar11 = *(undefined8 *)(lVar3 + 0x24);
    fVar8 = (float)iVar5;
    fVar15 = ((*(float *)(lVar4 + 0x20) + *(float *)(lVar3 + 0x20)) - *(float *)(param_9 + 0x20)) *
             fVar8;
    uVar13 = CONCAT44((((float)((ulong)uVar13 >> 0x20) + (float)((ulong)uVar11 >> 0x20)) -
                      (float)((ulong)*(undefined8 *)(param_9 + 0x24) >> 0x20)) * fVar8,
                      (((float)uVar13 + (float)uVar11) - (float)*(undefined8 *)(param_9 + 0x24)) *
                      fVar8);
  }
  if (*(char *)(param_5 + 0xe9) != '\0') {
    lVar3 = *(long *)(param_5 + 0xf0);
    if (lVar3 == 0) goto LAB_04562a78;
    if (*(int *)(lVar3 + 0xa8) == 2) {
      if (*(int *)(param_5 + 0xa8) == 2) {
        iVar5 = *(int *)(param_5 + 0xa4);
      }
      else {
        iVar5 = 1;
      }
      iVar5 = (*(int *)(lVar3 + 0x10c) - (int)*(char *)(lVar3 + 0x111)) * iVar5;
      if (0 < iVar5) {
        if (param_9 == 0) goto LAB_04562a78;
        if (*(int *)(param_9 + 0x18) == 0) goto LAB_04562a7c;
        if (param_10 == 0) goto LAB_04562a78;
        uVar1 = *(int *)(param_9 + 0x18) - 1;
        if (*(uint *)(param_10 + 0x18) <= uVar1) goto LAB_04562a7c;
        lVar4 = param_9 + (long)(int)uVar1 * 0xc;
        lVar3 = param_10 + (long)(int)uVar1 * 0xc;
        uVar11 = *(undefined8 *)(lVar4 + 0x24);
        uVar12 = *(undefined8 *)(lVar3 + 0x24);
        fVar8 = (float)iVar5;
        fVar15 = fVar15 + ((*(float *)(lVar4 + 0x20) + *(float *)(lVar3 + 0x20)) -
                          *(float *)(param_9 + 0x20)) * fVar8;
        uVar13 = CONCAT44((float)((ulong)uVar13 >> 0x20) +
                          (((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar12 >> 0x20)) -
                          (float)((ulong)*(undefined8 *)(param_9 + 0x24) >> 0x20)) * fVar8,
                          (float)uVar13 +
                          (((float)uVar11 + (float)uVar12) - (float)*(undefined8 *)(param_9 + 0x24))
                          * fVar8);
      }
    }
  }
  if (param_4 == 0) goto LAB_04562a78;
  if ((int)*(ulong *)(param_4 + 0x18) < 1) {
    fVar7 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    uVar2 = 0;
    do {
      fVar7 = *(float *)(param_4 + 0x20 + uVar2 * 4);
      fVar9 = fVar9 + fVar7;
      if (param_1 <= fVar9) {
        fVar8 = param_1 - fVar8;
        uVar1 = (uint)uVar2;
        goto LAB_045624cc;
      }
      fVar8 = fVar8 + fVar7;
      uVar2 = uVar2 + 1;
    } while ((*(ulong *)(param_4 + 0x18) & 0xffffffff) != uVar2);
  }
  uVar1 = 0;
LAB_045624cc:
  uVar10 = *(undefined4 *)(param_5 + 0xc0);
  fVar8 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                           (fVar8,fVar7,uVar10,*(undefined4 *)(param_5 + 0xc4),
                            *(undefined4 *)(param_5 + 0xb4),*(undefined8 *)(param_5 + 0xb8),0);
  iVar5 = (int)param_3;
  fVar9 = (float)((ulong)uVar13 >> 0x20);
  if (iVar5 != 8) {
    if (iVar5 != 4) {
      if (iVar5 != 2) {
        if (param_9 == 0) goto LAB_04562a78;
        if (*(uint *)(param_9 + 0x18) <= uVar1) goto LAB_04562a7c;
        if (param_10 == 0) goto LAB_04562a78;
        if (*(uint *)(param_10 + 0x18) <= uVar1) goto LAB_04562a7c;
        param_10 = param_10 + (long)(int)uVar1 * 0xc;
        uVar11 = *(undefined8 *)(param_9 + 0x20 + (long)(int)uVar1 * 0xc + 4);
        uVar12 = *(undefined8 *)(param_10 + 0x24);
        fVar15 = fVar15 + *(float *)(param_9 + 0x20 + (long)(int)uVar1 * 0xc) +
                 fVar8 * *(float *)(param_10 + 0x20);
        fVar7 = (float)uVar13 + (float)uVar11 + (float)uVar12 * fVar8;
        fVar8 = fVar9 + (float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar12 >> 0x20) * fVar8;
        uVar2 = CONCAT44(fVar8,fVar7);
        if ((param_3 >> 0x20 & 1) != 0) {
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          dVar16 = (double)fVar15;
          dVar6 = modf(dVar16,&local_68);
          if (0.0 <= fVar15) {
            if (dVar6 == 0.5) {
              dVar6 = 1.0;
              goto LAB_04562828;
            }
            dVar16 = (double)(long)(dVar16 + 0.5);
          }
          else if (dVar6 == -0.5) {
            dVar6 = -1.0;
LAB_04562828:
            dVar16 = local_68;
            if (((long)local_68 & 1U) != 0) {
              dVar16 = local_68 + dVar6;
            }
          }
          else {
            dVar16 = (double)(long)(dVar16 + -0.5);
          }
          dVar14 = (double)fVar7;
          dVar6 = modf(dVar14,&local_68);
          if (0.0 <= fVar7) {
            if (dVar6 == 0.5) {
              dVar6 = 1.0;
              goto LAB_04562918;
            }
            dVar14 = (double)(long)(dVar14 + 0.5);
          }
          else if (dVar6 == -0.5) {
            dVar6 = -1.0;
LAB_04562918:
            dVar14 = local_68;
            if (((long)local_68 & 1U) != 0) {
              dVar14 = local_68 + dVar6;
            }
          }
          else {
            dVar14 = (double)(long)(dVar14 + -0.5);
          }
          __x = (double)fVar8;
          dVar6 = modf(__x,&local_68);
          if (0.0 <= fVar8) {
            if (dVar6 == 0.5) {
              dVar6 = 1.0;
              goto LAB_04562990;
            }
            local_68 = (double)(long)(__x + 0.5);
          }
          else if (dVar6 == -0.5) {
            dVar6 = -1.0;
LAB_04562990:
            if (((long)local_68 & 1U) != 0) {
              local_68 = local_68 + dVar6;
            }
          }
          else {
            local_68 = (double)(long)(__x + -0.5);
          }
          fVar15 = (float)dVar16;
          uVar2 = CONCAT44((float)local_68,(float)dVar14);
        }
        if (param_8 == 0) goto LAB_04562a78;
        goto LAB_04562a3c;
      }
      if ((param_7 == 0) ||
         ((**(code **)(param_7 + 0x18))
                    (*(undefined8 *)(param_7 + 0x40),*(undefined8 *)(param_7 + 0x28)), param_9 == 0)
         ) goto LAB_04562a78;
      if (*(uint *)(param_9 + 0x18) <= uVar1) goto LAB_04562a7c;
      if (param_10 == 0) goto LAB_04562a78;
      if (*(uint *)(param_10 + 0x18) <= uVar1) goto LAB_04562a7c;
      fVar15 = fVar15 + *(float *)(param_9 + (long)(int)uVar1 * 0xc + 0x20) +
               fVar8 * *(float *)(param_10 + (long)(int)uVar1 * 0xc + 0x20);
      if ((param_3 >> 0x20 & 1) != 0) {
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar16 = (double)fVar15;
        dVar6 = modf(dVar16,&local_68);
        if (0.0 <= fVar15) {
          if (dVar6 == 0.5) {
            dVar6 = 1.0;
            goto LAB_045628a8;
          }
          local_68 = (double)(long)(dVar16 + 0.5);
        }
        else if (dVar6 == -0.5) {
          dVar6 = -1.0;
LAB_045628a8:
          if (((long)local_68 & 1U) != 0) {
            local_68 = local_68 + dVar6;
          }
        }
        else {
          local_68 = (double)(long)(dVar16 + -0.5);
        }
        fVar15 = (float)local_68;
      }
      if (param_8 == 0) goto LAB_04562a78;
      uVar2 = CONCAT44(uVar10,fVar7);
      goto LAB_04562a3c;
    }
    if ((param_7 == 0) ||
       (fVar15 = (float)(**(code **)(param_7 + 0x18))
                                  (*(undefined8 *)(param_7 + 0x40),*(undefined8 *)(param_7 + 0x28)),
       param_9 == 0)) goto LAB_04562a78;
    if (*(uint *)(param_9 + 0x18) <= uVar1) goto LAB_04562a7c;
    if (param_10 == 0) goto LAB_04562a78;
    if (*(uint *)(param_10 + 0x18) <= uVar1) goto LAB_04562a7c;
    fVar8 = (float)uVar13 + *(float *)(param_9 + (long)(int)uVar1 * 0xc + 0x24) +
            fVar8 * *(float *)(param_10 + (long)(int)uVar1 * 0xc + 0x24);
    if ((param_3 >> 0x20 & 1) != 0) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar16 = (double)fVar8;
      dVar6 = modf(dVar16,&local_68);
      if (0.0 <= fVar8) {
        if (dVar6 == 0.5) {
          dVar6 = 1.0;
          goto LAB_04562850;
        }
        local_68 = (double)(long)(dVar16 + 0.5);
      }
      else if (dVar6 == -0.5) {
        dVar6 = -1.0;
LAB_04562850:
        if (((long)local_68 & 1U) != 0) {
          local_68 = local_68 + dVar6;
        }
      }
      else {
        local_68 = (double)(long)(dVar16 + -0.5);
      }
      fVar8 = (float)local_68;
    }
    if (param_8 == 0) goto LAB_04562a78;
    uVar2 = CONCAT44(uVar10,fVar8);
    goto LAB_04562a3c;
  }
  if ((param_7 == 0) ||
     (fVar15 = (float)(**(code **)(param_7 + 0x18))
                                (*(undefined8 *)(param_7 + 0x40),*(undefined8 *)(param_7 + 0x28)),
     param_9 == 0)) goto LAB_04562a78;
  if (*(uint *)(param_9 + 0x18) <= uVar1) {
LAB_04562a7c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (param_10 == 0) goto LAB_04562a78;
  if (*(uint *)(param_10 + 0x18) <= uVar1) goto LAB_04562a7c;
  fVar8 = fVar9 + *(float *)(param_9 + (long)(int)uVar1 * 0xc + 0x28) +
          fVar8 * *(float *)(param_10 + (long)(int)uVar1 * 0xc + 0x28);
  if ((param_3 >> 0x20 & 1) != 0) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar16 = (double)fVar8;
    dVar6 = modf(dVar16,&local_68);
    if (0.0 <= fVar8) {
      if (dVar6 == 0.5) {
        dVar6 = 1.0;
        goto LAB_0456287c;
      }
      local_68 = (double)(long)(dVar16 + 0.5);
    }
    else if (dVar6 == -0.5) {
      dVar6 = -1.0;
LAB_0456287c:
      if (((long)local_68 & 1U) != 0) {
        local_68 = local_68 + dVar6;
      }
    }
    else {
      local_68 = (double)(long)(dVar16 + -0.5);
    }
    fVar8 = (float)local_68;
  }
  if (param_8 == 0) {
LAB_04562a78:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = CONCAT44(fVar8,fVar7);
LAB_04562a3c:
                    /* WARNING: Could not recover jumptable at 0x04562a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_8 + 0x18))
            (fVar15,uVar2 & 0xffffffff,uVar2 >> 0x20,*(undefined8 *)(param_8 + 0x40),
             *(undefined8 *)(param_8 + 0x28));
  return;
}

