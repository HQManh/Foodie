// rea decompile_all
// name: ChocDino.UIFX.BlurZoomFilter$$GetFilterAdjustSize
// address: 0x43c5f88
// body: available
// range: 0x43c5f88-0x43c6467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c6464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_BlurZoomFilter__GetFilterAdjustSize(long param_1,ulong *param_2,ulong *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  double local_68;
  
  if ((DAT_09517bb2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517bb2 = 1;
  }
  if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar14 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x34);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar14 = CONCAT44((float)((ulong)uVar14 >> 0x20) * *(float *)(param_1 + 0xb8),
                      (float)uVar14 * *(float *)(param_1 + 0xb8));
  }
  uVar17 = *(undefined8 *)(param_1 + 0x1c4);
  if (DAT_09515ce9 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce9 = '\x01';
  }
  puVar3 = *(undefined8 **)(DAT_0918cb68 + 0xb8);
  fVar5 = (float)uVar14 * ((float)uVar17 + (float)puVar3[1]) * 0.5;
  fVar7 = (float)((ulong)uVar14 >> 0x20) *
          ((float)((ulong)uVar17 >> 0x20) + (float)((ulong)puVar3[1] >> 0x20)) * 0.5;
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar5;
  auVar11._8_4_ = fVar5;
  auVar11._12_4_ = fVar7;
  auVar11 = NEON_rev64(auVar11,4);
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
    puVar3 = *(undefined8 **)(DAT_0918cb68 + 0xb8);
  }
  uVar17 = NEON_rev64(uVar14,4);
  fVar9 = *(float *)(param_1 + 0x1cc);
  uVar14 = NEON_rev64(*puVar3,4);
  fVar5 = (float)((ulong)uVar14 >> 0x20);
  fVar7 = (float)((ulong)uVar17 >> 0x20);
  fVar12 = (auVar11._0_4_ + ((float)uVar14 - auVar11._0_4_) * fVar9) - (float)uVar14;
  fVar5 = (auVar11._4_4_ + (fVar5 - auVar11._4_4_) * fVar9) - fVar5;
  fVar13 = (auVar11._8_4_ + ((float)uVar17 - auVar11._8_4_) * fVar9) - (float)uVar17;
  fVar7 = (auVar11._12_4_ + (fVar7 - auVar11._12_4_) * fVar9) - fVar7;
  if (*(int *)(param_1 + 0x1d0) == 1) {
    fVar9 = 1.0;
    if (1.0 < *(float *)(param_1 + 0x1d4)) {
      fVar6 = (*(float *)(param_1 + 0x1d4) + -1.0) / 7.0;
      fVar10 = 1.0;
      if (fVar6 <= 1.0) {
        fVar10 = fVar6;
      }
      fVar9 = 1.0;
      if (0.0 <= fVar6) {
        fVar9 = fVar10 * 1.6600001 + 1.0;
      }
    }
    fVar12 = fVar12 / fVar9;
    fVar5 = fVar5 / fVar9;
    fVar13 = fVar13 / fVar9;
    fVar7 = fVar7 / fVar9;
  }
  fVar9 = *(float *)(param_1 + 0x20);
  uVar4 = *param_2;
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar15 = (double)(ABS(fVar5) * fVar9);
  dVar8 = modf(dVar15,&local_68);
  if (0.0 <= ABS(fVar5) * fVar9) {
    if (dVar8 == 0.5) {
      dVar8 = 1.0;
      goto LAB_043c61a0;
    }
    dVar15 = (double)(long)(dVar15 + 0.5);
  }
  else if (dVar8 == -0.5) {
    dVar8 = -1.0;
LAB_043c61a0:
    dVar15 = local_68;
    if (((long)local_68 & 1U) != 0) {
      dVar15 = local_68 + dVar8;
    }
  }
  else {
    dVar15 = (double)(long)(dVar15 + -0.5);
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar16 = (double)(ABS(fVar12) * fVar9);
  dVar8 = modf(dVar16,&local_68);
  if (0.0 <= ABS(fVar12) * fVar9) {
    if (dVar8 == 0.5) {
      dVar8 = 1.0;
      goto LAB_043c6250;
    }
    dVar16 = (double)(long)(dVar16 + 0.5);
  }
  else if (dVar8 == -0.5) {
    dVar8 = -1.0;
LAB_043c6250:
    dVar16 = local_68;
    if (((long)local_68 & 1U) != 0) {
      dVar16 = local_68 + dVar8;
    }
  }
  else {
    dVar16 = (double)(long)(dVar16 + -0.5);
  }
  lVar2 = -0x8000000000000000;
  if (dVar16 != INFINITY) {
    lVar2 = (ulong)(uint)(int)dVar16 << 0x20;
  }
  iVar1 = -0x80000000;
  if (dVar15 != INFINITY) {
    iVar1 = (int)dVar15;
  }
  *param_2 = lVar2 + uVar4 & 0xffffffff00000000 | (ulong)(uint)(iVar1 + (int)uVar4);
  uVar4 = *param_3;
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar15 = (double)(ABS(fVar7) * fVar9);
  dVar8 = modf(dVar15,&local_68);
  if (0.0 <= ABS(fVar7) * fVar9) {
    if (dVar8 == 0.5) {
      dVar8 = 1.0;
      goto LAB_043c6338;
    }
    dVar15 = (double)(long)(dVar15 + 0.5);
  }
  else if (dVar8 == -0.5) {
    dVar8 = -1.0;
LAB_043c6338:
    dVar15 = local_68;
    if (((long)local_68 & 1U) != 0) {
      dVar15 = local_68 + dVar8;
    }
  }
  else {
    dVar15 = (double)(long)(dVar15 + -0.5);
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar16 = (double)(ABS(fVar13) * fVar9);
  dVar8 = modf(dVar16,&local_68);
  if (0.0 <= ABS(fVar13) * fVar9) {
    if (dVar8 != 0.5) {
      local_68 = (double)(long)(dVar16 + 0.5);
      goto LAB_043c6400;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      local_68 = (double)(long)(dVar16 + -0.5);
      goto LAB_043c6400;
    }
    dVar8 = -1.0;
  }
  if (((long)local_68 & 1U) != 0) {
    local_68 = local_68 + dVar8;
  }
LAB_043c6400:
  lVar2 = -0x8000000000000000;
  if (local_68 != INFINITY) {
    lVar2 = (ulong)(uint)(int)local_68 << 0x20;
  }
  iVar1 = -0x80000000;
  if (dVar15 != INFINITY) {
    iVar1 = (int)dVar15;
  }
  *param_3 = lVar2 + uVar4 & 0xffffffff00000000 | (ulong)(uint)(iVar1 + (int)uVar4);
  return;
}

