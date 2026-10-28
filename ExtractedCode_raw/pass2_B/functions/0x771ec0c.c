// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleSimplex
// address: 0x771ec0c
// body: available
// range: 0x771ec0c-0x771f08b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771f084 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771f088 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleSimplex
                (float param_1,float param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09522a20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a20 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar2 = (int)param_1;
  }
  iVar1 = 0x7fffffff;
  if (param_1 != INFINITY) {
    iVar1 = (int)param_1 + -1;
  }
  if (0.0 <= param_1) {
    iVar1 = iVar2;
  }
  uVar3 = iVar1 * 0x1dde90c9;
  iVar2 = 0x7fffffff;
  iVar6 = -0x80000000;
  if (param_2 != INFINITY) {
    iVar2 = (int)param_2 + -1;
    iVar6 = (int)param_2;
  }
  fVar8 = 0.0;
  if (0.0 <= param_2) {
    iVar2 = iVar6;
  }
  uVar4 = iVar2 * 0x43c42e4d;
  fVar9 = 0.0;
  fVar12 = ((param_1 - (float)iVar1) + (param_2 - (float)iVar2)) * 0.21132487;
  fVar11 = (param_1 - (float)iVar1) - fVar12;
  fVar10 = (param_2 - (float)iVar2) - fVar12;
  fVar13 = (0.5 - fVar11 * fVar11) - fVar10 * fVar10;
  if (0.0 < fVar13) {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a4f == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a4f = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_091888a0 + 0xb8);
    if (lVar7 == 0) goto LAB_0771f088;
    uVar5 = (uVar3 ^ param_4 ^ uVar4) * 0x27d4eb2d;
    uVar5 = (uVar5 ^ uVar5 >> 0xf) & 0xfe;
    if ((*(uint *)(lVar7 + 0x18) <= uVar5) || (*(uint *)(lVar7 + 0x18) <= (uVar5 | 1)))
    goto LAB_0771f084;
    fVar8 = fVar13 * fVar13 * fVar13 * fVar13 *
            (fVar11 * *(float *)(lVar7 + 0x20 + (ulong)uVar5 * 4) +
            fVar10 * *(float *)(lVar7 + 0x20 + (ulong)(uVar5 | 1) * 4));
  }
  fVar12 = fVar12 * 3.1547005 + fVar13 + -0.6666666;
  if (0.0 < fVar12) {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a4f == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a4f = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_091888a0 + 0xb8);
    if (lVar7 == 0) goto LAB_0771f088;
    uVar5 = (uVar3 + 0x1dde90c9 ^ uVar4 + 0x43c42e4d ^ param_4) * 0x27d4eb2d;
    uVar5 = (uVar5 ^ uVar5 >> 0xf) & 0xfe;
    if ((*(uint *)(lVar7 + 0x18) <= uVar5) || (*(uint *)(lVar7 + 0x18) <= (uVar5 | 1)))
    goto LAB_0771f084;
    fVar9 = fVar12 * fVar12 * fVar12 * fVar12 *
            ((fVar11 + -0.57735026) * *(float *)(lVar7 + 0x20 + (ulong)uVar5 * 4) +
            (fVar10 + -0.57735026) * *(float *)(lVar7 + 0x20 + (ulong)(uVar5 | 1) * 4));
  }
  if (fVar10 <= fVar11) {
    fVar10 = fVar10 + 0.21132487;
    fVar11 = fVar11 + -0.7886751;
    fVar13 = (0.5 - fVar11 * fVar11) - fVar10 * fVar10;
    fVar12 = 0.0;
    if (fVar13 <= 0.0) goto LAB_0771f048;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a4f == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a4f = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_091888a0 + 0xb8);
    if (lVar7 == 0) goto LAB_0771f088;
    uVar3 = (uVar3 + 0x1dde90c9 ^ param_4 ^ uVar4) * 0x27d4eb2d;
    uVar3 = (uVar3 ^ uVar3 >> 0xf) & 0xfe;
    if ((*(uint *)(lVar7 + 0x18) <= uVar3) || (*(uint *)(lVar7 + 0x18) <= (uVar3 | 1)))
    goto LAB_0771f084;
    fVar13 = fVar13 * fVar13;
    fVar12 = *(float *)(lVar7 + 0x20 + (ulong)(uVar3 | 1) * 4);
    fVar11 = fVar11 * *(float *)(lVar7 + 0x20 + (ulong)uVar3 * 4);
  }
  else {
    fVar11 = fVar11 + 0.21132487;
    fVar10 = fVar10 + -0.7886751;
    fVar13 = (0.5 - fVar11 * fVar11) - fVar10 * fVar10;
    fVar12 = 0.0;
    if (fVar13 <= 0.0) goto LAB_0771f048;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a4f == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a4f = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_091888a0 + 0xb8);
    if (lVar7 == 0) {
LAB_0771f088:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (uVar4 + 0x43c42e4d ^ param_4 ^ uVar3) * 0x27d4eb2d;
    uVar3 = (uVar3 ^ uVar3 >> 0xf) & 0xfe;
    if ((*(uint *)(lVar7 + 0x18) <= uVar3) || (*(uint *)(lVar7 + 0x18) <= (uVar3 | 1))) {
LAB_0771f084:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    fVar13 = fVar13 * fVar13;
    fVar12 = *(float *)(lVar7 + 0x20 + (ulong)(uVar3 | 1) * 4);
    fVar11 = fVar11 * *(float *)(lVar7 + 0x20 + (ulong)uVar3 * 4);
  }
  fVar12 = fVar13 * fVar13 * (fVar11 + fVar10 * fVar12);
LAB_0771f048:
  return (fVar9 + fVar8 + fVar12) * 99.83685;
}

