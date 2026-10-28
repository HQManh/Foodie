// rea decompile_all
// name: DG.Tweening.Plugins.Color2Plugin$$EvaluateAndApply
// address: 0x45611dc
// body: available
// range: 0x45611dc-0x456153b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4561538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Color2Plugin__EvaluateAndApply
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,ulong param_4,long param_5,
               undefined8 param_6,long param_7,long param_8,float *param_9,float *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
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
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
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
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_78 = 0;
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0xa8) == 2) {
      uStack_1a8 = *(undefined8 *)(param_10 + 2);
      local_1b0 = *(undefined8 *)param_10;
      uStack_198 = *(undefined8 *)(param_10 + 6);
      uStack_1a0 = *(undefined8 *)(param_10 + 4);
      uStack_c8 = *(undefined8 *)(param_9 + 2);
      local_d0 = *(undefined8 *)param_9;
      uStack_b8 = *(undefined8 *)(param_9 + 6);
      uStack_c0 = *(undefined8 *)(param_9 + 4);
      local_b0 = local_1b0;
      uStack_a8 = uStack_1a8;
      uStack_a0 = uStack_1a0;
      uStack_98 = uStack_198;
      DG_Tweening_Color2__op_Multiply
                (&local_70,(float)(*(int *)(param_5 + 0x10c) - (int)*(char *)(param_5 + 0x111)),
                 &local_1b0,0);
      uStack_1e8 = uStack_c8;
      local_1f0 = local_d0;
      uStack_1d8 = uStack_b8;
      uStack_1e0 = uStack_c0;
      uStack_208 = uStack_68;
      local_210 = local_70;
      uStack_1f8 = local_58;
      uStack_200 = local_60;
      DG_Tweening_Color2__op_Addition(&local_1d0,&local_1f0,&local_210,0);
      *(undefined8 *)(param_9 + 2) = uStack_1c8;
      *(undefined8 *)param_9 = local_1d0;
      *(undefined8 *)(param_9 + 6) = uStack_1b8;
      *(undefined8 *)(param_9 + 4) = uStack_1c0;
    }
    if (*(char *)(param_5 + 0xe9) != '\0') {
      if (*(long *)(param_5 + 0xf0) == 0) goto LAB_04561538;
      if (*(int *)(*(long *)(param_5 + 0xf0) + 0xa8) == 2) {
        if (*(int *)(param_5 + 0xa8) == 2) {
          uStack_e8 = *(undefined8 *)(param_10 + 2);
          local_f0 = *(undefined8 *)param_10;
          uStack_d8 = *(undefined8 *)(param_10 + 6);
          uStack_e0 = *(undefined8 *)(param_10 + 4);
          fVar7 = (float)*(int *)(param_5 + 0xa4);
          uStack_108 = *(undefined8 *)(param_9 + 2);
          local_110 = *(undefined8 *)param_9;
          uStack_f8 = *(undefined8 *)(param_9 + 6);
          uStack_100 = *(undefined8 *)(param_9 + 4);
        }
        else {
          uStack_e8 = *(undefined8 *)(param_10 + 2);
          local_f0 = *(undefined8 *)param_10;
          uStack_d8 = *(undefined8 *)(param_10 + 6);
          uStack_e0 = *(undefined8 *)(param_10 + 4);
          uStack_108 = *(undefined8 *)(param_9 + 2);
          local_110 = *(undefined8 *)param_9;
          uStack_f8 = *(undefined8 *)(param_9 + 6);
          uStack_100 = *(undefined8 *)(param_9 + 4);
          fVar7 = 1.0;
        }
        uStack_228 = uStack_e8;
        local_230 = local_f0;
        uStack_218 = uStack_d8;
        uStack_220 = uStack_e0;
        DG_Tweening_Color2__op_Multiply(&local_70,fVar7,&local_230,0);
        lVar4 = *(long *)(param_5 + 0xf0);
        if (lVar4 == 0) goto LAB_04561538;
        if (*(char *)(lVar4 + 0x111) == '\0') {
          puVar6 = &local_150;
          iVar3 = *(int *)(lVar4 + 0x10c);
          uStack_148 = uStack_68;
          local_150 = local_70;
          uStack_138 = local_58;
          uStack_140 = local_60;
        }
        else {
          puVar6 = &local_130;
          iVar3 = *(int *)(lVar4 + 0x10c) + -1;
          uStack_128 = uStack_68;
          local_130 = local_70;
          uStack_118 = local_58;
          uStack_120 = local_60;
        }
        uStack_248 = puVar6[1];
        local_250 = *puVar6;
        uStack_238 = puVar6[3];
        uStack_240 = puVar6[2];
        uStack_188 = uStack_108;
        local_190 = local_110;
        uStack_178 = uStack_f8;
        uStack_180 = uStack_100;
        local_170 = local_250;
        uStack_168 = uStack_248;
        uStack_160 = uStack_240;
        uStack_158 = uStack_238;
        DG_Tweening_Color2__op_Multiply(&local_70,(float)iVar3,&local_250,0);
        uStack_268 = uStack_188;
        local_270 = local_190;
        uStack_258 = uStack_178;
        uStack_260 = uStack_180;
        uStack_288 = uStack_68;
        local_290 = local_70;
        uStack_278 = local_58;
        uStack_280 = local_60;
        DG_Tweening_Color2__op_Addition(&local_1d0,&local_270,&local_290,0);
        *(undefined8 *)(param_9 + 2) = uStack_1c8;
        *(undefined8 *)param_9 = local_1d0;
        *(undefined8 *)(param_9 + 6) = uStack_1b8;
        *(undefined8 *)(param_9 + 4) = uStack_1c0;
      }
    }
    fVar7 = (float)DG_Tweening_Core_Easing_EaseManager__Evaluate
                             (param_1,param_2,*(undefined4 *)(param_5 + 0xc0),
                              *(undefined4 *)(param_5 + 0xc4),*(undefined4 *)(param_5 + 0xb4),
                              *(undefined8 *)(param_5 + 0xb8),0);
    if ((param_4 & 1) == 0) {
      *param_9 = *param_9 + fVar7 * *param_10;
      param_9[1] = param_9[1] + fVar7 * param_10[1];
      param_9[2] = param_9[2] + fVar7 * param_10[2];
      param_9[3] = param_9[3] + fVar7 * param_10[3];
      param_9[4] = param_9[4] + fVar7 * param_10[4];
      param_9[5] = param_9[5] + fVar7 * param_10[5];
      param_9[6] = param_9[6] + fVar7 * param_10[6];
      param_9[7] = param_9[7] + fVar7 * param_10[7];
      if (param_8 != 0) {
        uStack_68 = *(undefined8 *)(param_9 + 2);
        local_70 = *(undefined8 *)param_9;
        local_58 = *(undefined8 *)(param_9 + 6);
        local_60 = *(undefined8 *)(param_9 + 4);
        pcVar5 = *(code **)(param_8 + 0x18);
        uVar1 = *(undefined8 *)(param_8 + 0x40);
        uVar2 = *(undefined8 *)(param_8 + 0x28);
LAB_04561514:
        (*pcVar5)(uVar1,&local_70,uVar2);
        return;
      }
    }
    else if (param_7 != 0) {
      (**(code **)(param_7 + 0x18))
                (&local_70,*(undefined8 *)(param_7 + 0x40),*(undefined8 *)(param_7 + 0x28));
      local_80 = local_70;
      local_78 = (undefined4)uStack_68;
      local_90 = local_60;
      local_88 = (undefined4)local_58;
      if (param_8 != 0) {
        uVar1 = *(undefined8 *)(param_8 + 0x40);
        uVar2 = *(undefined8 *)(param_8 + 0x28);
        pcVar5 = *(code **)(param_8 + 0x18);
        uStack_68 = CONCAT44(param_9[3] + fVar7 * param_10[3],(undefined4)uStack_68);
        local_58 = CONCAT44(param_9[7] + fVar7 * param_10[7],(undefined4)local_58);
        goto LAB_04561514;
      }
    }
  }
LAB_04561538:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

