// rea decompile_all
// name: ChocDino.UIFX.VertexSkew$$BuildMatrix
// address: 0x43b1670
// body: available
// range: 0x43b1670-0x43b18b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkew__BuildMatrix(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_2a0;
  undefined8 local_29c;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  float local_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  float local_1b0;
  float fStack_1ac;
  float local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (DAT_09516ccb == '\0') {
    FUN_03f5c2a4(&DAT_09187ec0);
    DAT_09516ccb = '\x01';
  }
  lVar1 = *(long *)(DAT_09187ec0 + 0xb8);
  uVar3 = *(undefined8 *)(lVar1 + 0x40);
  uVar5 = *(undefined8 *)(lVar1 + 0x58);
  uVar4 = *(undefined8 *)(lVar1 + 0x50);
  uVar9 = *(undefined8 *)(lVar1 + 0x68);
  uVar8 = *(undefined8 *)(lVar1 + 0x60);
  uVar7 = *(undefined8 *)(lVar1 + 0x78);
  uVar6 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  *(undefined8 *)(param_1 + 0x68) = uVar6;
  *(undefined8 *)(param_1 + 0x60) = uVar9;
  *(undefined8 *)(param_1 + 0x58) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  fVar2 = tanf(*(float *)(param_1 + 0x2c) * 0.017453292 * *(float *)(param_1 + 0x34));
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    fVar11 = **(float **)(DAT_0918cb68 + 0xb8);
    fVar10 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x48) = fVar2;
  }
  else {
    fVar10 = (*(float **)(DAT_0918cb68 + 0xb8))[1];
    fVar11 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x3c) = fVar2;
  }
  local_ac = *(float *)(param_1 + 0x7c);
  local_a8 = *(float *)(param_1 + 0x80);
  local_b0 = (float)ChocDino_UIFX_VertexSkew__GetAnchorPositionForBounds
                              (*(undefined4 *)(param_1 + 0x78),local_ac,local_a8,
                               *(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x88),
                               *(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x24));
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  local_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  local_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  *(float *)(param_1 + 0x90) = local_b0;
  *(float *)(param_1 + 0x94) = local_ac;
  fVar2 = -local_b0;
  fVar12 = -local_ac;
  *(float *)(param_1 + 0x98) = local_a8;
  fVar13 = -local_a8;
  local_d4 = 0;
  local_dc = 0;
  local_e0 = 0x3f800000;
  local_cc = 0x3f800000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0x3f800000;
  local_a4 = 0x3f800000;
  FUN_04125f68(&local_a0,&local_e0,&local_120,0);
  local_1d4 = 0;
  uStack_198 = uStack_98;
  local_1a0 = local_a0;
  uStack_188 = uStack_88;
  uStack_190 = uStack_90;
  local_1dc = 0;
  local_1e0 = 0x3f800000;
  uStack_178 = uStack_78;
  local_180 = local_80;
  uStack_168 = uStack_68;
  uStack_170 = uStack_70;
  local_1cc = 0x3f800000;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0x3f800000;
  local_1a4 = 0x3f800000;
  local_1b0 = fVar2;
  fStack_1ac = fVar12;
  local_1a8 = fVar13;
  FUN_04125f68(&local_160,&local_1a0,&local_1e0,0);
  local_2a0 = 0x3f800000;
  uStack_258 = uStack_158;
  local_260 = local_160;
  uStack_248 = uStack_148;
  uStack_250 = uStack_150;
  local_294 = 0;
  local_29c = 0;
  uStack_238 = uStack_138;
  local_240 = local_140;
  uStack_228 = uStack_128;
  uStack_230 = uStack_130;
  local_28c = 0x3f800000;
  local_270 = fVar11 * *(float *)(param_1 + 0x34);
  fStack_26c = fVar10 * *(float *)(param_1 + 0x34);
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0x3f800000;
  local_268 = 0x3f80000000000000;
  FUN_04125f68(&local_220,&local_260,&local_2a0,0);
  *(undefined8 *)(param_1 + 0x40) = uStack_218;
  *(undefined8 *)(param_1 + 0x38) = local_220;
  *(undefined8 *)(param_1 + 0x50) = uStack_208;
  *(undefined8 *)(param_1 + 0x48) = uStack_210;
  *(undefined8 *)(param_1 + 0x60) = uStack_1f8;
  *(undefined8 *)(param_1 + 0x58) = local_200;
  *(undefined8 *)(param_1 + 0x70) = uStack_1e8;
  *(undefined8 *)(param_1 + 0x68) = uStack_1f0;
  return;
}

