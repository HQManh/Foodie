// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$DrawQueueConnections
// address: 0x44ade94
// body: available
// range: 0x44ade94-0x44af4a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44af268 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44af3dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044af1c0) */
/* WARNING: Removing unreachable block (ram,0x044af494) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__DrawQueueConnections
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_b8;
  int local_ac;
  long local_a8;
  
  if ((DAT_09518221 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6570);
    FUN_03f5c2a4(&DAT_0919d7c0);
    FUN_03f5c2a4(&DAT_0919d7d0);
    FUN_03f5c2a4(&DAT_0919d7d8);
    FUN_03f5c2a4(&DAT_0919e428);
    FUN_03f5c2a4(&DAT_091c9440);
    FUN_03f5c2a4(&DAT_091c9a48);
    FUN_03f5c2a4(&DAT_091c9e00);
    FUN_03f5c2a4(&DAT_091c9ee8);
    FUN_03f5c2a4(&DAT_091c9f18);
    FUN_03f5c2a4(&DAT_091c9fe8);
    FUN_03f5c2a4(&DAT_091cac38);
    FUN_03f5c2a4(&DAT_091cad98);
    FUN_03f5c2a4(&DAT_091cacc0);
    FUN_03f5c2a4(&DAT_091cb440);
    FUN_03f5c2a4(&DAT_091786e8);
    FUN_03f5c2a4(&DAT_091786f0);
    FUN_03f5c2a4(&DAT_091cd6c8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a270);
    FUN_03f5c2a4(&DAT_0917a8b8);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917afd0);
    FUN_03f5c2a4(&DAT_091a94b0);
    FUN_03f5c2a4(&DAT_091a94b8);
    FUN_03f5c2a4(&DAT_091b0400);
    FUN_03f5c2a4(&DAT_091ae320);
    FUN_03f5c2a4(&DAT_091ae338);
    FUN_03f5c2a4(&DAT_091b0428);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_091ae340);
    FUN_03f5c2a4(&DAT_091b7268);
    FUN_03f5c2a4(&DAT_091b7270);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_091d4c68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6e88);
    FUN_03f5c2a4(&DAT_091e6e90);
    FUN_03f5c2a4(&DAT_091e6e98);
    FUN_03f5c2a4(&DAT_091e6ea0);
    FUN_03f5c2a4(&DAT_091e6ea8);
    FUN_03f5c2a4(&DAT_091e6eb0);
    FUN_03f5c2a4(&DAT_091e6eb8);
    FUN_03f5c2a4(&DAT_091e6ec0);
    FUN_03f5c2a4(&DAT_091e7100);
    FUN_03f5c2a4(&DAT_0918f130);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_0920b2a8);
    DAT_09518221 = 1;
  }
  local_a8 = 0;
  if (*(long *)(param_4 + 0x3a0) == 0) {
    return;
  }
  uVar21 = *(undefined8 *)(*(long *)(param_4 + 0x3a0) + 0x28);
  if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
  lVar22 = puVar15[10];
  if (lVar22 == 0) {
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    }
    uVar23 = *puVar15;
    lVar22 = thunk_FUN_03f9944c(DAT_091786e8);
    FUN_05322d94(lVar22,uVar23,DAT_091e6e88,0);
    plVar8 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x50);
    *plVar8 = lVar22;
    thunk_FUN_03f5d7b8(plVar8,lVar22);
  }
  uVar21 = FUN_04b0cafc(uVar21,lVar22,DAT_091cb440);
  if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f030);
  }
  puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
  lVar22 = puVar15[0xb];
  if (lVar22 == 0) {
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f030);
      puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    }
    uVar23 = *puVar15;
    lVar22 = thunk_FUN_03f9944c(DAT_091786f0);
    FUN_053239c8(lVar22,uVar23,DAT_091e6e90,0);
    plVar8 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x58);
    *plVar8 = lVar22;
    thunk_FUN_03f5d7b8(plVar8,lVar22);
  }
  plVar8 = (long *)FUN_04ae6df8(uVar21,lVar22,DAT_091c9e00);
  if (plVar8 != (long *)0x0) {
    lVar22 = *plVar8;
    uVar18 = (ulong)*(ushort *)(lVar22 + 0x12e);
    if (uVar18 != 0) {
      piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      do {
        if (*(long *)(piVar20 + -2) == DAT_0917a270) {
          puVar15 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
          goto LAB_044ae2c4;
        }
        uVar18 = uVar18 - 1;
        piVar20 = piVar20 + 4;
      } while (uVar18 != 0);
    }
    puVar15 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a270,0);
LAB_044ae2c4:
    plVar8 = (long *)(*(code *)*puVar15)(plVar8,puVar15[1]);
    if (plVar8 != (long *)0x0) {
      local_ac = 0;
      local_b8 = 0.55;
LAB_044ae2ec:
      do {
        do {
          lVar22 = *plVar8;
          uVar18 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_09185b10) {
                puVar15 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_044ae340;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_044ae340:
          uVar18 = (*(code *)*puVar15)(plVar8,puVar15[1]);
          if ((uVar18 & 1) == 0) {
            if (plVar8 == (long *)0x0) goto LAB_044af1b4;
            lVar22 = *plVar8;
            uVar18 = (ulong)*(ushort *)(lVar22 + 0x12e);
            if (uVar18 == 0) goto LAB_044af18c;
            piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            goto LAB_044af174;
          }
          lVar22 = *plVar8;
          uVar18 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar18 != 0) {
            piVar20 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar20 + -2) == DAT_0917a8b8) {
                puVar15 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_044ae3a4;
              }
              uVar18 = uVar18 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar18 != 0);
          }
          puVar15 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a8b8,0);
LAB_044ae3a4:
          plVar9 = (long *)(*(code *)*puVar15)(plVar8,puVar15[1]);
          uVar21 = thunk_FUN_03f9944c(DAT_091786e8);
          FUN_05322d94(uVar21,param_4,DAT_091c6570,0);
          uVar21 = FUN_04b0cafc(plVar9,uVar21,DAT_091cb440);
          lVar22 = FUN_04b049e4(uVar21,DAT_091cad98);
          if (lVar22 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar18 = *(ulong *)(lVar22 + 0x18);
        } while ((int)uVar18 < 2);
        if (*(long *)(lVar22 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar19 = *(ulong *)(*(long *)(lVar22 + 0x20) + 0x2c);
        if ((uVar19 >> 0x20 == 0) && ((uVar19 & 0xff) != 0)) {
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar15[0xc];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar21 = *puVar15;
            lVar24 = thunk_FUN_03f9944c(DAT_091786f0);
            FUN_053239c8(lVar24,uVar21,DAT_091e6e98,0);
            plVar10 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x60);
            *plVar10 = lVar24;
            thunk_FUN_03f5d7b8(plVar10,lVar24);
          }
          iVar4 = FUN_04ae9f2c(lVar22,lVar24,DAT_091c9ee8);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar15[0xd];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar21 = *puVar15;
            lVar24 = thunk_FUN_03f9944c(DAT_091786f0);
            FUN_053239c8(lVar24,uVar21,DAT_091e6ea0,0);
            plVar10 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x68);
            *plVar10 = lVar24;
            thunk_FUN_03f5d7b8(plVar10,lVar24);
          }
          iVar5 = FUN_04aea12c(lVar22,lVar24,DAT_091c9f18);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar15[0xe];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar21 = *puVar15;
            lVar24 = thunk_FUN_03f9944c(DAT_091786f0);
            FUN_053239c8(lVar24,uVar21,DAT_091e6ea8,0);
            plVar10 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x70);
            *plVar10 = lVar24;
            thunk_FUN_03f5d7b8(plVar10,lVar24);
          }
          iVar6 = FUN_04ae9f2c(lVar22,lVar24,DAT_091c9ee8);
          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
          lVar24 = puVar15[0xf];
          if (lVar24 == 0) {
            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
            }
            uVar21 = *puVar15;
            lVar24 = thunk_FUN_03f9944c(DAT_091786f0);
            FUN_053239c8(lVar24,uVar21,DAT_091e6eb0,0);
            plVar10 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x78);
            *plVar10 = lVar24;
            thunk_FUN_03f5d7b8(plVar10,lVar24);
          }
          iVar7 = FUN_04aea12c(lVar22,lVar24,DAT_091c9f18);
          iVar4 = iVar4 - iVar5;
          uVar26 = iVar4 - 1;
          if (iVar4 + 1 < 2) {
            uVar26 = iVar6 - iVar7;
          }
          lVar24 = 0x238;
          if (iVar4 + 1 < 2) {
            lVar24 = 0x230;
          }
          if (((-1 < (int)uVar26) && (lVar24 = *(long *)(param_4 + lVar24), lVar24 != 0)) &&
             ((int)uVar26 < *(int *)(lVar24 + 0x18))) {
            puVar15 = (undefined8 *)(lVar24 + (ulong)uVar26 * 8 + 0x20);
            uVar21 = *puVar15;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar18 = UnityEngine_Object__op_Implicit(uVar21,0);
            if ((uVar18 & 1) != 0) {
              if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar16 = *plVar9;
              lVar25 = *(long *)(param_4 + 0xf0);
              uVar18 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar18 != 0) {
                piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar20 + -2) == DAT_0917afd0) {
                    puVar11 = (undefined8 *)(lVar16 + (long)*piVar20 * 0x10 + 0x138);
                    goto LAB_044ae758;
                  }
                  uVar18 = uVar18 - 1;
                  piVar20 = piVar20 + 4;
                } while (uVar18 != 0);
              }
              puVar11 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917afd0,0);
LAB_044ae758:
              uVar18 = (*(code *)*puVar11)(plVar9,puVar11[1]);
              if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550(uVar18,uVar18 & 0xffffffff);
              }
              uVar18 = FUN_06ef1fe8(lVar25,uVar18 & 0xffffffff,&local_a8,DAT_0919d7d8);
              if ((uVar18 & 1) == 0) {
                if (*(uint *)(lVar24 + 0x18) <= uVar26) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                uVar21 = *puVar15;
                uVar23 = *(undefined8 *)(param_4 + 0x130);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                local_a8 = FUN_04c35338(uVar21,uVar23,DAT_091d4bc0);
                if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_GameObject__SetActive(local_a8,1,0);
                lVar24 = *plVar9;
                lVar16 = *(long *)(param_4 + 0xf0);
                uVar18 = (ulong)*(ushort *)(lVar24 + 0x12e);
                if (uVar18 != 0) {
                  piVar20 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar20 + -2) == DAT_0917afd0) {
                      puVar15 = (undefined8 *)(lVar24 + (long)*piVar20 * 0x10 + 0x138);
                      goto LAB_044aeee8;
                    }
                    uVar18 = uVar18 - 1;
                    piVar20 = piVar20 + 4;
                  } while (uVar18 != 0);
                }
                puVar15 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917afd0,0);
LAB_044aeee8:
                uVar18 = (*(code *)*puVar15)(plVar9,puVar15[1]);
                if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550(uVar18,uVar18 & 0xffffffff);
                }
                FUN_06ef050c(lVar16,uVar18 & 0xffffffff,local_a8,DAT_0919d7c0);
              }
              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
              lVar24 = puVar15[0x10];
              if (lVar24 == 0) {
                if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                }
                uVar21 = *puVar15;
                lVar24 = thunk_FUN_03f9944c(DAT_091786f0);
                FUN_053239c8(lVar24,uVar21,DAT_091e6eb8,0);
                plVar9 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x80);
                *plVar9 = lVar24;
                thunk_FUN_03f5d7b8(plVar9,lVar24);
              }
              uVar21 = FUN_04aeab54(lVar22,lVar24,DAT_091c9fe8);
              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
              lVar24 = puVar15[0x11];
              if (lVar24 == 0) {
                if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar15 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                }
                uVar23 = *puVar15;
                lVar24 = thunk_FUN_03f9944c(DAT_091786f0);
                FUN_053239c8(lVar24,uVar23,DAT_091e6ec0,0);
                plVar9 = (long *)(*(long *)(DAT_0918f030 + 0xb8) + 0x88);
                *plVar9 = lVar24;
                thunk_FUN_03f5d7b8(plVar9,lVar24);
              }
              uVar21 = FUN_04b038e4(uVar21,lVar24,DAT_091cac38);
              lVar24 = FUN_04ae1388(uVar21,DAT_091c9a48);
              if (local_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar16 = UnityEngine_GameObject__get_transform(local_a8,0);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(param_4 + 0x300) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar24 = FUN_06f53330(*(long *)(param_4 + 0x300),*(undefined8 *)(lVar24 + 0x10),
                                    DAT_0919e428);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar24 = UnityEngine_Component__get_transform(lVar24,0);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              fVar31 = (float)UnityEngine_Transform__get_position(lVar24,0);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              param_3 = param_3 + 0.0;
              param_2 = param_2 + *(float *)(param_4 + 0x2a8) * (float)-(iVar6 - iVar7) * 0.5;
              UnityEngine_Transform__set_position
                        (fVar31 + *(float *)(param_4 + 0x2a4) * (float)iVar4 * 0.5,lVar16,0);
              uVar26 = *(uint *)(lVar22 + 0x18);
              if (0 < (int)uVar26) {
                lVar24 = 0;
                do {
                  if (uVar26 <= (uint)lVar24) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar16 = *(long *)(lVar22 + 0x20 + lVar24 * 8);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (*(long *)(param_4 + 0x300) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar16 = FUN_06f53330(*(long *)(param_4 + 0x300),*(undefined8 *)(lVar16 + 0x10),
                                        DAT_0919e428);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  CookOrder_Cooking_Implement_CookingQueueTile__ShowTray(lVar16,0,0);
                  uVar26 = *(uint *)(lVar22 + 0x18);
                  lVar24 = lVar24 + 1;
                } while ((int)lVar24 < (int)uVar26);
              }
              if (plVar8 == (long *)0x0) break;
            }
          }
          goto LAB_044ae2ec;
        }
        uVar19 = 0;
        do {
          uVar1 = uVar19 + 1;
          iVar4 = (int)uVar18;
          if ((long)uVar1 < (long)iVar4) {
            uVar27 = uVar1 & 0xffffffff;
            do {
              if ((uVar18 & 0xffffffff) <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar26 = (uint)uVar27;
              if ((uint)uVar18 <= uVar26) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar24 = *(long *)(lVar22 + uVar19 * 8 + 0x20);
              if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar16 = *(long *)(lVar22 + (long)(int)uVar26 * 8 + 0x20);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              iVar4 = *(int *)(lVar24 + 0x18);
              iVar5 = *(int *)(lVar16 + 0x18);
              if (DAT_09516086 == '\0') {
                FUN_03f5c2a4(&DAT_09187e80);
                DAT_09516086 = '\x01';
              }
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar4 = iVar4 - iVar5;
              iVar5 = -iVar4;
              if (-1 < iVar4) {
                iVar5 = iVar4;
              }
              if (iVar5 == 1) {
                if (*(long *)(param_4 + 0x300) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar25 = FUN_06f53330(*(long *)(param_4 + 0x300),*(undefined8 *)(lVar24 + 0x10),
                                      DAT_0919e428);
                if (*(long *)(param_4 + 0x300) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar12 = FUN_06f53330(*(long *)(param_4 + 0x300),*(undefined8 *)(lVar16 + 0x10),
                                      DAT_0919e428);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar13 = UnityEngine_Component__get_gameObject(lVar25,0);
                if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar18 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
                fVar31 = param_3;
                if ((uVar18 & 1) == 0) {
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar13 = UnityEngine_Component__get_gameObject(lVar12,0);
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar18 = UnityEngine_GameObject__get_activeSelf(lVar13,0);
                  fVar31 = param_3;
                  if ((uVar18 & 1) == 0) goto LAB_044aeea0;
                }
                lVar25 = UnityEngine_Component__get_transform(lVar25,0);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                fVar28 = (float)UnityEngine_Transform__get_position(lVar25,0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                fVar35 = param_2;
                fVar32 = fVar31;
                lVar25 = UnityEngine_Component__get_transform(lVar12,0);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                fVar29 = (float)UnityEngine_Transform__get_position(lVar25,0);
                fVar36 = param_2;
                if (*(int *)(lVar24 + 0x1c) != *(int *)(lVar16 + 0x1c)) {
                  fVar36 = param_2 + *(float *)(&DAT_01a8b720 + (ulong)(fVar35 - param_2 < 0.0) * 4)
                  ;
                  fVar35 = fVar35 - *(float *)(&DAT_01a8b720 + (ulong)(fVar35 - param_2 < 0.0) * 4);
                }
                if (*(long *)(param_4 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (local_ac == *(int *)(*(long *)(param_4 + 0xe0) + 0x18)) {
                  lVar25 = thunk_FUN_03f9944c(DAT_09184b68);
                  UnityEngine_GameObject___ctor(lVar25,DAT_0920b2a8,0);
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar12 = UnityEngine_GameObject__get_transform(lVar25,0);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_Transform__SetParent(lVar12,*(undefined8 *)(param_4 + 0x130),0);
                  lVar25 = FUN_04b7c294(lVar25,DAT_091cd6c8);
                  if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_Renderer__SetMaterial(lVar25,*(undefined8 *)(param_4 + 0x240),0);
                  UnityEngine_LineRenderer__set_positionCount(lVar25,2,0);
                  uVar33 = *(undefined4 *)(param_4 + 0x250);
                  UnityEngine_LineRenderer__set_endWidth(uVar33,lVar25,0);
                  UnityEngine_LineRenderer__set_startWidth(uVar33,lVar25,0);
                  UnityEngine_Renderer__set_sortingOrder(lVar25,*(undefined4 *)(param_4 + 0x264),0);
                  lVar12 = DAT_091ae320;
                  lVar13 = *(long *)(param_4 + 0xe0);
                  if (lVar13 == 0) {
LAB_044af3ec:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar17 = *(long *)(lVar13 + 0x10);
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  if (lVar17 == 0) goto LAB_044af3ec;
                  uVar2 = *(uint *)(lVar13 + 0x18);
                  if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                    plVar9 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                    *plVar9 = lVar25;
                    thunk_FUN_03f5d7b8(plVar9,lVar25);
                  }
                  else {
                    FUN_057e0c68(lVar13,lVar25,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar21 = *(undefined8 *)(param_4 + 0x248);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar18 = UnityEngine_Object__op_Implicit(uVar21,0);
                  if ((uVar18 & 1) != 0) {
                    bVar3 = true;
                    do {
                      bVar14 = bVar3;
                      uVar21 = *(undefined8 *)(param_4 + 0x248);
                      uVar23 = *(undefined8 *)(param_4 + 0x130);
                      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar25 = FUN_04c35338(uVar21,uVar23,DAT_091d4c68);
                      if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar12 = UnityEngine_Component__get_gameObject(lVar25,0);
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      UnityEngine_GameObject__SetActive(lVar12,1,0);
                      lVar12 = DAT_091b0400;
                      lVar13 = *(long *)(param_4 + 0xe8);
                      if (lVar13 == 0) {
LAB_044af3b4:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar17 = *(long *)(lVar13 + 0x10);
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar17 == 0) goto LAB_044af3b4;
                      uVar2 = *(uint *)(lVar13 + 0x18);
                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                        plVar9 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
                        *plVar9 = lVar25;
                        thunk_FUN_03f5d7b8(plVar9,lVar25);
                      }
                      else {
                        FUN_057e0c68(lVar13,lVar25,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                      }
                      bVar3 = false;
                    } while (bVar14);
                  }
                }
                if (*(long *)(param_4 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                lVar25 = FUN_057e0998(*(long *)(param_4 + 0xe0),local_ac,DAT_091ae340);
                if (lVar25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                UnityEngine_Renderer__set_enabled(lVar25,1,0);
                fVar34 = *(float *)(&DAT_01a8b720 + (ulong)(fVar29 - fVar28 < 0.0) * 4);
                fVar28 = fVar28 + fVar34;
                UnityEngine_LineRenderer__SetPosition(fVar28,fVar36,fVar31,lVar25,0,0);
                fVar29 = fVar29 - fVar34;
                UnityEngine_LineRenderer__SetPosition(fVar29,fVar35,fVar32,lVar25,1,0);
                if (*(int *)(lVar24 + 0x1c) == 0) {
                  param_3 = 1.0;
                }
                else {
                  param_3 = 1.0;
                  if (*(int *)(lVar16 + 0x1c) != 0) {
                    param_3 = local_b8;
                  }
                }
                uVar33 = *(undefined4 *)(param_4 + 0x260);
                fVar34 = *(float *)(param_4 + 0x254) * param_3;
                param_2 = *(float *)(param_4 + 600) * param_3;
                param_3 = *(float *)(param_4 + 0x25c) * param_3;
                UnityEngine_LineRenderer__set_endColor(fVar34,param_2,param_3,uVar33,lVar25,0);
                UnityEngine_LineRenderer__set_startColor(fVar34,param_2,param_3,uVar33,lVar25,0);
                lVar24 = *(long *)(param_4 + 0xe8);
                if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = local_ac * 2;
                if ((int)(uVar2 + 2) <= *(int *)(lVar24 + 0x18)) {
                  lVar24 = FUN_057e0998(lVar24,uVar2,DAT_091b0430);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = UnityEngine_Component__get_gameObject(lVar24,0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_GameObject__SetActive(lVar24,1,0);
                  if (*(long *)(param_4 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = FUN_057e0998(*(long *)(param_4 + 0xe8),uVar2 | 1,DAT_091b0430);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = UnityEngine_Component__get_gameObject(lVar24,0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_GameObject__SetActive(lVar24,1,0);
                  if (*(long *)(param_4 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = FUN_057e0998(*(long *)(param_4 + 0xe8),uVar2,DAT_091b0430);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = UnityEngine_Component__get_transform(lVar24,0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_Transform__set_position(fVar28,fVar36,fVar31,lVar24,0);
                  if (*(long *)(param_4 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = FUN_057e0998(*(long *)(param_4 + 0xe8),uVar2 | 1,DAT_091b0430);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = UnityEngine_Component__get_transform(lVar24,0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_Transform__set_position(fVar29,lVar24,0);
                  if (*(long *)(param_4 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar24 = FUN_057e0998(*(long *)(param_4 + 0xe8),uVar2,DAT_091b0430);
                  if (*(long *)(param_4 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar16 = FUN_057e0998(*(long *)(param_4 + 0xe8),uVar2 | 1,DAT_091b0430);
                  uVar30 = UnityEngine_LineRenderer__get_startColor(lVar25,0);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_SpriteRenderer__set_color(lVar16,0);
                  if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  UnityEngine_SpriteRenderer__set_color(uVar30,fVar35,fVar32,uVar33,lVar24,0);
                  param_2 = fVar35;
                  param_3 = fVar32;
                }
                local_ac = local_ac + 1;
              }
LAB_044aeea0:
              uVar18 = *(ulong *)(lVar22 + 0x18);
              uVar27 = (ulong)(uVar26 + 1);
              iVar4 = (int)uVar18;
            } while ((int)(uVar26 + 1) < iVar4);
          }
          uVar19 = uVar1;
        } while ((long)uVar1 < (long)iVar4);
      } while (plVar8 != (long *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_044af268;
LAB_044af220:
  if (*(int *)(lVar22 + 0x18) <= local_ac) {
    lVar22 = FUN_04b03dac(*(undefined8 *)(param_4 + 0xf0),DAT_091cacc0);
    if (lVar22 != 0) {
      if (*(int *)(lVar22 + 0x18) < 1) {
        return;
      }
      uVar18 = 0;
      goto LAB_044af2bc;
    }
    goto LAB_044af268;
  }
  lVar22 = FUN_057e0998(lVar22,local_ac,DAT_091b0430);
  if ((lVar22 == 0) || (lVar22 = UnityEngine_Component__get_gameObject(lVar22,0), lVar22 == 0))
  goto LAB_044af268;
  UnityEngine_GameObject__SetActive(lVar22,0,0);
  lVar22 = *(long *)(param_4 + 0xe8);
  local_ac = local_ac + 1;
  if (lVar22 == 0) goto LAB_044af268;
  goto LAB_044af220;
LAB_044af2bc:
  lVar24 = thunk_FUN_03f9944c(DAT_0918f130);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass52_0___ctor(lVar24,0);
  if (*(uint *)(lVar22 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (lVar24 == 0) goto LAB_044af268;
  puVar15 = (undefined8 *)(lVar22 + 0x20 + uVar18 * 0x10);
  uVar21 = *puVar15;
  *(undefined8 *)(lVar24 + 0x18) = puVar15[1];
  *(undefined8 *)(lVar24 + 0x10) = uVar21;
  thunk_FUN_03f5d7b8(lVar24 + 0x18,0);
  if (*(long *)(param_4 + 0x3a0) == 0) goto LAB_044af268;
  uVar23 = *(undefined8 *)(*(long *)(param_4 + 0x3a0) + 0x28);
  uVar21 = thunk_FUN_03f9944c(DAT_091786e8);
  FUN_05322d94(uVar21,lVar24,DAT_091e7100,0);
  uVar19 = FUN_04ab6f28(uVar23,uVar21,DAT_091c9440);
  if ((uVar19 & 1) == 0) {
    uVar21 = *(undefined8 *)(lVar24 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Object__Destroy(uVar21,0);
    if (*(long *)(param_4 + 0xf0) == 0) goto LAB_044af268;
    FUN_06ef19b4(*(long *)(param_4 + 0xf0),*(undefined4 *)(lVar24 + 0x10),DAT_0919d7d0);
  }
  uVar18 = uVar18 + 1;
  if ((long)*(int *)(lVar22 + 0x18) <= (long)uVar18) {
    return;
  }
  goto LAB_044af2bc;
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_044af174:
    if (*(long *)(piVar20 + -2) == DAT_09185a58) {
      puVar15 = (undefined8 *)(lVar22 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_044af1a8;
    }
  }
LAB_044af18c:
  puVar15 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_044af1a8:
  (*(code *)*puVar15)(plVar8,puVar15[1]);
LAB_044af1b4:
  lVar22 = *(long *)(param_4 + 0xe0);
  iVar4 = local_ac;
  while (lVar22 != 0) {
    if (*(int *)(lVar22 + 0x18) <= iVar4) {
      lVar22 = *(long *)(param_4 + 0xe8);
      if (lVar22 != 0) {
        local_ac = local_ac << 1;
        goto LAB_044af220;
      }
      break;
    }
    lVar22 = FUN_057e0998(lVar22,iVar4,DAT_091ae340);
    if (lVar22 == 0) break;
    UnityEngine_Renderer__set_enabled(lVar22,0,0);
    iVar4 = iVar4 + 1;
    lVar22 = *(long *)(param_4 + 0xe0);
  }
LAB_044af268:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

