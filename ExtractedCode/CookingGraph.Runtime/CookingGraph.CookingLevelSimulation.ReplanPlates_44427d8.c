// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ReplanPlates
// address: 0x44427d8
// body: available
// range: 0x44427d8-0x4442f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4442f48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4442f4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ReplanPlates(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  long local_b8;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09517ff8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c67b0);
    FUN_03f5c2a4(&DAT_0919c240);
    FUN_03f5c2a4(&DAT_0919c258);
    FUN_03f5c2a4(&DAT_09175f90);
    FUN_03f5c2a4(&DAT_091c93c8);
    FUN_03f5c2a4(&DAT_091caa00);
    FUN_03f5c2a4(&DAT_091cad00);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_091cb3c0);
    FUN_03f5c2a4(&DAT_09178360);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09178468);
    FUN_03f5c2a4(&DAT_09179388);
    FUN_03f5c2a4(&DAT_091e7968);
    FUN_03f5c2a4(&DAT_091e7970);
    FUN_03f5c2a4(&DAT_091e7980);
    FUN_03f5c2a4(&DAT_091e7988);
    FUN_03f5c2a4(&DAT_091e7d78);
    FUN_03f5c2a4(&DAT_0918f4f0);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091bedd0);
    DAT_09517ff8 = 1;
  }
  uVar3 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1);
  if ((uVar3 & 1) != 0) {
    iVar17 = 0;
    do {
      uVar12 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar13 = puVar8[0xb];
      if (lVar13 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar15 = *puVar8;
        lVar13 = thunk_FUN_03f9944c(DAT_09179390);
        FUN_05322d94(lVar13,uVar15,DAT_091e7968,0);
        plVar4 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x58);
        *plVar4 = lVar13;
        thunk_FUN_03f5d7b8(plVar4,lVar13);
      }
      uVar12 = FUN_04b0cafc(uVar12,lVar13,DAT_091cb610);
      uVar15 = thunk_FUN_03f9944c(DAT_09179388);
      FUN_05324070(uVar15,param_1,DAT_091c67b0,0);
      uVar12 = FUN_04afab00(uVar12,uVar15,DAT_091caa00);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar13 = puVar8[0xd];
      if (lVar13 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar15 = *puVar8;
        lVar13 = thunk_FUN_03f9944c(DAT_09178360);
        FUN_053118c0(lVar13,uVar15,DAT_091e7970,0);
        plVar4 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x68);
        *plVar4 = lVar13;
        thunk_FUN_03f5d7b8(plVar4,lVar13);
      }
      uVar12 = FUN_04b0b8e4(uVar12,lVar13,DAT_091cb3c0);
      lVar13 = FUN_04b041ec(uVar12,DAT_091cad00);
      if (lVar13 == 0) {
LAB_04442f48:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar13 + 0x18) < 2) {
        return;
      }
      uVar12 = CookingGraph_CookingLevelSimulation__MadeSupply(param_1);
      uVar15 = CookingGraph_CookingLevelSimulation__ProjectedMissing(param_1,uVar12,0);
      lVar5 = CookingGraph_CookingLevelSimulation__ProgressRank(param_1,uVar15);
      uVar15 = *(undefined8 *)(lVar13 + 0x18);
      if ((int)uVar15 < 1) {
        return;
      }
      puVar8 = (undefined8 *)(lVar13 + 0x38);
      uVar3 = 1;
      local_88 = 0;
      local_b8 = 0;
      uVar20 = 0;
      do {
        uVar1 = uVar20 + 1;
        iVar2 = (int)uVar15;
        if ((long)uVar1 < (long)iVar2) {
          lVar18 = lVar13 + uVar20 * 0x18;
          puVar14 = puVar8;
          uVar16 = uVar3;
          do {
            lVar6 = thunk_FUN_03f9944c(DAT_0918f4f0);
            CookingGraph_CookingLevelSimulation_<>c__DisplayClass27_1___ctor(lVar6,0);
            if (lVar6 == 0) goto LAB_04442f48;
            *(long *)(lVar6 + 0x50) = param_1;
            thunk_FUN_03f5d7b8((long *)(lVar6 + 0x50),param_1);
            if (*(uint *)(lVar13 + 0x18) <= uVar20) {
LAB_04442f4c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar19 = *(undefined8 *)(lVar18 + 0x28);
            uVar15 = *(undefined8 *)(lVar18 + 0x20);
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar18 + 0x30);
            *(undefined8 *)(lVar6 + 0x18) = uVar19;
            *(undefined8 *)(lVar6 + 0x10) = uVar15;
            thunk_FUN_03f5d7b8(lVar6 + 0x10,0);
            if (*(uint *)(lVar13 + 0x18) <= uVar16) goto LAB_04442f4c;
            uVar19 = puVar14[1];
            uVar15 = *puVar14;
            *(undefined8 *)(lVar6 + 0x40) = puVar14[2];
            *(undefined8 *)(lVar6 + 0x38) = uVar19;
            *(undefined8 *)(lVar6 + 0x30) = uVar15;
            thunk_FUN_03f5d7b8(lVar6 + 0x30,0);
            if ((*(long *)(lVar6 + 0x10) == 0) ||
               (lVar9 = *(long *)(*(long *)(lVar6 + 0x10) + 0x50), lVar9 == 0)) goto LAB_04442f48;
            if (*(uint *)(lVar9 + 0x18) <= *(uint *)(lVar6 + 0x18)) goto LAB_04442f4c;
            lVar9 = *(long *)(lVar9 + (long)(int)*(uint *)(lVar6 + 0x18) * 8 + 0x20);
            if (((lVar9 == 0) || (*(long *)(lVar6 + 0x30) == 0)) ||
               (lVar11 = *(long *)(*(long *)(lVar6 + 0x30) + 0x50), lVar11 == 0)) goto LAB_04442f48;
            if (*(uint *)(lVar11 + 0x18) <= *(uint *)(lVar6 + 0x38)) goto LAB_04442f4c;
            lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(lVar6 + 0x38) * 8 + 0x20);
            if (lVar11 == 0) goto LAB_04442f48;
            if (*(int *)(lVar9 + 0x10) == *(int *)(lVar11 + 0x10)) {
              if (*(long *)(lVar6 + 0x20) == 0) goto LAB_04442f48;
              uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x30);
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              lVar9 = puVar10[0xe];
              if (lVar9 == 0) {
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                }
                uVar19 = *puVar10;
                lVar9 = thunk_FUN_03f9944c(DAT_09178468);
                FUN_05311eac(lVar9,uVar19,DAT_091e7980,0);
                plVar4 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x70);
                *plVar4 = lVar9;
                thunk_FUN_03f5d7b8(plVar4,lVar9);
              }
              uVar7 = FUN_04ab5cb8(uVar15,lVar9,DAT_091c93c8);
              if ((uVar7 & 1) == 0) {
                if (*(long *)(lVar6 + 0x40) == 0) goto LAB_04442f48;
                uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0x40) + 0x30);
                if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                lVar9 = puVar10[0xf];
                if (lVar9 == 0) {
                  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                    FUN_03f5c424();
                    puVar10 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                  }
                  uVar19 = *puVar10;
                  lVar9 = thunk_FUN_03f9944c(DAT_09178468);
                  FUN_05311eac(lVar9,uVar19,DAT_091e7988,0);
                  plVar4 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0x78);
                  *plVar4 = lVar9;
                  thunk_FUN_03f5d7b8(plVar4,lVar9);
                }
                uVar7 = FUN_04ab5cb8(uVar15,lVar9,DAT_091c93c8);
                if ((uVar7 & 1) == 0) goto LAB_04442ec4;
              }
              lVar9 = CookingGraph_CookingLevelSimulation__FitPlate
                                (*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x40));
              plVar4 = (long *)(lVar6 + 0x48);
              *plVar4 = lVar9;
              thunk_FUN_03f5d7b8(plVar4,lVar9);
              if (*plVar4 != 0) {
                lVar9 = CookingGraph_CookingLevelSimulation__FitPlate
                                  (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x20));
                plVar4 = (long *)(lVar6 + 0x28);
                *plVar4 = lVar9;
                thunk_FUN_03f5d7b8(plVar4,lVar9);
                if (*plVar4 != 0) {
                  lVar9 = thunk_FUN_03f9944c(DAT_09175f90);
                  FUN_06e59e5c(lVar9,DAT_0919c240);
                  local_70 = 0;
                  uStack_68 = 0;
                  FUN_066ce094(&local_70,*(undefined8 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x18)
                               ,DAT_091bedd0);
                  if (lVar9 == 0) goto LAB_04442f48;
                  FUN_06e5ac08(lVar9,local_70,uStack_68,*(undefined8 *)(lVar6 + 0x28),DAT_0919c258);
                  local_80 = 0;
                  uStack_78 = 0;
                  FUN_066ce094(&local_80,*(undefined8 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x38)
                               ,DAT_091bedd0);
                  FUN_06e5ac08(lVar9,local_80,uStack_78,*(undefined8 *)(lVar6 + 0x48),DAT_0919c258);
                  uVar15 = CookingGraph_CookingLevelSimulation__ProjectedMissing
                                     (param_1,uVar12,lVar9);
                  lVar11 = CookingGraph_CookingLevelSimulation__ProgressRank(param_1,uVar15);
                  lVar9 = lVar5;
                  if (local_88 != 0) {
                    lVar9 = local_88;
                  }
                  iVar2 = CookingGraph_CookingLevelSimulation__CompareRank(lVar11,lVar9);
                  if (iVar2 < 0) {
                    local_b8 = thunk_FUN_03f9944c(DAT_09180e78);
                    System_Action___ctor(local_b8,lVar6,DAT_091e7d78,0);
                    local_88 = lVar11;
                  }
                }
              }
            }
LAB_04442ec4:
            uVar15 = *(undefined8 *)(lVar13 + 0x18);
            uVar16 = uVar16 + 1;
            puVar14 = puVar14 + 3;
            iVar2 = (int)uVar15;
          } while ((long)uVar16 < (long)iVar2);
        }
        uVar3 = uVar3 + 1;
        puVar8 = puVar8 + 3;
        uVar20 = uVar1;
      } while ((long)uVar1 < (long)iVar2);
      if (local_b8 == 0) {
        return;
      }
      (**(code **)(local_b8 + 0x18))
                (*(undefined8 *)(local_b8 + 0x40),*(undefined8 *)(local_b8 + 0x28));
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0x32);
  }
  return;
}

