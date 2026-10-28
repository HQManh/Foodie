// rea decompile_all
// name: Coffee.UIEffectInternal.TransformExtensionsForTransformSensitivity$$HasChanged_Internal
// address: 0x43e62d0
// body: available
// range: 0x43e62d0-0x43e660b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e6608 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Coffee_UIEffectInternal_TransformExtensionsForTransformSensitivity__HasChanged_Internal
               (undefined4 param_1,long param_2,long *param_3,undefined8 *param_4)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  float local_260 [6];
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  undefined8 local_234;
  undefined8 local_22c;
  undefined4 local_224;
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
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte local_54 [4];
  
  if ((DAT_09517d72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd058);
    FUN_03f5c2a4(&DAT_091cd060);
    FUN_03f5c2a4(&DAT_09184988);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09203d80);
    DAT_09517d72 = 1;
  }
  local_54[0] = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(param_3,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      if (param_3 == (long *)0x0) goto LAB_043e6608;
      uVar3 = (**(code **)(*param_3 + 0x158))(param_3,*(undefined8 *)(*param_3 + 0x160));
    }
    if (*(int *)(DAT_09184988 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = FUN_04b76e9c(param_2,DAT_09203d80,uVar3,local_54,DAT_091cd060);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(param_3,0);
      if ((uVar4 & 1) == 0) {
        if (param_2 == 0) goto LAB_043e6608;
        UnityEngine_Transform__get_localToWorldMatrix(&local_e0,param_2,0);
      }
      else {
        if ((param_3 == (long *)0x0) ||
           (UnityEngine_Transform__get_worldToLocalMatrix(&local_120,param_3,0), param_2 == 0)) {
LAB_043e6608:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Transform__get_localToWorldMatrix(&local_160,param_2,0);
        uStack_198 = uStack_118;
        local_1a0 = local_120;
        uStack_188 = uStack_108;
        uStack_190 = uStack_110;
        uStack_178 = uStack_f8;
        local_180 = local_100;
        uStack_168 = uStack_e8;
        uStack_170 = uStack_f0;
        uStack_1d8 = uStack_158;
        local_1e0 = local_160;
        uStack_1c8 = uStack_148;
        uStack_1d0 = uStack_150;
        uStack_1b8 = uStack_138;
        local_1c0 = local_140;
        uStack_1a8 = uStack_128;
        uStack_1b0 = uStack_130;
        FUN_04125f68(&local_e0,&local_1a0,&local_1e0,0);
      }
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      local_260[1] = 0.0;
      local_260[2] = 0.0;
      lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
      uStack_218 = uStack_d8;
      local_220 = local_e0;
      uStack_208 = uStack_c8;
      uStack_210 = uStack_d0;
      local_260[3] = 0.0;
      local_260[4] = 0.0;
      local_248 = 0;
      uStack_240 = 0;
      uStack_1f8 = uStack_b8;
      local_200 = local_c0;
      uStack_1e8 = uStack_a8;
      uStack_1f0 = uStack_b0;
      local_224 = 0x3f800000;
      local_260[0] = *(float *)(lVar5 + 0xc) * 10000.0;
      local_260[5] = *(float *)(lVar5 + 0x10) * 10000.0;
      local_22c = 0;
      local_238 = *(float *)(lVar5 + 0x14) * 10000.0;
      local_234 = 0;
      FUN_04125f68(&local_120,&local_220,local_260,0);
      uStack_298 = uStack_118;
      local_2a0 = local_120;
      uStack_288 = uStack_108;
      uStack_290 = uStack_110;
      uStack_278 = uStack_f8;
      local_280 = local_100;
      uStack_268 = uStack_e8;
      uStack_270 = uStack_f0;
      uStack_98 = uStack_118;
      local_a0 = local_120;
      uStack_88 = uStack_108;
      uStack_90 = uStack_110;
      uStack_2b8 = param_4[5];
      local_2c0 = param_4[4];
      uStack_2a8 = param_4[7];
      uStack_2b0 = param_4[6];
      uStack_78 = uStack_f8;
      local_80 = local_100;
      uStack_68 = uStack_e8;
      uStack_70 = uStack_f0;
      uStack_2d8 = param_4[1];
      local_2e0 = *param_4;
      uStack_2c8 = param_4[3];
      uStack_2d0 = param_4[2];
      bVar2 = Coffee_UIEffectInternal_TransformExtensionsForTransformSensitivity__Approximately
                        (param_1,&local_2a0,&local_2e0);
      bVar2 = (bVar2 ^ 1) & 1;
      local_54[0] = bVar2;
      if (*(int *)(DAT_09184988 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04b76ae4(param_2,DAT_09203d80,uVar3,bVar2,DAT_091cd058);
      if (local_54[0] != 0) {
        param_4[1] = uStack_98;
        *param_4 = local_a0;
        param_4[3] = uStack_88;
        param_4[2] = uStack_90;
        param_4[5] = uStack_78;
        param_4[4] = local_80;
        param_4[7] = uStack_68;
        param_4[6] = uStack_70;
      }
    }
    bVar1 = local_54[0] != 0;
  }
  return bVar1;
}

