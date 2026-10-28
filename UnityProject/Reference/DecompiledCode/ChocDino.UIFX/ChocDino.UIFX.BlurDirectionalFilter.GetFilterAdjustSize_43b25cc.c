// rea decompile_all
// name: ChocDino.UIFX.BlurDirectionalFilter$$GetFilterAdjustSize
// address: 0x43b25cc
// body: available
// range: 0x43b25cc-0x43b295b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_BlurDirectionalFilter__GetFilterAdjustSize
               (long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = *(float *)(param_1 + 0x1c8) * *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 0x20);
  if (fVar10 != 0.0) {
    fVar9 = *(float *)(param_1 + 0x1c4) * -0.017453292;
    fVar7 = sinf(fVar9);
    fVar9 = cosf(fVar9 + 3.1415927);
    fVar7 = fVar10 * fVar7;
    fVar10 = fVar10 * fVar9;
    if (*(int *)(param_1 + 0x1cc) == 1) {
      fVar9 = 1.0;
      if (1.0 < *(float *)(param_1 + 0x1d0)) {
        fVar8 = (*(float *)(param_1 + 0x1d0) + -1.0) / 7.0;
        fVar11 = 1.0;
        if (fVar8 <= 1.0) {
          fVar11 = fVar8;
        }
        fVar9 = 1.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar11 * 0.5 + 1.0;
        }
      }
      fVar7 = fVar7 / fVar9;
      fVar10 = fVar10 / fVar9;
    }
    if (*(int *)(param_1 + 0x1d4) == 1) {
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_095163ce == '\0')) {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = -0x8000000000000000;
      if ((float)(int)ABS(fVar10) != INFINITY) {
        lVar2 = (ulong)(uint)(int)ABS(fVar10) << 0x20;
      }
      uVar6 = 0x80000000;
      if ((float)(int)ABS(fVar7) != INFINITY) {
        uVar6 = (ulong)(uint)(int)(float)(int)ABS(fVar7);
      }
      *param_2 = *param_2 + lVar2 & 0xffffffff00000000 | (ulong)(uint)((int)*param_2 + (int)uVar6);
      uVar6 = *param_3 + uVar6;
      uVar5 = *param_3 + lVar2;
    }
    else {
      fVar11 = -fVar7;
      uVar6 = *param_2;
      fVar9 = 0.0;
      if (-0.0 <= fVar7) {
        fVar9 = fVar11;
      }
      if (DAT_095163ce == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      fVar10 = -fVar10;
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
        bVar4 = DAT_095163ce == '\0';
      }
      else {
        bVar4 = false;
      }
      fVar7 = 0.0;
      if (fVar10 <= 0.0) {
        fVar7 = fVar10;
      }
      if (bVar4) {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
        bVar4 = DAT_095163ce == '\0';
      }
      else {
        bVar4 = false;
      }
      lVar2 = -0x8000000000000000;
      if ((float)(int)ABS(fVar7) != INFINITY) {
        lVar2 = (ulong)(uint)(int)ABS(fVar7) << 0x20;
      }
      iVar1 = -0x80000000;
      if ((float)(int)ABS(fVar9) != INFINITY) {
        iVar1 = (int)ABS(fVar9);
      }
      fVar7 = 0.0;
      if (0.0 <= fVar11) {
        fVar7 = fVar11;
      }
      *param_2 = uVar6 + lVar2 & 0xffffffff00000000 | (ulong)(uint)((int)uVar6 + iVar1);
      uVar6 = *param_3;
      if (bVar4) {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_095163ce = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar9 = 0.0;
        if (0.0 <= fVar10) {
          fVar9 = fVar10;
        }
        if (DAT_095163ce == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_095163ce = '\x01';
        }
      }
      else {
        fVar9 = 0.0;
        if (0.0 <= fVar10) {
          fVar9 = fVar10;
        }
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = -0x8000000000000000;
      if ((float)(int)fVar9 != INFINITY) {
        lVar2 = (ulong)(uint)(int)fVar9 << 0x20;
      }
      uVar5 = uVar6 + lVar2;
      uVar3 = 0x80000000;
      if ((float)(int)fVar7 != INFINITY) {
        uVar3 = (ulong)(uint)(int)(float)(int)fVar7;
      }
      uVar6 = uVar6 + uVar3;
    }
    *param_3 = uVar5 & 0xffffffff00000000 | uVar6 & 0xffffffff;
  }
  return;
}

