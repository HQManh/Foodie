// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProjectedMissing
// address: 0x4447408
// body: available
// range: 0x4447408-0x4447e03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444794c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447dd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447df0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447df4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447df8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4447e00 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044479d0) */
/* WARNING: Removing unreachable block (ram,0x04447dfc) */

void CookingGraph_CookingLevelSimulation__ProjectedMissing
               (long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long **pplStack_80;
  int local_74;
  long local_70;
  long *local_68;
  
  if ((DAT_09517ffd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_0919c248);
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919d950);
    FUN_03f5c2a4(&DAT_0919c240);
    FUN_03f5c2a4(&DAT_0919c250);
    FUN_03f5c2a4(&DAT_0919d9a8);
    FUN_03f5c2a4(&DAT_0919c258);
    FUN_03f5c2a4(&DAT_09175f90);
    FUN_03f5c2a4(&DAT_091764a0);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091cacf0);
    FUN_03f5c2a4(&DAT_091cb070);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_091793b0);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091793a8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a828);
    FUN_03f5c2a4(&DAT_0917af28);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091e7850);
    FUN_03f5c2a4(&DAT_091e7858);
    FUN_03f5c2a4(&DAT_091e7860);
    FUN_03f5c2a4(&DAT_091e7df0);
    FUN_03f5c2a4(&DAT_0918f568);
    FUN_03f5c2a4(&DAT_091e7df8);
    FUN_03f5c2a4(&DAT_0918f570);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bedd0);
    DAT_09517ffd = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  local_74 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f568);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass32_0___ctor(lVar3,0);
  lVar4 = thunk_FUN_03f9944c(DAT_091764a0);
  FUN_06ee5478(lVar4,param_2,DAT_0919d950);
  lVar5 = thunk_FUN_03f9944c(DAT_09175f90);
  FUN_06e59e5c(lVar5,DAT_0919c240);
  if (lVar3 != 0) {
    plVar6 = (long *)(lVar3 + 0x10);
    *plVar6 = lVar5;
    thunk_FUN_03f5d7b8(plVar6,lVar5);
    uVar17 = *(undefined8 *)(param_1 + 0x98);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar5 = puVar10[0x14];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar16 = *puVar10;
      lVar5 = thunk_FUN_03f9944c(DAT_09179390);
      FUN_05322d94(lVar5,uVar16,DAT_091e7860,0);
      plVar7 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xa0);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
    }
    plVar7 = (long *)FUN_04b0cafc(uVar17,lVar5,DAT_091cb610);
    if (plVar7 != (long *)0x0) {
      lVar5 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == DAT_0917a828) {
            puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_04447744;
          }
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a828,0);
LAB_04447744:
      plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      pplStack_80 = &local_68;
      local_88 = 0;
      do {
        local_68 = plVar7;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_09185b10) {
              puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_044477c8;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_044477c8:
        uVar13 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        plVar7 = local_68;
        if ((uVar13 & 1) == 0) {
          if (local_68 == (long *)0x0) goto LAB_044479c4;
          lVar5 = *local_68;
          uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar13 == 0) goto LAB_0444799c;
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_04447984;
        }
        if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *local_68;
        uVar13 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar13 != 0) {
          piVar15 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == DAT_0917af28) {
              puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_04447834;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917af28,0);
LAB_04447834:
        lVar5 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar11 = *(long *)(lVar5 + 0x50);
        if (lVar11 == 0) {
LAB_04447ddc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar18 = 0;
        while (plVar7 = local_68, iVar18 < *(int *)(lVar11 + 0x18)) {
          local_98 = 0;
          uStack_90 = 0;
          lVar11 = *plVar6;
          FUN_066ce094(&local_98,lVar5,iVar18,DAT_091bedd0);
          uVar16 = uStack_90;
          uVar17 = local_98;
          if (param_3 == 0) {
LAB_044478fc:
            lVar9 = CookingGraph_CookingLevelSimulation__HeldSlots(param_1,lVar5,iVar18);
          }
          else {
            local_98 = 0;
            uStack_90 = 0;
            FUN_066ce094(&local_98,lVar5,iVar18,DAT_091bedd0);
            uVar13 = FUN_06e5c710(param_3,local_98,uStack_90,&local_70,DAT_0919c248);
            if ((uVar13 & 1) == 0) goto LAB_044478fc;
            if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar8 = System_Array__Clone(local_70,0);
            uVar2 = DAT_0917fc40;
            if (lVar8 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = thunk_FUN_03f99350(lVar8,DAT_0917fc40);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(lVar8,uVar2);
              }
            }
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06e5ac08(lVar11,uVar17,uVar16,lVar9,DAT_0919c258);
          lVar11 = *(long *)(lVar5 + 0x50);
          iVar18 = iVar18 + 1;
          if (lVar11 == 0) goto LAB_04447ddc;
        }
      } while( true );
    }
  }
  goto LAB_04447dd4;
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar15 = piVar15 + 4;
    if (uVar13 == 0) break;
LAB_04447984:
    if (*(long *)(piVar15 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar5 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_044479b8;
    }
  }
LAB_0444799c:
  puVar10 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185a58,0);
