// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$Advance
// address: 0x4473750
// body: available
// range: 0x4473750-0x4473d13 inclusive
// range: 0x4473d18-0x4473e1f inclusive
// range: 0x4473e24-0x4473e27 inclusive
// range: 0x4473e70-0x4473e7b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4473d10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4473e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4473e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4473e70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4473e78 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04473d9c) */
/* WARNING: Removing unreachable block (ram,0x04473e74) */

void CookingGraph_CookingLevelSimulation__Advance
               (double param_1,long param_2,char param_3,double param_4)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 local_b0 [16];
  
  if ((DAT_09518074 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_091c98c0);
    FUN_03f5c2a4(&DAT_091ca830);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091793a0);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a838);
    FUN_03f5c2a4(&DAT_0917af38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b2500);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6d58);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091b6d68);
    FUN_03f5c2a4(&DAT_091e74f0);
    FUN_03f5c2a4(&DAT_091e7d90);
    FUN_03f5c2a4(&DAT_0918f508);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_0921a038);
    FUN_03f5c2a4(&DAT_0921be58);
    DAT_09518074 = 1;
  }
  local_b0._0_8_ = 0;
  local_b0._8_8_ = 0;
  CookingGraph_Execution_CookingExecution__RequireTime(param_1,DAT_0921be58,0);
  dVar14 = param_1;
  if (param_3 != '\0') {
    dVar14 = param_4;
  }
  CookingGraph_Execution_CookingExecution__RequireTime(dVar14,DAT_0921a038,0);
  if (*(int *)(param_2 + 0x188) != 0) {
    return;
  }
  CookingGraph_CookingLevelSimulation__Settle(param_2);
  auVar17._8_8_ = local_b0._8_8_;
  auVar17._0_8_ = local_b0._0_8_;
  dVar11 = dVar14 / param_1;
  dVar15 = param_1;
  if (param_1 <= 0.0) {
    dVar11 = 0.0;
    local_b0 = auVar17;
  }
LAB_04473968:
  lVar2 = thunk_FUN_03f9944c(DAT_0918f508);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass289_0___ctor(lVar2,0);
  if (*(int *)(param_2 + 0x188) != 0) {
    return;
  }
  if ((*(long *)(param_2 + 0x180) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_2 + 0x180) + 0x40), lVar4 != 0)) {
    uVar16 = *(undefined8 *)(lVar4 + 0x50);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar12 = (double)System_Math__Min(dVar15,uVar16,0);
    auVar17 = CookingGraph_CookingLevelSimulation__NextCompletionIn(param_2);
    local_b0 = auVar17;
    if ((auVar17._0_8_ & 0xff) != 0) {
      dVar13 = (double)FUN_05c2dd40(local_b0,DAT_091b6d68);
      if (1e-08 < dVar13) {
        uVar16 = FUN_05c2dd40(local_b0,DAT_091b6d68);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar12 = (double)System_Math__Min(dVar12,uVar16,0);
      }
    }
    if (lVar2 != 0) {
      cVar1 = *(char *)(param_2 + 0x149);
      *(double *)(lVar2 + 0x10) = dVar11;
      if ((cVar1 == '\0') && (0.0 < dVar11)) {
        uVar9 = *(undefined8 *)(param_2 + 0x98);
        uVar16 = thunk_FUN_03f9944c(DAT_091793a0);
        FUN_05323790(uVar16,lVar2,DAT_091e7d90,0);
        uVar16 = FUN_04af6724(uVar9,uVar16,DAT_091ca830);
        uVar16 = FUN_04adcc1c(0x7ff0000000000000,uVar16,DAT_091c98c0);
        uVar16 = System_Linq_Enumerable__Min(uVar16,0);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        dVar12 = (double)System_Math__Min(dVar12,uVar16,0);
      }
      if (*(long *)(param_2 + 0x98) != 0) {
        uVar16 = FUN_057e28a4(*(long *)(param_2 + 0x98),DAT_091b2500);
        if (*(long *)(param_2 + 0xb0) != 0) {
          uVar9 = FUN_06e4bd5c(*(long *)(param_2 + 0xb0),DAT_0919c1b0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar4 = puVar6[0xab];
          if (lVar4 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar6 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar10 = *puVar6;
            lVar4 = thunk_FUN_03f9944c(DAT_091793d0);
            FUN_05322d94(lVar4,uVar10,DAT_091e74f0,0);
            lVar5 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar5 + 0x558) = lVar4;
            thunk_FUN_03f5d7b8(lVar5 + 0x558,lVar4);
          }
          plVar3 = (long *)FUN_04b0cafc(uVar9,lVar4,DAT_091cb618);
          if (plVar3 != (long *)0x0) {
            lVar4 = *plVar3;
            uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar7 != 0) {
              piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
              do {
                if (*(long *)(piVar8 + -2) == DAT_0917a838) {
                  puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                  goto LAB_04473bfc;
                }
                uVar7 = uVar7 - 1;
                piVar8 = piVar8 + 4;
              } while (uVar7 != 0);
            }
            puVar6 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a838,0);
LAB_04473bfc:
            plVar3 = (long *)(*(code *)*puVar6)(plVar3,puVar6[1]);
            do {
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_09185b10) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_04473c68;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04473c68:
              uVar7 = (*(code *)*puVar6)(plVar3,puVar6[1]);
              if ((uVar7 & 1) == 0) goto LAB_04473d18;
              if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == DAT_0917af38) {
                    puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
                    goto LAB_04473ccc;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar6 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917af38,0);
LAB_04473ccc:
              lVar4 = (*(code *)*puVar6)(plVar3,puVar6[1]);
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar9 = *(undefined8 *)(lVar4 + 0x28);
              dVar13 = *(double *)(lVar4 + 0x30);
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar9 = System_Math__Min(uVar9,dVar12 + dVar13,0);
              *(undefined8 *)(lVar4 + 0x30) = uVar9;
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_04473e70;
LAB_04473d18:
  if (plVar3 != (long *)0x0) {
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04473d80;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_04473d80:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  if (*(long *)(param_2 + 0x178) == 0) {
LAB_04473e70:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CookingGraph_Execution_CookingExecution__Tick(dVar12,*(long *)(param_2 + 0x178),0,0);
  CookingGraph_CookingLevelSimulation__AdvanceEating(dVar12,param_2);
  *(long *)(param_2 + 400) = *(long *)(param_2 + 400) + 1;
  *(long *)(param_2 + 0x160) = *(long *)(param_2 + 0x160) + 1;
  CookingGraph_CookingLevelSimulation__Settle(param_2);
  dVar13 = dVar14;
  if (0.0 < param_1) {
    dVar13 = dVar12 * *(double *)(lVar2 + 0x10);
  }
  CookingGraph_CookingLevelSimulation__AdvancePatience(dVar13,param_2,uVar16);
  CookingGraph_CookingLevelSimulation__CheckEnd(param_2);
  dVar15 = dVar15 - dVar12;
  if (dVar15 <= 1e-08) {
    return;
  }
  goto LAB_04473968;
}

