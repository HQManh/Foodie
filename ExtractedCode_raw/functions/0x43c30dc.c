// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$ModifyMesh
// address: 0x43c30dc
// body: available
// range: 0x43c30dc-0x43c371f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c31c4 to 0x89a71b8 UnityEngine.UI.VertexHelper$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c371c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UIToolkitTextSource__ModifyMesh(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_3d0 [108];
  undefined1 auStack_364 [108];
  undefined1 auStack_2f8 [108];
  undefined1 auStack_28c [108];
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
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
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
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
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
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
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
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  
  if ((DAT_09517b8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b8d = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x170);
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_14c = 0;
  uStack_150 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_e4 = 0;
  uStack_f0 = 0;
  uStack_1bc = 0;
  uStack_1c0 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  local_1c4 = 0;
  uStack_1d0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_154 = 0;
  uStack_160 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar7 & 1) != 0) {
    if (param_2 != 0) {
      UnityEngine_UI_VertexHelper__Clear(param_2,0);
      return;
    }
    goto LAB_043c371c;
  }
  uStack_6c = 0;
  uStack_70 = 0;
  uStack_1bc = 0;
  uStack_1c0 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  local_1c4 = 0;
  uStack_1d0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_74 = 0;
  uStack_80 = 0;
  uStack_dc = 0;
  local_e4 = 0;
  uStack_e0 = 0;
  uStack_14c = 0;
  local_154 = 0;
  uStack_150 = 0;
  if (param_2 == 0) goto LAB_043c371c;
  UnityEngine_UI_VertexHelper__PopulateUIVertex(param_2,&local_d0,0,0);
  UnityEngine_UI_VertexHelper__PopulateUIVertex(param_2,&local_140,1,0);
  UnityEngine_UI_VertexHelper__PopulateUIVertex(param_2,&local_1b0,2,0);
  UnityEngine_UI_VertexHelper__PopulateUIVertex(param_2,&local_220,3,0);
  if ((*(int *)(param_1 + 0x108) == 0) || (*(int *)(param_1 + 0x108) == 3)) {
    if (0 < *(int *)(param_1 + 0x158)) {
      fVar10 = (float)*(int *)(param_1 + 0x158);
      local_1b0 = CONCAT44((float)((ulong)local_1b0 >> 0x20) + 0.0,(float)local_1b0 + fVar10);
      local_d0 = CONCAT44(local_d0._4_4_,(float)local_d0 - fVar10);
      local_220 = CONCAT44((float)((ulong)local_220 >> 0x20) + 0.0,(float)local_220 + fVar10);
      local_140 = CONCAT44(local_140._4_4_,(float)local_140 - fVar10);
      uStack_1a8 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8 + 0.0);
      uStack_218 = CONCAT44(uStack_218._4_4_,(float)uStack_218 + 0.0);
    }
    goto LAB_043c366c;
  }
  if (DAT_09515ce6 == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09515ce6 = '\x01';
  }
  fVar10 = 0.0;
  iVar5 = *(int *)(param_1 + 0x104);
  uVar9 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
  fVar24 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1);
  if (iVar5 < 4) {
    if (iVar5 < 2) {
      uVar15 = local_140;
      fVar14 = (float)uStack_138;
      if ((iVar5 != 0) &&
         (uVar15 = uVar9, uVar17 = local_140, uVar19 = local_1b0, fVar14 = fVar24,
         fVar11 = (float)uStack_138, fVar12 = (float)uStack_1a8, iVar5 == 1)) {
LAB_043c3460:
        fVar10 = 0.5;
        uVar15 = CONCAT44(((float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar19 >> 0x20)) * 0.5,
                          ((float)uVar17 + (float)uVar19) * 0.5);
        fVar14 = (fVar11 + fVar12) * 0.5;
      }
    }
    else {
      uVar15 = local_1b0;
      fVar14 = (float)uStack_1a8;
      if (iVar5 == 2) goto LAB_043c33f8;
      uVar15 = uVar9;
      uVar9 = local_d0;
      uVar17 = local_140;
      fVar14 = fVar24;
      fVar24 = (float)uStack_c8;
      fVar11 = (float)uStack_138;
      if (iVar5 == 3) goto LAB_043c33bc;
    }
  }
  else if (iVar5 < 6) {
    if (iVar5 == 4) {
      fVar10 = 0.5;
      uVar9 = NEON_fmov(0x3e800000,4);
      uVar15 = CONCAT44(((float)((ulong)local_d0 >> 0x20) + (float)((ulong)local_140 >> 0x20) +
                         (float)((ulong)local_1b0 >> 0x20) + (float)((ulong)local_220 >> 0x20)) *
                        (float)((ulong)uVar9 >> 0x20),
                        ((float)local_d0 + (float)local_140 + (float)local_1b0 + (float)local_220) *
                        (float)uVar9);
      fVar14 = ((float)uStack_c8 + (float)uStack_138 + (float)uStack_1a8 + (float)uStack_218) * 0.25
      ;
    }
    else {
      uVar15 = uVar9;
      fVar14 = fVar24;
      if (iVar5 == 5) {
        fVar10 = 1.0;
        uVar9 = local_1b0;
        uVar17 = local_220;
        fVar24 = (float)uStack_1a8;
        fVar11 = (float)uStack_218;
LAB_043c33bc:
        uVar15 = CONCAT44(((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar17 >> 0x20)) * 0.5,
                          ((float)uVar9 + (float)uVar17) * 0.5);
        fVar14 = (fVar24 + fVar11) * 0.5;
      }
    }
  }
  else {
    uVar15 = local_220;
    fVar14 = (float)uStack_218;
    if (iVar5 == 8) {
LAB_043c33f8:
      fVar10 = 1.0;
    }
    else {
      uVar17 = local_d0;
      uVar19 = local_220;
      fVar11 = (float)uStack_c8;
      fVar12 = (float)uStack_218;
      if (iVar5 == 7) goto LAB_043c3460;
      uVar15 = uVar9;
      fVar14 = fVar24;
      if (iVar5 == 6) {
        uVar15 = local_d0;
        fVar14 = (float)uStack_c8;
      }
    }
  }
  plVar8 = *(long **)(param_1 + 0x170);
  if (plVar8 != (long *)0x0) {
    uVar9 = uVar15;
    iVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
    fVar24 = (float)uVar9;
    if (*(long *)(param_1 + 0x1d0) != 0) {
      fVar11 = (float)UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
      plVar8 = *(long **)(param_1 + 0x170);
      if (plVar8 != (long *)0x0) {
        iVar6 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        if (*(long *)(param_1 + 0x1d0) != 0) {
          fVar11 = (float)iVar5 / fVar11;
          UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_1 + 0x1d0),0);
          fVar13 = (float)((ulong)uVar15 >> 0x20);
          fVar12 = (float)uVar15;
          fVar24 = (float)iVar6 / fVar24;
          iVar5 = *(int *)(param_1 + 0x158);
          uVar1 = (undefined4)((ulong)uStack_c8 >> 0x20);
          uVar2 = (undefined4)((ulong)uStack_138 >> 0x20);
          fVar20 = fVar14 + ((float)uStack_c8 - fVar14);
          fVar16 = fVar14 + ((float)uStack_138 - fVar14);
          uVar3 = (undefined4)((ulong)uStack_1a8 >> 0x20);
          fVar18 = fVar14 + ((float)uStack_1a8 - fVar14);
          uStack_c8 = CONCAT44(uVar1,fVar20);
          fVar25 = fVar12 + fVar11 * ((float)local_140 - fVar12);
          uVar4 = (undefined4)((ulong)uStack_218 >> 0x20);
          fVar14 = fVar14 + ((float)uStack_218 - fVar14);
          uStack_138 = CONCAT44(uVar2,fVar16);
          uStack_1a8 = CONCAT44(uVar3,fVar18);
          fVar26 = fVar13 + fVar24 * ((float)((ulong)local_140 >> 0x20) - fVar13);
          fVar21 = fVar12 + fVar11 * ((float)local_1b0 - fVar12);
          fVar27 = fVar13 + fVar24 * ((float)((ulong)local_1b0 >> 0x20) - fVar13);
          fVar22 = fVar12 + fVar11 * ((float)local_220 - fVar12);
          fVar23 = fVar13 + fVar24 * ((float)((ulong)local_220 >> 0x20) - fVar13);
          fVar12 = fVar12 + fVar11 * ((float)local_d0 - fVar12);
          fVar13 = fVar13 + fVar24 * ((float)((ulong)local_d0 >> 0x20) - fVar13);
          local_d0 = CONCAT44(fVar13,fVar12);
          local_140 = CONCAT44(fVar26,fVar25);
          local_1b0 = CONCAT44(fVar27,fVar21);
          local_220 = CONCAT44(fVar23,fVar22);
          uStack_218 = CONCAT44(uVar4,fVar14);
          if (0 < iVar5) {
            uStack_c8 = CONCAT44(uVar1,fVar20 + 0.0);
            uStack_138 = CONCAT44(uVar2,fVar16 + 0.0);
            uStack_1a8 = CONCAT44(uVar3,fVar18 + 0.0);
            fVar10 = fVar10 * ((float)iVar5 - (float)-iVar5) + (float)-iVar5;
            uStack_218 = CONCAT44(uVar4,fVar14 + 0.0);
            local_d0 = CONCAT44(fVar13 + 0.0,fVar12 + fVar10);
            local_140 = CONCAT44(fVar26 + 0.0,fVar25 + fVar10);
            local_1b0 = CONCAT44(fVar27 + 0.0,fVar21 + fVar10);
            local_220 = CONCAT44(fVar23 + 0.0,fVar22 + fVar10);
          }
LAB_043c366c:
          memcpy(auStack_28c,&local_d0,0x6c);
          UnityEngine_UI_VertexHelper__SetUIVertex(param_2,auStack_28c,0,0);
          memcpy(auStack_2f8,&local_140,0x6c);
          UnityEngine_UI_VertexHelper__SetUIVertex(param_2,auStack_2f8,1,0);
          memcpy(auStack_364,&local_1b0,0x6c);
          UnityEngine_UI_VertexHelper__SetUIVertex(param_2,auStack_364,2,0);
          memcpy(auStack_3d0,&local_220,0x6c);
          UnityEngine_UI_VertexHelper__SetUIVertex(param_2,auStack_3d0,3,0);
          return;
        }
      }
    }
  }
LAB_043c371c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

