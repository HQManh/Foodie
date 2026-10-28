// rea decompile_all
// name: ChocDino.UIFX.TrailEffect$$GenerateTrailGeometry
// address: 0x43afccc
// body: available
// range: 0x43afccc-0x43b068f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b0688 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b068c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffect__GenerateTrailGeometry(long param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auVar7 [8];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  long *plVar34;
  uint uVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined8 local_340;
  float local_338;
  undefined4 uStack_334;
  float local_328;
  undefined4 uStack_324;
  undefined8 local_320;
  float local_318;
  undefined4 uStack_314;
  float local_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  float local_2b8;
  undefined4 local_2b4;
  float local_2a8;
  undefined4 local_2a4;
  undefined8 local_2a0;
  float local_298;
  undefined4 local_294;
  float local_288;
  undefined4 local_284;
  undefined1 local_280 [8];
  float local_278;
  undefined8 local_270;
  float local_268;
  undefined8 local_260;
  float local_258;
  undefined8 local_250;
  float local_248;
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
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  float fStack_188;
  float fStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  float fStack_128;
  float fStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_110;
  float fStack_108;
  undefined4 uStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  float local_e8;
  undefined4 local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  
  if ((DAT_09517afb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_091b1700);
    FUN_03f5c2a4(&DAT_091b1710);
    FUN_03f5c2a4(&DAT_091b16f8);
    FUN_03f5c2a4(&DAT_091b1740);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b3f08);
    FUN_03f5c2a4(&DAT_0917cfe8);
    DAT_09517afb = 1;
  }
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_11c = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1c8 = 0;
  local_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  local_180 = 0;
  uStack_17c = 0;
  local_190 = 0;
  fStack_188 = 0.0;
  fStack_184 = 0.0;
  local_178 = 0;
  local_1e0 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  if (*(long *)(param_1 + 0x80) == 0) goto LAB_043b0688;
  uVar4 = *(uint *)(*(long *)(param_1 + 0x80) + 0x18);
  plVar34 = (long *)(param_1 + 0x90);
  uVar35 = uVar4;
  if (*(char *)(param_1 + 0x54) != '\0') {
    uVar35 = 0;
  }
  iVar28 = uVar35 + *(int *)(param_1 + 0x20) * uVar4;
  if (*plVar34 == 0) {
LAB_043afe20:
    lVar29 = thunk_FUN_03f9944c(DAT_0917cfe8);
    FUN_058941e8(lVar29,iVar28,DAT_091b16f8);
    *plVar34 = lVar29;
    thunk_FUN_03f5d7b8(plVar34,lVar29);
    lVar29 = *plVar34;
    if (lVar29 == 0) goto LAB_043b0688;
  }
  else {
    iVar25 = FUN_05894540(*plVar34,DAT_091b1740);
    if (iVar25 != iVar28) {
      *plVar34 = 0;
      thunk_FUN_03f5d7b8(plVar34,0);
    }
    lVar29 = *plVar34;
    if (lVar29 == 0) goto LAB_043afe20;
  }
  *(undefined4 *)(lVar29 + 0x18) = 0;
  *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0x1c) + 1;
  lVar29 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar29 != 0) {
    UnityEngine_Transform__get_worldToLocalMatrix(&local_110,lVar29,0);
    uVar24 = local_d4;
    fVar23 = fStack_d8;
    fVar22 = fStack_dc;
    fVar21 = fStack_e0;
    uVar20 = local_e4;
    fVar19 = local_e8;
    uVar18 = uStack_f0;
    uVar17 = uStack_f4;
    fVar16 = local_f8;
    fVar15 = fStack_fc;
    fVar14 = local_100;
    uVar13 = uStack_104;
    fVar11 = fStack_108;
    uVar10 = local_110;
    iVar28 = *(int *)(param_1 + 0x20) + -1;
    if (-1 < iVar28) {
      do {
        if (*(long *)(param_1 + 0x88) == 0) goto LAB_043b0688;
        lVar29 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar28,DAT_091b3f08);
        if (*(int *)(param_1 + 0x38) == 0) {
          if (lVar29 == 0) goto LAB_043b0688;
          uStack_2f8 = *(undefined8 *)(lVar29 + 0x20);
          local_300 = *(undefined8 *)(lVar29 + 0x18);
          uStack_2e8 = *(undefined8 *)(lVar29 + 0x30);
          uStack_2f0 = *(undefined8 *)(lVar29 + 0x28);
          uStack_2d8 = *(undefined8 *)(lVar29 + 0x40);
          local_2e0 = *(undefined8 *)(lVar29 + 0x38);
          fStack_108 = (float)uStack_2f8;
          uStack_104 = (undefined4)((ulong)uStack_2f8 >> 0x20);
          local_f8 = (float)uStack_2e8;
          uStack_f4 = (undefined4)((ulong)uStack_2e8 >> 0x20);
          local_100 = (float)uStack_2f0;
          fStack_fc = (float)((ulong)uStack_2f0 >> 0x20);
          uStack_2c8 = *(undefined8 *)(lVar29 + 0x50);
          uStack_2d0 = *(undefined8 *)(lVar29 + 0x48);
          local_e8 = (float)uStack_2d8;
          local_e4 = (undefined4)((ulong)uStack_2d8 >> 0x20);
          fStack_d8 = (float)uStack_2c8;
          local_d4 = (undefined4)((ulong)uStack_2c8 >> 0x20);
          fStack_e0 = (float)uStack_2d0;
          fStack_dc = (float)((ulong)uStack_2d0 >> 0x20);
          local_288 = fVar23;
          local_2c0 = uVar10;
          local_2b8 = fVar11;
          local_2b4 = uVar13;
          local_284 = uVar24;
          local_2a8 = fVar16;
          local_2a4 = uVar17;
          local_2a0 = uVar18;
          local_298 = fVar19;
          local_294 = uVar20;
          local_110 = local_300;
          uStack_f0 = local_2e0;
          FUN_04125f68(local_280,&local_2c0,&local_300,0);
          fVar40 = local_248;
          uVar9 = local_250;
          fVar39 = local_258;
          uVar8 = local_260;
          fVar38 = local_268;
          uVar42 = local_270;
          fVar26 = local_278;
          auVar7 = local_280;
          if (0 < (int)uVar4) {
            uVar35 = 0;
            do {
              if (*(long *)(param_1 + 0x80) == 0) goto LAB_043b0688;
              FUN_05894708(&local_110,*(long *)(param_1 + 0x80),uVar35,DAT_091b1750);
              fVar27 = local_e8;
              fVar12 = fStack_108;
              uVar41 = local_110;
              local_190 = CONCAT44(local_100,uStack_104);
              uStack_1c8 = CONCAT44(fStack_d8,fStack_dc);
              local_1d0 = CONCAT44(fStack_e0,local_e4);
              fStack_188 = fStack_fc;
              uStack_1c0 = CONCAT44(uStack_d0,local_d4);
              uStack_17c = (undefined4)uStack_f0;
              local_178 = (undefined4)((ulong)uStack_f0 >> 0x20);
              fStack_184 = local_f8;
              local_180 = uStack_f4;
              uStack_1b8 = uStack_cc;
              fVar37 = local_110._4_4_;
              uVar44 = *(undefined4 *)(lVar29 + 0x58);
              uVar45 = *(undefined4 *)(lVar29 + 0x5c);
              uVar46 = *(undefined4 *)(lVar29 + 0x60);
              uVar47 = *(undefined4 *)(lVar29 + 100);
              uVar5 = *(undefined4 *)(param_1 + 0x58);
              uStack_1a8 = uStack_bc;
              local_1b0 = local_c4;
              uStack_198 = uStack_ac;
              uStack_1a0 = local_b4;
              if (*(int *)(DAT_09182738 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              ChocDino_UIFX_ColorUtils__Blend
                        ((float)((uint)fVar27 & 0xff) / 255.0,
                         (float)((uint)fVar27 >> 8 & 0xff) / 255.0,
                         (float)((uint)fVar27 >> 0x10 & 0xff) / 255.0,
                         (float)((uint)fVar27 >> 0x18) / 255.0,uVar44,uVar45,uVar46,uVar47,uVar5);
              fVar27 = (float)FUN_043b2fc4(0);
              lVar36 = DAT_091b1700;
              lVar30 = *plVar34;
              if (lVar30 == 0) goto LAB_043b0688;
              lVar31 = *(long *)(lVar30 + 0x10);
              *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
              if (lVar31 == 0) goto LAB_043b0688;
              uVar6 = *(uint *)(lVar30 + 0x18);
              fVar43 = (float)uVar41;
              uVar41 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
                                auVar7._4_4_ * fVar43 + (float)((ulong)uVar42 >> 0x20) * fVar37 +
                                (float)((ulong)uVar8 >> 0x20) * fVar12,
                                (float)uVar9 +
                                auVar7._0_4_ * fVar43 + (float)uVar42 * fVar37 +
                                (float)uVar8 * fVar12);
              fVar37 = fVar40 + fVar26 * fVar43 + fVar38 * fVar37 + fVar39 * fVar12;
              if (uVar6 < *(uint *)(lVar31 + 0x18)) {
                lVar31 = lVar31 + (long)(int)uVar6 * 0x6c;
                *(uint *)(lVar30 + 0x18) = uVar6 + 1;
                *(undefined8 *)(lVar31 + 0x20) = uVar41;
                *(float *)(lVar31 + 0x28) = fVar37;
                *(ulong *)(lVar31 + 0x34) = CONCAT44(fStack_184,fStack_188);
                *(undefined8 *)(lVar31 + 0x2c) = local_190;
                *(ulong *)(lVar31 + 0x40) = CONCAT44(local_178,uStack_17c);
                *(ulong *)(lVar31 + 0x38) = CONCAT44(local_180,fStack_184);
                *(float *)(lVar31 + 0x48) = fVar27;
                *(undefined8 *)(lVar31 + 0x54) = uStack_1c8;
                *(undefined8 *)(lVar31 + 0x4c) = local_1d0;
                *(undefined8 *)(lVar31 + 100) = uStack_1b8;
                *(undefined8 *)(lVar31 + 0x5c) = uStack_1c0;
                *(undefined8 *)(lVar31 + 0x74) = uStack_1a8;
                *(undefined8 *)(lVar31 + 0x6c) = local_1b0;
                *(undefined8 *)(lVar31 + 0x84) = uStack_198;
                *(undefined8 *)(lVar31 + 0x7c) = uStack_1a0;
              }
              else {
                uStack_f0 = CONCAT44(local_178,uStack_17c);
                fStack_fc = fStack_188;
                uStack_104 = (undefined4)local_190;
                local_100 = (float)((ulong)local_190 >> 0x20);
                local_f8 = fStack_184;
                uStack_f4 = local_180;
                fStack_dc = (float)uStack_1c8;
                fStack_d8 = (float)((ulong)uStack_1c8 >> 0x20);
                local_e4 = (undefined4)local_1d0;
                fStack_e0 = (float)((ulong)local_1d0 >> 0x20);
                uStack_cc = uStack_1b8;
                local_d4 = (undefined4)uStack_1c0;
                uStack_d0 = (undefined4)((ulong)uStack_1c0 >> 0x20);
                uStack_bc = uStack_1a8;
                local_c4 = local_1b0;
                uStack_ac = uStack_198;
                local_b4 = uStack_1a0;
                local_110 = uVar41;
                fStack_108 = fVar37;
                local_e8 = fVar27;
                FUN_05894a80(lVar30,&local_110,
                             *(undefined8 *)(*(long *)(*(long *)(lVar36 + 0x20) + 0xc0) + 0x70));
              }
              uVar35 = uVar35 + 1;
            } while (uVar4 != uVar35);
          }
        }
        else if (*(int *)(param_1 + 0x38) == 1) {
          if (0 < (int)uVar4) {
            if (lVar29 == 0) goto LAB_043b0688;
            uVar33 = 0;
            lVar36 = 0x4c;
            do {
              lVar30 = *(long *)(lVar29 + 0x10);
              if (lVar30 == 0) goto LAB_043b0688;
              if (*(uint *)(lVar30 + 0x18) <= uVar33) {
LAB_043b068c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              puVar2 = (undefined8 *)(lVar30 + lVar36);
              uStack_1f8 = *(undefined8 *)((long)puVar2 + -0x24);
              local_200 = *(undefined8 *)((long)puVar2 + -0x2c);
              uStack_1e8 = *(undefined8 *)((long)puVar2 + -0x14);
              uStack_1f0 = *(undefined8 *)((long)puVar2 + -0x1c);
              uStack_238 = puVar2[1];
              local_240 = *puVar2;
              uStack_228 = puVar2[3];
              uStack_230 = puVar2[2];
              uStack_218 = puVar2[5];
              local_220 = puVar2[4];
              uStack_208 = puVar2[7];
              uStack_210 = puVar2[6];
              uVar44 = *(undefined4 *)(lVar29 + 0x58);
              uVar45 = *(undefined4 *)(lVar29 + 0x5c);
              uVar46 = *(undefined4 *)(lVar29 + 0x60);
              uVar47 = *(undefined4 *)(lVar29 + 100);
              uVar35 = *(uint *)((long)puVar2 + -4);
              local_1e0 = *(undefined8 *)((long)puVar2 + -0xc);
              uVar5 = *(undefined4 *)(param_1 + 0x58);
              if (*(int *)(DAT_09182738 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              ChocDino_UIFX_ColorUtils__Blend
                        ((float)(uVar35 & 0xff) / 255.0,(float)(uVar35 >> 8 & 0xff) / 255.0,
                         (float)(uVar35 >> 0x10 & 0xff) / 255.0,(float)(uVar35 >> 0x18) / 255.0,
                         uVar44,uVar45,uVar46,uVar47,uVar5);
              fVar26 = (float)FUN_043b2fc4(0);
              lVar30 = DAT_091b1700;
              lVar31 = *plVar34;
              if (lVar31 == 0) goto LAB_043b0688;
              lVar32 = *(long *)(lVar31 + 0x10);
              *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
              if (lVar32 == 0) goto LAB_043b0688;
              uVar35 = *(uint *)(lVar31 + 0x18);
              if (uVar35 < *(uint *)(lVar32 + 0x18)) {
                lVar32 = lVar32 + (long)(int)uVar35 * 0x6c;
                *(uint *)(lVar31 + 0x18) = uVar35 + 1;
                *(undefined8 *)(lVar32 + 0x28) = uStack_1f8;
                *(undefined8 *)(lVar32 + 0x20) = local_200;
                *(undefined8 *)(lVar32 + 0x38) = uStack_1e8;
                *(undefined8 *)(lVar32 + 0x30) = uStack_1f0;
                *(undefined8 *)(lVar32 + 0x40) = local_1e0;
                *(float *)(lVar32 + 0x48) = fVar26;
                *(undefined8 *)(lVar32 + 100) = uStack_228;
                *(undefined8 *)(lVar32 + 0x5c) = uStack_230;
                *(undefined8 *)(lVar32 + 0x54) = uStack_238;
                *(undefined8 *)(lVar32 + 0x4c) = local_240;
                *(undefined8 *)(lVar32 + 0x74) = uStack_218;
                *(undefined8 *)(lVar32 + 0x6c) = local_220;
                *(undefined8 *)(lVar32 + 0x84) = uStack_208;
                *(undefined8 *)(lVar32 + 0x7c) = uStack_210;
              }
              else {
                fStack_108 = (float)uStack_1f8;
                uStack_104 = (undefined4)((ulong)uStack_1f8 >> 0x20);
                local_110 = local_200;
                local_f8 = (float)uStack_1e8;
                uStack_f4 = (undefined4)((ulong)uStack_1e8 >> 0x20);
                local_100 = (float)uStack_1f0;
                fStack_fc = (float)((ulong)uStack_1f0 >> 0x20);
                uStack_f0 = local_1e0;
                uStack_cc = uStack_228;
                local_d4 = (undefined4)uStack_230;
                uStack_d0 = (undefined4)((ulong)uStack_230 >> 0x20);
                fStack_dc = (float)uStack_238;
                fStack_d8 = (float)((ulong)uStack_238 >> 0x20);
                local_e4 = (undefined4)local_240;
                fStack_e0 = (float)((ulong)local_240 >> 0x20);
                uStack_bc = uStack_218;
                local_c4 = local_220;
                uStack_ac = uStack_208;
                local_b4 = uStack_210;
                local_e8 = fVar26;
                FUN_05894a80(lVar31,&local_110,
                             *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
              }
              uVar33 = uVar33 + 1;
              lVar36 = lVar36 + 0x6c;
            } while (uVar4 != uVar33);
          }
        }
        else if (0 < (int)uVar4) {
          if (lVar29 == 0) goto LAB_043b0688;
          uVar33 = 0;
          lVar36 = 0x28;
          do {
            lVar30 = *(long *)(lVar29 + 0x10);
            if (lVar30 == 0) goto LAB_043b0688;
            if (*(uint *)(lVar30 + 0x18) <= uVar33) goto LAB_043b068c;
            pfVar3 = (float *)(lVar30 + lVar36);
            local_130 = *(undefined8 *)(pfVar3 + 1);
            uStack_168 = *(undefined8 *)(pfVar3 + 0xb);
            local_170 = *(undefined8 *)(pfVar3 + 9);
            fVar26 = pfVar3[8];
            fStack_128 = (float)*(undefined8 *)(pfVar3 + 3);
            uStack_158 = *(undefined8 *)(pfVar3 + 0xf);
            uStack_160 = *(undefined8 *)(pfVar3 + 0xd);
            uStack_11c = (undefined4)*(undefined8 *)(pfVar3 + 6);
            local_118 = (undefined4)((ulong)*(undefined8 *)(pfVar3 + 6) >> 0x20);
            fStack_124 = (float)*(undefined8 *)(pfVar3 + 4);
            local_120 = (undefined4)((ulong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
            fVar38 = pfVar3[-2];
            fVar39 = pfVar3[-1];
            fVar40 = *pfVar3;
            uVar44 = *(undefined4 *)(lVar29 + 0x58);
            uVar45 = *(undefined4 *)(lVar29 + 0x5c);
            uVar46 = *(undefined4 *)(lVar29 + 0x60);
            uVar47 = *(undefined4 *)(lVar29 + 100);
            uStack_148 = *(undefined8 *)(pfVar3 + 0x13);
            local_150 = *(undefined8 *)(pfVar3 + 0x11);
            uStack_138 = *(undefined8 *)(pfVar3 + 0x17);
            uStack_140 = *(undefined8 *)(pfVar3 + 0x15);
            uVar5 = *(undefined4 *)(param_1 + 0x58);
            if (*(int *)(DAT_09182738 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            ChocDino_UIFX_ColorUtils__Blend
                      ((float)((uint)fVar26 & 0xff) / 255.0,
                       (float)((uint)fVar26 >> 8 & 0xff) / 255.0,
                       (float)((uint)fVar26 >> 0x10 & 0xff) / 255.0,
                       (float)((uint)fVar26 >> 0x18) / 255.0,uVar44,uVar45,uVar46,uVar47,uVar5);
            fVar26 = (float)FUN_043b2fc4(0);
            lVar30 = DAT_091b1700;
            lVar31 = *plVar34;
            if (lVar31 == 0) goto LAB_043b0688;
            lVar32 = *(long *)(lVar31 + 0x10);
            *(int *)(lVar31 + 0x1c) = *(int *)(lVar31 + 0x1c) + 1;
            if (lVar32 == 0) goto LAB_043b0688;
            uVar35 = *(uint *)(lVar31 + 0x18);
            uVar42 = CONCAT44(fVar22 + (float)((ulong)uVar10 >> 0x20) * fVar38 + fVar15 * fVar39 +
                                       (float)((ulong)uVar18 >> 0x20) * fVar40,
                              fVar21 + (float)uVar10 * fVar38 + fVar14 * fVar39 +
                                       (float)uVar18 * fVar40);
            fVar38 = fVar23 + fVar11 * fVar38 + fVar16 * fVar39 + fVar19 * fVar40;
            if (uVar35 < *(uint *)(lVar32 + 0x18)) {
              lVar32 = lVar32 + (long)(int)uVar35 * 0x6c;
              *(uint *)(lVar31 + 0x18) = uVar35 + 1;
              *(undefined8 *)(lVar32 + 0x20) = uVar42;
              *(float *)(lVar32 + 0x28) = fVar38;
              *(ulong *)(lVar32 + 0x34) = CONCAT44(fStack_124,fStack_128);
              *(undefined8 *)(lVar32 + 0x2c) = local_130;
              *(ulong *)(lVar32 + 0x40) = CONCAT44(local_118,uStack_11c);
              *(ulong *)(lVar32 + 0x38) = CONCAT44(local_120,fStack_124);
              *(float *)(lVar32 + 0x48) = fVar26;
              *(undefined8 *)(lVar32 + 0x54) = uStack_168;
              *(undefined8 *)(lVar32 + 0x4c) = local_170;
              *(undefined8 *)(lVar32 + 100) = uStack_158;
              *(undefined8 *)(lVar32 + 0x5c) = uStack_160;
              *(undefined8 *)(lVar32 + 0x74) = uStack_148;
              *(undefined8 *)(lVar32 + 0x6c) = local_150;
              *(undefined8 *)(lVar32 + 0x84) = uStack_138;
              *(undefined8 *)(lVar32 + 0x7c) = uStack_140;
            }
            else {
              uStack_f0 = CONCAT44(local_118,uStack_11c);
              fStack_fc = fStack_128;
              uStack_104 = (undefined4)local_130;
              local_100 = (float)((ulong)local_130 >> 0x20);
              local_f8 = fStack_124;
              uStack_f4 = local_120;
              fStack_dc = (float)uStack_168;
              fStack_d8 = (float)((ulong)uStack_168 >> 0x20);
              local_e4 = (undefined4)local_170;
              fStack_e0 = (float)((ulong)local_170 >> 0x20);
              uStack_cc = uStack_158;
              local_d4 = (undefined4)uStack_160;
              uStack_d0 = (undefined4)((ulong)uStack_160 >> 0x20);
              uStack_bc = uStack_148;
              local_c4 = local_150;
              uStack_ac = uStack_138;
              local_b4 = uStack_140;
              local_110 = uVar42;
              fStack_108 = fVar38;
              local_e8 = fVar26;
              FUN_05894a80(lVar31,&local_110,
                           *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
            }
            uVar33 = uVar33 + 1;
            lVar36 = lVar36 + 0x6c;
          } while (uVar4 != uVar33);
        }
        bVar1 = 0 < iVar28;
        iVar28 = iVar28 + -1;
      } while (bVar1);
    }
    if (*(char *)(param_1 + 0x54) == '\0') {
      local_340 = uVar10;
      local_338 = fVar11;
      uStack_334 = uVar13;
      local_328 = fVar16;
      uStack_324 = uVar17;
      local_320 = uVar18;
      local_318 = fVar19;
      uStack_314 = uVar20;
      local_308 = fVar23;
      uStack_304 = uVar24;
      ChocDino_UIFX_TrailEffect__AddOriginalVertices(param_1,uVar4,&local_340);
    }
    if (param_2 != 0) {
      UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(param_2,*plVar34,0);
      return;
    }
  }
LAB_043b0688:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

