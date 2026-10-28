// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$OptimiseRects
// address: 0x43a5768
// body: available
// range: 0x43a5768-0x43a5a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__OptimiseRects(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  ulong uVar14;
  float local_60;
  
  if ((DAT_09517abf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517abf = 1;
  }
  if ((param_3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x2c);
    if ((0 < (int)param_2) || (1 < (int)(param_2 >> 0x20))) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = ChocDino_UIFX_MathUtils__PadAndRoundToNextMultiple
                        (*(undefined4 *)(param_1 + 0x34),param_2 & 0xffffffff,param_2 >> 0x20);
      uVar2 = ChocDino_UIFX_MathUtils__PadAndRoundToNextMultiple
                        (*(undefined4 *)(param_1 + 0x38),param_2 & 0xffffffff,param_2 >> 0x20);
      uVar11 = *(undefined8 *)(param_1 + 0x34);
      uVar9 = NEON_scvtf(CONCAT44(uVar2,uVar1),4);
      *(undefined8 *)(param_1 + 0x34) = uVar9;
      *(ulong *)(param_1 + 0x2c) =
           CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20) +
                    ((float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar11 >> 0x20)) * -0.5,
                    (float)*(undefined8 *)(param_1 + 0x2c) + ((float)uVar9 - (float)uVar11) * -0.5);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_1 + 0x2c);
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar3 = *(float *)(param_1 + 0x2c);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
    local_60 = *(float *)(param_1 + 0x30);
    if (DAT_09516626 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516626 = '\x01';
    }
  }
  else {
    local_60 = *(float *)(param_1 + 0x30);
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar4 = *(float *)(param_1 + 0x34);
  fVar5 = *(float *)(param_1 + 0x2c);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar6 = *(float *)(param_1 + 0x2c);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar7 = *(float *)(param_1 + 0x38);
  fVar8 = *(float *)(param_1 + 0x30);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar13 = *(float *)(param_1 + 0x30);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar4 = (float)(int)(fVar4 + fVar5);
  fVar5 = (float)(int)(fVar7 + fVar8);
  uVar12 = CONCAT44((int)(float)(int)fVar13,(int)(float)(int)fVar6);
  uVar10 = CONCAT44((int)fVar5,(int)fVar4);
  uVar14 = CONCAT44((int)(float)(int)local_60,(int)(float)(int)fVar3);
  uVar12 = uVar12 ^ (uVar12 ^ 0x8000000080000000) &
                    CONCAT44(-(uint)((float)(int)fVar13 == INFINITY),
                             -(uint)((float)(int)fVar6 == INFINITY));
  uVar10 = uVar10 ^ (uVar10 ^ 0x8000000080000000) &
                    CONCAT44(-(uint)(fVar5 == INFINITY),-(uint)(fVar4 == INFINITY));
  *(ulong *)(param_1 + 0x4c) =
       uVar14 ^ (uVar14 ^ 0x8000000080000000) &
                CONCAT44(-(uint)((float)(int)local_60 == INFINITY),
                         -(uint)((float)(int)fVar3 == INFINITY));
  *(ulong *)(param_1 + 0x54) =
       CONCAT44((int)(uVar10 >> 0x20) - (int)(uVar12 >> 0x20),(int)uVar10 - (int)uVar12);
  return;
}

