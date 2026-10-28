// rea decompile_all
// name: DG.Tweening.Plugins.Vector3Plugin$$SetFrom
// address: 0x456b2f8
// body: available
// range: 0x456b2f8-0x456b577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456b574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector3Plugin__SetFrom
               (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,long param_5,
               ulong param_6)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double __x;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double local_48;
  
  if ((DAT_0951886d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951886d = 1;
  }
  if ((param_5 == 0) || (lVar3 = *(long *)(param_5 + 0x150), lVar3 == 0)) goto LAB_0456b574;
  fVar8 = *(float *)(param_5 + 0x138);
  fVar12 = *(float *)(param_5 + 0x134);
  fVar9 = *(float *)(param_5 + 0x130);
  fVar4 = (float)(**(code **)(lVar3 + 0x18))
                           (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  bVar2 = (param_6 & 1) == 0;
  iVar1 = *(int *)(param_5 + 0x148);
  *(float *)(param_5 + 0x130) = fVar4;
  *(float *)(param_5 + 0x138) = param_3;
  fVar6 = param_2;
  fVar10 = fVar4;
  if (bVar2) {
    fVar6 = -0.0;
    fVar10 = -0.0;
  }
  fVar7 = param_3;
  if (bVar2) {
    fVar7 = -0.0;
  }
  *(float *)(param_5 + 0x134) = param_2;
  fVar9 = fVar9 + fVar10;
  fVar12 = fVar12 + fVar6;
  fVar8 = fVar8 + fVar7;
  *(float *)(param_5 + 0x124) = fVar9;
  *(float *)(param_5 + 0x128) = fVar12;
  *(float *)(param_5 + 300) = fVar8;
  fVar10 = fVar9;
  fVar6 = param_3;
  if (((iVar1 != 2) && (fVar10 = fVar4, fVar6 = fVar8, iVar1 != 8)) &&
     (fVar10 = fVar9, param_2 = fVar12, iVar1 == 4)) {
    fVar10 = fVar4;
    fVar6 = param_3;
  }
  if (*(char *)(param_5 + 0x14c) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar13 = (double)fVar10;
    dVar5 = modf(dVar13,&local_48);
    if (0.0 <= fVar10) {
      if (dVar5 == 0.5) {
        dVar5 = 1.0;
        goto LAB_0456b430;
      }
      dVar13 = (double)(long)(dVar13 + 0.5);
    }
    else if (dVar5 == -0.5) {
      dVar5 = -1.0;
LAB_0456b430:
      dVar13 = local_48;
      if (((long)local_48 & 1U) != 0) {
        dVar13 = local_48 + dVar5;
      }
    }
    else {
      dVar13 = (double)(long)(dVar13 + -0.5);
    }
    dVar11 = (double)param_2;
    dVar5 = modf(dVar11,&local_48);
    if (0.0 <= param_2) {
      if (dVar5 == 0.5) {
        dVar5 = 1.0;
        goto LAB_0456b49c;
      }
      dVar11 = (double)(long)(dVar11 + 0.5);
    }
    else if (dVar5 == -0.5) {
      dVar5 = -1.0;
LAB_0456b49c:
      dVar11 = local_48;
      if (((long)local_48 & 1U) != 0) {
        dVar11 = local_48 + dVar5;
      }
    }
    else {
      dVar11 = (double)(long)(dVar11 + -0.5);
    }
    __x = (double)fVar6;
    dVar5 = modf(__x,&local_48);
    if (0.0 <= fVar6) {
      if (dVar5 == 0.5) {
        dVar5 = 1.0;
        goto LAB_0456b508;
      }
      local_48 = (double)(long)(__x + 0.5);
    }
    else if (dVar5 == -0.5) {
      dVar5 = -1.0;
LAB_0456b508:
      if (((long)local_48 & 1U) != 0) {
        local_48 = local_48 + dVar5;
      }
    }
    else {
      local_48 = (double)(long)(__x + -0.5);
    }
    fVar10 = (float)dVar13;
    param_2 = (float)dVar11;
    fVar6 = (float)local_48;
  }
  lVar3 = *(long *)(param_5 + 0x158);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456b570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))
              (fVar10,param_2,fVar6,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_0456b574:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

