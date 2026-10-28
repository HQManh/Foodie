// rea decompile_all
// name: DG.Tweening.Plugins.Vector3Plugin$$SetFrom
// address: 0x456b578
// body: available
// range: 0x456b578-0x456b883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456b880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector3Plugin__SetFrom
               (float param_1,float param_2,float param_3,undefined8 param_4,long param_5,
               ulong param_6,uint param_7)

{
  int iVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double __x;
  double dVar7;
  double dVar8;
  double local_58;
  
  fVar6 = param_3;
  fVar5 = param_2;
  if ((DAT_0951886e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951886e = 1;
  }
  if ((param_7 & 1) == 0) {
    if (param_5 == 0) goto LAB_0456b880;
  }
  else {
    if ((param_5 == 0) || (lVar2 = *(long *)(param_5 + 0x150), lVar2 == 0)) goto LAB_0456b880;
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_1 = param_1 + fVar3;
    param_2 = param_2 + fVar5;
    param_3 = param_3 + fVar6;
    *(ulong *)(param_5 + 0x130) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x130) >> 0x20) + fVar5,
                  (float)*(undefined8 *)(param_5 + 0x130) + fVar3);
    *(float *)(param_5 + 0x138) = fVar6 + *(float *)(param_5 + 0x138);
  }
  *(float *)(param_5 + 0x124) = param_1;
  *(float *)(param_5 + 0x128) = param_2;
  *(float *)(param_5 + 300) = param_3;
  if ((param_6 & 1) == 0) {
    return;
  }
  iVar1 = *(int *)(param_5 + 0x148);
  if (iVar1 == 8) {
    lVar2 = *(long *)(param_5 + 0x150);
    if (lVar2 == 0) goto LAB_0456b880;
    param_2 = fVar5;
    param_1 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
  }
  else if (iVar1 == 4) {
    lVar2 = *(long *)(param_5 + 0x150);
    if (lVar2 == 0) goto LAB_0456b880;
    param_1 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_3 = fVar6;
  }
  else if (iVar1 == 2) {
    lVar2 = *(long *)(param_5 + 0x150);
    if (lVar2 == 0) goto LAB_0456b880;
    param_2 = fVar5;
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    param_3 = fVar6;
  }
  if (*(char *)(param_5 + 0x14c) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar8 = (double)param_1;
    dVar4 = modf(dVar8,&local_58);
    if (0.0 <= param_1) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0456b734;
      }
      dVar8 = (double)(long)(dVar8 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0456b734:
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
        goto LAB_0456b7a0;
      }
      dVar7 = (double)(long)(dVar7 + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0456b7a0:
      dVar7 = local_58;
      if (((long)local_58 & 1U) != 0) {
        dVar7 = local_58 + dVar4;
      }
    }
    else {
      dVar7 = (double)(long)(dVar7 + -0.5);
    }
    __x = (double)param_3;
    dVar4 = modf(__x,&local_58);
    if (0.0 <= param_3) {
      if (dVar4 == 0.5) {
        dVar4 = 1.0;
        goto LAB_0456b80c;
      }
      local_58 = (double)(long)(__x + 0.5);
    }
    else if (dVar4 == -0.5) {
      dVar4 = -1.0;
LAB_0456b80c:
      if (((long)local_58 & 1U) != 0) {
        local_58 = local_58 + dVar4;
      }
    }
    else {
      local_58 = (double)(long)(__x + -0.5);
    }
    param_1 = (float)dVar8;
    param_2 = (float)dVar7;
    param_3 = (float)local_58;
  }
  lVar2 = *(long *)(param_5 + 0x158);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456b87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))
              (param_1,param_2,param_3,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
LAB_0456b880:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

