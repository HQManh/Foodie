// rea decompile_all
// name: DG.Tweening.Plugins.Vector4Plugin$$SetFrom
// address: 0x4568c00
// body: available
// range: 0x4568c00-0x4568fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4568fd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector4Plugin__SetFrom
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               long param_6,ulong param_7,uint param_8)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  double __x;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_68;
  
  fVar6 = param_3;
  fVar7 = param_4;
  fVar5 = param_2;
  if ((DAT_0951885c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951885c = 1;
  }
  if ((param_8 & 1) == 0) {
    if (param_6 == 0) goto LAB_04568fd0;
  }
  else {
    if ((param_6 == 0) || (lVar2 = *(long *)(param_6 + 0x160), lVar2 == 0)) goto LAB_04568fd0;
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_1 = param_1 + fVar3;
    uVar8 = *(undefined8 *)(param_6 + 0x134);
    param_2 = param_2 + fVar5;
    param_3 = param_3 + fVar6;
    param_4 = param_4 + fVar7;
    *(ulong *)(param_6 + 0x13c) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x13c) >> 0x20) + fVar7,
                  (float)*(undefined8 *)(param_6 + 0x13c) + fVar6);
    *(undefined8 *)(param_6 + 0x134) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) + fVar5,(float)uVar8 + fVar3);
  }
  *(float *)(param_6 + 0x124) = param_1;
  *(float *)(param_6 + 0x128) = param_2;
  *(float *)(param_6 + 300) = param_3;
  *(float *)(param_6 + 0x130) = param_4;
  if ((param_7 & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(param_6 + 0x154);
  if (iVar1 < 5) {
    if (iVar1 == 2) {
      lVar2 = *(long *)(param_6 + 0x160);
      if (lVar2 == 0) goto LAB_04568fd0;
      param_2 = fVar5;
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      param_4 = fVar7;
      param_3 = fVar6;
    }
    else if (iVar1 == 4) {
      lVar2 = *(long *)(param_6 + 0x160);
      if (lVar2 == 0) goto LAB_04568fd0;
      param_1 = (float)(**(code **)(lVar2 + 0x18))
                                 (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      param_4 = fVar7;
      param_3 = fVar6;
    }
  }
  else if (iVar1 == 8) {
    lVar2 = *(long *)(param_6 + 0x160);
    if (lVar2 == 0) goto LAB_04568fd0;
    param_2 = fVar5;
    param_1 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_4 = fVar7;
  }
  else if (iVar1 == 0x10) {
    lVar2 = *(long *)(param_6 + 0x160);
    if (lVar2 == 0) goto LAB_04568fd0;
    param_2 = fVar5;
    param_1 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_3 = fVar6;
  }
  if (*(char *)(param_6 + 0x158) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar11 = (double)param_1;
    dVar4 = modf(dVar11,&local_68);
    if (0.0 <= param_1) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568e0c;
      }
      dVar11 = (double)(long)(dVar11 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568e0c:
      dVar11 = local_68;
      if (((long)local_68 & 1U) != 0) {
        dVar11 = local_68 + dVar4;
      }
    }
    else {
      dVar11 = (double)(long)(dVar11 + -0.5);
    }
    dVar10 = (double)param_2;
    dVar4 = modf(dVar10,&local_68);
    if (0.0 <= param_2) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568e78;
      }
      dVar10 = (double)(long)(dVar10 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568e78:
      dVar10 = local_68;
      if (((long)local_68 & 1U) != 0) {
        dVar10 = local_68 + dVar4;
      }
    }
    else {
      dVar10 = (double)(long)(dVar10 + -0.5);
    }
    dVar9 = (double)param_3;
    dVar4 = modf(dVar9,&local_68);
    if (0.0 <= param_3) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568ee4;
      }
      dVar9 = (double)(long)(dVar9 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568ee4:
      dVar9 = local_68;
      if (((long)local_68 & 1U) != 0) {
        dVar9 = local_68 + dVar4;
      }
    }
    else {
      dVar9 = (double)(long)(dVar9 + -0.5);
    }
    __x = (double)param_4;
    dVar4 = modf(__x,&local_68);
    if (0.0 <= param_4) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_04568f50;
      }
      local_68 = (double)(long)(__x + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_04568f50:
      if (((long)local_68 & 1U) != 0) {
        local_68 = local_68 + dVar4;
      }
    }
    else {
      local_68 = (double)(long)(__x + -0.5);
    }
    param_1 = (float)dVar11;
    param_2 = (float)dVar10;
    param_3 = (float)dVar9;
    param_4 = (float)local_68;
  }
  lVar2 = *(long *)(param_6 + 0x168);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04568fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (param_1,param_2,param_3,param_4,*(undefined8 *)(lVar2 + 0x40),
               *(undefined8 *)(lVar2 + 0x28));
    return;
  }
LAB_04568fd0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

