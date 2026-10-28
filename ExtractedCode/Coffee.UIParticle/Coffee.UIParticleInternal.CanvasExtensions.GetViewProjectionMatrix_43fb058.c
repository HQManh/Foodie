// rea decompile_all
// name: Coffee.UIParticleInternal.CanvasExtensions$$GetViewProjectionMatrix
// address: 0x43fb058
// body: available
// range: 0x43fb058-0x43fb477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fb474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIParticleInternal_CanvasExtensions__GetViewProjectionMatrix
               (undefined1 param_1 [16],float param_2,long param_3,int param_4,undefined8 *param_5,
               undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
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
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_09517e35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd078);
    FUN_03f5c2a4(&DAT_091cd088);
    FUN_03f5c2a4(&DAT_09184990);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09203688);
    FUN_03f5c2a4(&DAT_092035e8);
    DAT_09517e35 = 1;
  }
  if (*(int *)(DAT_09184990 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = FUN_04b77c08(param_3,DAT_09203688,param_4,param_5,DAT_091cd088);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09184990 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = FUN_04b77c08(param_3,DAT_092035e8,param_4,param_6,DAT_091cd088);
    if ((uVar3 & 1) != 0) {
      return;
    }
  }
  if ((param_3 == 0) || (lVar4 = UnityEngine_Canvas__get_rootCanvas(param_3,0), lVar4 == 0))
  goto LAB_043fb474;
  lVar5 = UnityEngine_Canvas__get_worldCamera(lVar4,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
  if (((uVar3 & 1) != 0) && (iVar2 = UnityEngine_Canvas__get_renderMode(lVar4,0), iVar2 != 0)) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar3 & 1) != 0) {
      if (param_4 == 2) {
        if (lVar5 == 0) goto LAB_043fb474;
        UnityEngine_Camera__get_worldToCameraMatrix(&local_c0,lVar5,0);
        param_5[1] = uStack_b8;
        *param_5 = local_c0;
        param_5[3] = uStack_a8;
        param_5[2] = uStack_b0;
        param_5[5] = uStack_98;
        param_5[4] = local_a0;
        param_5[7] = uStack_88;
        param_5[6] = uStack_90;
        UnityEngine_Camera__get_projectionMatrix(&local_120,lVar5,0);
        puVar6 = &local_1a0;
        uStack_198 = uStack_118;
        local_1a0 = local_120;
        uStack_188 = uStack_108;
        uStack_190 = uStack_110;
        uStack_178 = uStack_f8;
        local_180 = local_100;
        uStack_168 = uStack_e8;
        uStack_170 = uStack_f0;
      }
      else {
        if (lVar5 == 0) goto LAB_043fb474;
        UnityEngine_Camera__GetStereoProjectionMatrix(&local_c0,lVar5,param_4,0);
        param_6[1] = uStack_b8;
        *param_6 = local_c0;
        param_6[3] = uStack_a8;
        param_6[2] = uStack_b0;
        param_6[5] = uStack_98;
        param_6[4] = local_a0;
        param_6[7] = uStack_88;
        param_6[6] = uStack_90;
        UnityEngine_Camera__GetStereoViewMatrix(&local_120,lVar5,param_4,0);
        puVar6 = &local_1e0;
        param_5[1] = uStack_118;
        *param_5 = local_120;
        param_5[3] = uStack_108;
        param_5[2] = uStack_110;
        param_5[5] = uStack_f8;
        param_5[4] = local_100;
        param_5[7] = uStack_e8;
        param_5[6] = uStack_f0;
        uStack_1d8 = param_6[1];
        local_1e0 = *param_6;
        uStack_1c8 = param_6[3];
        uStack_1d0 = param_6[2];
        uStack_1b8 = param_6[5];
        local_1c0 = param_6[4];
        uStack_1a8 = param_6[7];
        uStack_1b0 = param_6[6];
      }
      UnityEngine_GL__GetGPUProjectionMatrix(&local_160,puVar6,0,0);
      param_6[1] = uStack_158;
      *param_6 = local_160;
      goto LAB_043fb34c;
    }
  }
  lVar4 = UnityEngine_Component__get_transform(lVar4,0);
  if (lVar4 == 0) {
LAB_043fb474:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  fVar7 = (float)UnityEngine_Transform__get_position(lVar4,0);
  if (DAT_09515ed5 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  uVar15 = NEON_fmov(0x3f800000,4);
  uStack_118 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
  local_120 = **(undefined8 **)(DAT_091898c0 + 0xb8);
  local_160 = CONCAT44(-param_2,-fVar7);
  uStack_158 = CONCAT44(uStack_158._4_4_,0xc47a0000);
  local_c8 = 0xbf800000;
  local_d0 = uVar15;
  UnityEngine_Matrix4x4__Internal_TRS(&local_c0,&local_160,&local_120,&local_d0,0);
  cVar1 = DAT_09515ed5;
  param_5[1] = uStack_b8;
  *param_5 = local_c0;
  param_5[3] = uStack_a8;
  param_5[2] = uStack_b0;
  param_5[5] = uStack_98;
  param_5[4] = local_a0;
  param_5[7] = uStack_88;
  param_5[6] = uStack_90;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  uStack_158 = (*(undefined8 **)(DAT_091898c0 + 0xb8))[1];
  local_160 = **(undefined8 **)(DAT_091898c0 + 0xb8);
  local_d0 = 0;
  local_c8 = 0xbf800000;
  local_e0 = CONCAT44((float)((ulong)uVar15 >> 0x20) / param_2,(float)uVar15 / fVar7);
  local_d8 = 0xb951b717;
  UnityEngine_Matrix4x4__Internal_TRS(&local_120,&local_d0,&local_160,&local_e0,0);
  param_6[1] = uStack_118;
  *param_6 = local_120;
  local_140 = local_100;
  uStack_138 = uStack_f8;
  uStack_150 = uStack_110;
  uStack_148 = uStack_108;
  uStack_130 = uStack_f0;
  uStack_128 = uStack_e8;
LAB_043fb34c:
  param_6[3] = uStack_148;
  param_6[2] = uStack_150;
  param_6[5] = uStack_138;
  param_6[4] = local_140;
  param_6[7] = uStack_128;
  param_6[6] = uStack_130;
  uVar9 = param_5[1];
  uVar15 = *param_5;
  uVar12 = param_5[3];
  uVar11 = param_5[2];
  uVar14 = param_5[5];
  uVar13 = param_5[4];
  uVar10 = param_5[7];
  uVar8 = param_5[6];
  if (*(int *)(DAT_09184990 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_c0 = uVar15;
  uStack_b8 = uVar9;
  uStack_b0 = uVar11;
  uStack_a8 = uVar12;
  local_a0 = uVar13;
  uStack_98 = uVar14;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  FUN_04b7773c(param_3,DAT_09203688,param_4,&local_c0,DAT_091cd078);
  uStack_b8 = param_6[1];
  local_c0 = *param_6;
  uStack_a8 = param_6[3];
  uStack_b0 = param_6[2];
  uStack_98 = param_6[5];
  local_a0 = param_6[4];
  uStack_88 = param_6[7];
  uStack_90 = param_6[6];
  FUN_04b7773c(param_3,DAT_092035e8,param_4,&local_c0,DAT_091cd078);
  return;
}

