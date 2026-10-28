// rea decompile_all
// name: ChocDino.UIFX.MathUtils$$LerpUnclamped
// address: 0x43a33ac
// body: available
// range: 0x43a33ac-0x43a3573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MathUtils__LerpUnclamped
               (undefined8 *param_1,float param_2,float param_3,float param_4,undefined8 *param_5,
               undefined8 *param_6,ulong param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined8 uVar5;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_150 [6];
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128;
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  if ((param_7 & 1) == 0) {
    pfVar1 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar2 = *pfVar1;
    param_3 = pfVar1[1];
    param_4 = pfVar1[2];
  }
  else {
    fVar2 = (float)UnityEngine_Matrix4x4__GetLossyScale(param_5,0);
    fVar4 = param_3;
    fVar6 = param_4;
    fVar3 = (float)UnityEngine_Matrix4x4__GetLossyScale(param_6,0);
    fVar2 = fVar2 + (fVar3 - fVar2) * param_2;
    param_3 = param_3 + (fVar4 - param_3) * param_2;
    param_4 = param_4 + (fVar6 - param_4) * param_2;
  }
  fVar4 = (float)*param_5;
  fVar6 = (float)((ulong)*param_5 >> 0x20);
  fVar3 = (float)param_5[1];
  fVar7 = (float)((ulong)param_5[1] >> 0x20);
  fVar8 = (float)param_5[2];
  fVar10 = (float)((ulong)param_5[2] >> 0x20);
  fVar11 = (float)param_5[3];
  fVar12 = (float)((ulong)param_5[3] >> 0x20);
  fVar13 = (float)param_5[4];
  fVar14 = (float)((ulong)param_5[4] >> 0x20);
  fVar15 = (float)param_5[5];
  fVar16 = (float)((ulong)param_5[5] >> 0x20);
  fVar17 = (float)param_5[6];
  fVar18 = (float)((ulong)param_5[6] >> 0x20);
  fVar19 = (float)param_5[7];
  fVar20 = (float)((ulong)param_5[7] >> 0x20);
  local_90 = CONCAT44(fVar6 + ((float)((ulong)*param_6 >> 0x20) - fVar6) * param_2,
                      fVar4 + ((float)*param_6 - fVar4) * param_2);
  uStack_88 = CONCAT44(fVar7 + ((float)((ulong)param_6[1] >> 0x20) - fVar7) * param_2,
                       fVar3 + ((float)param_6[1] - fVar3) * param_2);
  uVar5 = CONCAT44(fVar10 + ((float)((ulong)param_6[2] >> 0x20) - fVar10) * param_2,
                   fVar8 + ((float)param_6[2] - fVar8) * param_2);
  uStack_78 = CONCAT44(fVar12 + ((float)((ulong)param_6[3] >> 0x20) - fVar12) * param_2,
                       fVar11 + ((float)param_6[3] - fVar11) * param_2);
  uVar9 = CONCAT44(fVar14 + ((float)((ulong)param_6[4] >> 0x20) - fVar14) * param_2,
                   fVar13 + ((float)param_6[4] - fVar13) * param_2);
  uStack_68 = CONCAT44(fVar16 + ((float)((ulong)param_6[5] >> 0x20) - fVar16) * param_2,
                       fVar15 + ((float)param_6[5] - fVar15) * param_2);
  uStack_60 = CONCAT44(fVar18 + ((float)((ulong)param_6[6] >> 0x20) - fVar18) * param_2,
                       fVar17 + ((float)param_6[6] - fVar17) * param_2);
  uStack_58 = CONCAT44(fVar20 + ((float)((ulong)param_6[7] >> 0x20) - fVar20) * param_2,
                       fVar19 + ((float)param_6[7] - fVar19) * param_2);
  uStack_80 = uVar5;
  local_70 = uVar9;
  if ((param_7 & 1) != 0) {
    local_150[0] = (float)UnityEngine_Matrix4x4__GetLossyScale(&local_90,0);
    local_150[0] = fVar2 / local_150[0];
    local_114 = 0x3f800000;
    uStack_108 = uStack_88;
    local_110 = local_90;
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    local_150[3] = 0.0;
    local_150[4] = 0.0;
    local_150[1] = 0.0;
    local_150[2] = 0.0;
    uStack_e8 = uStack_68;
    local_f0 = local_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    local_138 = 0;
    uStack_130 = 0;
    local_11c = 0;
    local_124 = 0;
    local_150[5] = param_3 / (float)uVar5;
    local_128 = param_4 / (float)uVar9;
    FUN_04125f68(&local_d0,&local_110,local_150,0);
    uStack_88 = uStack_c8;
    local_90 = local_d0;
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
  }
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  return;
}

