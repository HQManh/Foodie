// rea decompile_all
// name: DG.Tweening.Plugins.Vector2Plugin$$SetFrom
// address: 0x4567fb8
// body: available
// range: 0x4567fb8-0x456818b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4568188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector2Plugin__SetFrom
               (undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,ulong param_5)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  double __x;
  double dVar8;
  double local_38;
  
  if ((DAT_09518857 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518857 = 1;
  }
  if ((param_4 == 0) || (lVar3 = *(long *)(param_4 + 0x148), lVar3 == 0)) goto LAB_04568188;
  fVar6 = *(float *)(param_4 + 0x130);
  fVar7 = *(float *)(param_4 + 300);
  fVar4 = (float)(**(code **)(lVar3 + 0x18))
                           (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  *(float *)(param_4 + 300) = fVar4;
  *(float *)(param_4 + 0x130) = param_2;
  fVar1 = param_2;
  fVar2 = fVar4;
  if ((param_5 & 1) == 0) {
    fVar1 = -0.0;
    fVar2 = -0.0;
  }
  fVar7 = fVar7 + fVar2;
  fVar6 = fVar6 + fVar1;
  *(float *)(param_4 + 0x124) = fVar7;
  *(float *)(param_4 + 0x128) = fVar6;
  if ((*(int *)(param_4 + 0x13c) != 2) && (param_2 = fVar6, *(int *)(param_4 + 0x13c) == 4)) {
    fVar7 = fVar4;
  }
  if (*(char *)(param_4 + 0x140) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar8 = (double)fVar7;
    dVar5 = modf(dVar8,&local_38);
    if (0.0 <= fVar7) {
      if (dVar5 == 0.5) {
        dVar5 = 1.0;
        goto LAB_045680bc;
      }
      dVar8 = (double)(long)(dVar8 + 0.5);
    }
    else if (dVar5 == -0.5) {
      dVar5 = -1.0;
LAB_045680bc:
      dVar8 = local_38;
      if (((long)local_38 & 1U) != 0) {
        dVar8 = local_38 + dVar5;
      }
    }
    else {
      dVar8 = (double)(long)(dVar8 + -0.5);
    }
    __x = (double)param_2;
    dVar5 = modf(__x,&local_38);
    if (0.0 <= param_2) {
      if (dVar5 == 0.5) {
        dVar5 = 1.0;
        goto LAB_04568128;
      }
      local_38 = (double)(long)(__x + 0.5);
    }
    else if (dVar5 == -0.5) {
      dVar5 = -1.0;
LAB_04568128:
      if (((long)local_38 & 1U) != 0) {
        local_38 = local_38 + dVar5;
      }
    }
    else {
      local_38 = (double)(long)(__x + -0.5);
    }
    fVar7 = (float)dVar8;
    param_2 = (float)local_38;
  }
  lVar3 = *(long *)(param_4 + 0x150);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04568184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))
              (fVar7,param_2,*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    return;
  }
LAB_04568188:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

