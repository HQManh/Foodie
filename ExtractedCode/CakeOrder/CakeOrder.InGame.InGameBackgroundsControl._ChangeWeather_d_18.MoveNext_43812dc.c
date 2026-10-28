// rea decompile_all
// name: CakeOrder.InGame.InGameBackgroundsControl.<ChangeWeather>d__18$$MoveNext
// address: 0x43812dc
// body: available
// range: 0x43812dc-0x438183f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4381818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438181c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381824 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438182c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4381838 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438183c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_InGameBackgroundsControl_<ChangeWeather>d__18__MoveNext(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long *local_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined1 local_80 [16];
  
  if ((DAT_09517971 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2018);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0918cf58);
    FUN_03f5c2a4(&DAT_09213d90);
    DAT_09517971 = 1;
  }
  lVar16 = *(long *)(param_1 + 6);
  local_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_86 = 0;
  if (*param_1 == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    uStack_88 = auVar18._8_2_;
    uStack_86 = auVar18._10_6_;
    local_90 = auVar18._0_8_;
LAB_04381428:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar4 = uStack_88;
    plVar15 = local_90;
    if (local_90 != (long *)0x0) {
      lVar10 = *local_90;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_091868c0) {
            puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_04381678;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(local_90,DAT_091868c0,2);
LAB_04381678:
      (*(code *)*puVar8)(plVar15,uVar4,puVar8[1]);
    }
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar16 + 0x20) != 0) {
      if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Utilities_UIGradientTransition__ChangeBackgroundGradient
                (*(long *)(lVar16 + 0x20),*(undefined8 *)(*(long *)(param_1 + 10) + 0x18),0);
    }
