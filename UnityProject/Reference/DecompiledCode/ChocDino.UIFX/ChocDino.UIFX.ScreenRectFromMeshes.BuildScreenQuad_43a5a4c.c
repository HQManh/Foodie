// rea decompile_all
// name: ChocDino.UIFX.ScreenRectFromMeshes$$BuildScreenQuad
// address: 0x43a5a4c
// body: available
// range: 0x43a5a4c-0x43a619b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a6198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_ScreenRectFromMeshes__BuildScreenQuad
               (long param_1,long param_2,long param_3,undefined4 param_4,long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_44;
  
  if ((DAT_09517ac0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517ac0 = 1;
  }
  fVar20 = *(float *)(param_1 + 0x6c);
  fVar19 = *(float *)(param_1 + 0x70);
  fVar14 = *(float *)(param_1 + 0x74);
  fVar15 = *(float *)(param_1 + 0x78);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar17 = *(float *)(param_1 + 0x1c);
  fVar18 = *(float *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar15 = fVar19 + fVar15;
  fVar14 = fVar20 + fVar14;
  fVar17 = fVar17 + fVar18;
  uVar5 = UnityEngine_Object__op_Implicit(param_2,0);
  fVar18 = fVar19;
  fVar16 = fVar17;
  fVar7 = fVar20;
  local_dc = fVar15;
  local_d8 = fVar17;
  local_d4 = fVar14;
  local_44 = fVar17;
  if ((uVar5 & 1) != 0) {
    if (param_2 == 0) goto LAB_043a6198;
    fVar6 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar20,param_2,0);
    local_d4 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar14,param_2,0);
    fVar14 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar14,param_2,0);
    fVar7 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar20,param_2,0);
    fVar20 = fVar6;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(param_3,0);
  if ((uVar5 & 1) != 0) {
    if (param_3 == 0) goto LAB_043a6198;
    UnityEngine_Transform__get_worldToLocalMatrix(&fStack_d0,param_3,0);
    fVar24 = local_dc * local_c0;
    fVar6 = 1.0 / (fVar20 * local_c4 + local_dc * local_b4 + local_d8 * local_a4 + local_94);
    fVar25 = local_d8 * local_b0;
    fVar11 = 1.0 / (local_d4 * local_c4 + fVar15 * local_b4 + local_44 * local_a4 + local_94);
    fVar27 = local_dc * local_b8;
    fVar28 = local_d4 * local_cc;
    fVar23 = fVar14 * local_cc;
    fVar12 = 1.0 / (fVar14 * local_c4 + fVar18 * local_b4 + fVar16 * local_a4 + local_94);
    fVar26 = local_d4 * fStack_c8;
    fVar8 = fVar15 * local_b8;
    fVar10 = fVar14 * fStack_c8;
    fVar21 = fVar18 * local_b8;
    local_b8 = fVar19 * local_b8;
    fVar13 = fVar19 * local_c0;
    fVar22 = fVar17 * local_b0;
    fVar9 = 1.0 / (fVar7 * local_c4 + fVar19 * local_b4 + fVar17 * local_a4 + local_94);
    local_dc = (fVar20 * local_cc + local_dc * fStack_bc + local_d8 * fStack_ac + fStack_9c) * fVar6
    ;
    local_d8 = (fVar20 * fStack_c8 + fVar27 + local_d8 * local_a8 + local_98) * fVar6;
    fVar20 = (fVar20 * fStack_d0 + fVar24 + fVar25 + local_a0) * fVar6;
    fVar14 = (fVar14 * fStack_d0 + fVar18 * local_c0 + fVar16 * local_b0 + local_a0) * fVar12;
    fVar18 = (fVar23 + fVar18 * fStack_bc + fVar16 * fStack_ac + fStack_9c) * fVar12;
    local_d4 = (local_d4 * fStack_d0 + fVar15 * local_c0 + local_44 * local_b0 + local_a0) * fVar11;
    fVar15 = (fVar28 + fVar15 * fStack_bc + local_44 * fStack_ac + fStack_9c) * fVar11;
    fVar19 = (fVar7 * local_cc + fVar19 * fStack_bc + fVar17 * fStack_ac + fStack_9c) * fVar9;
    fVar17 = (fVar7 * fStack_c8 + local_b8 + fVar17 * local_a8 + local_98) * fVar9;
    local_44 = (fVar26 + fVar8 + local_44 * local_a8 + local_98) * fVar11;
    fVar16 = (fVar10 + fVar21 + fVar16 * local_a8 + local_98) * fVar12;
    fVar7 = (fVar7 * fStack_d0 + fVar13 + fVar22 + local_a0) * fVar9;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar6 = *(float *)(param_1 + 0x2c);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
    fVar8 = *(float *)(param_1 + 0x30);
    if (DAT_09516626 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516626 = '\x01';
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x30);
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar9 = *(float *)(param_1 + 0x34);
  fVar10 = *(float *)(param_1 + 0x2c);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar11 = *(float *)(param_1 + 0x2c);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar12 = *(float *)(param_1 + 0x38);
  fVar13 = *(float *)(param_1 + 0x30);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar21 = *(float *)(param_1 + 0x30);
  if (DAT_09516626 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09516626 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_5 != 0) {
    fVar12 = fVar12 + fVar13;
    fVar9 = fVar9 + fVar10;
    fVar10 = -2.1474836e+09;
    if ((float)(int)fVar8 != INFINITY) {
      fVar10 = (float)(int)(float)(int)fVar8;
    }
    iVar1 = -0x80000000;
    if ((float)(int)fVar12 != INFINITY) {
      iVar1 = (int)fVar12;
    }
    iVar2 = -0x80000000;
    if ((float)(int)fVar21 != INFINITY) {
      iVar2 = (int)fVar21;
    }
    fVar8 = -2.1474836e+09;
    if ((float)(int)fVar6 != INFINITY) {
      fVar8 = (float)(int)(float)(int)fVar6;
    }
    fVar6 = ((*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x70)) - fVar10) /
            (float)(iVar1 - iVar2);
    iVar3 = -0x80000000;
    if ((float)(int)fVar9 != INFINITY) {
      iVar3 = (int)fVar9;
    }
    iVar4 = -0x80000000;
    if ((float)(int)fVar11 != INFINITY) {
      iVar4 = (int)fVar11;
    }
    fVar10 = (*(float *)(param_1 + 0x70) - fVar10) / (float)(iVar1 - iVar2);
    fVar9 = ((*(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x6c)) - fVar8) /
            (float)(iVar3 - iVar4);
    fVar8 = (*(float *)(param_1 + 0x6c) - fVar8) / (float)(iVar3 - iVar4);
    UnityEngine_UI_VertexHelper__Clear(param_5,0);
    UnityEngine_UI_VertexHelper__AddVert(fVar20,local_dc,local_d8,fVar8,fVar6,0,0,param_5,param_4,0)
    ;
    UnityEngine_UI_VertexHelper__AddVert(local_d4,fVar15,local_44,fVar9,fVar6,0,0,param_5,param_4,0)
    ;
    UnityEngine_UI_VertexHelper__AddVert(fVar14,fVar18,fVar16,fVar9,fVar10,0,0,param_5,param_4,0);
    UnityEngine_UI_VertexHelper__AddVert(fVar7,fVar19,fVar17,fVar8,fVar10,0,0,param_5,param_4,0);
    UnityEngine_UI_VertexHelper__AddTriangle(param_5,0,1,2,0);
    UnityEngine_UI_VertexHelper__AddTriangle(param_5,0,2,3,0);
    return;
  }
LAB_043a6198:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

