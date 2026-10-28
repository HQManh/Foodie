// rea decompile_all
// name: Utilities.GeometryUtilities$$CalculateSignedAreaPolygon
// address: 0x4507a40
// body: available
// range: 0x4507a40-0x4507acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4507ac8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4507acc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_GeometryUtilities__CalculateSignedAreaPolygon(long param_1)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (uint)*(ulong *)(param_1 + 0x18);
  if ((int)uVar4 < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    uVar5 = 0;
    do {
      if ((*(ulong *)(param_1 + 0x18) & 0xffffffff) == uVar5) {
LAB_04507ac8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar1 = uVar5 + 1;
      iVar3 = 0;
      if (uVar4 != 0) {
        iVar3 = (int)uVar1 / (int)uVar4;
      }
      uVar2 = (int)uVar1 - iVar3 * uVar4;
      if (uVar4 <= uVar2) goto LAB_04507ac8;
      uVar8 = *(undefined8 *)(param_1 + 0x20 + uVar5 * 8);
      uVar7 = NEON_rev64(*(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20),4);
      fVar6 = fVar6 + ((float)uVar8 * (float)uVar7 -
                      (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar7 >> 0x20));
      uVar5 = uVar1;
    } while ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar1);
    fVar6 = fVar6 * 0.5;
  }
  return fVar6;
}

