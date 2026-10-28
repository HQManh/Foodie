// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$<ReadSnapshot>b__312_4
// address: 0x4477e40
// body: available
// range: 0x4477e40-0x447840f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4478408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x447840c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__<ReadSnapshot>b__312_4(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  int iStack_6c;
  undefined8 local_68;
  
  if ((DAT_095180a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182dc0);
    FUN_03f5c2a4(&DAT_091c6880);
    FUN_03f5c2a4(&DAT_091c6788);
    FUN_03f5c2a4(&DAT_091c9270);
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_091ca408);
    FUN_03f5c2a4(&DAT_091cad78);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_09178698);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178880);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_0917b328);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091e7888);
    FUN_03f5c2a4(&DAT_091e7890);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_095180a1 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x178);
  CookingGraph_CookingLevelSimulation__GridAddress(&local_78,param_2);
  if (lVar10 != 0) {
    local_90[0] = local_78;
    local_80 = local_68;
    plVar3 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar10,local_90,0);
    if (*(uint *)(param_1 + 0x16c) == param_2) {
      uVar5 = 4;
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_04478408;
      lVar10 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917b328) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_04478000;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar8 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b328,0);
LAB_04478000:
      iVar1 = (*(code *)*puVar8)(plVar3,puVar8[1]);
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        lVar10 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_0917b4c0) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0447806c;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b4c0,0);
LAB_0447806c:
        (*(code *)*puVar8)(&local_78,plVar3,0,puVar8[1]);
        if (iStack_6c == 1) {
          uVar5 = 3;
        }
        else {
          lVar10 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar7 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b4c0) {
                puVar8 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_044780e0;
              }
              uVar7 = uVar7 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar7 != 0);
          }
          puVar8 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b4c0,0);
LAB_044780e0:
          (*(code *)*puVar8)(&local_78,plVar3,0,puVar8[1]);
          if (iStack_6c == 2) {
            uVar5 = 5;
          }
          else {
            lVar10 = *plVar3;
            lVar6 = *(long *)(param_1 + 200);
            uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar7 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_0917b4c0) {
                  puVar8 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_04478158;
                }
                uVar7 = uVar7 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar7 != 0);
            }
            puVar8 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917b4c0,0);
LAB_04478158:
            (*(code *)*puVar8)(&local_78,plVar3,0,puVar8[1]);
            if (lVar6 == 0) goto LAB_04478408;
            uVar7 = FUN_053e1824(lVar6,local_78,DAT_091a8318);
            uVar5 = 1;
            if ((uVar7 & 1) == 0) {
              uVar5 = 2;
            }
          }
        }
      }
    }
    lVar10 = *(long *)(param_1 + 0x90);
    if (lVar10 != 0) {
      if (*(uint *)(lVar10 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar11 = *(undefined8 *)(lVar10 + (long)(int)param_2 * 8 + 0x20);
      uVar4 = thunk_FUN_03f9944c(DAT_09178880);
      FUN_05323558(uVar4,param_1,DAT_091c6880,0);
      uVar4 = FUN_04af60dc(uVar11,uVar4,DAT_091ca408);
      uVar4 = FUN_04b04384(uVar4,DAT_091cad78);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar10 = puVar8[0xb8];
      if (lVar10 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar11 = *puVar8;
        lVar10 = thunk_FUN_03f9944c(DAT_09178698);
        FUN_05312dfc(lVar10,uVar11,DAT_091e7888,0);
        lVar6 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar6 + 0x5c0) = lVar10;
        thunk_FUN_03f5d7b8(lVar6 + 0x5c0,lVar10);
      }
      uVar2 = FUN_04ab26ec(uVar4,lVar10,DAT_091c9270);
      uVar11 = thunk_FUN_03f9944c(DAT_09178768);
      FUN_053136a4(uVar11,param_1,DAT_091c6788,0);
      uVar11 = FUN_04b0beec(plVar3,uVar11,DAT_091cb468);
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
      }
      puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar10 = puVar8[0xb9];
      if (lVar10 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
          puVar8 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar12 = *puVar8;
        lVar10 = thunk_FUN_03f9944c(DAT_09178778);
        FUN_05313f40(lVar10,uVar12,DAT_091e7890,0);
        lVar6 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar6 + 0x5c8) = lVar10;
        thunk_FUN_03f5d7b8(lVar6 + 0x5c8,lVar10);
      }
      uVar11 = FUN_04af142c(uVar11,lVar10,DAT_091ca3b8);
      uVar11 = FUN_04b0473c(uVar11,DAT_091cae38);
      uVar12 = thunk_FUN_03f9944c(DAT_09182dc0);
      CookingGraph_CookingGridSnapshot___ctor(uVar12,param_2,uVar2 & 1,uVar5,uVar11,uVar4,0);
      return uVar12;
    }
  }
LAB_04478408:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

