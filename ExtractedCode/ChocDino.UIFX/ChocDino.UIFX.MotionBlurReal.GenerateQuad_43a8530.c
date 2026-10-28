// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$GenerateQuad
// address: 0x43a8530
// body: available
// range: 0x43a8530-0x43a8ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a8ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurReal__GenerateQuad(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_1a0;
  float local_190;
  float local_180;
  float local_170;
  float local_160;
  float local_150;
  float local_140;
  float local_110;
  float local_100;
  float local_f0;
  float local_e0;
  float local_d0;
  undefined1 local_c0 [8];
  float local_b8;
  float fStack_b4;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  undefined8 local_a0;
  float local_98;
  float local_94;
  undefined8 local_90;
  float local_88;
  float local_84;
  
  if ((DAT_09517ad7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188400);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517ad7 = 1;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_180 = *(float *)(param_1 + 0x150);
  local_160 = *(float *)(param_1 + 0x15c);
  local_1a0 = *(float *)(param_1 + 0x154);
  local_190 = *(float *)(param_1 + 0x158);
  local_140 = *(float *)(param_1 + 0x168);
  fVar15 = *(float *)(param_1 + 0x174);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_160 = local_160 + local_1a0;
  local_190 = local_180 + local_190;
  local_140 = local_140 - fVar15;
  uVar4 = UnityEngine_Object__op_Implicit(param_3,0);
  local_150 = local_140;
  local_100 = local_160;
  local_110 = local_190;
  local_170 = local_140;
  local_e0 = local_180;
  local_f0 = local_1a0;
  local_d0 = local_140;
  if ((uVar4 & 1) != 0) {
    if (param_3 == 0) goto LAB_043a8ac0;
    fVar15 = (float)UnityEngine_Camera__ScreenToWorldPoint(local_180,param_3,0);
    fVar8 = (float)UnityEngine_Camera__ScreenToWorldPoint(local_190,param_3,0);
    local_110 = (float)UnityEngine_Camera__ScreenToWorldPoint(local_190,param_3,0);
    local_e0 = (float)UnityEngine_Camera__ScreenToWorldPoint(local_180,param_3,0);
    local_180 = fVar15;
    local_190 = fVar8;
  }
  lVar5 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar5 != 0) {
    UnityEngine_Transform__get_worldToLocalMatrix(local_c0,lVar5,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = *(long **)(param_1 + 0x1a0);
    if (plVar6 != (long *)0x0) {
      fVar15 = *(float *)(param_1 + 0x158);
      iVar2 = (**(code **)(*plVar6 + 0x188))(plVar6,*(undefined8 *)(*plVar6 + 400));
      plVar6 = *(long **)(param_1 + 0x1a0);
      if (plVar6 != (long *)0x0) {
        fVar8 = *(float *)(param_1 + 0x15c);
        iVar3 = (**(code **)(*plVar6 + 0x1a8))(plVar6,*(undefined8 *)(*plVar6 + 0x1b0));
        if (param_2 != 0) {
          fVar20 = (float)local_b0;
          fVar21 = (float)((ulong)local_b0 >> 0x20);
          fVar9 = 1.0 / (local_180 * fStack_b4 + local_160 * fStack_a4 + local_140 * local_94 +
                        local_84);
          fVar16 = local_c0._0_4_;
          fVar17 = local_c0._4_4_;
          fVar12 = 1.0 / (local_190 * fStack_b4 + local_100 * fStack_a4 + local_150 * local_94 +
                         local_84);
          fVar22 = (float)local_a0;
          fVar23 = (float)((ulong)local_a0 >> 0x20);
          fVar13 = 1.0 / (local_110 * fStack_b4 + local_1a0 * fStack_a4 + local_170 * local_94 +
                         local_84);
          fVar15 = fVar15 / (float)iVar2;
          fVar18 = (float)local_90;
          fVar19 = (float)((ulong)local_90 >> 0x20);
          fVar8 = fVar8 / (float)iVar3;
          fVar14 = (fVar17 * local_180 + fVar21 * local_160 + fVar23 * local_140 + fVar19) * fVar9;
          fVar10 = (fVar17 * local_190 + fVar21 * local_100 + fVar23 * local_150 + fVar19) * fVar12;
          fVar11 = (fVar17 * local_110 + fVar21 * local_1a0 + fVar23 * local_170 + fVar19) * fVar13;
          UnityEngine_UI_VertexHelper__Clear(param_2,0);
          if (*(int *)(DAT_09188400 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_UI_VertexHelper__AddVert
                    (CONCAT44(fVar14,(fVar16 * local_180 + fVar20 * local_160 + fVar22 * local_140 +
                                     fVar18) * fVar9),fVar14,
                     (local_180 * local_b8 + local_160 * local_a8 + local_140 * local_98 + local_88)
                     * fVar9,0,fVar8,0,0,param_2,
                     *(undefined4 *)(*(long *)(DAT_09188400 + 0xb8) + 0x10),0);
          UnityEngine_UI_VertexHelper__AddVert
                    (CONCAT44(fVar10,(fVar16 * local_190 + fVar20 * local_100 + fVar22 * local_150 +
                                     fVar18) * fVar12),fVar10,
                     (local_190 * local_b8 + local_100 * local_a8 + local_150 * local_98 + local_88)
                     * fVar12,fVar15,fVar8,0,0,param_2,
                     *(undefined4 *)(*(long *)(DAT_09188400 + 0xb8) + 0x10),0);
          UnityEngine_UI_VertexHelper__AddVert
                    (CONCAT44(fVar11,(fVar16 * local_110 + fVar20 * local_1a0 + fVar22 * local_170 +
                                     fVar18) * fVar13),fVar11,
                     (local_110 * local_b8 + local_1a0 * local_a8 + local_170 * local_98 + local_88)
                     * fVar13,fVar15,0,0,0,param_2,
                     *(undefined4 *)(*(long *)(DAT_09188400 + 0xb8) + 0x10),0);
          uVar1 = *(undefined4 *)(*(long *)(DAT_09188400 + 0xb8) + 0x10);
          if (DAT_09516627 == '\0') {
            FUN_03f5c2a4(&DAT_0918cc38);
            DAT_09516627 = '\x01';
          }
          fVar8 = 1.0 / (local_e0 * fStack_b4 + local_f0 * fStack_a4 + local_d0 * local_94 +
                        local_84);
          puVar7 = *(undefined4 **)(DAT_0918cc38 + 0xb8);
          fVar15 = (fVar17 * local_e0 + fVar21 * local_f0 + fVar23 * local_d0 + fVar19) * fVar8;
          UnityEngine_UI_VertexHelper__AddVert
                    (CONCAT44(fVar15,(fVar16 * local_e0 + fVar20 * local_f0 + fVar22 * local_d0 +
                                     fVar18) * fVar8),fVar15,
                     (local_e0 * local_b8 + local_f0 * local_a8 + local_d0 * local_98 + local_88) *
                     fVar8,*puVar7,puVar7[1],puVar7[2],puVar7[3],param_2,uVar1,0);
          UnityEngine_UI_VertexHelper__AddTriangle(param_2,0,1,2,0);
          UnityEngine_UI_VertexHelper__AddTriangle(param_2,0,2,3,0);
          return;
        }
      }
    }
  }
LAB_043a8ac0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

