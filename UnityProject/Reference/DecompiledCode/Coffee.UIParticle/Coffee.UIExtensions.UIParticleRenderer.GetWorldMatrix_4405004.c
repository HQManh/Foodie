// rea decompile_all
// name: Coffee.UIExtensions.UIParticleRenderer$$GetWorldMatrix
// address: 0x4405004
// body: available
// range: 0x4405004-0x44055cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4405594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44055c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIExtensions_UIParticleRenderer__GetWorldMatrix
               (float *param_1,float param_2,float param_3,float param_4,float param_5,float param_6
               ,float param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_500 [6];
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  float local_4d8;
  undefined8 local_4d4;
  undefined8 local_4cc;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined8 local_4bc;
  undefined8 local_4b4;
  undefined4 local_4ac;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  float local_490;
  float fStack_48c;
  float local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined8 local_47c;
  undefined8 local_474;
  undefined4 local_46c;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  float local_450;
  float fStack_44c;
  float local_448;
  undefined4 local_444;
  undefined8 local_440 [8];
  float local_400 [6];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  float local_3d8;
  undefined8 local_3d4;
  undefined8 local_3cc;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined8 local_3bc;
  undefined8 local_3b4;
  undefined4 local_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  float local_390;
  float local_38c;
  float local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined8 local_37c;
  undefined8 local_374;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 local_344;
  undefined8 local_340 [8];
  float local_300 [6];
  undefined8 local_2e8;
  undefined8 local_2e0;
  float local_2d8;
  undefined8 local_2d4;
  undefined8 local_2cc;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined8 local_2bc;
  undefined8 local_2b4;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  float local_290;
  float local_28c;
  float local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
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
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float local_1c0 [6];
  undefined8 local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  undefined8 local_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140 [6];
  undefined8 local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  pfVar7 = local_500;
  fVar11 = param_3;
  fVar13 = param_4;
  if ((DAT_09517e96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188ee8);
    DAT_09517e96 = 1;
  }
  uVar8 = *(undefined8 *)(param_8 + 0x118);
  local_78 = 0;
  local_80 = 0;
  if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = Coffee_UIParticleInternal_ParticleSystemExtensions__GetActualSimulationSpace(uVar8);
  if (*(char *)(param_8 + 0xe1) == '\0') {
LAB_044050d4:
    if (iVar1 == 2) {
      if (*(long *)(param_8 + 0x118) == 0) goto LAB_04405594;
      local_80 = UnityEngine_ParticleSystem__get_main(*(long *)(param_8 + 0x118),0);
      lVar5 = UnityEngine_ParticleSystem_MainModule__get_customSimulationSpace(&local_80,0);
      if (lVar5 == 0) goto LAB_04405594;
      local_490 = (float)UnityEngine_Transform__get_position(lVar5,0);
      local_490 = param_5 * local_490;
      fStack_48c = param_6 * fVar11;
      local_488 = param_7 * fVar13;
      local_4b4 = 0;
      puVar4 = &local_4c0;
      local_4c0 = 0x3f800000;
      local_4bc = 0;
      local_4ac = 0x3f800000;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_498 = 0x3f800000;
      local_484 = 0x3f800000;
      local_500[3] = 0.0;
      local_500[4] = 0.0;
      local_500[1] = 0.0;
      local_500[2] = 0.0;
      local_4e8 = 0;
      uStack_4e0 = 0;
      local_4cc = 0;
      local_4d4 = 0;
      local_4c4 = 0x3f800000;
      local_500[0] = param_5;
      local_500[5] = param_6;
      local_4d8 = param_7;
    }
    else {
      if (iVar1 == 1) goto LAB_04405158;
      if (iVar1 != 0) {
        thunk_FUN_03fc39d4(&DAT_09188920);
        uVar8 = thunk_FUN_03f9944c();
        System_NotSupportedException___ctor(uVar8,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091dce60);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar6);
      }
      puVar4 = &local_100;
      local_100 = 0x3f800000;
      pfVar7 = local_140;
      local_ec = 0x3f800000;
      local_c4 = 0x3f800000;
      local_104 = 0x3f800000;
      local_f4 = 0;
      local_fc = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_d8 = 0x3f800000;
      local_140[3] = 0.0;
      local_140[4] = 0.0;
      local_140[1] = 0.0;
      local_140[2] = 0.0;
      local_120 = 0;
      local_128 = 0;
      local_10c = 0;
      local_114 = 0;
      local_140[0] = param_5;
      local_140[5] = param_6;
      local_118 = param_7;
      local_d0 = param_2;
      local_cc = param_3;
      local_c8 = param_4;
    }
    FUN_04125f68(&local_c0,puVar4,pfVar7,0);
    *(undefined8 *)(param_1 + 2) = uStack_b8;
    *(undefined8 *)param_1 = local_c0;
  }
  else {
    if (*(long *)(param_8 + 0x118) == 0) goto LAB_04405594;
    local_78 = UnityEngine_ParticleSystem__get_trails(*(long *)(param_8 + 0x118),0);
    uVar2 = UnityEngine_ParticleSystem_TrailModule__get_worldSpace(&local_78,0);
    if ((uVar2 & 1) == 0) goto LAB_044050d4;
LAB_04405158:
    if (*(char *)(param_8 + 0xe1) == '\0') {
      uVar8 = *(undefined8 *)(param_8 + 0x150);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar8,0);
      if ((uVar2 & 1) == 0) {
        *param_1 = param_5;
        param_1[3] = 0.0;
        param_1[4] = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[5] = param_6;
        param_1[6] = 0.0;
        param_1[7] = 0.0;
        param_1[8] = 0.0;
        param_1[9] = 0.0;
        param_1[10] = param_7;
        param_1[0xd] = 0.0;
        param_1[0xe] = 0.0;
        param_1[0xb] = 0.0;
        param_1[0xc] = 0.0;
        param_1[0xf] = 1.0;
        return;
      }
      uVar8 = *(undefined8 *)(param_8 + 0x150);
      if (*(int *)(DAT_09188ee8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Coffee_UIParticleInternal_ParticleSystemExtensions__IsLocalSpace(uVar8);
      if ((uVar2 & 1) == 0) {
        if ((*(long *)(param_8 + 0x118) == 0) ||
           (lVar5 = UnityEngine_Component__get_transform(*(long *)(param_8 + 0x118),0), lVar5 == 0))
        {
LAB_04405594:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar9 = (float)UnityEngine_Transform__get_position(lVar5,0);
        if ((*(long *)(param_8 + 0x150) == 0) ||
           (fVar12 = fVar11, fVar14 = fVar13,
           lVar5 = UnityEngine_Component__get_transform(*(long *)(param_8 + 0x150),0), lVar5 == 0))
        goto LAB_04405594;
        fVar10 = (float)UnityEngine_Transform__get_position(lVar5,0);
        local_3b4 = 0;
        local_3bc = 0;
        local_3c0 = 0x3f800000;
        local_3ac = 0x3f800000;
        local_3a8 = 0;
        uStack_3a0 = 0;
        local_398 = 0x3f800000;
        local_384 = 0x3f800000;
        local_400[3] = 0.0;
        local_400[4] = 0.0;
        local_400[1] = 0.0;
        local_400[2] = 0.0;
        local_3e8 = 0;
        uStack_3e0 = 0;
        local_3cc = 0;
        local_3d4 = 0;
        local_3c4 = 0x3f800000;
        local_400[0] = param_5;
        local_400[5] = param_6;
        local_3d8 = param_7;
        local_390 = fVar9 - fVar10;
        local_38c = fVar11 - fVar12;
        local_388 = fVar13 - fVar14;
        FUN_04125f68(&local_c0,&local_3c0,local_400,0);
        local_474 = 0;
        puVar3 = local_440;
        fStack_44c = -(fVar11 - fVar12);
        local_47c = 0;
        puVar4 = &local_480;
        local_450 = -(fVar9 - fVar10);
        local_448 = -(fVar13 - fVar14);
        local_480 = 0x3f800000;
        local_46c = 0x3f800000;
        local_468 = 0;
        uStack_460 = 0;
        local_444 = 0x3f800000;
        local_458 = 0x3f800000;
      }
      else {
        local_2b4 = 0;
        local_2bc = 0;
        local_2c0 = 0x3f800000;
        local_2ac = 0x3f800000;
        local_2a0 = 0;
        local_2a8 = 0;
        local_298 = 0x3f800000;
        local_284 = 0x3f800000;
        local_300[3] = 0.0;
        local_300[4] = 0.0;
        local_300[1] = 0.0;
        local_300[2] = 0.0;
        local_2e0 = 0;
        local_2e8 = 0;
        local_2cc = 0;
        local_2d4 = 0;
        local_2c4 = 0x3f800000;
        local_300[0] = param_5;
        local_300[5] = param_6;
        local_2d8 = param_7;
        local_290 = param_2;
        local_28c = param_3;
        local_288 = param_4;
        FUN_04125f68(&local_c0,&local_2c0,local_300,0);
        local_374 = 0;
        puVar3 = local_340;
        local_34c = -param_3;
        local_37c = 0;
        puVar4 = &local_380;
        local_350 = -param_2;
        local_348 = -param_4;
        local_380 = 0x3f800000;
        local_36c = 0x3f800000;
        local_368 = 0;
        uStack_360 = 0;
        local_344 = 0x3f800000;
        local_358 = 0x3f800000;
      }
    }
    else {
      local_174 = 0;
      local_17c = 0;
      local_180 = 0x3f800000;
      local_16c = 0x3f800000;
      local_160 = 0;
      local_168 = 0;
      local_158 = 0x3f800000;
      local_144 = 0x3f800000;
      local_1c0[3] = 0.0;
      local_1c0[4] = 0.0;
      local_1c0[1] = 0.0;
      local_1c0[2] = 0.0;
      local_1a0 = 0;
      local_1a8 = 0;
      local_18c = 0;
      local_194 = 0;
      local_184 = 0x3f800000;
      local_1c0[0] = param_5;
      local_1c0[5] = param_6;
      local_198 = param_7;
      local_150 = param_2;
      local_14c = param_3;
      local_148 = param_4;
      FUN_04125f68(&local_c0,&local_180,local_1c0,0);
      puVar3 = &local_240;
      puVar4 = &local_280;
      uStack_238 = uStack_b8;
      local_240 = local_c0;
      uStack_228 = uStack_a8;
      uStack_230 = local_b0;
      local_24c = -param_3;
      local_274 = 0;
      uStack_218 = uStack_98;
      local_220 = local_a0;
      uStack_208 = uStack_88;
      uStack_210 = local_90;
      local_250 = -param_2;
      local_248 = -param_4;
      local_27c = 0;
      local_280 = 0x3f800000;
      local_26c = 0x3f800000;
      local_260 = 0;
      local_268 = 0;
      local_258 = 0x3f800000;
      local_244 = 0x3f800000;
    }
    FUN_04125f68(&local_200,puVar3,puVar4,0);
    *(undefined8 *)(param_1 + 2) = uStack_1f8;
    *(undefined8 *)param_1 = local_200;
    local_a0 = local_1e0;
    uStack_98 = uStack_1d8;
    local_b0 = uStack_1f0;
    uStack_a8 = uStack_1e8;
    local_90 = uStack_1d0;
    uStack_88 = uStack_1c8;
  }
  *(undefined8 *)(param_1 + 6) = uStack_a8;
  *(undefined8 *)(param_1 + 4) = local_b0;
  *(undefined8 *)(param_1 + 10) = uStack_98;
  *(undefined8 *)(param_1 + 8) = local_a0;
  *(undefined8 *)(param_1 + 0xe) = uStack_88;
  *(undefined8 *)(param_1 + 0xc) = local_90;
  return;
}

