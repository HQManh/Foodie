// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder$$GetPoint
// address: 0x456dc98
// body: available
// range: 0x456dc98-0x456defb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x456def4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x456def8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_CatmullRomDecoder__GetPoint
               (float param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_0951887e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951887e = 1;
  }
  if (param_3 == 0) {
LAB_0456def8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(param_3 + 0x18);
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  param_1 = (float)(iVar1 + -1) * param_1;
  uVar3 = 0x80000000;
  if ((float)(int)param_1 != INFINITY) {
    uVar3 = (int)param_1;
  }
  uVar2 = iVar1 - 2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  if (uVar2 == 0) {
    if (param_5 == 0) goto LAB_0456def8;
    if (*(int *)(param_5 + 0x18) == 0) goto LAB_0456def4;
    uVar3 = *(uint *)(param_3 + 0x18);
  }
  else {
    uVar3 = *(uint *)(param_3 + 0x18);
    if (uVar3 <= uVar2 - 1) goto LAB_0456def4;
  }
  if ((uVar2 < uVar3) && (uVar2 + 1 < uVar3)) {
    if ((int)(uVar3 - 1) < (int)(uVar2 + 2)) {
      if (param_5 == 0) goto LAB_0456def8;
      if ((*(uint *)(param_5 + 0x18) & 0xfffffffe) != 0) goto LAB_0456ddfc;
    }
    else if (uVar2 + 2 < uVar3) {
LAB_0456ddfc:
      NEON_fmov(0x40400000,4);
      NEON_fmov(0xc0a00000,4);
      NEON_fmov(0x40800000,4);
      return;
    }
  }
LAB_0456def4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

