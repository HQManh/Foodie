// rea decompile_all
// name: DG.Tweening.Plugins.RectPlugin$$SetFrom
// address: 0x4567280
// body: available
// range: 0x4567280-0x45675e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45675e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_RectPlugin__SetFrom
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               long param_6,ulong param_7,uint param_8)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  double __x;
  double dVar8;
  double dVar9;
  double dVar10;
  double local_68;
  
  fVar4 = param_2;
  fVar5 = param_3;
  fVar6 = param_4;
  if ((DAT_0951884f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951884f = 1;
  }
  if ((param_8 & 1) == 0) {
    if (param_6 == 0) goto LAB_045675e0;
  }
  else {
    if ((param_6 == 0) || (lVar1 = *(long *)(param_6 + 0x158), lVar1 == 0)) goto LAB_045675e0;
    fVar2 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = *(undefined8 *)(param_6 + 0x134);
    param_1 = param_1 + fVar2;
    param_2 = param_2 + fVar4;
    param_3 = param_3 + fVar5;
    param_4 = param_4 + fVar6;
    *(ulong *)(param_6 + 0x13c) =
         CONCAT44(fVar6 + (float)((ulong)*(undefined8 *)(param_6 + 0x13c) >> 0x20),
                  fVar5 + (float)*(undefined8 *)(param_6 + 0x13c));
    *(undefined8 *)(param_6 + 0x134) =
         CONCAT44(fVar4 + (float)((ulong)uVar7 >> 0x20),fVar2 + (float)uVar7);
  }
  *(float *)(param_6 + 0x124) = param_1;
  *(float *)(param_6 + 0x128) = param_2;
  *(float *)(param_6 + 300) = param_3;
  *(float *)(param_6 + 0x130) = param_4;
  if ((param_7 & 1) == 0) {
    return;
  }
  if (*(char *)(param_6 + 0x154) != '\0') {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar10 = (double)param_1;
    dVar3 = modf(dVar10,&local_68);
    if (0.0 <= param_1) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_0456741c;
      }
      dVar10 = (double)(long)(dVar10 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_0456741c:
      dVar10 = local_68;
      if (((long)local_68 & 1U) != 0) {
        dVar10 = local_68 + dVar3;
      }
    }
    else {
      dVar10 = (double)(long)(dVar10 + -0.5);
    }
    dVar9 = (double)param_2;
    dVar3 = modf(dVar9,&local_68);
    if (0.0 <= param_2) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_04567488;
      }
      dVar9 = (double)(long)(dVar9 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_04567488:
      dVar9 = local_68;
      if (((long)local_68 & 1U) != 0) {
        dVar9 = local_68 + dVar3;
      }
    }
    else {
      dVar9 = (double)(long)(dVar9 + -0.5);
    }
    dVar8 = (double)param_3;
    dVar3 = modf(dVar8,&local_68);
    if (0.0 <= param_3) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_045674f4;
      }
      dVar8 = (double)(long)(dVar8 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_045674f4:
      dVar8 = local_68;
      if (((long)local_68 & 1U) != 0) {
        dVar8 = local_68 + dVar3;
      }
    }
    else {
      dVar8 = (double)(long)(dVar8 + -0.5);
    }
    __x = (double)param_4;
    dVar3 = modf(__x,&local_68);
    if (0.0 <= param_4) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_04567560;
      }
      local_68 = (double)(long)(__x + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_04567560:
      if (((long)local_68 & 1U) != 0) {
        local_68 = local_68 + dVar3;
      }
    }
    else {
      local_68 = (double)(long)(__x + -0.5);
    }
    param_1 = (float)dVar10;
    param_2 = (float)dVar9;
    param_3 = (float)dVar8;
    param_4 = (float)local_68;
  }
  lVar1 = *(long *)(param_6 + 0x160);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x045675dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (param_1,param_2,param_3,param_4,*(undefined8 *)(lVar1 + 0x40),
               *(undefined8 *)(lVar1 + 0x28));
    return;
  }
LAB_045675e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

