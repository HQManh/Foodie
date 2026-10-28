// rea decompile_all
// name: ChocDino.UIFX.GaussianBlurReference$$UpdateKernel
// address: 0x43c8040
// body: available
// range: 0x43c8040-0x43c81db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c81d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43c81d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_GaussianBlurReference__UpdateKernel(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09517bc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09517bc9 = 1;
  }
  fVar13 = *(float *)(param_1 + 0x14);
  iVar3 = ChocDino_UIFX_GaussianBlurReference__GetDownsampleFactor(param_1);
  fVar13 = (fVar13 / (float)iVar3) / 3.0;
  uVar4 = ChocDino_UIFX_GaussianBlurReference__GetHalfKernelSize(fVar13);
  uVar1 = uVar4 + 1;
  uVar6 = (ulong)uVar1;
  plVar7 = (long *)(param_1 + 0x40);
  lVar9 = *plVar7;
  if ((lVar9 == 0) || (uVar1 != *(uint *)(lVar9 + 0x18))) {
    lVar9 = FUN_03f5c394(DAT_09180528,uVar6);
    *plVar7 = lVar9;
    thunk_FUN_03f5d7b8(plVar7,lVar9);
    lVar9 = *plVar7;
  }
  fVar14 = fVar13 * (fVar13 + fVar13);
  fVar11 = expf(0.0 / fVar14);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar8 = (ulong)*(uint *)(lVar9 + 0x18);
  if (uVar8 != 0) {
    fVar13 = 1.0 / (fVar13 * 2.5066283);
    fVar11 = fVar13 * fVar11;
    *(float *)(lVar9 + 0x20) = fVar11;
    if (1 < (int)uVar1) {
      lVar10 = 0;
      do {
        if (uVar8 - 1 == lVar10) goto LAB_043c81d4;
        lVar2 = lVar10 + 1;
        fVar12 = expf((float)-((int)lVar2 * (int)lVar2) / fVar14);
        fVar12 = fVar13 * fVar12;
        *(float *)(lVar9 + 0x24 + lVar10 * 4) = fVar12;
        fVar11 = fVar11 + fVar12 + fVar12;
        lVar10 = lVar2;
      } while (uVar6 - 1 != lVar2);
    }
    if (uVar4 < 0x7fffffff) {
      pfVar5 = (float *)(lVar9 + 0x20);
      do {
        if (uVar8 == 0) goto LAB_043c81d4;
        uVar6 = uVar6 - 1;
        uVar8 = uVar8 - 1;
        *pfVar5 = *pfVar5 / fVar11;
        pfVar5 = pfVar5 + 1;
      } while (uVar6 != 0);
    }
    *(undefined2 *)(param_1 + 0x48) = 0x100;
    return;
  }
LAB_043c81d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

