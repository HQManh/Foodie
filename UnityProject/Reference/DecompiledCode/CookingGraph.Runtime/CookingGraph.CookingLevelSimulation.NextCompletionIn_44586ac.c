// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$NextCompletionIn
// address: 0x44586ac
// body: available
// range: 0x44586ac-0x4458ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4458b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458b8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458b90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458b94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4458ba0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04458ac0) */
/* WARNING: Removing unreachable block (ram,0x04458b9c) */

undefined8 CookingGraph_CookingLevelSimulation__NextCompletionIn(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_09518075 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a50d8);
    FUN_03f5c2a4(&DAT_091a50e0);
    FUN_03f5c2a4(&DAT_091a50e8);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a838);
    FUN_03f5c2a4(&DAT_0917af38);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b24e8);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6d58);
    FUN_03f5c2a4(&DAT_091b6d48);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_091e7718);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518075 = 1;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  if (*(long *)(param_1 + 0x178) != 0) {
    auVar12 = CookingGraph_Execution_CookingExecution__NextCompletionIn
                        (*(long *)(param_1 + 0x178),0);
    dVar9 = INFINITY;
    if ((auVar12._0_8_ & 0xff) != 0) {
      dVar9 = auVar12._8_8_;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      uVar1 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar7 = puVar4[0xac];
      if (lVar7 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar8 = *puVar4;
        lVar7 = thunk_FUN_03f9944c(DAT_091793d0);
        FUN_05322d94(lVar7,uVar8,DAT_091e7718,0);
        lVar3 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar3 + 0x560) = lVar7;
        thunk_FUN_03f5d7b8(lVar3 + 0x560,lVar7);
      }
      plVar2 = (long *)FUN_04b0cafc(uVar1,lVar7,DAT_091cb618);
      if (plVar2 != (long *)0x0) {
        lVar7 = *plVar2;
        uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_0917a838) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_044588fc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a838,0);
LAB_044588fc:
        plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
        do {
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_09185b10) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_044589a4;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_044589a4:
          uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
          if ((uVar5 & 1) == 0) {
            if (plVar2 == (long *)0x0) goto LAB_04458ab4;
            lVar7 = *plVar2;
            uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar5 == 0) goto LAB_04458a8c;
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            goto LAB_04458a74;
          }
          if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = *plVar2;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_0917af38) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_04458a08;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917af38,0);
LAB_04458a08:
          lVar7 = (*(code *)*puVar4)(plVar2,puVar4[1]);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          dVar10 = *(double *)(lVar7 + 0x28);
          dVar11 = *(double *)(lVar7 + 0x30);
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187e80);
          }
          dVar9 = (double)System_Math__Min(dVar9,dVar10 - dVar11,0);
        } while( true );
      }
    }
  }
  goto LAB_04458b98;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_04458a74:
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04458aa8;
    }
  }
LAB_04458a8c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_04458aa8:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
LAB_04458ab4:
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_057e185c(&local_98,*(long *)(param_1 + 0xa8),DAT_091b24e8);
    while( true ) {
      uVar5 = FUN_071bd28c(&local_98,DAT_091a50e0);
      if ((uVar5 & 1) == 0) {
        FUN_071bd288(&local_98,DAT_091a50d8);
        local_80 = 0;
        uStack_78 = 0;
        if (dVar9 != INFINITY) {
          FUN_05c2dd28(dVar9,&local_80,DAT_091b6d48);
        }
        return local_80;
      }
      if (local_88 == 0) break;
      uVar1 = *(undefined8 *)(local_88 + 0x48);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar9 = (double)System_Math__Min(dVar9,uVar1,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04458b98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

