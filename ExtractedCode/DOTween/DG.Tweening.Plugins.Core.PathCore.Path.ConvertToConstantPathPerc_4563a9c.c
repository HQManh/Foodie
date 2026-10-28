// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.Path$$ConvertToConstantPathPerc
// address: 0x4563a9c
// body: available
// range: 0x4563a9c-0x4563beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4563be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4563be8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float DG_Tweening_Plugins_Core_PathCore_Path__ConvertToConstantPathPerc(float param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(param_2 + 0x20) == 0) {
    return param_1;
  }
  if ((param_1 <= 0.0) || (1.0 <= param_1)) goto LAB_04563bc0;
  if (*(float *)(param_2 + 0x38) <= 0.0) {
    return param_1;
  }
  lVar1 = *(long *)(param_2 + 0x48);
  if (lVar1 == 0) {
LAB_04563be4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  param_1 = *(float *)(param_2 + 0x38) * param_1;
  uVar2 = (uint)*(ulong *)(lVar1 + 0x18);
  if ((int)uVar2 < 1) {
    fVar7 = 0.0;
    fVar6 = 0.0;
    fVar8 = 0.0;
LAB_04563b8c:
    fVar9 = 0.0;
  }
  else {
    fVar6 = *(float *)(lVar1 + 0x20);
    if (fVar6 <= param_1) {
      lVar5 = *(long *)(param_2 + 0x40);
      uVar4 = 0;
      do {
        if (lVar5 == 0) goto LAB_04563be4;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_04563be8;
        if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) - 1 == uVar4) {
          fVar6 = 0.0;
          fVar8 = 0.0;
          fVar9 = 0.0;
          fVar7 = *(float *)(lVar5 + uVar4 * 4 + 0x20);
          goto LAB_04563ba8;
        }
        fVar6 = *(float *)(lVar1 + 0x24 + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (fVar6 <= param_1);
      fVar7 = *(float *)(lVar5 + uVar4 * 4 + 0x1c);
    }
    else {
      fVar7 = 0.0;
      uVar4 = 0;
    }
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar5 == 0) goto LAB_04563be4;
    uVar3 = (uint)uVar4;
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
LAB_04563be8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    fVar8 = *(float *)(lVar5 + uVar4 * 4 + 0x20);
    if ((int)uVar3 < 1) goto LAB_04563b8c;
    if (uVar2 <= uVar3 - 1) goto LAB_04563be8;
    fVar9 = *(float *)(lVar1 + (ulong)(uVar3 - 1) * 4 + 0x20);
  }
LAB_04563ba8:
  param_1 = fVar7 + (fVar8 - fVar7) * ((param_1 - fVar9) / (fVar6 - fVar9));
LAB_04563bc0:
  fVar6 = 1.0;
  if ((param_1 <= 1.0) && (fVar6 = 0.0, 0.0 <= param_1)) {
    fVar6 = param_1;
  }
  return fVar6;
}

