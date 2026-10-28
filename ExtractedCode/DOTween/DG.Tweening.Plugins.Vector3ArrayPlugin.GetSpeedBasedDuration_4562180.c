// rea decompile_all
// name: DG.Tweening.Plugins.Vector3ArrayPlugin$$GetSpeedBasedDuration
// address: 0x4562180
// body: available
// range: 0x4562180-0x456228b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4562284 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4562288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float DG_Tweening_Plugins_Vector3ArrayPlugin__GetSpeedBasedDuration
                (undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_4 == 0) {
LAB_04562288:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(ulong *)(param_4 + 0x18);
  if ((int)uVar1 < 1) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 0.0;
    uVar2 = 0;
    pfVar3 = (float *)(param_4 + 0x28);
    do {
      if (*(uint *)(param_4 + 0x18) <= uVar2) {
LAB_04562284:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (DAT_0951690d == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_0951690d = '\x01';
      }
      fVar6 = pfVar3[-2];
      fVar7 = pfVar3[-1];
      fVar5 = *pfVar3;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_3 == 0) goto LAB_04562288;
      if (*(uint *)(param_3 + 0x18) <= uVar2) goto LAB_04562284;
      pfVar3 = pfVar3 + 3;
      fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5) /
              *(float *)(param_3 + 0x20 + uVar2 * 4);
      *(float *)(param_3 + 0x20 + uVar2 * 4) = fVar5;
      uVar2 = uVar2 + 1;
      fVar4 = fVar4 + fVar5;
    } while ((uVar1 & 0xffffffff) != uVar2);
  }
  return fVar4;
}

