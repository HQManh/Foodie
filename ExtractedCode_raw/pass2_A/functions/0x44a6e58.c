// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$GridBounds
// address: 0x44a6e58
// body: available
// range: 0x44a6e58-0x44a70ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a70f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44a70fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__GridBounds
               (undefined8 *param_1,undefined1 param_2 [16],ulong param_3,float param_4,long param_5
               )

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar9;
  undefined8 uVar8;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  ulong uVar16;
  float fVar18;
  undefined4 local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  
  if ((DAT_0951820c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0340);
    FUN_03f5c2a4(&DAT_091b6a78);
    FUN_03f5c2a4(&DAT_091b6a70);
    FUN_03f5c2a4(&DAT_091b6a80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951820c = 1;
  }
  lVar1 = DAT_091c0340;
  lVar3 = *(long *)(param_5 + 0x1a0);
  local_c8 = 0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  fStack_bc = 0.0;
  local_b0 = 0.0;
  local_b8 = 0.0;
  fStack_b4 = 0.0;
  if (lVar3 == 0) {
    lVar3 = *(long *)(DAT_091c0340 + 0x38);
    if (lVar3 == 0) {
      FUN_03f95ac8(DAT_091c0340);
      lVar3 = *(long *)(lVar1 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar1 + 0xb8);
    if (lVar3 == 0) {
LAB_044a70fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
    uVar4 = 0;
    uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar1 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
      fVar6 = param_4;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar6 = param_4;
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
      fVar13 = fStack_b4;
      fVar12 = local_b8;
      fVar15 = fStack_c0;
      fVar9 = fStack_c4;
      uVar10 = (undefined4)param_3;
      param_4 = fVar6;
      if ((uVar2 & 1) != 0) {
        if ((char)local_c8 == '\0') {
          if (lVar1 == 0) goto LAB_044a70fc;
          uVar7 = UnityEngine_Transform__get_position(lVar1,0);
          param_4 = fVar6;
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          uVar8 = **(undefined8 **)(DAT_0918cbd0 + 0xb8);
          local_a8 = CONCAT44(uVar10,uVar7);
          local_9c = CONCAT44((float)((ulong)uVar8 >> 0x20) * 0.5,(float)uVar8 * 0.5);
          local_94 = *(float *)(*(undefined8 **)(DAT_0918cbd0 + 0xb8) + 1) * 0.5;
          local_a0 = fVar6;
        }
        else {
          if (lVar1 == 0) goto LAB_044a70fc;
          param_4 = fStack_bc - local_b0;
          fVar18 = local_b0 + fStack_bc;
          fVar11 = fStack_bc;
          fVar5 = (float)UnityEngine_Transform__get_position(lVar1,0);
          fVar14 = fVar9 - fVar12;
          fVar17 = fVar15 - fVar13;
          uVar16 = CONCAT44(fVar17,fVar14);
          uVar2 = CONCAT44(fVar11,fVar5);
          fVar12 = fVar12 + fVar9;
          fVar13 = fVar13 + fVar15;
          if (fVar6 <= param_4) {
            param_4 = fVar6;
          }
          if (fVar18 <= fVar6) {
            fVar18 = fVar6;
          }
          uVar16 = uVar16 ^ (uVar16 ^ uVar2) &
                            ~CONCAT44(-(uint)(fVar17 < fVar11),-(uint)(fVar14 < fVar5));
          uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar13,fVar12)) &
                          CONCAT44(-(uint)(fVar11 < fVar13),-(uint)(fVar5 < fVar12));
          fVar15 = (float)uVar16;
          fVar12 = (float)(uVar16 >> 0x20);
          local_94 = (fVar18 - param_4) * 0.5;
          fVar6 = ((float)uVar2 - fVar15) * 0.5;
          fVar9 = ((float)(uVar2 >> 0x20) - fVar12) * 0.5;
          local_9c = CONCAT44(fVar9,fVar6);
          param_4 = param_4 + local_94;
          local_a8 = CONCAT44(fVar12 + fVar9,fVar15 + fVar6);
          local_a0 = param_4;
        }
        param_3 = (ulong)(uint)local_94;
        FUN_05c294f8(&local_c8,&local_a8,DAT_091b6a70);
      }
      uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
  }
  param_1[1] = CONCAT44(fStack_bc,fStack_c0);
  *param_1 = CONCAT44(fStack_c4,local_c8);
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_b0,fStack_b4);
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_b8,fStack_bc);
  return;
}

