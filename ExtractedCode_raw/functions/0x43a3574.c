// rea decompile_all
// name: ChocDino.UIFX.MathUtils$$LerpUnclamped
// address: 0x43a3574
// body: available
// range: 0x43a3574-0x43a3723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MathUtils__LerpUnclamped
               (float param_1,float param_2,float param_3,undefined8 *param_4,undefined8 *param_5,
               ulong param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  undefined8 uVar9;
  float local_110 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
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
  
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  if ((param_6 & 1) == 0) {
    pfVar1 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar2 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar2 = (float)UnityEngine_Matrix4x4__GetLossyScale(param_4,0);
    fVar5 = param_2;
    fVar7 = param_3;
    fVar3 = (float)UnityEngine_Matrix4x4__GetLossyScale(param_5,0);
    fVar2 = fVar2 + (fVar3 - fVar2) * param_1;
    param_2 = param_2 + (fVar5 - param_2) * param_1;
    param_3 = param_3 + (fVar7 - param_3) * param_1;
  }
  uVar4 = *param_5;
  fVar5 = (float)*param_4;
  fVar7 = (float)((ulong)*param_4 >> 0x20);
  fVar3 = (float)param_4[1];
  fVar8 = (float)((ulong)param_4[1] >> 0x20);
  param_4[1] = CONCAT44(fVar8 + ((float)((ulong)param_5[1] >> 0x20) - fVar8) * param_1,
                        fVar3 + ((float)param_5[1] - fVar3) * param_1);
  *param_4 = CONCAT44(fVar7 + ((float)((ulong)uVar4 >> 0x20) - fVar7) * param_1,
                      fVar5 + ((float)uVar4 - fVar5) * param_1);
  uVar4 = param_5[2];
  fVar5 = (float)param_4[2];
  fVar7 = (float)((ulong)param_4[2] >> 0x20);
  fVar3 = (float)param_4[3];
  fVar8 = (float)((ulong)param_4[3] >> 0x20);
  uVar6 = param_4[4];
  uVar9 = param_4[6];
  param_4[3] = CONCAT44(fVar8 + ((float)((ulong)param_5[3] >> 0x20) - fVar8) * param_1,
                        fVar3 + ((float)param_5[3] - fVar3) * param_1);
  param_4[2] = CONCAT44(fVar7 + ((float)((ulong)uVar4 >> 0x20) - fVar7) * param_1,
                        fVar5 + ((float)uVar4 - fVar5) * param_1);
  uVar4 = param_5[4];
  fVar5 = (float)((ulong)uVar6 >> 0x20);
  fVar7 = (float)param_4[5];
  fVar3 = (float)((ulong)param_4[5] >> 0x20);
  param_4[5] = CONCAT44(fVar3 + ((float)((ulong)param_5[5] >> 0x20) - fVar3) * param_1,
                        fVar7 + ((float)param_5[5] - fVar7) * param_1);
  param_4[4] = CONCAT44(fVar5 + ((float)((ulong)uVar4 >> 0x20) - fVar5) * param_1,
                        (float)uVar6 + ((float)uVar4 - (float)uVar6) * param_1);
  uVar4 = param_5[6];
  fVar5 = (float)((ulong)uVar9 >> 0x20);
  fVar7 = (float)param_4[7];
  fVar3 = (float)((ulong)param_4[7] >> 0x20);
  param_4[7] = CONCAT44(fVar3 + ((float)((ulong)param_5[7] >> 0x20) - fVar3) * param_1,
                        fVar7 + ((float)param_5[7] - fVar7) * param_1);
  param_4[6] = CONCAT44(fVar5 + ((float)((ulong)uVar4 >> 0x20) - fVar5) * param_1,
                        (float)uVar9 + ((float)uVar4 - (float)uVar9) * param_1);
  if ((param_6 & 1) != 0) {
    local_110[0] = (float)UnityEngine_Matrix4x4__GetLossyScale(param_4,0);
    local_110[0] = fVar2 / local_110[0];
    uStack_c8 = param_4[1];
    local_d0 = *param_4;
    uStack_b8 = param_4[3];
    uStack_c0 = param_4[2];
    local_d4 = 0x3f800000;
    uStack_a8 = param_4[5];
    local_b0 = param_4[4];
    uStack_98 = param_4[7];
    uStack_a0 = param_4[6];
    local_110[3] = 0.0;
    local_110[4] = 0.0;
    local_110[1] = 0.0;
    local_110[2] = 0.0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_dc = 0;
    local_e4 = 0;
    local_110[5] = param_2 / (float)uVar6;
    local_e8 = param_3 / (float)uVar9;
    FUN_04125f68(&local_90,&local_d0,local_110,0);
    param_4[1] = uStack_88;
    *param_4 = local_90;
    param_4[3] = uStack_78;
    param_4[2] = uStack_80;
    param_4[5] = uStack_68;
    param_4[4] = local_70;
    param_4[7] = uStack_58;
    param_4[6] = uStack_60;
  }
  return;
}