LAB_043816a8:
    lVar10 = *(long *)(lVar16 + 0x30);
    if (lVar10 != 0) {
      fVar1 = *(float *)(lVar16 + 0x78);
      fVar2 = *(float *)(lVar16 + 0x7c);
      fVar3 = *(float *)(lVar16 + 0x84);
      uVar17 = *(undefined8 *)(lVar16 + 0x54);
      uVar6 = *(undefined8 *)(lVar16 + 0x4c);
      *(float *)(lVar10 + 0x58) = *(float *)(lVar16 + 0x80) * (float)uVar17;
      *(float *)(lVar10 + 0x5c) = fVar3 * (float)((ulong)uVar17 >> 0x20);
      *(float *)(lVar10 + 0x50) = fVar1 * (float)uVar6;
      *(float *)(lVar10 + 0x54) = fVar2 * (float)((ulong)uVar6 >> 0x20);
      CakeOrder_InGame_InGameSingleBackground__InternalChangeTintColor
                (ZEXT816(0),*(undefined4 *)(lVar10 + 0x78),lVar10,0);
    }
    lVar10 = *(long *)(lVar16 + 0x38);
    if (lVar10 != 0) {
      fVar1 = *(float *)(lVar16 + 0x88);
      fVar2 = *(float *)(lVar16 + 0x8c);
      fVar3 = *(float *)(lVar16 + 0x94);
      uVar17 = *(undefined8 *)(lVar16 + 100);
      uVar6 = *(undefined8 *)(lVar16 + 0x5c);
      *(float *)(lVar10 + 0x58) = *(float *)(lVar16 + 0x90) * (float)uVar17;
      *(float *)(lVar10 + 0x5c) = fVar3 * (float)((ulong)uVar17 >> 0x20);
      *(float *)(lVar10 + 0x50) = fVar1 * (float)uVar6;
      *(float *)(lVar10 + 0x54) = fVar2 * (float)((ulong)uVar6 >> 0x20);
      CakeOrder_InGame_InGameSingleBackground__InternalChangeTintColor
                (ZEXT816(0),*(undefined4 *)(lVar10 + 0x78),lVar10,0);
    }
  }
  else {
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar5 = param_1[8];
    lVar10 = *(long *)(lVar16 + 0x28);
    *(int *)(lVar16 + 0x48) = iVar5;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(uint *)(lVar10 + 0x18);
    if (0 < (int)uVar9) {
      uVar13 = 0;
      do {
        if (uVar9 == uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar14 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar14 + 0x10) == iVar5) {
          plVar15 = (long *)(param_1 + 10);
          *plVar15 = 0;
          thunk_FUN_03f5d7b8(plVar15,0);
          auVar18 = NEON_fmov(0x3f800000,4);
          *(long *)(lVar16 + 100) = auVar18._8_8_;
          *(undefined8 *)(lVar16 + 0x5c) = auVar18._0_8_;
          lVar10 = *(long *)(lVar16 + 0x28);
          *(long *)(lVar16 + 0x54) = auVar18._8_8_;
          *(undefined8 *)(lVar16 + 0x4c) = auVar18._0_8_;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar9 = *(uint *)(lVar10 + 0x18);
          if (0 < (int)uVar9) {
            uVar13 = 0;
            do {
              if (uVar9 <= uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar14 = *(long *)(lVar10 + (long)(int)uVar13 * 8 + 0x20);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(lVar14 + 0x10) == param_1[8]) {
                *plVar15 = lVar14;
                thunk_FUN_03f5d7b8(plVar15,lVar14);
                uVar6 = *(undefined8 *)(lVar14 + 0x28);
                *(undefined8 *)(lVar16 + 0x54) = *(undefined8 *)(lVar14 + 0x30);
                *(undefined8 *)(lVar16 + 0x4c) = uVar6;
                auVar18 = *(undefined1 (*) [16])(lVar14 + 0x38);
                *(long *)(lVar16 + 100) = auVar18._8_8_;
                *(undefined8 *)(lVar16 + 0x5c) = auVar18._0_8_;
              }
              else {
                CakeOrder_InGame_InGameBackgroundsControl_BackgroundConfigByWeather__HideEffects
                          (lVar14);
              }
              uVar9 = *(uint *)(lVar10 + 0x18);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar9);
          }
          lVar10 = *plVar15;
          if (lVar10 != 0) {
            uVar17 = *(undefined8 *)(lVar16 + 0x40);
            uVar6 = UnityEngine_Component__get_transform(lVar16,0);
            if (*(long *)(lVar16 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar19 = *(undefined4 *)(lVar16 + 0x78);
            uVar20 = *(undefined4 *)(lVar16 + 0x7c);
            uVar21 = *(undefined4 *)(lVar16 + 0x80);
            uVar22 = *(undefined4 *)(lVar16 + 0x84);
            uVar7 = System_Threading_CancellationTokenSource__get_Token(*(long *)(lVar16 + 0x70),0);
            local_80 = CakeOrder_InGame_InGameBackgroundsControl_BackgroundConfigByWeather__ShowEffectsAsync
                                 (uVar19,uVar20,uVar21,uVar22,lVar10,uVar17,uVar6,uVar7);
            if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            thunk_FUN_03f5d7b8(local_80,0);
            uVar17 = local_80._8_8_;
            uVar6 = local_80._0_8_;
            local_90 = (long *)local_80._0_8_;
            uStack_88 = local_80._8_2_;
            uStack_86 = local_80._10_6_;
            if (DAT_095162d4 == '\0') {
              FUN_03f5c2a4(&DAT_0918c610);
              DAT_095162d4 = '\x01';
            }
            if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (DAT_095162d5 == '\0') {
              FUN_03f5c2a4(&DAT_091868c0);
              DAT_095162d5 = '\x01';
            }
            if ((long *)uVar6 != (long *)0x0) {
              lVar10 = *(long *)uVar6;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 == 0) {
LAB_04381658:
                puVar8 = (undefined8 *)FUN_03f95da8(uVar6,DAT_091868c0,0);
              }
              else {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                while (*(long *)(piVar12 + -2) != DAT_091868c0) {
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                  if (uVar11 == 0) goto LAB_04381658;
                }
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              }
              iVar5 = (*(code *)*puVar8)(uVar6,uVar17 & 0xffffffff,puVar8[1]);
              if (iVar5 == 0) {
                auVar18._8_2_ = uStack_88;
                auVar18._0_8_ = local_90;
                auVar18._10_6_ = uStack_86;
                *param_1 = 0;
                *(long *)(param_1 + 0xe) = auVar18._8_8_;
                *(long **)(param_1 + 0xc) = local_90;
                thunk_FUN_03f5d7b8(param_1 + 0xc,0);
                FUN_04384e08(param_1 + 2,&local_90,param_1,DAT_091c2018);
                return;
              }
            }
            goto LAB_04381428;
          }
          goto LAB_043816a8;
        }
        uVar13 = uVar13 + 1;
      } while ((uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) != uVar13);
    }
    local_80._0_4_ = iVar5;
    uVar6 = FUN_03f5c42c(DAT_0918cf58,local_80);
    uVar6 = System_String__Format(DAT_09213d90,uVar6,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(uVar6,0);
  }
  *param_1 = -2;
  piVar12 = param_1 + 10;
  piVar12[0] = 0;
  piVar12[1] = 0;
  thunk_FUN_03f5d7b8(piVar12,0);
  if (DAT_095162d8 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    uVar11 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091866a8) {
          puVar8 = (undefined8 *)(lVar16 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_04381790;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar15,DAT_091866a8,2);
LAB_04381790:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  }
  return;
}

