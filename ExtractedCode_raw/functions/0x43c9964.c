// rea decompile_all
// name: ChocDino.UIFX.ColorAdjust$$BuildHSVMatrix
// address: 0x43c9964
// body: available
// range: 0x43c9964-0x43c9b03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ColorAdjust__BuildHSVMatrix
               (float param_1,float param_2,float param_3,float *param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_148;
  float fStack_144;
  float local_140 [6];
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  
  if (DAT_09516ccb == '\0') {
    FUN_03f5c2a4(&DAT_09187ec0);
    DAT_09516ccb = '\x01';
  }
  lVar1 = *(long *)(DAT_09187ec0 + 0xb8);
  fVar7 = *(float *)(lVar1 + 0x4c);
  fVar6 = *(float *)(lVar1 + 0x5c);
  if (param_3 <= 0.0) {
    fVar5 = param_3 + 1.0;
  }
  else {
    fVar2 = 1.0;
    if (param_3 <= 1.0) {
      fVar2 = param_3;
    }
    fVar5 = 1.0;
    if (0.0 <= param_3) {
      fVar5 = fVar2 * 3.0 + 1.0;
    }
  }
  sincosf(param_1 * 0.017453292,&fStack_144,&local_148);
  local_70 = *(float *)(lVar1 + 0x7c);
  local_148 = (param_2 + 1.0) * local_148;
  local_140[3] = 0.0;
  local_140[4] = 0.0;
  fVar2 = (param_2 + 1.0) * fStack_144 * 0.57735026;
  local_140[1] = 0.0;
  local_140[2] = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  fVar3 = (1.0 - local_148) * 0.33333334;
  uStack_78 = *(undefined8 *)(lVar1 + 0x74);
  local_80 = *(undefined8 *)(lVar1 + 0x6c);
  param_4[0xf] = local_70;
  *(undefined8 *)(param_4 + 0xd) = uStack_78;
  *(undefined8 *)(param_4 + 0xb) = local_80;
  fVar4 = fVar3 - fVar2;
  fVar2 = fVar2 + fVar3;
  local_104 = 0x3f800000;
  local_10c = 0;
  local_114 = 0;
  param_4[8] = fVar2;
  param_4[9] = fVar4;
  param_4[10] = local_148 + fVar3;
  param_4[2] = fVar4;
  param_4[3] = fVar7;
  param_4[4] = fVar4;
  param_4[5] = local_148 + fVar3;
  param_4[6] = fVar2;
  param_4[7] = fVar6;
  *param_4 = local_148 + (1.0 - local_148) / 3.0;
  param_4[1] = fVar2;
  uStack_d8 = *(undefined8 *)(param_4 + 10);
  local_e0 = *(undefined8 *)(param_4 + 8);
  uStack_c8 = *(undefined8 *)(param_4 + 0xe);
  uStack_d0 = *(undefined8 *)(param_4 + 0xc);
  uStack_f8 = *(undefined8 *)(param_4 + 2);
  local_100 = *(undefined8 *)param_4;
  uStack_e8 = *(undefined8 *)(param_4 + 6);
  uStack_f0 = *(undefined8 *)(param_4 + 4);
  local_140[0] = fVar5;
  local_140[5] = fVar5;
  local_118 = fVar5;
  FUN_04125f68(&local_c0,&local_100,local_140,0);
  *(undefined8 *)(param_4 + 2) = uStack_b8;
  *(undefined8 *)param_4 = local_c0;
  *(undefined8 *)(param_4 + 6) = uStack_a8;
  *(undefined8 *)(param_4 + 4) = uStack_b0;
  *(undefined8 *)(param_4 + 10) = uStack_98;
  *(undefined8 *)(param_4 + 8) = local_a0;
  *(undefined8 *)(param_4 + 0xe) = uStack_88;
  *(undefined8 *)(param_4 + 0xc) = uStack_90;
  return;
}