LAB_044479b8:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_044479c4:
  uVar17 = CookingGraph_CookingLevelSimulation__ServingCandidates(param_1);
  lVar5 = FUN_04b040dc(uVar17,DAT_091cacf0);
  if (lVar5 != 0) {
    do {
      uVar19 = *(uint *)(lVar5 + 0x18);
      if ((int)uVar19 < 1) {
        bVar1 = false;
      }
      else {
        uVar13 = 0;
        bVar1 = false;
        do {
          if (uVar19 <= uVar13) {
LAB_04447dd8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar11 = lVar5 + uVar13 * 0x10;
          lVar9 = *(long *)(lVar11 + 0x20);
          uVar21 = *(ulong *)(lVar11 + 0x28);
          lVar11 = thunk_FUN_03f9944c(DAT_0918f570);
          CookingGraph_CookingLevelSimulation_<>c__DisplayClass32_1___ctor(lVar11,0);
          lVar8 = *plVar6;
          local_88 = 0;
          pplStack_80 = (long **)0x0;
          FUN_066ce094(&local_88,lVar9,uVar21 & 0xffffffff,DAT_091bedd0);
          if ((lVar8 == 0) ||
             (lVar8 = FUN_06e5ab70(lVar8,local_88,pplStack_80,DAT_0919c250), lVar11 == 0))
          goto LAB_04447dd4;
          plVar7 = (long *)(lVar11 + 0x10);
          *plVar7 = lVar8;
          thunk_FUN_03f5d7b8(plVar7,lVar8);
          if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x50), lVar9 == 0)) goto LAB_04447dd4;
          uVar19 = (uint)uVar21;
          if (*(uint *)(lVar9 + 0x18) <= uVar19) goto LAB_04447dd8;
          lVar9 = *(long *)(lVar9 + (long)(int)uVar19 * 8 + 0x20);
          if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x20), lVar9 == 0)) goto LAB_04447dd4;
          if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
            uVar21 = 0;
            uVar12 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
            lVar8 = lVar9 + 0x20;
            do {
              lVar14 = *plVar7;
              if (lVar14 == 0) goto LAB_04447dd4;
              if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_04447dd8;
              if (*(char *)(lVar14 + uVar21 + 0x20) == '\0') {
                if (uVar12 <= uVar21) goto LAB_04447dd8;
                lVar14 = *(long *)(lVar8 + uVar21 * 8);
                if ((lVar14 == 0) || (lVar4 == 0)) goto LAB_04447dd4;
                uVar12 = FUN_06ee7aac(lVar4,*(undefined4 *)(lVar14 + 0x10),&local_74,DAT_0919d990);
                if (((uVar12 & 1) != 0) && (0 < local_74)) {
                  if (*(uint *)(lVar9 + 0x18) <= uVar21) goto LAB_04447dd8;
                  lVar14 = *(long *)(lVar8 + uVar21 * 8);
                  if (lVar14 == 0) goto LAB_04447dd4;
                  lVar20 = *(long *)(lVar11 + 0x18);
                  uVar17 = *(undefined8 *)(lVar14 + 0x28);
                  if (lVar20 == 0) {
                    lVar20 = thunk_FUN_03f9944c(DAT_09178b98);
                    FUN_05315754(lVar20,lVar11,DAT_091e7df8,0);
                    *(long *)(lVar11 + 0x18) = lVar20;
                    thunk_FUN_03f5d7b8(lVar11 + 0x18,lVar20);
                  }
                  uVar12 = FUN_04ab2d14(uVar17,lVar20,DAT_091c9298);
                  if ((uVar12 & 1) != 0) {
                    lVar14 = *plVar7;
                    if (lVar14 == 0) goto LAB_04447dd4;
                    if ((*(uint *)(lVar14 + 0x18) <= uVar21) ||
                       (*(undefined1 *)(lVar14 + uVar21 + 0x20) = 1,
                       *(uint *)(lVar9 + 0x18) <= uVar21)) goto LAB_04447dd8;
                    lVar14 = *(long *)(lVar8 + uVar21 * 8);
                    if (lVar14 == 0) goto LAB_04447dd4;
                    FUN_06ee612c(lVar4,*(undefined4 *)(lVar14 + 0x10),local_74 + -1,DAT_0919d9a8);
                    bVar1 = true;
                  }
                }
              }
              uVar12 = (ulong)*(uint *)(lVar9 + 0x18);
              uVar21 = uVar21 + 1;
            } while ((long)uVar21 < (long)(int)*(uint *)(lVar9 + 0x18));
          }
          uVar19 = *(uint *)(lVar5 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar19);
      }
      if (!bVar1) {
        uVar17 = *(undefined8 *)(param_1 + 0x98);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar4 = puVar10[0x15];
        if (lVar4 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar16 = *puVar10;
          lVar4 = thunk_FUN_03f9944c(DAT_09179390);
          FUN_05322d94(lVar4,uVar16,DAT_091e7850,0);
          plVar6 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xa8);
          *plVar6 = lVar4;
          thunk_FUN_03f5d7b8(plVar6,lVar4);
        }
        uVar17 = FUN_04b0cafc(uVar17,lVar4,DAT_091cb610);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar4 = puVar10[0x16];
        if (lVar4 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar16 = *puVar10;
          lVar4 = thunk_FUN_03f9944c(DAT_091793b0);
          FUN_05324070(lVar4,uVar16,DAT_091e7858,0);
          plVar6 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xb0);
          *plVar6 = lVar4;
          thunk_FUN_03f5d7b8(plVar6,lVar4);
        }
        uVar16 = thunk_FUN_03f9944c(DAT_091793a8);
        FUN_053239c8(uVar16,lVar3,DAT_091e7df0,0);
        FUN_04b051cc(uVar17,lVar4,uVar16,DAT_091cb070);
        return;
      }
    } while( true );
  }
LAB_04447dd4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

