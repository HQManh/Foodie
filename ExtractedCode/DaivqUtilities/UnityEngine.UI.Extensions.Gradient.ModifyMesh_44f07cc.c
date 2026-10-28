// rea decompile_all
// name: UnityEngine.UI.Extensions.Gradient$$ModifyMesh
// address: 0x44f07cc
// body: available
// range: 0x44f07cc-0x44f0def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44f0dec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UnityEngine_UI_Extensions_Gradient__ModifyMesh
               (undefined1 param_1 [16],undefined1 param_2 [16],ulong param_3,ulong param_4,
               long *param_5,long param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  undefined2 uVar22;
  float fVar23;
  undefined1 auStack_254 [108];
  undefined1 auStack_1e8 [108];
  float local_17c;
  float local_178;
  float local_110 [10];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  
  if ((DAT_09518415 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b16f0);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_0917cfe8);
    DAT_09518415 = 1;
  }
  uStack_ac = 0;
  uStack_b0 = 0;
  local_110[2] = 0.0;
  local_110[3] = 0.0;
  local_110[0] = 0.0;
  local_110[1] = 0.0;
  local_110[6] = 0.0;
  local_110[7] = 0.0;
  local_110[4] = 0.0;
  local_110[5] = 0.0;
  uStack_e8 = 0;
  local_110[8] = 0.0;
  local_110[9] = 0.0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  uStack_c0 = 0;
  if (param_6 != 0) {
    uVar5 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_6,0);
    uVar7 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
    if ((uVar7 & 1) == 0) {
      return;
    }
    if (uVar5 == 0) {
      return;
    }
    lVar8 = thunk_FUN_03f9944c(DAT_0917cfe8);
    FUN_05894170(lVar8,DAT_091b16f0);
    UnityEngine_UI_VertexHelper__GetUIVertexStream(param_6,lVar8,0);
    uStack_ac = 0;
    uStack_b0 = 0;
    local_110[2] = 0.0;
    local_110[3] = 0.0;
    local_110[0] = 0.0;
    local_110[1] = 0.0;
    local_110[6] = 0.0;
    local_110[7] = 0.0;
    local_110[4] = 0.0;
    local_110[5] = 0.0;
    uStack_e8 = 0;
    local_110[8] = 0.0;
    local_110[9] = 0.0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_b4 = 0;
    uStack_c0 = 0;
    if ((int)param_5[5] != 0) {
      if ((int)uVar5 < 1) {
        return;
      }
      uVar13 = 0;
      do {
        UnityEngine_UI_VertexHelper__PopulateUIVertex(param_6,local_110,uVar13,0);
        if ((char)param_5[6] == '\0') {
          plVar9 = (long *)param_5[0xb];
          if (plVar9 == (long *)0x0) goto LAB_044f0dec;
          uVar2 = (uint)uStack_e8;
          auVar17 = ZEXT816(0x437f0000);
          uVar10 = (uint)uStack_e8 & 0xff;
          fVar19 = (float)(**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
          if ((((ABS((float)uVar10 / 255.0 - fVar19) < 0.003) &&
               (ABS((float)(uVar2 >> 8 & 0xff) / 255.0 - auVar17._0_4_) < 0.003)) &&
              (ABS((float)(uVar2 >> 0x10 & 0xff) / 255.0 - (float)param_3) < 0.003)) &&
             (ABS((float)(uVar2 >> 0x18) / 255.0 - (float)param_4) < 0.003)) goto LAB_044f0944;
        }
        else {
LAB_044f0944:
          iVar1 = *(int *)((long)param_5 + 0x2c);
          uVar22 = (undefined2)((ulong)uStack_e8 >> 8);
          if (iVar1 < 2) {
            if (iVar1 == 0) {
              if ((uVar13 & 3) == 0) {
LAB_044f0a44:
                pfVar11 = (float *)(param_5 + 8);
                pfVar12 = (float *)((long)param_5 + 0x3c);
              }
              else {
                uVar10 = uVar13 - 1;
LAB_044f0a30:
                pfVar11 = (float *)(param_5 + 10);
                pfVar12 = (float *)((long)param_5 + 0x4c);
                if ((uVar10 & 3) == 0) goto LAB_044f0a44;
              }
              uVar15 = NEON_ushl(CONCAT44((uint)uStack_e8,(uint)uStack_e8),0xffffffe8fffffff0,4);
              uVar7 = CONCAT26((short)((ulong)uVar15 >> 0x20),
                               CONCAT24((short)uVar15,CONCAT22(uVar22,(short)uStack_e8))) &
                      0xff00ff00ff00ff;
              auVar16._2_2_ = 0;
              auVar16._0_2_ = (ushort)uVar7;
              auVar16._4_2_ = (short)(uVar7 >> 0x10);
              auVar16._6_2_ = 0;
              auVar16._8_2_ = (short)(uVar7 >> 0x20);
              auVar16._10_2_ = 0;
              auVar16._12_2_ = (short)(uVar7 >> 0x30);
              auVar16._14_2_ = 0;
              auVar17 = NEON_ucvtf(auVar16,4);
              param_4 = CONCAT44((auVar17._12_4_ / 255.0) * *pfVar11,
                                 (auVar17._8_4_ / 255.0) * *pfVar12);
              goto LAB_044f0b10;
            }
            if (iVar1 == 1) {
              if ((uVar13 & 3) != 0) {
                uVar10 = uVar13 + 1;
                goto LAB_044f0a30;
              }
              goto LAB_044f0a44;
            }
          }
          else {
            if (iVar1 == 2) {
              if ((uVar13 & 3) == 0) {
LAB_044f0ab8:
                fVar19 = *(float *)((long)param_5 + 0x3c);
                fVar20 = *(float *)(param_5 + 8);
              }
              else if ((uVar13 & 3) == 2) {
                fVar19 = *(float *)((long)param_5 + 0x4c);
                fVar20 = *(float *)(param_5 + 10);
              }
              else {
                fVar19 = *(float *)((long)param_5 + 0x4c);
                fVar20 = *(float *)(param_5 + 10);
LAB_044f0ac4:
                fVar19 = fVar19 + (*(float *)((long)param_5 + 0x3c) - fVar19) * 0.5;
                fVar20 = fVar20 + (*(float *)(param_5 + 8) - fVar20) * 0.5;
              }
            }
            else {
              if (iVar1 != 3) goto LAB_044f0b28;
              if ((uVar13 - 1 & 3) == 0) goto LAB_044f0ab8;
              fVar19 = *(float *)((long)param_5 + 0x4c);
              fVar20 = *(float *)(param_5 + 10);
              if ((uVar13 + 1 & 3) != 0) goto LAB_044f0ac4;
            }
            uVar15 = NEON_ushl(CONCAT44((uint)uStack_e8,(uint)uStack_e8),0xffffffe8fffffff0,4);
            uVar7 = CONCAT26((short)((ulong)uVar15 >> 0x20),
                             CONCAT24((short)uVar15,CONCAT22(uVar22,(short)uStack_e8))) &
                    0xff00ff00ff00ff;
            auVar17._2_2_ = 0;
            auVar17._0_2_ = (ushort)uVar7;
            auVar17._4_2_ = (short)(uVar7 >> 0x10);
            auVar17._6_2_ = 0;
            auVar17._8_2_ = (short)(uVar7 >> 0x20);
            auVar17._10_2_ = 0;
            auVar17._12_2_ = (short)(uVar7 >> 0x30);
            auVar17._14_2_ = 0;
            auVar17 = NEON_ucvtf(auVar17,4);
            param_4 = CONCAT44((auVar17._12_4_ / 255.0) * fVar20,(auVar17._8_4_ / 255.0) * fVar19);
LAB_044f0b10:
            param_3 = param_4 & 0xffffffff;
            param_4 = param_4 >> 0x20;
            uVar6 = FUN_043b2fc4(0);
            uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar6);
          }
LAB_044f0b28:
          memcpy(auStack_254,local_110,0x6c);
          UnityEngine_UI_VertexHelper__SetUIVertex(param_6,auStack_254,uVar13,0);
        }
        uVar13 = uVar13 + 1;
        if (uVar5 == uVar13) {
          return;
        }
      } while( true );
    }
    if (*(int *)((long)param_5 + 0x2c) - 2U < 2) {
      *(undefined4 *)((long)param_5 + 0x2c) = 0;
    }
    else if (*(int *)((long)param_5 + 0x2c) != 0) {
      if (lVar8 == 0) goto LAB_044f0dec;
      FUN_05894708(&local_17c,lVar8,*(int *)(lVar8 + 0x18) + -1,DAT_091b1750);
      fVar19 = local_17c;
      goto LAB_044f0bcc;
    }
    if (lVar8 != 0) {
      FUN_05894708(&local_17c,lVar8,*(int *)(lVar8 + 0x18) + -1,DAT_091b1750);
      fVar19 = local_178;
LAB_044f0bcc:
      if (*(int *)((long)param_5 + 0x2c) == 0) {
        FUN_05894708(&local_17c,lVar8,0,DAT_091b1750);
        local_17c = local_178;
      }
      else {
        FUN_05894708(&local_17c,lVar8,0,DAT_091b1750);
      }
      if (0 < (int)uVar5) {
        uVar13 = 0;
        do {
          fVar23 = (float)param_4;
          fVar20 = (float)param_3;
          UnityEngine_UI_VertexHelper__PopulateUIVertex(param_6,local_110,uVar13,0);
          if ((char)param_5[6] == '\0') {
            plVar9 = (long *)param_5[0xb];
            if (plVar9 == (long *)0x0) goto LAB_044f0dec;
            auVar17 = ZEXT816(0x437f0000);
            uVar2 = (uint)uStack_e8 >> 0x18;
            uVar3 = (uint)uStack_e8 >> 0x10;
            uVar4 = (uint)uStack_e8 >> 8;
            uVar10 = (uint)uStack_e8 & 0xff;
            fVar14 = (float)(**(code **)(*plVar9 + 0x298))(plVar9,*(undefined8 *)(*plVar9 + 0x2a0));
            fVar14 = (float)uVar10 / 255.0 - fVar14;
            fVar21 = (float)(uVar4 & 0xff) / 255.0 - auVar17._0_4_;
            fVar20 = (float)(uVar3 & 0xff) / 255.0 - fVar20;
            param_3 = (ulong)(uint)fVar20;
            fVar23 = (float)uVar2 / 255.0 - fVar23;
            param_4 = (ulong)(uint)fVar23;
            if (fVar23 * fVar23 + fVar20 * fVar20 + fVar14 * fVar14 + fVar21 * fVar21 <
                9.9999994e-11) goto LAB_044f0cfc;
          }
          else {
LAB_044f0cfc:
            pfVar11 = (float *)((ulong)local_110 | 4);
            if (*(int *)((long)param_5 + 0x2c) != 0) {
              pfVar11 = local_110;
            }
            uVar15 = NEON_ushl(CONCAT44((uint)uStack_e8,(uint)uStack_e8),0xffffffe8fffffff0,4);
            fVar23 = (*pfVar11 - fVar19) / (local_17c - fVar19);
            uVar7 = CONCAT26((short)((ulong)uVar15 >> 0x20),
                             CONCAT24((short)uVar15,
                                      CONCAT22((short)((ulong)uStack_e8 >> 8),(short)uStack_e8))) &
                    0xff00ff00ff00ff;
            auVar18._2_2_ = 0;
            auVar18._0_2_ = (ushort)uVar7;
            auVar18._4_2_ = (short)(uVar7 >> 0x10);
            auVar18._6_2_ = 0;
            auVar18._8_2_ = (short)(uVar7 >> 0x20);
            auVar18._10_2_ = 0;
            auVar18._12_2_ = (short)(uVar7 >> 0x30);
            auVar18._14_2_ = 0;
            auVar17 = NEON_ucvtf(auVar18,4);
            fVar20 = 1.0;
            if (fVar23 <= 1.0) {
              fVar20 = fVar23;
            }
            fVar14 = 0.0;
            if (0.0 <= fVar23) {
              fVar14 = fVar20;
            }
            param_3 = (ulong)(uint)((auVar17._8_4_ / 255.0) *
                                   (*(float *)((long)param_5 + 0x4c) +
                                   ((float)*(undefined8 *)((long)param_5 + 0x3c) -
                                   *(float *)((long)param_5 + 0x4c)) * fVar14));
            param_4 = (ulong)(uint)((auVar17._12_4_ / 255.0) *
                                   (*(float *)(param_5 + 10) +
                                   ((float)((ulong)*(undefined8 *)((long)param_5 + 0x3c) >> 0x20) -
                                   *(float *)(param_5 + 10)) * fVar14));
            uVar6 = FUN_043b2fc4(0);
            uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar6);
            memcpy(auStack_1e8,local_110,0x6c);
            UnityEngine_UI_VertexHelper__SetUIVertex(param_6,auStack_1e8,uVar13,0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
      }
      return;
    }
  }
LAB_044f0dec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

