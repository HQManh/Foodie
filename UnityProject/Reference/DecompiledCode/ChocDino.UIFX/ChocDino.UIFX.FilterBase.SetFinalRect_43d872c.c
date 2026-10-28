// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$SetFinalRect
// address: 0x43d872c
// body: available
// range: 0x43d872c-0x43d88fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d88f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__SetFinalRect(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_09517c9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c48);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517c9f = 1;
  }
  lVar7 = *(long *)(param_1 + 0x60);
  if ((lVar7 != 0) && (param_2 != 0)) {
    uVar9 = *(undefined8 *)(lVar7 + 0x54);
    iVar3 = *(int *)(lVar7 + 0x4c);
    iVar5 = *(int *)(lVar7 + 0x50);
    iVar4 = *(int *)(param_2 + 0x4c);
    iVar6 = *(int *)(param_2 + 0x50);
    uVar8 = *(undefined8 *)(param_2 + 0x54);
    if (*(int *)(DAT_09189c48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = (int)uVar8 + iVar4;
    fVar15 = 0.0;
    fVar16 = 0.0;
    iVar2 = iVar4;
    if (iVar1 <= iVar4) {
      iVar2 = iVar1;
    }
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    fVar10 = (float)iVar2;
    fVar14 = 0.0;
    if (fVar10 != (float)iVar4) {
      iVar1 = (int)uVar9 + iVar3;
      fVar11 = (float)iVar4 - fVar10;
      iVar4 = iVar3;
      if (iVar1 <= iVar3) {
        iVar4 = iVar1;
      }
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      fVar12 = ((float)iVar4 - fVar10) / fVar11;
      fVar11 = ((float)iVar3 - fVar10) / fVar11;
      fVar14 = 1.0;
      if (fVar12 <= 1.0) {
        fVar14 = fVar12;
      }
      fVar16 = 0.0;
      if (0.0 <= fVar12) {
        fVar16 = fVar14;
      }
      fVar10 = 1.0;
      if (fVar11 <= 1.0) {
        fVar10 = fVar11;
      }
      fVar14 = 0.0;
      if (0.0 <= fVar11) {
        fVar14 = fVar10;
      }
    }
    iVar4 = (int)((ulong)uVar8 >> 0x20) + iVar6;
    iVar3 = iVar6;
    if (iVar4 <= iVar6) {
      iVar3 = iVar4;
    }
    if (iVar6 <= iVar4) {
      iVar6 = iVar4;
    }
    fVar11 = (float)iVar3;
    fVar10 = 0.0;
    if (fVar11 != (float)iVar6) {
      fVar12 = (float)iVar6 - fVar11;
      iVar4 = (int)((ulong)uVar9 >> 0x20) + iVar5;
      iVar3 = iVar5;
      if (iVar4 <= iVar5) {
        iVar3 = iVar4;
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      fVar13 = ((float)iVar3 - fVar11) / fVar12;
      fVar12 = ((float)iVar5 - fVar11) / fVar12;
      fVar10 = 1.0;
      if (fVar13 <= 1.0) {
        fVar10 = fVar13;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar13) {
        fVar15 = fVar10;
      }
      fVar11 = 1.0;
      if (fVar12 <= 1.0) {
        fVar11 = fVar12;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar11;
      }
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(float *)(param_1 + 0x198) = fVar16;
    *(float *)(param_1 + 0x19c) = fVar15;
    *(float *)(param_1 + 0x1a0) = fVar14 - fVar16;
    *(float *)(param_1 + 0x1a4) = fVar10 - fVar15;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

