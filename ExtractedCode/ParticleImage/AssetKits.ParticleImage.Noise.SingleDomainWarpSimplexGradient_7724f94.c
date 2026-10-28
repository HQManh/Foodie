// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleDomainWarpSimplexGradient
// address: 0x7724f94
// body: available
// range: 0x7724f94-0x7725557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7725550 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7725554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Noise__SingleDomainWarpSimplexGradient
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               uint param_6,float *param_7,float *param_8,ulong param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_58;
  
  if ((DAT_09522a2e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a2e = 1;
  }
  param_3 = param_2 * param_3;
  param_2 = param_2 * param_4;
  local_58 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar8 = 0.0;
  fVar15 = 0.0;
  iVar3 = -0x80000000;
  if (param_3 != INFINITY) {
    iVar3 = (int)param_3;
  }
  iVar2 = 0x7fffffff;
  if (param_3 != INFINITY) {
    iVar2 = (int)param_3 + -1;
  }
  if (0.0 <= param_3) {
    iVar2 = iVar3;
  }
  uVar4 = iVar2 * 0x1dde90c9;
  iVar3 = 0x7fffffff;
  iVar6 = -0x80000000;
  if (param_2 != INFINITY) {
    iVar3 = (int)param_2 + -1;
    iVar6 = (int)param_2;
  }
  if (0.0 <= param_2) {
    iVar3 = iVar6;
  }
  uVar5 = iVar3 * 0x43c42e4d;
  fVar13 = ((param_3 - (float)iVar2) + (param_2 - (float)iVar3)) * 0.21132487;
  fVar12 = (param_3 - (float)iVar2) - fVar13;
  fVar11 = (param_2 - (float)iVar3) - fVar13;
  fVar14 = (0.5 - fVar12 * fVar12) - fVar11 * fVar11;
  if (0.0 < fVar14) {
    if ((param_9 & 1) == 0) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0772dd3c(fVar12,fVar11,param_6,uVar4,uVar5,(long)&local_58 + 4,&local_58,0);
      fVar8 = local_58._4_4_;
      fVar9 = (float)local_58;
    }
    else {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a54 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a54 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_07725554;
      uVar1 = (uVar4 ^ param_6 ^ uVar5) * 0x12d & 0x1fe;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_07725550;
      fVar8 = *(float *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      local_58 = CONCAT44(fVar8,(float)local_58);
      if (*(uint *)(lVar7 + 0x18) <= (uVar1 | 1)) goto LAB_07725550;
      fVar9 = *(float *)(lVar7 + (ulong)(uVar1 | 1) * 4 + 0x20);
      local_58 = CONCAT44(fVar8,fVar9);
    }
    fVar10 = fVar14 * fVar14 * fVar14 * fVar14;
    fVar15 = fVar10 * fVar8 + 0.0;
    fVar8 = fVar10 * fVar9 + 0.0;
  }
  fVar13 = fVar13 * 3.1547005 + fVar14 + -0.6666666;
  if (0.0 < fVar13) {
    if ((param_9 & 1) == 0) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0772dd3c(fVar12 + -0.57735026,fVar11 + -0.57735026,param_6,uVar4 + 0x1dde90c9,
                   uVar5 + 0x43c42e4d,(long)&local_a8 + 4,&local_a8,0);
      fVar14 = local_a8._4_4_;
      fVar9 = (float)local_a8;
    }
    else {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a54 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a54 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_07725554;
      uVar1 = (uVar4 + 0xc9 ^ uVar5 + 0x4d ^ param_6) * 0x12d & 0x1fe;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_07725550;
      fVar14 = *(float *)(lVar7 + (ulong)uVar1 * 4 + 0x20);
      local_a8 = CONCAT44(fVar14,(float)local_a8);
      if (*(uint *)(lVar7 + 0x18) <= (uVar1 | 1)) goto LAB_07725550;
      fVar9 = *(float *)(lVar7 + (ulong)(uVar1 | 1) * 4 + 0x20);
      local_a8 = CONCAT44(fVar14,fVar9);
    }
    fVar13 = fVar13 * fVar13 * fVar13 * fVar13;
    fVar15 = fVar15 + fVar13 * fVar14;
    fVar8 = fVar8 + fVar13 * fVar9;
  }
  if (fVar11 <= fVar12) {
    fVar11 = fVar11 + 0.21132487;
    fVar12 = fVar12 + -0.7886751;
    fVar13 = (0.5 - fVar12 * fVar12) - fVar11 * fVar11;
    if (fVar13 <= 0.0) goto LAB_077254fc;
    if ((param_9 & 1) == 0) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0772dd3c(fVar12,fVar11,param_6,uVar4 + 0x1dde90c9,uVar5,(long)&local_b8 + 4,&local_b8,0);
      fVar11 = local_b8._4_4_;
      local_b0._0_4_ = (float)local_b8;
    }
    else {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a54 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a54 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 8);
      if (lVar7 == 0) goto LAB_07725554;
      uVar4 = (uVar4 + 0xc9 ^ param_6 ^ uVar5) * 0x12d & 0x1fe;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_07725550;
      fVar11 = *(float *)(lVar7 + (ulong)uVar4 * 4 + 0x20);
      local_b8 = CONCAT44(fVar11,(float)local_b8);
      if (*(uint *)(lVar7 + 0x18) <= (uVar4 | 1)) goto LAB_07725550;
      local_b0._0_4_ = *(float *)(lVar7 + (ulong)(uVar4 | 1) * 4 + 0x20);
    }
  }
  else {
    fVar12 = fVar12 + 0.21132487;
    fVar11 = fVar11 + -0.7886751;
    fVar13 = (0.5 - fVar12 * fVar12) - fVar11 * fVar11;
    if (fVar13 <= 0.0) goto LAB_077254fc;
    if ((param_9 & 1) == 0) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0772dd3c(fVar12,fVar11,param_6,uVar4,uVar5 + 0x43c42e4d,(long)&local_b0 + 4,&local_b0,0);
      fVar11 = local_b0._4_4_;
    }
    else {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a54 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a54 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 8);
      if (lVar7 == 0) {
LAB_07725554:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = (uVar5 + 0x4d ^ param_6 ^ uVar4) * 0x12d & 0x1fe;
      if (*(uint *)(lVar7 + 0x18) <= uVar4) {
LAB_07725550:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      fVar11 = *(float *)(lVar7 + (ulong)uVar4 * 4 + 0x20);
      local_b0 = CONCAT44(fVar11,(float)local_b0);
      if (*(uint *)(lVar7 + 0x18) <= (uVar4 | 1)) goto LAB_07725550;
      local_b0._0_4_ = *(float *)(lVar7 + (ulong)(uVar4 | 1) * 4 + 0x20);
    }
  }
  fVar12 = fVar13 * fVar13 * fVar13 * fVar13;
  fVar15 = fVar15 + fVar12 * fVar11;
  fVar8 = fVar8 + fVar12 * (float)local_b0;
LAB_077254fc:
  *param_7 = *param_7 + fVar15 * param_1;
  *param_8 = fVar8 * param_1 + *param_8;
  return;
}

