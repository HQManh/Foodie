// rea decompile_all
// name: DG.Tweening.Plugins.Vector2Plugin$$SetFrom
// address: 0x456818c
// body: available
// range: 0x456818c-0x45683d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45683d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Vector2Plugin__SetFrom
               (float param_1,float param_2,undefined8 param_3,long param_4,ulong param_5,
               uint param_6)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined8 uVar5;
  double __x;
  double dVar6;
  double local_48;
  
  fVar4 = param_2;
  if ((DAT_09518858 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518858 = 1;
  }
  if ((param_6 & 1) == 0) {
    if (param_4 == 0) goto LAB_045683d0;
  }
  else {
    if ((param_4 == 0) || (lVar1 = *(long *)(param_4 + 0x148), lVar1 == 0)) goto LAB_045683d0;
    fVar2 = (float)(**(code **)(lVar1 + 0x18))
                             (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    param_1 = param_1 + fVar2;
    uVar5 = *(undefined8 *)(param_4 + 300);
    param_2 = param_2 + fVar4;
    *(undefined8 *)(param_4 + 300) =
         CONCAT44((float)((ulong)uVar5 >> 0x20) + fVar4,(float)uVar5 + fVar2);
  }
  *(float *)(param_4 + 0x124) = param_1;
  *(float *)(param_4 + 0x128) = param_2;
  if ((param_5 & 1) == 0) {
    return;
  }
  if (*(int *)(param_4 + 0x13c) == 4) {
    lVar1 = *(long *)(param_4 + 0x148);
    if (lVar1 == 0) goto LAB_045683d0;
    param_1 = (float)(**(code **)(lVar1 + 0x18))
                               (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  else if (*(int *)(param_4 + 0x13c) == 2) {
    lVar1 = *(long *)(param_4 + 0x148);
    if (lVar1 == 0) goto LAB_045683d0;
    param_2 = fVar4;
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  }
  if (*(char *)(param_4 + 0x140) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar6 = (double)param_1;
    dVar3 = modf(dVar6,&local_48);
    if (0.0 <= param_1) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_045682fc;
      }
      dVar6 = (double)(long)(dVar6 + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_045682fc:
      dVar6 = local_48;
      if (((long)local_48 & 1U) != 0) {
        dVar6 = local_48 + dVar3;
      }
    }
    else {
      dVar6 = (double)(long)(dVar6 + -0.5);
    }
    __x = (double)param_2;
    dVar3 = modf(__x,&local_48);
    if (0.0 <= param_2) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_04568368;
      }
      local_48 = (double)(long)(__x + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_04568368:
      if (((long)local_48 & 1U) != 0) {
        local_48 = local_48 + dVar3;
      }
    }
    else {
      local_48 = (double)(long)(__x + -0.5);
    }
    param_1 = (float)dVar6;
    param_2 = (float)local_48;
  }
  lVar1 = *(long *)(param_4 + 0x150);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x045683cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))
              (param_1,param_2,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
LAB_045683d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

