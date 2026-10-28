// rea decompile_all
// name: DG.Tweening.Plugins.FloatPlugin$$SetFrom
// address: 0x456ae20
// body: available
// range: 0x456ae20-0x456af4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456af4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_FloatPlugin__SetFrom(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  double __x;
  double local_38;
  
  if ((DAT_09518869 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518869 = 1;
  }
  if ((param_2 == 0) || (lVar1 = *(long *)(param_2 + 0x138), lVar1 == 0)) goto LAB_0456af4c;
  fVar4 = *(float *)(param_2 + 0x128);
  fVar2 = (float)(**(code **)(lVar1 + 0x18))
                           (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
  lVar1 = *(long *)(param_2 + 0x140);
  *(float *)(param_2 + 0x128) = fVar2;
  if ((param_3 & 1) == 0) {
    fVar2 = -0.0;
  }
  fVar4 = fVar4 + fVar2;
  *(float *)(param_2 + 0x124) = fVar4;
  if (*(char *)(param_2 + 0x130) != '\0') {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    __x = (double)fVar4;
    dVar3 = modf(__x,&local_38);
    if (0.0 <= fVar4) {
      if (dVar3 == 0.5) {
        dVar3 = 1.0;
        goto LAB_0456aef8;
      }
      local_38 = (double)(long)(__x + 0.5);
    }
    else if (dVar3 == -0.5) {
      dVar3 = -1.0;
LAB_0456aef8:
      if (((long)local_38 & 1U) != 0) {
        local_38 = local_38 + dVar3;
      }
    }
    else {
      local_38 = (double)(long)(__x + -0.5);
    }
    fVar4 = (float)local_38;
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0456af48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(fVar4,*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
LAB_0456af4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

