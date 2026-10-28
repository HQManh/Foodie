// rea decompile_all
// name: CookingGraph.CookingGraphAsset$$AuthoredMergeDurationFor
// address: 0x4407a8c
// body: available
// range: 0x4407a8c-0x44082b7 inclusive
// range: 0x440830c-0x44084df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44082b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084ac to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44084d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044082a0) */
/* WARNING: Removing unreachable block (ram,0x044084a8) */
/* WARNING: Removing unreachable block (ram,0x044084dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
CookingGraph_CookingGraphAsset__AuthoredMergeDurationFor
          (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  uint uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  
  if ((DAT_09517eb8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c94e8);
    FUN_03f5c2a4(&DAT_091c9d08);
    FUN_03f5c2a4(&DAT_091cb1e8);
    FUN_03f5c2a4(&DAT_091cb4d8);
    FUN_03f5c2a4(&DAT_091cb510);
    FUN_03f5c2a4(&DAT_091a3938);
    FUN_03f5c2a4(&DAT_091a3db8);
    FUN_03f5c2a4(&DAT_091a3dc0);
    FUN_03f5c2a4(&DAT_091a3940);
    FUN_03f5c2a4(&DAT_091a3dc8);
    FUN_03f5c2a4(&DAT_091a3948);
    FUN_03f5c2a4(&DAT_09178e78);
    FUN_03f5c2a4(&DAT_09178ae8);
    FUN_03f5c2a4(&DAT_09178d60);
    FUN_03f5c2a4(&DAT_09178d30);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a8278);
    FUN_03f5c2a4(&DAT_091a8018);
    FUN_03f5c2a4(&DAT_091a8258);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a610);
    FUN_03f5c2a4(&DAT_0917ace8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ae790);
    FUN_03f5c2a4(&DAT_091af280);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ada40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bb180);
    FUN_03f5c2a4(&DAT_091bb188);
    FUN_03f5c2a4(&DAT_091bb178);
    FUN_03f5c2a4(&DAT_091bb190);
    FUN_03f5c2a4(&DAT_0917e8c0);
    FUN_03f5c2a4(&DAT_091e7140);
    FUN_03f5c2a4(&DAT_091e7148);
    FUN_03f5c2a4(&DAT_0918f158);
    FUN_03f5c2a4(&DAT_091e7160);
    FUN_03f5c2a4(&DAT_0918f170);
    DAT_09517eb8 = 1;
  }
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f158);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x20) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x20),param_1);
    plVar4 = (long *)(lVar3 + 0x28);
    *plVar4 = param_3;
    thunk_FUN_03f5d7b8(plVar4,param_3);
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_057e185c(&local_c8,*(long *)(param_1 + 0x60),DAT_091ae790);
      local_80 = local_b8;
      puStack_88 = puStack_c0;
      local_90 = local_c8;
      local_c8 = 0;
      puStack_c0 = &local_90;
      while (uVar5 = FUN_071bd28c(&local_90,DAT_091a3940), lVar6 = local_80, (uVar5 & 1) != 0) {
        if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = *(undefined8 *)(local_80 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar12,param_2,0);
        if ((uVar5 & 1) != 0) {
          uVar12 = *(undefined8 *)(lVar6 + 0x18);
          lVar13 = *plVar4;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,lVar13,0);
          if ((uVar5 & 1) != 0) {
            uVar17 = *(undefined4 *)(lVar6 + 0x20);
            FUN_071bd288(&local_90,DAT_091a3938);
            return uVar17;
          }
        }
      }
      FUN_071bd288(&local_90,DAT_091a3938);
      lVar6 = thunk_FUN_03f9944c(DAT_09179e10);
      FUN_053eb530(lVar6,DAT_091a8258);
      plVar7 = (long *)(lVar3 + 0x18);
      *plVar7 = lVar6;
      thunk_FUN_03f5d7b8(plVar7,lVar6);
      uVar12 = thunk_FUN_03f9944c(DAT_09179d90);
      FUN_053eb530(uVar12,DAT_091a8018);
      *(undefined8 *)(lVar3 + 0x10) = uVar12;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),uVar12);
      uVar14 = *(undefined8 *)(param_1 + 0xa8);
      uVar12 = thunk_FUN_03f9944c(DAT_09178d60);
      FUN_05322d94(uVar12,lVar3,DAT_091e7140,0);
      lVar6 = FUN_04ae5fd0(uVar14,uVar12,DAT_091c9d08);
      if (lVar6 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar6 + 0x18);
      }
      CookingGraph_CookingGraphAsset_<>c__DisplayClass15_0__<AuthoredMergeDurationFor>g__Visit_0
                (lVar3,uVar12);
      lVar6 = *(long *)(lVar3 + 0x30);
      uVar12 = *(undefined8 *)(param_1 + 0x60);
      if (lVar6 == 0) {
        lVar6 = thunk_FUN_03f9944c(DAT_09178d30);
        FUN_05322d94(lVar6,lVar3,DAT_091e7148,0);
        *(long *)(lVar3 + 0x30) = lVar6;
        thunk_FUN_03f5d7b8((long *)(lVar3 + 0x30),lVar6);
      }
      plVar8 = (long *)FUN_04b0cafc(uVar12,lVar6,DAT_091cb510);
      if (plVar8 != (long *)0x0) {
        lVar3 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_0917a610) {
              puVar9 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04407f90;
            }
            uVar5 = uVar5 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar5 != 0);
        }
        puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a610,0);
LAB_04407f90:
        plVar8 = (long *)(*(code *)*puVar9)(plVar8,puVar9[1]);
        uVar17 = 0;
        do {
          do {
            do {
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar3 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar5 != 0) {
                piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_09185b10) {
                    puVar9 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_04408008;
                  }
                  uVar5 = uVar5 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_04408008:
              uVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if ((uVar5 & 1) == 0) {
                uVar15 = 0x10;
                goto LAB_044083c0;
              }
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar3 = *plVar8;
              uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
              if (uVar5 != 0) {
                piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == DAT_0917ace8) {
                    puVar9 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_04408074;
                  }
                  uVar5 = uVar5 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar5 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ace8,0);
LAB_04408074:
              lVar3 = (*(code *)*puVar9)(plVar8,puVar9[1]);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar5 = FUN_053ebc3c(*plVar7,*(undefined8 *)(lVar3 + 0x10),DAT_091a8278);
            } while ((uVar5 & 1) != 0);
            plVar10 = (long *)thunk_FUN_03f9944c(DAT_09179e10);
            FUN_053eb530(plVar10,DAT_091a8258);
            if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_053ec72c(plVar10,*(undefined8 *)(lVar3 + 0x10),DAT_091a8268);
            lVar6 = thunk_FUN_03f9944c(DAT_0917e8c0);
            FUN_061a1268(lVar6,DAT_091bb178);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_061a19e4(lVar6,*(undefined8 *)(lVar3 + 0x10),DAT_091bb188);
            iVar1 = *(int *)(lVar6 + 0x18);
            while (0 < iVar1) {
              lVar13 = thunk_FUN_03f9944c(DAT_0918f170);
              System_Object___ctor(lVar13,0);
              uVar12 = FUN_061a18e8(lVar6,DAT_091bb180);
              if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(lVar13 + 0x10) = uVar12;
              thunk_FUN_03f5d7b8();
              if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_057e185c(&local_c8,*(long *)(param_1 + 0x80),DAT_091af280);
              local_a0 = local_b8;
              puStack_a8 = puStack_c0;
              local_b0 = local_c8;
              local_c8 = 0;
              puStack_c0 = &local_b0;
              while (uVar5 = FUN_071bd28c(&local_b0,DAT_091a3dc0), lVar2 = local_a0,
                    (uVar5 & 1) != 0) {
                if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar12 = *(undefined8 *)(local_a0 + 0x18);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = UnityEngine_Object__op_Inequality(uVar12,0,0);
                if ((uVar5 & 1) != 0) {
                  lVar16 = *(long *)(lVar13 + 0x18);
                  uVar12 = *(undefined8 *)(lVar2 + 0x20);
                  if (lVar16 == 0) {
                    lVar16 = thunk_FUN_03f9944c(DAT_09178e78);
                    FUN_05322d94(lVar16,lVar13,DAT_091e7160,0);
                    *(long *)(lVar13 + 0x18) = lVar16;
                    thunk_FUN_03f5d7b8(lVar13 + 0x18,lVar16);
                  }
                  uVar5 = FUN_04ab6f28(uVar12,lVar16,DAT_091c94e8);
                  if (((uVar5 & 1) != 0) &&
                     (uVar5 = FUN_053ec72c(plVar10,*(undefined8 *)(lVar2 + 0x18),DAT_091a8268),
                     (uVar5 & 1) != 0)) {
                    FUN_061a19e4(lVar6,*(undefined8 *)(lVar2 + 0x18),DAT_091bb188);
                  }
                }
              }
              FUN_071bd288(&local_b0,DAT_091a3db8);
              iVar1 = *(int *)(lVar6 + 0x18);
            }
            lVar6 = *plVar7;
            uVar12 = thunk_FUN_03f9944c(DAT_09178ae8);
            FUN_05322d94(uVar12,plVar10,*(undefined8 *)(*plVar10 + 0x1c0),0);
            uVar12 = FUN_04b0cafc(lVar6,uVar12,DAT_091cb4d8);
            lVar6 = FUN_04b08b78(uVar12,DAT_091cb1e8);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
          } while (*(int *)(lVar6 + 0x18) != 1);
          uVar12 = FUN_057e0998(lVar6,0,DAT_091ada40);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar12,param_2,0);
        } while ((uVar5 & 1) == 0);
        uVar17 = *(undefined4 *)(lVar3 + 0x20);
        uVar15 = 4;
LAB_044083c0:
        if (plVar8 != (long *)0x0) {
          lVar3 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 != 0) {
            piVar11 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_09185a58) {
                puVar9 = (undefined8 *)(lVar3 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_04408420;
              }
              uVar5 = uVar5 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar5 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_04408420:
          (*(code *)*puVar9)(plVar8,puVar9[1]);
        }
        if ((uVar15 | 0x10) == 0x10) {
          lVar3 = *plVar4;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Inequality(lVar3,0,0);
          uVar17 = 0;
          if ((uVar5 & 1) != 0) {
            if (*plVar4 == 0) goto LAB_044084cc;
            uVar17 = *(undefined4 *)(*plVar4 + 0x60);
          }
        }
        return uVar17;
      }
    }
  }
LAB_044084cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

