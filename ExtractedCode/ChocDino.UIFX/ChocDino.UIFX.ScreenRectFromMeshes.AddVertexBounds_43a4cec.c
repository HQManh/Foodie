// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$AddVertexBounds
// address: 0x43a4cec
// body: available
// range: 0x43a4cec-0x43a4d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a4d74 to 0x43a3f90 ChocDino.UIFX.ScreenRectFromMeshes$$AddBounds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a4d80 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__AddVertexBounds
               (undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  ulong uVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((param_3 != 0) && (0 < (int)param_4)) {
    fVar2 = -3.4028235e+38;
    fVar4 = 3.4028235e+38;
    uVar1 = (ulong)param_4;
    pfVar3 = (float *)(param_3 + 0x28);
    fVar5 = fVar4;
    fVar6 = fVar4;
    fVar7 = fVar2;
    fVar8 = fVar2;
    do {
      if (*(uint *)(param_3 + 0x18) <= param_4 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      fVar9 = pfVar3[-2];
      fVar10 = pfVar3[-1];
      fVar11 = *pfVar3;
      if (fVar9 <= fVar4) {
        fVar4 = fVar9;
      }
      if (fVar10 <= fVar5) {
        fVar5 = fVar10;
      }
      if (fVar11 <= fVar6) {
        fVar6 = fVar11;
      }
      if (fVar2 <= fVar9) {
        fVar2 = fVar9;
      }
      if (fVar7 <= fVar10) {
        fVar7 = fVar10;
      }
      if (fVar8 <= fVar11) {
        fVar8 = fVar11;
      }
      uVar1 = uVar1 - 1;
      pfVar3 = pfVar3 + 3;
    } while (uVar1 != 0);
    ChocDino_UIFX_ScreenRectFromMeshes__AddBounds();
    return;
  }
  return;
}

