// rea decompile_all
// name: DG.Tweening.Plugins.Vector4Plugin$$SetFrom
// address: 0x45688e0
// body: available
// range: 0x45688e0-0x4568bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4568bfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector4Plugin__SetFrom
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               ,long param_6,ulong param_7)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double __x;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double local_58;
  
  if ((DAT_0951885b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951885b = 1;
  }
  if ((param_6 == 0) || (lVar2 = *(long *)(param_6 + 0x160), lVar2 == 0)) goto LAB_04568bfc;
  fVar12 = *(float *)(param_6 + 0x134);
  fVar9 = *(float *)(param_6 + 0x138);
  fVar7 = *(float *)(param_6 + 0x13c);
  fVar5 = *(float *)(param_6 + 0x140);
  fVar3 = (float)(**(code **)(lVar2 + 0x18))
                           (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  *(float *)(param_6 + 0x134) = fVar3;
  *(float *)(param_6 + 0x138) = param_2;
  *(float *)(param_6 + 0x13c) = param_3;
  *(float *)(param_6 + 0x140) = param_4;
  if ((param_7 & 1) != 0) {
    fVar12 = fVar12 + fVar3;
    fVar9 = fVar9 + param_2;
    fVar7 = fVar7 + param_3;
    fVar5 = fVar5 + param_4;
  }
  iVar1 = *(int *)(param_6 + 0x154);
  *(float *)(param_6 + 0x124) = fVar12;
  *(float *)(param_6 + 0x128) = fVar9;
  *(float *)(param_6 + 300) = fVar7;
  *(float *)(param_6 + 0x130) = fVar5;
  if (iVar1 < 5) {
    fVar10 = param_2;
    fVar8 = param_3;
    fVar6 = param_4;
    if ((iVar1 != 2) &&
       (fVar10 = fVar9, param_2 = fVar9, fVar8 = fVar7, fVar7 = param_3, fVar6 = fVar5, iVar1 == 4))
    goto LAB_045689c8;
  }
  else if ((iVar1 == 8) ||
          (fVar10 = fVar9, fVar8 = fVar7, fVar7 = param_3, fVar6 = fVar5, param_4 = fVar5,
          iVar1 == 0x10)) {
LAB_045689c8:
    fVar12 = fVar3;
    fVar10 = param_2;
    fVar8 = fVar7;
    fVar6 = param_4;
  }
  if (*(char *)(param_6 + 0x158) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar14 = (double)fVar12;
    dVar4 = modf(dVar14,&local_58);
    if (0.0 <= fVar12) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568a40;
      }
      dVar14 = (double)(long)(dVar14 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568a40:
      dVar14 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar14 = local_58 + dVar4;
      }
    }
    else {
      dVar14 = (double)(long)(dVar14 + -0.5);
    }
    dVar13 = (double)fVar10;
    dVar4 = modf(dVar13,&local_58);
    if (0.0 <= fVar10) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568aac;
      }
      dVar13 = (double)(long)(dVar13 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568aac:
      dVar13 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar13 = local_58 + dVar4;
      }
    }
    else {
      dVar13 = (double)(long)(dVar13 + -0.5);
    }
    dVar11 = (double)fVar8;
    dVar4 = modf(dVar11,&local_58);
    if (0.0 <= fVar8) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568b18;
      }
      dVar11 = (double)(long)(dVar11 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568b18:
      dVar11 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar11 = local_58 + dVar4;
      }
    }
    else {
      dVar11 = (double)(long)(dVar11 + -0.5);
    }
    __x = (double)fVar6;
    dVar4 = modf(__x,&local_58);
    if (0.0 <= fVar6) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568b84;
      }
      local_58 = (double)(long)(__x + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568b84:
      if (((long)local_58 & 1U) != 0) {
        local_58 = local_58 + dVar4;
      }
    }
    else {
      local_58 = (double)(long)(__x + -0.5);
    }
    fVar12 = (float)dVar14;
    fVar10 = (float)dVar13;
    fVar8 = (float)dVar11;
    fVar6 = (float)local_58;
  }
  lVar2 = *(long *)(param_6 + 0x168);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04568bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (fVar12,fVar10,fVar8,fVar6,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28)
              );
    return;
  }
LAB_04568bfc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

