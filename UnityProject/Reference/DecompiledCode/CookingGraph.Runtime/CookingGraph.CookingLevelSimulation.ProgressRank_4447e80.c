// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ProgressRank
// address: 0x4447e80
// body: available
// range: 0x4447e80-0x44484d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44484c8 to 0x575c680 FUN_0575c680 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44484cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44484d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ProgressRank(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  
  if ((DAT_09517ffe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6888);
    FUN_03f5c2a4(&DAT_091a16c0);
    FUN_03f5c2a4(&DAT_091c9840);
    FUN_03f5c2a4(&DAT_091ca0b0);
    FUN_03f5c2a4(&DAT_091c9ff0);
    FUN_03f5c2a4(&DAT_091ca830);
    FUN_03f5c2a4(&DAT_091caaf8);
    FUN_03f5c2a4(&DAT_091cabf0);
    FUN_03f5c2a4(&DAT_091cac88);
    FUN_03f5c2a4(&DAT_091caf48);
    FUN_03f5c2a4(&DAT_091cadc8);
    FUN_03f5c2a4(&DAT_09178830);
    FUN_03f5c2a4(&DAT_091793a0);
    FUN_03f5c2a4(&DAT_09178828);
    FUN_03f5c2a4(&DAT_091793a8);
    FUN_03f5c2a4(&DAT_091ac630);
    FUN_03f5c2a4(&DAT_091ac628);
    FUN_03f5c2a4(&DAT_091ac640);
    FUN_03f5c2a4(&DAT_091ac620);
    FUN_03f5c2a4(&DAT_0917c098);
    FUN_03f5c2a4(&DAT_091e7838);
    FUN_03f5c2a4(&DAT_091e7840);
    FUN_03f5c2a4(&DAT_091e7848);
    FUN_03f5c2a4(&DAT_091e7e08);
    FUN_03f5c2a4(&DAT_0918f580);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09517ffe = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918f580);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass33_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 0x10);
    *plVar10 = param_2;
    thunk_FUN_03f5d7b8(plVar10,param_2);
    if (*plVar10 != 0) {
      uVar4 = FUN_06fca110(*plVar10,DAT_091a16c0);
      uVar5 = thunk_FUN_03f9944c(DAT_091793a0);
      FUN_05323790(uVar5,param_1,DAT_091c6888,0);
      uVar4 = FUN_04aeaae4(uVar4,uVar5,DAT_091ca0b0);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar11 = puVar9[0x18];
      if (lVar11 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar5 = *puVar9;
        lVar11 = thunk_FUN_03f9944c(DAT_091793a8);
        FUN_053239c8(lVar11,uVar5,DAT_091e7838,0);
        plVar10 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xc0);
        *plVar10 = lVar11;
        thunk_FUN_03f5d7b8(plVar10,lVar11);
      }
      uVar4 = FUN_04b038e4(uVar4,lVar11,DAT_091cac88);
      lVar11 = FUN_04b049e4(uVar4,DAT_091caf48);
      lVar6 = thunk_FUN_03f9944c(DAT_0917c098);
      FUN_0575a254(lVar6,DAT_091ac620);
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar1) {
          uVar14 = 0;
          do {
            if (uVar1 <= uVar14) {
LAB_044484cc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            dVar16 = (double)CookingGraph_CookingLevelSimulation__SelectionPatience
                                       (param_1,*(undefined8 *)
                                                 (lVar11 + (long)(int)uVar14 * 8 + 0x20));
            uVar7 = (ulong)*(uint *)(lVar11 + 0x18);
            uVar13 = (ulong)uVar14;
            if ((int)uVar14 < (int)*(uint *)(lVar11 + 0x18)) {
              uVar13 = (ulong)(int)uVar14;
              do {
                if ((uint)uVar7 <= (uint)uVar13) goto LAB_044484cc;
                dVar17 = (double)CookingGraph_CookingLevelSimulation__SelectionPatience
                                           (param_1,*(undefined8 *)(lVar11 + 0x20 + uVar13 * 8));
                if (dVar17 != dVar16) break;
                uVar7 = *(ulong *)(lVar11 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)uVar7);
            }
            uVar4 = FUN_04b020a8(lVar11,uVar14,DAT_091caaf8);
            uVar12 = (uint)uVar13;
            uVar4 = FUN_04b02940(uVar4,uVar12 - uVar14,DAT_091cabf0);
            lVar15 = *(long *)(lVar3 + 0x18);
            if (lVar15 == 0) {
              lVar15 = thunk_FUN_03f9944c(DAT_091793a0);
              FUN_05323790(lVar15,lVar3,DAT_091e7e08,0);
              *(long *)(lVar3 + 0x18) = lVar15;
              thunk_FUN_03f5d7b8(lVar3 + 0x18,lVar15);
            }
            uVar4 = FUN_04af6724(uVar4,lVar15,DAT_091ca830);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar15 = puVar9[0x19];
            if (lVar15 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar5 = *puVar9;
              lVar15 = thunk_FUN_03f9944c(DAT_09178830);
              FUN_05314940(lVar15,uVar5,DAT_091e7840,0);
              plVar10 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 200);
              *plVar10 = lVar15;
              thunk_FUN_03f5d7b8(plVar10,lVar15);
            }
            uVar4 = FUN_04aea764(uVar4,lVar15,DAT_091c9ff0);
            uVar4 = FUN_04b045a4(uVar4,DAT_091cadc8);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar15 = puVar9[0x1a];
            if (lVar15 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar9 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar5 = *puVar9;
              lVar15 = thunk_FUN_03f9944c(DAT_09178828);
              FUN_0531488c(lVar15,uVar5,DAT_091e7848,0);
              plVar10 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xd0);
              *plVar10 = lVar15;
              thunk_FUN_03f5d7b8(plVar10,lVar15);
            }
            iVar2 = FUN_04adbb68(uVar4,lVar15,DAT_091c9840);
            lVar15 = DAT_091ac628;
            if (lVar6 == 0) goto LAB_044484d0;
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_044484d0;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(double *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = (double)-iVar2;
            }
            else {
              FUN_0575aae8(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar5 = System_Linq_Enumerable__Sum(uVar4,0);
            lVar15 = DAT_091ac628;
            lVar8 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 == 0) goto LAB_044484d0;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            }
            else {
              FUN_0575aae8(lVar6,*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
              ;
            }
            FUN_0575acf4(lVar6,uVar4,DAT_091ac630);
            uVar1 = *(uint *)(lVar11 + 0x18);
            uVar14 = uVar12;
          } while ((int)uVar12 < (int)uVar1);
        }
        if (lVar6 != 0) {
          FUN_0575c680(lVar6,DAT_091ac640);
          return;
        }
      }
    }
  }
LAB_044484d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

