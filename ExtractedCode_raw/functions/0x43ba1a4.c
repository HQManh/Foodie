// rea decompile_all
// name: ChocDino.UIFX.VertexSkewTextMeshPro$$BuildMatrix
// address: 0x43ba1a4
// body: available
// range: 0x43ba1a4-0x43ba42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_VertexSkewTextMeshPro__BuildMatrix(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined8 local_2a4;
  undefined4 local_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  float local_280;
  float fStack_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float fStack_1bc;
  float local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_09517b4d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ccf0);
    DAT_09517b4d = 1;
  }
  if (DAT_09516ccb == '\0') {
    FUN_03f5c2a4(&DAT_09187ec0);
    DAT_09516ccb = '\x01';
  }
  lVar2 = *(long *)(DAT_09187ec0 + 0xb8);
  uVar8 = *(undefined8 *)(lVar2 + 0x60);
  uVar7 = *(undefined8 *)(lVar2 + 0x78);
  uVar6 = *(undefined8 *)(lVar2 + 0x70);
  uVar10 = *(undefined8 *)(lVar2 + 0x48);
  uVar9 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = *(undefined8 *)(lVar2 + 0x58);
  uVar4 = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x78) = uVar7;
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  *(undefined8 *)(param_1 + 0x48) = uVar10;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  fVar3 = tanf(*(float *)(param_1 + 0x2c) * 0.017453292 * *(float *)(param_1 + 0x34));
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    fVar18 = **(float **)(DAT_0918cb68 + 0xb8);
    fVar17 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x50) = fVar3;
  }
  else {
    fVar17 = (*(float **)(DAT_0918cb68 + 0xb8))[1];
    fVar18 = *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x44) = fVar3;
  }
  uVar11 = *(undefined4 *)(param_1 + 0x80);
  fVar3 = *(float *)(param_1 + 0x84);
  fVar12 = *(float *)(param_1 + 0x88);
  uVar13 = *(undefined4 *)(param_1 + 0x8c);
  uVar15 = *(undefined4 *)(param_1 + 0x90);
  uVar16 = *(undefined4 *)(param_1 + 0x94);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(DAT_0918ccf0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_bc = fVar3;
  local_b8 = fVar12;
  local_c0 = (float)ChocDino_UIFX_VertexSkewTextMeshPro__GetAnchorPositionForBounds
                              (uVar11,fVar3,fVar12,uVar13,uVar15,uVar16,uVar1);
  uStack_128 = *(undefined8 *)(param_1 + 0x48);
  local_130 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = *(undefined8 *)(param_1 + 0x50);
  uStack_108 = *(undefined8 *)(param_1 + 0x68);
  local_110 = *(undefined8 *)(param_1 + 0x60);
  uStack_f8 = *(undefined8 *)(param_1 + 0x78);
  uStack_100 = *(undefined8 *)(param_1 + 0x70);
  *(float *)(param_1 + 0x98) = local_c0;
  *(float *)(param_1 + 0x9c) = local_bc;
  fVar3 = -local_c0;
  fVar12 = -local_bc;
  *(float *)(param_1 + 0xa0) = local_b8;
  fVar14 = -local_b8;
  local_e4 = 0;
  local_ec = 0;
  local_f0 = 0x3f800000;
  local_dc = 0x3f800000;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0x3f800000;
  local_b4 = 0x3f800000;
  FUN_04125f68(&local_b0,&local_f0,&local_130,0);
  local_1e4 = 0;
  uStack_1a8 = uStack_a8;
  local_1b0 = local_b0;
  uStack_198 = uStack_98;
  uStack_1a0 = uStack_a0;
  local_1ec = 0;
  local_1f0 = 0x3f800000;
  uStack_188 = uStack_88;
  local_190 = local_90;
  uStack_178 = uStack_78;
  uStack_180 = uStack_80;
  local_1dc = 0x3f800000;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0x3f800000;
  local_1b4 = 0x3f800000;
  local_1c0 = fVar3;
  fStack_1bc = fVar12;
  local_1b8 = fVar14;
  FUN_04125f68(&local_170,&local_1b0,&local_1f0,0);
  local_2b0 = 0x3f800000;
  uStack_268 = uStack_168;
  local_270 = local_170;
  uStack_258 = uStack_158;
  uStack_260 = uStack_160;
  local_2a4 = 0;
  local_2ac = 0;
  uStack_248 = uStack_148;
  local_250 = local_150;
  uStack_238 = uStack_138;
  uStack_240 = uStack_140;
  local_29c = 0x3f800000;
  local_280 = fVar18 * *(float *)(param_1 + 0x34);
  fStack_27c = fVar17 * *(float *)(param_1 + 0x34);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0x3f800000;
  local_278 = 0x3f80000000000000;
  FUN_04125f68(&local_230,&local_270,&local_2b0,0);
  *(undefined8 *)(param_1 + 0x48) = uStack_228;
  *(undefined8 *)(param_1 + 0x40) = local_230;
  *(undefined8 *)(param_1 + 0x58) = uStack_218;
  *(undefined8 *)(param_1 + 0x50) = uStack_220;
  *(undefined8 *)(param_1 + 0x68) = uStack_208;
  *(undefined8 *)(param_1 + 0x60) = local_210;
  *(undefined8 *)(param_1 + 0x78) = uStack_1f8;
  *(undefined8 *)(param_1 + 0x70) = uStack_200;
  return;
}

