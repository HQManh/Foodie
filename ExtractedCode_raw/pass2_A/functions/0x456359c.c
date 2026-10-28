// rea decompile_all
// name: DG.Tweening.Plugins.Core.PathCore.Path$$CloneIncremental
// address: 0x456359c
// body: available
// range: 0x456359c-0x4563a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4563a94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4563a98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_Core_PathCore_Path__CloneIncremental(long param_1,int param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  
  if ((DAT_09518887 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fd58);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1178);
    FUN_03f5c2a4(&DAT_091d5850);
    FUN_03f5c2a4(&DAT_09188f18);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_0918c158);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09518887 = 1;
  }
  plVar11 = (long *)(param_1 + 200);
  if (*plVar11 != 0) {
    if (*(int *)(param_1 + 0xd0) == param_2) {
      return;
    }
    DG_Tweening_Plugins_Core_PathCore_Path__Destroy();
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    uVar13 = *(ulong *)(lVar4 + 0x18);
    iVar12 = (int)uVar13;
    if (iVar12 == 0) {
LAB_04563a98:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar22 = *(undefined8 *)(lVar4 + 0x20);
    puVar6 = (undefined8 *)(lVar4 + 0x20 + (long)(iVar12 + -1) * 0xc);
    uVar21 = *puVar6;
    fVar14 = (float)uVar21 - (float)uVar22;
    fVar18 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar22 >> 0x20);
    fVar15 = *(float *)(puVar6 + 1) - *(float *)(lVar4 + 0x28);
    lVar4 = FUN_03f5c394(DAT_091807f8,uVar13 & 0xffffffff);
    fVar16 = (float)param_2;
    if (0 < iVar12) {
      uVar5 = 0;
      lVar7 = 0x20;
      do {
        lVar8 = *(long *)(param_1 + 0x18);
        if (lVar8 == 0) goto LAB_04563a94;
        if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_04563a98;
        if (lVar4 == 0) goto LAB_04563a94;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_04563a98;
        uVar5 = uVar5 + 1;
        uVar22 = *(undefined8 *)(lVar8 + lVar7);
        fVar23 = *(float *)((undefined8 *)(lVar8 + lVar7) + 1);
        puVar6 = (undefined8 *)(lVar4 + lVar7);
        lVar7 = lVar7 + 0xc;
        *puVar6 = CONCAT44(fVar18 * fVar16 + (float)((ulong)uVar22 >> 0x20),
                           fVar14 * fVar16 + (float)uVar22);
        *(float *)(puVar6 + 1) = fVar15 * fVar16 + fVar23;
      } while ((uVar13 & 0xffffffff) != uVar5);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar13 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x18);
      lVar7 = FUN_03f5c394(DAT_0917fd58,uVar13 & 0xffffffff);
      if (0 < (int)uVar13) {
        uVar5 = 0;
        lVar8 = 0x20;
        auVar19 = NEON_ext(ZEXT416((uint)(fVar16 * fVar14)),ZEXT416((uint)(fVar16 * fVar14)),4,1);
        auVar20._4_4_ = fVar15 * fVar16;
        auVar20._0_4_ = fVar18 * fVar16;
        auVar20._8_8_ = 0;
        auVar20 = NEON_ext(auVar19,auVar20,0xc,1);
        do {
          lVar9 = *(long *)(param_1 + 0x30);
          if (lVar9 == 0) goto LAB_04563a94;
          if (*(uint *)(lVar9 + 0x18) <= uVar5) goto LAB_04563a98;
          if (lVar7 == 0) goto LAB_04563a94;
          if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_04563a98;
          puVar6 = (undefined8 *)(lVar9 + lVar8);
          uVar5 = uVar5 + 1;
          uVar22 = *puVar6;
          uVar21 = puVar6[2];
          puVar1 = (undefined8 *)(lVar7 + lVar8);
          lVar8 = lVar8 + 0x18;
          puVar1[1] = CONCAT44(auVar20._0_4_ + (float)((ulong)puVar6[1] >> 0x20),
                               auVar20._8_4_ + (float)puVar6[1]);
          *puVar1 = CONCAT44(auVar20._4_4_ + (float)((ulong)uVar22 >> 0x20),
                             auVar20._0_4_ + (float)uVar22);
          puVar1[2] = CONCAT44(fVar15 * fVar16 + (float)((ulong)uVar21 >> 0x20),
                               fVar18 * fVar16 + (float)uVar21);
        } while ((uVar13 & 0xffffffff) != uVar5);
      }
      if (*(long *)(param_1 + 0xe8) == 0) {
        lVar8 = 0;
      }
      else {
        uVar13 = *(ulong *)(*(long *)(param_1 + 0xe8) + 0x18);
        lVar8 = FUN_03f5c394(DAT_091807f8,uVar13 & 0xffffffff);
        if (0 < (int)uVar13) {
          uVar5 = 0;
          lVar9 = 0x20;
          do {
            lVar10 = *(long *)(param_1 + 0xe8);
            if (lVar10 == 0) goto LAB_04563a94;
            if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_04563a98;
            if (lVar8 == 0) goto LAB_04563a94;
            if (*(uint *)(lVar8 + 0x18) <= uVar5) goto LAB_04563a98;
            uVar5 = uVar5 + 1;
            uVar22 = *(undefined8 *)(lVar10 + lVar9);
            fVar23 = *(float *)((undefined8 *)(lVar10 + lVar9) + 1);
            puVar6 = (undefined8 *)(lVar8 + lVar9);
            lVar9 = lVar9 + 0xc;
            *puVar6 = CONCAT44(fVar18 * fVar16 + (float)((ulong)uVar22 >> 0x20),
                               fVar14 * fVar16 + (float)uVar22);
            *(float *)(puVar6 + 1) = fVar15 * fVar16 + fVar23;
          } while ((uVar13 & 0xffffffff) != uVar5);
        }
      }
      lVar9 = thunk_FUN_03f9944c(DAT_09188f18);
      *(undefined4 *)(lVar9 + 0x50) = 0xffffffff;
      *(undefined8 *)(lVar9 + 0x114) = 0x3f3333333f800000;
      *(undefined8 *)(lVar9 + 0x10c) = 0x3f8000003f800000;
      System_Object___ctor(lVar9,0);
      *(long *)(param_1 + 200) = lVar9;
      thunk_FUN_03f5d7b8(plVar11,lVar9);
      lVar9 = *(long *)(param_1 + 200);
      *(int *)(param_1 + 0xd0) = param_2;
      if (lVar9 != 0) {
        uVar22 = *(undefined8 *)(param_1 + 0x20);
        *(long *)(lVar9 + 0x18) = lVar4;
        *(undefined8 *)(lVar9 + 0x20) = uVar22;
        *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)(param_1 + 0x28);
        thunk_FUN_03f5d7b8((long *)(lVar9 + 0x18),lVar4);
        if (*(long *)(param_1 + 200) != 0) {
          plVar3 = (long *)(*(long *)(param_1 + 200) + 0x30);
          *plVar3 = lVar7;
          thunk_FUN_03f5d7b8(plVar3,lVar7);
          if (*(int *)(DAT_0918c158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(char **)(DAT_0918c158 + 0xb8) != '\0') {
            if (*(int *)(DAT_09183190 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar4 = *plVar11;
            lVar7 = *(long *)(*(long *)(DAT_09183190 + 0xb8) + 0x88);
            uVar22 = thunk_FUN_03f9944c(DAT_0918c148);
            DG_Tweening_TweenCallback___ctor(uVar22,lVar4,DAT_091d5850,0);
            lVar4 = DAT_091b1178;
            if (lVar7 == 0) goto LAB_04563a94;
            lVar9 = *(long *)(lVar7 + 0x10);
            *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_04563a94;
            uVar2 = *(uint *)(lVar7 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar2 + 1;
              puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *puVar6 = uVar22;
              thunk_FUN_03f5d7b8(puVar6,uVar22);
            }
            else {
              FUN_057e0c68(lVar7,uVar22,
                           *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar4 = *plVar11;
          if (lVar4 != 0) {
            uVar17 = *(undefined4 *)(param_1 + 0x38);
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
            *(undefined4 *)(lVar4 + 0x38) = uVar17;
            thunk_FUN_03f5d7b8();
            if (*(long *)(param_1 + 200) != 0) {
              *(undefined8 *)(*(long *)(param_1 + 200) + 0x40) = *(undefined8 *)(param_1 + 0x40);
              thunk_FUN_03f5d7b8();
              if (*(long *)(param_1 + 200) != 0) {
                *(undefined8 *)(*(long *)(param_1 + 200) + 0x48) = *(undefined8 *)(param_1 + 0x48);
                thunk_FUN_03f5d7b8();
                if (*(long *)(param_1 + 200) != 0) {
                  *(undefined8 *)(*(long *)(param_1 + 200) + 0xd8) = *(undefined8 *)(param_1 + 0xd8)
                  ;
                  thunk_FUN_03f5d7b8();
                  if (*(long *)(param_1 + 200) != 0) {
                    plVar3 = (long *)(*(long *)(param_1 + 200) + 0xe8);
                    *plVar3 = lVar8;
                    thunk_FUN_03f5d7b8(plVar3,lVar8);
                    lVar4 = *plVar11;
                    if (lVar4 != 0) {
                      uVar22 = *(undefined8 *)(param_1 + 0xf0);
                      *(undefined4 *)(lVar4 + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
                      *(undefined8 *)(lVar4 + 0xf0) = uVar22;
                      lVar4 = *(long *)(param_1 + 200);
                      if (lVar4 != 0) {
                        uVar22 = *(undefined8 *)(param_1 + 0xfc);
                        *(undefined8 *)(lVar4 + 0x104) = *(undefined8 *)(param_1 + 0x104);
                        *(undefined8 *)(lVar4 + 0xfc) = uVar22;
                        if (*(long *)(param_1 + 200) != 0) {
                          *(undefined1 *)(*(long *)(param_1 + 200) + 0x3c) = 1;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04563a94:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

