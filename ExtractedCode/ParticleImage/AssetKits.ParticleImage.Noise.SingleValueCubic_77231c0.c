// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleValueCubic
// address: 0x77231c0
// body: available
// range: 0x77231c0-0x7724883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleValueCubic
                (float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar31;
  int iVar32;
  undefined8 uVar30;
  float fVar33;
  byte bVar34;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  float fVar35;
  float fVar36;
  float fVar37;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  int iVar51;
  undefined8 uVar50;
  float fVar52;
  byte bVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  uint uVar65;
  undefined8 uVar60;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  byte bVar79;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  float fVar81;
  float fVar82;
  float fVar83;
  byte bVar87;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  uint uVar88;
  float fVar89;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  int iVar99;
  float fVar100;
  float fVar101;
  int iVar102;
  byte bVar103;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  float fVar104;
  float fVar105;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  int iVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  uint uVar119;
  float fVar120;
  int iVar121;
  uint uVar122;
  byte bVar123;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  float fVar124;
  float fVar125;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  int iVar143;
  float fVar144;
  int iVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  uint uVar54;
  uint uVar80;
  
  if ((DAT_09522a29 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a29 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522a53 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522a53 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar5 = 0x7fffffff;
  if (param_1 != INFINITY) {
    iVar5 = (int)param_1 + -1;
  }
  iVar27 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar27 = (int)param_1;
  }
  if (0.0 <= param_1) {
    iVar5 = iVar27;
  }
  uVar14 = iVar5 * 0x1dde90c9;
  iVar27 = -0x80000000;
  iVar4 = 0x7fffffff;
  if (param_2 != INFINITY) {
    iVar27 = (int)param_2;
    iVar4 = (int)param_2 + -1;
  }
  uVar6 = uVar14 ^ (uint)param_5;
  param_1 = param_1 - (float)iVar5;
  if (0.0 <= param_2) {
    iVar4 = iVar27;
  }
  uVar7 = uVar14 + 0x3bbd2192 ^ (uint)param_5;
  iVar5 = 0x7fffffff;
  if (param_3 != INFINITY) {
    iVar5 = (int)param_3 + -1;
  }
  iVar27 = -0x80000000;
  if (param_3 != INFINITY) {
    iVar27 = (int)param_3;
  }
  fVar95 = param_1 * param_1;
  uVar15 = iVar4 * 0x43c42e4d;
  if (0.0 <= param_3) {
    iVar5 = iVar27;
  }
  iVar27 = uVar14 + 0x1dde90c9;
  iVar31 = uVar14 + 0xe2216f37;
  uVar16 = iVar5 * 0x668b6e2f;
  uVar14 = uVar15 + 0xbc3bd1b3;
  uVar1 = uVar15 + 0x87885c9a;
  uVar2 = uVar15 + 0x43c42e4d;
  uVar8 = uVar6 ^ uVar15;
  uVar9 = uVar7 ^ uVar15;
  bVar123 = (byte)iVar27 ^ (byte)param_5;
  bVar130 = (byte)((ulong)param_5 >> 8);
  bVar126 = (byte)((uint)iVar27 >> 8) ^ bVar130;
  bVar131 = (byte)((ulong)param_5 >> 0x10);
  bVar127 = (byte)((uint)iVar27 >> 0x10) ^ bVar131;
  bVar132 = (byte)((ulong)param_5 >> 0x18);
  bVar128 = (byte)((uint)iVar27 >> 0x18) ^ bVar132;
  bVar129 = (byte)iVar31 ^ (byte)param_5;
  bVar130 = (byte)((uint)iVar31 >> 8) ^ bVar130;
  bVar131 = (byte)((uint)iVar31 >> 0x10) ^ bVar131;
  bVar132 = (byte)((uint)iVar31 >> 0x18) ^ bVar132;
  uVar3 = uVar16 + 0xcd16dc5e;
  uVar10 = uVar1 ^ uVar6;
  uVar11 = uVar2 ^ uVar6;
  uVar6 = uVar14 ^ uVar6;
  uVar12 = uVar7 ^ uVar2;
  bVar34 = bVar123 ^ (byte)uVar15;
  bVar42 = (byte)(uVar15 >> 8);
  bVar38 = bVar126 ^ bVar42;
  bVar43 = (byte)(uVar15 >> 0x10);
  bVar39 = bVar127 ^ bVar43;
  bVar44 = (byte)(uVar15 >> 0x18);
  bVar40 = bVar128 ^ bVar44;
  bVar41 = bVar129 ^ (byte)uVar15;
  bVar42 = bVar130 ^ bVar42;
  bVar43 = bVar131 ^ bVar43;
  bVar44 = bVar132 ^ bVar44;
  iVar27 = (uVar3 ^ uVar8) * 0x27d4eb2d;
  uVar15 = uVar16 + 0x668b6e2f;
  uVar13 = uVar7 ^ uVar14;
  bVar53 = (byte)(uVar3 >> 8);
  bVar61 = (byte)(uVar3 >> 0x10);
  bVar66 = (byte)(uVar3 >> 0x18);
  iVar113 = CONCAT13(bVar40 ^ bVar66,
                     CONCAT12(bVar39 ^ bVar61,CONCAT11(bVar38 ^ bVar53,bVar34 ^ (byte)uVar3)));
  iVar31 = (uVar12 ^ uVar3) * 0x27d4eb2d;
  iVar143 = (uVar9 ^ uVar3) * 0x27d4eb2d;
  bVar62 = (byte)(uVar15 >> 8);
  bVar67 = (byte)(uVar15 >> 0x10);
  bVar63 = (byte)(uVar15 >> 0x18);
  iVar145 = CONCAT13(bVar40 ^ bVar63,
                     CONCAT12(bVar39 ^ bVar67,CONCAT11(bVar38 ^ bVar62,bVar34 ^ (byte)uVar15)));
  iVar121 = (uVar12 ^ uVar16) * 0x27d4eb2d;
  iVar28 = iVar113 * 0x27d4eb2d;
  iVar32 = (int)(CONCAT17(bVar44 ^ bVar66,
                          CONCAT16(bVar43 ^ bVar61,
                                   CONCAT15(bVar42 ^ bVar53,CONCAT14(bVar41 ^ (byte)uVar3,iVar113)))
                         ) >> 0x20) * 0x27d4eb2d;
  iVar113 = (uVar13 ^ uVar3) * 0x27d4eb2d;
  iVar29 = (uVar11 ^ uVar16) * 0x27d4eb2d;
  iVar45 = iVar145 * 0x27d4eb2d;
  iVar51 = (int)(CONCAT17(bVar44 ^ bVar63,
                          CONCAT16(bVar43 ^ bVar67,
                                   CONCAT15(bVar42 ^ bVar62,CONCAT14(bVar41 ^ (byte)uVar15,iVar145))
                                  )) >> 0x20) * 0x27d4eb2d;
  iVar145 = (uVar10 ^ uVar3) * 0x27d4eb2d;
  iVar99 = (uVar12 ^ uVar15) * 0x27d4eb2d;
  iVar28 = iVar28 * iVar28;
  iVar32 = iVar32 * iVar32;
  uVar7 = uVar7 ^ uVar1;
  iVar102 = (uVar11 ^ uVar15) * 0x27d4eb2d;
  iVar45 = iVar45 * iVar45;
  iVar51 = iVar51 * iVar51;
  iVar17 = (uVar13 ^ uVar15) * 0x27d4eb2d;
  iVar18 = (uVar11 ^ uVar3) * 0x27d4eb2d;
  iVar19 = (uVar7 ^ uVar15) * 0x27d4eb2d;
  bVar53 = bVar123 ^ (byte)uVar2;
  bVar66 = (byte)(uVar2 >> 8);
  bVar61 = bVar126 ^ bVar66;
  bVar67 = (byte)(uVar2 >> 0x10);
  bVar62 = bVar127 ^ bVar67;
  bVar68 = (byte)(uVar2 >> 0x18);
  bVar63 = bVar128 ^ bVar68;
  uVar54 = CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar53)));
  bVar64 = bVar129 ^ (byte)uVar2;
  bVar66 = bVar130 ^ bVar66;
  bVar67 = bVar131 ^ bVar67;
  bVar68 = bVar132 ^ bVar68;
  iVar20 = (uVar10 ^ uVar15) * 0x27d4eb2d;
  iVar21 = (uVar6 ^ uVar15) * 0x27d4eb2d;
  iVar22 = (uVar9 ^ uVar15) * 0x27d4eb2d;
  uVar2 = iVar31 * iVar31;
  uVar65 = (uint)(CONCAT17(bVar68,CONCAT16(bVar67,CONCAT15(bVar66,CONCAT14(bVar64,uVar54)))) >> 0x20
                 );
  fVar96 = param_1 * fVar95;
  iVar31 = (uVar15 ^ uVar8) * 0x27d4eb2d;
  bVar103 = (byte)uVar16;
  bVar106 = (byte)(uVar16 >> 8);
  bVar107 = (byte)(uVar16 >> 0x10);
  bVar108 = (byte)(uVar16 >> 0x18);
  uVar30 = NEON_scvtf(CONCAT17((byte)((uint)(iVar32 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar32 >> 0x18),
                               CONCAT16((byte)((uint)(iVar32 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar32 >> 0x10),
                                        CONCAT15((char)((uint)iVar32 >> 8),
                                                 CONCAT14((char)iVar32,
                                                          CONCAT13((byte)((uint)(iVar28 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar28 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar28 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar28 >> 0x10),
                                                  (short)iVar28)))))),4);
  uVar23 = iVar145 * iVar145;
  bVar79 = bVar123 ^ (byte)uVar14;
  bVar90 = (byte)(uVar14 >> 8);
  bVar84 = bVar126 ^ bVar90;
  bVar91 = (byte)(uVar14 >> 0x10);
  bVar85 = bVar127 ^ bVar91;
  bVar92 = (byte)(uVar14 >> 0x18);
  bVar86 = bVar128 ^ bVar92;
  uVar80 = CONCAT13(bVar86,CONCAT12(bVar85,CONCAT11(bVar84,bVar79)));
  bVar87 = bVar129 ^ (byte)uVar14;
  bVar90 = bVar130 ^ bVar90;
  bVar91 = bVar131 ^ bVar91;
  bVar92 = bVar132 ^ bVar92;
  uVar14 = iVar18 * iVar18;
  uVar24 = iVar143 * iVar143;
  uVar60 = NEON_scvtf(CONCAT17((byte)((uint)(iVar51 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar51 >> 0x18),
                               CONCAT16((byte)((uint)(iVar51 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar51 >> 0x10),
                                        CONCAT15((char)((uint)iVar51 >> 8),
                                                 CONCAT14((char)iVar51,
                                                          CONCAT13((byte)((uint)(iVar45 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar45 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar45 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar45 >> 0x10),
                                                  (short)iVar45)))))),4);
  iVar143 = CONCAT13(bVar63 ^ bVar108,
                     CONCAT12(bVar62 ^ bVar107,CONCAT11(bVar61 ^ bVar106,bVar53 ^ bVar103))) *
            0x27d4eb2d;
  iVar145 = CONCAT13(bVar68 ^ bVar108,
                     CONCAT12(bVar67 ^ bVar107,CONCAT11(bVar66 ^ bVar106,bVar64 ^ bVar103))) *
            0x27d4eb2d;
  uVar25 = iVar27 * iVar27;
  uVar26 = iVar22 * iVar22;
  fVar97 = (float)uVar30 * 4.656613e-10;
  fVar100 = (float)((ulong)uVar30 >> 0x20) * 4.656613e-10;
  uVar119 = iVar121 * iVar121;
  uVar122 = iVar31 * iVar31;
  fVar70 = (float)(int)(uVar14 ^ uVar14 * 0x80000) / 2.1474836e+09;
  fVar46 = (float)(int)(uVar25 ^ uVar25 * 0x80000) / 2.1474836e+09;
  iVar27 = (uVar54 ^ uVar15) * 0x27d4eb2d;
  fVar136 = (float)uVar60 * 4.656613e-10;
  fVar138 = (float)((ulong)uVar60 >> 0x20) * 4.656613e-10;
  iVar31 = (uVar65 ^ uVar15) * 0x27d4eb2d;
  uVar14 = iVar102 * iVar102;
  uVar25 = iVar99 * iVar99;
  iVar143 = iVar143 * iVar143;
  iVar145 = iVar145 * iVar145;
  uVar88 = iVar27 * iVar27;
  fVar116 = (float)(int)(uVar122 ^ uVar122 * 0x80000) / 2.1474836e+09;
  uVar122 = iVar31 * iVar31;
  fVar55 = fVar100 - fVar46;
  iVar27 = (uVar54 ^ uVar3) * 0x27d4eb2d;
  fVar114 = (float)(int)(uVar14 ^ uVar14 * 0x80000) / 2.1474836e+09;
  iVar31 = (uVar65 ^ uVar3) * 0x27d4eb2d;
  fVar109 = (float)(int)(uVar88 ^ uVar88 * 0x80000) / 2.1474836e+09;
  fVar149 = fVar138 - fVar116;
  fVar151 = ((float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09 - fVar97) - fVar55;
  fVar118 = (float)(int)(uVar122 ^ uVar122 * 0x80000) / 2.1474836e+09;
  uVar14 = iVar27 * iVar27;
  uVar24 = iVar31 * iVar31;
  uVar88 = (uint)(CONCAT17(bVar92,CONCAT16(bVar91,CONCAT15(bVar90,CONCAT14(bVar87,uVar80)))) >> 0x20
                 );
  iVar27 = (uVar6 ^ uVar3) * 0x27d4eb2d;
  fVar93 = ((float)(int)(uVar26 ^ uVar26 * 0x80000) / 2.1474836e+09 - fVar136) - fVar149;
  fVar81 = fVar118 - fVar114;
  fVar76 = (float)(int)(uVar14 ^ uVar14 * 0x80000) / 2.1474836e+09;
  fVar56 = (float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09;
  uVar14 = iVar27 * iVar27;
  uVar24 = iVar29 * iVar29;
  uVar30 = NEON_scvtf(CONCAT17((byte)((uint)(iVar145 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar145 >> 0x18),
                               CONCAT16((byte)((uint)(iVar145 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar145 >> 0x10),
                                        CONCAT15((char)((uint)iVar145 >> 8),
                                                 CONCAT14((char)iVar145,
                                                          CONCAT13((byte)((uint)(iVar143 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar143 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar143 *
                                                                                         0x80000) >>
                                                                                  0x10) ^
                                                                            (byte)((uint)iVar143 >>
                                                                                  0x10),
                                                                            (short)iVar143)))))),4);
  fVar139 = ((float)(int)(uVar25 ^ uVar25 * 0x80000) / 2.1474836e+09 - fVar109) - fVar81;
  fVar73 = fVar56 - fVar70;
  uVar25 = iVar19 * iVar19;
  uVar26 = iVar20 * iVar20;
  fVar98 = (float)uVar30 * 4.656613e-10;
  fVar101 = (float)((ulong)uVar30 >> 0x20) * 4.656613e-10;
  fVar71 = (float)(int)(uVar14 ^ uVar14 * 0x80000) / 2.1474836e+09;
  fVar33 = ((float)(int)(uVar2 ^ uVar2 * 0x80000) / 2.1474836e+09 - fVar76) - fVar73;
  uVar14 = iVar113 * iVar113;
  fVar133 = (float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09;
  uVar2 = iVar17 * iVar17;
  iVar27 = (uVar80 ^ uVar3) * 0x27d4eb2d;
  iVar31 = (uVar88 ^ uVar3) * 0x27d4eb2d;
  uVar24 = iVar27 * iVar27;
  uVar122 = iVar31 * iVar31;
  fVar46 = fVar46 + param_1 * (fVar97 - fVar100) + fVar96 * fVar151 + fVar95 * (fVar55 - fVar151);
  fVar146 = fVar101 - fVar133;
  iVar27 = (uVar80 ^ uVar15) * 0x27d4eb2d;
  iVar31 = (uVar88 ^ uVar15) * 0x27d4eb2d;
  fVar100 = (float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09;
  fVar140 = ((float)(int)(uVar119 ^ uVar119 * 0x80000) / 2.1474836e+09 - fVar98) - fVar146;
  uVar24 = iVar21 * iVar21;
  fVar47 = (float)(int)(uVar122 ^ uVar122 * 0x80000) / 2.1474836e+09;
  uVar119 = iVar27 * iVar27;
  fVar116 = fVar116 + param_1 * (fVar136 - fVar138) + fVar96 * fVar93 + fVar95 * (fVar149 - fVar93);
  uVar122 = iVar31 * iVar31;
  iVar143 = CONCAT13(bVar86 ^ bVar108,
                     CONCAT12(bVar85 ^ bVar107,CONCAT11(bVar84 ^ bVar106,bVar79 ^ bVar103))) *
            0x27d4eb2d;
  iVar121 = CONCAT13(bVar92 ^ bVar108,
                     CONCAT12(bVar91 ^ bVar107,CONCAT11(bVar90 ^ bVar106,bVar87 ^ bVar103))) *
            0x27d4eb2d;
  fVar147 = fVar47 - fVar71;
  fVar82 = (float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09;
  fVar55 = (float)(int)(uVar119 ^ uVar119 * 0x80000) / 2.1474836e+09;
  fVar57 = (float)(int)(uVar122 ^ uVar122 * 0x80000) / 2.1474836e+09;
  iVar143 = iVar143 * iVar143;
  iVar121 = iVar121 * iVar121;
  iVar27 = (uVar13 ^ uVar16) * 0x27d4eb2d;
  fVar77 = ((float)(int)(uVar14 ^ uVar14 * 0x80000) / 2.1474836e+09 - fVar100) - fVar147;
  fVar74 = fVar57 - fVar82;
  fVar114 = fVar114 + param_1 * (fVar109 - fVar118) + fVar96 * fVar139 + fVar95 * (fVar81 - fVar139)
  ;
  uVar24 = iVar27 * iVar27;
  fVar134 = (float)(int)(uVar26 ^ uVar26 * 0x80000) / 2.1474836e+09;
  fVar110 = ((float)(int)(uVar2 ^ uVar2 * 0x80000) / 2.1474836e+09 - fVar55) - fVar74;
  iVar27 = (uVar6 ^ uVar16) * 0x27d4eb2d;
  iVar31 = (uVar10 ^ uVar16) * 0x27d4eb2d;
  uVar30 = NEON_scvtf(CONCAT17((byte)((uint)(iVar121 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar121 >> 0x18),
                               CONCAT16((byte)((uint)(iVar121 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar121 >> 0x10),
                                        CONCAT15((char)((uint)iVar121 >> 8),
                                                 CONCAT14((char)iVar121,
                                                          CONCAT13((byte)((uint)(iVar143 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar143 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar143 *
                                                                                         0x80000) >>
                                                                                  0x10) ^
                                                                            (byte)((uint)iVar143 >>
                                                                                  0x10),
                                                                            (short)iVar143)))))),4);
  uVar2 = iVar31 * iVar31;
  uVar26 = iVar27 * iVar27;
  fVar152 = (float)uVar30 * 4.656613e-10;
  fVar154 = (float)((ulong)uVar30 >> 0x20) * 4.656613e-10;
  iVar27 = (uVar7 ^ uVar16) * 0x27d4eb2d;
  bVar123 = bVar123 ^ (byte)uVar1;
  bVar53 = (byte)(uVar1 >> 8);
  bVar126 = bVar126 ^ bVar53;
  bVar61 = (byte)(uVar1 >> 0x10);
  bVar66 = (byte)(uVar1 >> 0x18);
  bVar127 = bVar127 ^ bVar61;
  bVar128 = bVar128 ^ bVar66;
  uVar119 = CONCAT13(bVar128,CONCAT12(bVar127,CONCAT11(bVar126,bVar123)));
  bVar129 = bVar129 ^ (byte)uVar1;
  bVar130 = bVar130 ^ bVar53;
  bVar131 = bVar131 ^ bVar61;
  bVar132 = bVar132 ^ bVar66;
  uVar122 = CONCAT13(bVar132,CONCAT12(bVar131,CONCAT11(bVar130,bVar129)));
  uVar14 = uVar16 + 0x997491d1;
  uVar1 = iVar27 * iVar27;
  fVar124 = (float)(int)(uVar26 ^ uVar26 * 0x80000) / 2.1474836e+09;
  iVar27 = CONCAT13(bVar128 ^ bVar108,
                    CONCAT12(bVar127 ^ bVar107,CONCAT11(bVar126 ^ bVar106,bVar123 ^ bVar103)));
  iVar31 = CONCAT13(bVar40 ^ bVar108,
                    CONCAT12(bVar39 ^ bVar107,CONCAT11(bVar38 ^ bVar106,bVar34 ^ bVar103)));
  bVar53 = (byte)(uVar14 >> 8);
  bVar61 = (byte)(uVar14 >> 0x10);
  bVar66 = (byte)(uVar14 >> 0x18);
  iVar143 = CONCAT13(bVar40 ^ bVar66,
                     CONCAT12(bVar39 ^ bVar61,CONCAT11(bVar38 ^ bVar53,bVar34 ^ (byte)uVar14)));
  fVar35 = fVar154 - fVar124;
  iVar121 = iVar27 * 0x27d4eb2d;
  iVar113 = (int)(CONCAT17(bVar132 ^ bVar108,
                           CONCAT16(bVar131 ^ bVar107,
                                    CONCAT15(bVar130 ^ bVar106,CONCAT14(bVar129 ^ bVar103,iVar27))))
                 >> 0x20) * 0x27d4eb2d;
  iVar99 = iVar31 * 0x27d4eb2d;
  iVar102 = (int)(CONCAT17(bVar44 ^ bVar108,
                           CONCAT16(bVar43 ^ bVar107,
                                    CONCAT15(bVar42 ^ bVar106,CONCAT14(bVar41 ^ bVar103,iVar31))))
                 >> 0x20) * 0x27d4eb2d;
  iVar27 = (uVar119 ^ uVar3) * 0x27d4eb2d;
  iVar31 = (uVar119 ^ uVar15) * 0x27d4eb2d;
  iVar29 = iVar143 * 0x27d4eb2d;
  iVar145 = (int)(CONCAT17(bVar44 ^ bVar66,
                           CONCAT16(bVar43 ^ bVar61,
                                    CONCAT15(bVar42 ^ bVar53,CONCAT14(bVar41 ^ (byte)uVar14,iVar143)
                                            ))) >> 0x20) * 0x27d4eb2d;
  fVar138 = ((float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09 - fVar152) - fVar35;
  fVar115 = (float)(int)(uVar2 ^ uVar2 * 0x80000) / 2.1474836e+09;
  uVar2 = iVar27 * iVar27;
  uVar24 = iVar31 * iVar31;
  iVar121 = iVar121 * iVar121;
  iVar113 = iVar113 * iVar113;
  iVar99 = iVar99 * iVar99;
  iVar102 = iVar102 * iVar102;
  iVar27 = (uVar122 ^ uVar15) * 0x27d4eb2d;
  iVar31 = (uVar122 ^ uVar3) * 0x27d4eb2d;
  iVar29 = iVar29 * iVar29;
  iVar145 = iVar145 * iVar145;
  fVar104 = (float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09;
  uVar15 = iVar27 * iVar27;
  uVar24 = iVar31 * iVar31;
  iVar27 = (uVar9 ^ uVar16) * 0x27d4eb2d;
  iVar31 = (uVar8 ^ uVar16) * 0x27d4eb2d;
  iVar143 = (uVar54 ^ uVar14) * 0x27d4eb2d;
  uVar16 = iVar27 * iVar27;
  fVar111 = (float)(int)(uVar15 ^ uVar15 * 0x80000) / 2.1474836e+09;
  uVar60 = NEON_scvtf(CONCAT17((byte)((uint)(iVar113 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar113 >> 0x18),
                               CONCAT16((byte)((uint)(iVar113 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar113 >> 0x10),
                                        CONCAT15((char)((uint)iVar113 >> 8),
                                                 CONCAT14((char)iVar113,
                                                          CONCAT13((byte)((uint)(iVar121 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar121 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar121 *
                                                                                         0x80000) >>
                                                                                  0x10) ^
                                                                            (byte)((uint)iVar121 >>
                                                                                  0x10),
                                                                            (short)iVar121)))))),4);
  uVar50 = NEON_scvtf(CONCAT17((byte)((uint)(iVar102 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar102 >> 0x18),
                               CONCAT16((byte)((uint)(iVar102 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar102 >> 0x10),
                                        CONCAT15((char)((uint)iVar102 >> 8),
                                                 CONCAT14((char)iVar102,
                                                          CONCAT13((byte)((uint)(iVar99 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar99 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar99 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar99 >> 0x10),
                                                  (short)iVar99)))))),4);
  uVar15 = iVar31 * iVar31;
  iVar27 = (uVar65 ^ uVar14) * 0x27d4eb2d;
  uVar26 = iVar143 * iVar143;
  iVar31 = (uVar12 ^ uVar14) * 0x27d4eb2d;
  fVar58 = fVar111 - fVar134;
  uVar12 = iVar27 * iVar27;
  uVar30 = NEON_scvtf(CONCAT17((byte)((uint)(iVar145 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar145 >> 0x18),
                               CONCAT16((byte)((uint)(iVar145 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar145 >> 0x10),
                                        CONCAT15((char)((uint)iVar145 >> 8),
                                                 CONCAT14((char)iVar145,
                                                          CONCAT13((byte)((uint)(iVar29 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar29 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar29 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar29 >> 0x10),
                                                  (short)iVar29)))))),4);
  iVar27 = (uVar11 ^ uVar14) * 0x27d4eb2d;
  fVar139 = (float)uVar60 * 4.656613e-10;
  fVar151 = (float)((ulong)uVar60 >> 0x20) * 4.656613e-10;
  fVar48 = (float)uVar50 * 4.656613e-10;
  fVar52 = (float)((ulong)uVar50 >> 0x20) * 4.656613e-10;
  uVar11 = iVar31 * iVar31;
  iVar31 = (uVar80 ^ uVar14) * 0x27d4eb2d;
  iVar143 = (uVar88 ^ uVar14) * 0x27d4eb2d;
  iVar121 = (uVar119 ^ uVar14) * 0x27d4eb2d;
  fVar78 = ((float)(int)(uVar25 ^ uVar25 * 0x80000) / 2.1474836e+09 - fVar104) - fVar58;
  fVar83 = (float)uVar30 * 4.656613e-10;
  fVar89 = (float)((ulong)uVar30 >> 0x20) * 4.656613e-10;
  uVar25 = iVar31 * iVar31;
  uVar119 = iVar143 * iVar143;
  fVar97 = (float)(int)(uVar15 ^ uVar15 * 0x80000) / 2.1474836e+09;
  iVar31 = (uVar13 ^ uVar14) * 0x27d4eb2d;
  iVar143 = (uVar10 ^ uVar14) * 0x27d4eb2d;
  uVar15 = iVar27 * iVar27;
  uVar10 = iVar31 * iVar31;
  fVar137 = fVar52 - fVar97;
  uVar13 = iVar121 * iVar121;
  iVar27 = (uVar122 ^ uVar14) * 0x27d4eb2d;
  fVar36 = (float)(int)(uVar26 ^ uVar26 * 0x80000) / 2.1474836e+09;
  uVar26 = iVar143 * iVar143;
  iVar31 = (uVar6 ^ uVar14) * 0x27d4eb2d;
  iVar143 = (uVar7 ^ uVar14) * 0x27d4eb2d;
  fVar141 = fVar151 - fVar115;
  iVar121 = (uVar9 ^ uVar14) * 0x27d4eb2d;
  fVar148 = ((float)(int)(uVar16 ^ uVar16 * 0x80000) / 2.1474836e+09 - fVar48) - fVar137;
  fVar142 = (float)(int)(uVar12 ^ uVar12 * 0x80000) / 2.1474836e+09;
  iVar113 = (uVar14 ^ uVar8) * 0x27d4eb2d;
  iVar29 = (uVar7 ^ uVar3) * 0x27d4eb2d;
  uVar14 = iVar31 * iVar31;
  uVar6 = iVar27 * iVar27;
  fVar93 = (float)(int)(uVar15 ^ uVar15 * 0x80000) / 2.1474836e+09;
  uVar7 = iVar143 * iVar143;
  fVar150 = ((float)(int)(uVar1 ^ uVar1 * 0x80000) / 2.1474836e+09 - fVar139) - fVar141;
  uVar15 = iVar121 * iVar121;
  uVar1 = iVar113 * iVar113;
  uVar3 = iVar29 * iVar29;
  fVar75 = (float)(int)(uVar2 ^ uVar2 * 0x80000) / 2.1474836e+09;
  fVar81 = fVar142 - fVar93;
  fVar135 = (float)(int)(uVar25 ^ uVar25 * 0x80000) / 2.1474836e+09;
  fVar125 = (float)(int)(uVar119 ^ uVar119 * 0x80000) / 2.1474836e+09;
  fVar118 = (float)(int)(uVar14 ^ uVar14 * 0x80000) / 2.1474836e+09;
  fVar120 = (float)(int)(uVar13 ^ uVar13 * 0x80000) / 2.1474836e+09;
  fVar112 = (float)(int)(uVar6 ^ uVar6 * 0x80000) / 2.1474836e+09;
  fVar94 = (float)(int)(uVar26 ^ uVar26 * 0x80000) / 2.1474836e+09;
  fVar136 = (float)(int)(uVar1 ^ uVar1 * 0x80000) / 2.1474836e+09;
  fVar144 = (float)(int)(uVar23 ^ uVar23 * 0x80000) / 2.1474836e+09;
  fVar153 = (float)(int)(uVar24 ^ uVar24 * 0x80000) / 2.1474836e+09;
  fVar109 = fVar125 - fVar118;
  fVar149 = fVar112 - fVar94;
  fVar37 = fVar89 - fVar136;
  fVar117 = ((float)(int)(uVar11 ^ uVar11 * 0x80000) / 2.1474836e+09 - fVar36) - fVar81;
  fVar49 = fVar153 - fVar144;
  fVar59 = ((float)(int)(uVar10 ^ uVar10 * 0x80000) / 2.1474836e+09 - fVar135) - fVar109;
  fVar72 = ((float)(int)(uVar7 ^ uVar7 * 0x80000) / 2.1474836e+09 - fVar120) - fVar149;
  fVar105 = ((float)(int)(uVar15 ^ uVar15 * 0x80000) / 2.1474836e+09 - fVar83) - fVar37;
  fVar69 = ((float)(int)(uVar3 ^ uVar3 * 0x80000) / 2.1474836e+09 - fVar75) - fVar49;
  fVar124 = fVar124 + param_1 * (fVar152 - fVar154) + fVar96 * fVar138 + fVar95 * (fVar35 - fVar138)
  ;
  fVar93 = fVar93 + param_1 * (fVar36 - fVar142) + fVar96 * fVar117 + fVar95 * (fVar81 - fVar117);
  fVar118 = fVar118 + param_1 * (fVar135 - fVar125) + fVar96 * fVar59 + fVar95 * (fVar109 - fVar59);
  fVar82 = fVar82 + param_1 * (fVar55 - fVar57) + fVar96 * fVar110 + fVar95 * (fVar74 - fVar110);
  fVar70 = fVar70 + param_1 * (fVar76 - fVar56) + fVar96 * fVar33 + fVar95 * (fVar73 - fVar33);
  fVar71 = fVar71 + param_1 * (fVar100 - fVar47) + fVar96 * fVar77 + fVar95 * (fVar147 - fVar77);
  fVar133 = fVar133 + param_1 * (fVar98 - fVar101) + fVar96 * fVar140 + fVar95 * (fVar146 - fVar140)
  ;
  fVar97 = fVar97 + param_1 * (fVar48 - fVar52) + fVar96 * fVar148 + fVar95 * (fVar137 - fVar148);
  fVar136 = fVar136 + param_1 * (fVar83 - fVar89) + fVar96 * fVar105 + fVar95 * (fVar37 - fVar105);
  param_2 = param_2 - (float)iVar4;
  fVar109 = fVar124 - fVar97;
  fVar100 = fVar82 - fVar116;
  fVar138 = fVar118 - fVar136;
  fVar35 = fVar71 - fVar46;
  fVar36 = param_2 * param_2;
  fVar55 = ((fVar115 +
            param_1 * (fVar139 - fVar151) + fVar96 * fVar150 + fVar95 * (fVar141 - fVar150)) -
           fVar133) - fVar109;
  fVar81 = ((fVar134 + param_1 * (fVar104 - fVar111) + fVar96 * fVar78 + fVar95 * (fVar58 - fVar78))
           - fVar114) - fVar100;
  fVar33 = ((fVar94 + param_1 * (fVar120 - fVar112) + fVar96 * fVar72 + fVar95 * (fVar149 - fVar72))
           - fVar93) - fVar138;
  fVar95 = ((fVar144 + param_1 * (fVar75 - fVar153) + fVar96 * fVar69 + fVar95 * (fVar49 - fVar69))
           - fVar70) - fVar35;
  fVar139 = param_2 * fVar36;
  fVar116 = fVar116 + param_2 * (fVar114 - fVar82) + fVar139 * fVar81 + fVar36 * (fVar100 - fVar81);
  fVar97 = fVar97 + param_2 * (fVar133 - fVar124) + fVar139 * fVar55 + fVar36 * (fVar109 - fVar55);
  fVar136 = fVar136 + param_2 * (fVar93 - fVar118) + fVar139 * fVar33 + fVar36 * (fVar138 - fVar33);
  param_3 = param_3 - (float)iVar5;
  fVar33 = fVar136 - fVar97;
  fVar95 = ((fVar46 + param_2 * (fVar70 - fVar71) + fVar139 * fVar95 + fVar36 * (fVar35 - fVar95)) -
           fVar116) - fVar33;
  return (fVar97 + param_3 * (fVar116 - fVar136) +
                   param_3 * param_3 * param_3 * fVar95 + param_3 * param_3 * (fVar33 - fVar95)) *
         0.2962963;
}

