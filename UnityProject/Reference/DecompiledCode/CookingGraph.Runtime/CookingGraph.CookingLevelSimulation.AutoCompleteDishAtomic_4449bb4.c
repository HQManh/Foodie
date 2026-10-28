// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$AutoCompleteDishAtomic
// address: 0x4449bb4
// body: available
// range: 0x4449bb4-0x444acf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444a7e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444acf4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__AutoCompleteDishAtomic
               (long param_1,long param_2,undefined4 param_3,uint param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int *piVar14;
  long *plVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  int local_64;
  
  if ((DAT_09518002 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919c1b0);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091c9928);
    FUN_03f5c2a4(&DAT_091ca0c0);
    FUN_03f5c2a4(&DAT_091ca820);
    FUN_03f5c2a4(&DAT_091ca818);
    FUN_03f5c2a4(&DAT_091ca398);
    FUN_03f5c2a4(&DAT_091ca200);
    FUN_03f5c2a4(&DAT_091cac98);
    FUN_03f5c2a4(&DAT_091cadb8);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091caf50);
    FUN_03f5c2a4(&DAT_091cb200);
    FUN_03f5c2a4(&DAT_091cb0a8);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091cb618);
    FUN_03f5c2a4(&DAT_091a50c0);
    FUN_03f5c2a4(&DAT_091a50c8);
    FUN_03f5c2a4(&DAT_091a50d0);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178748);
    FUN_03f5c2a4(&DAT_091793e0);
    FUN_03f5c2a4(&DAT_091781e0);
    FUN_03f5c2a4(&DAT_09179378);
    FUN_03f5c2a4(&DAT_091793d0);
    FUN_03f5c2a4(&DAT_09179370);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_0917b310);
    FUN_03f5c2a4(&DAT_0917b498);
    FUN_03f5c2a4(&DAT_0917b4b0);
    FUN_03f5c2a4(&DAT_091add58);
    FUN_03f5c2a4(&DAT_091b24c8);
    FUN_03f5c2a4(&DAT_091b24d0);
    FUN_03f5c2a4(&DAT_091b24c0);
    FUN_03f5c2a4(&DAT_0917d250);
    FUN_03f5c2a4(&DAT_091e7550);
    FUN_03f5c2a4(&DAT_091e7558);
    FUN_03f5c2a4(&DAT_091e7560);
    FUN_03f5c2a4(&DAT_091e7568);
    FUN_03f5c2a4(&DAT_091e7570);
    FUN_03f5c2a4(&DAT_091e7578);
    FUN_03f5c2a4(&DAT_091e7580);
    FUN_03f5c2a4(&DAT_091e7588);
    FUN_03f5c2a4(&DAT_091e7590);
    FUN_03f5c2a4(&DAT_091e7598);
    FUN_03f5c2a4(&DAT_091e75a0);
    FUN_03f5c2a4(&DAT_091e7e10);
    FUN_03f5c2a4(&DAT_091e7e20);
    FUN_03f5c2a4(&DAT_0918f588);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_091fc4b0);
    DAT_09518002 = 1;
  }
  local_64 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918f588);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass40_0___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    lVar5 = CookingGraph_CookingLevelSimulation__Assembly(param_1,param_2,param_3);
    plVar15 = (long *)(lVar4 + 0x40);
    *plVar15 = lVar5;
    thunk_FUN_03f5d7b8(plVar15,lVar5);
    lVar5 = thunk_FUN_03f9944c(DAT_09176b28);
    FUN_06fc96ac(lVar5,DAT_0919f978);
    plVar16 = (long *)(lVar4 + 0x10);
    *plVar16 = lVar5;
    thunk_FUN_03f5d7b8(plVar16,lVar5);
    if (*(long *)(param_1 + 0x90) != 0) {
      uVar6 = System_Linq_Enumerable__Range(0,*(undefined4 *)(*(long *)(param_1 + 0x90) + 0x18),0);
      uVar7 = thunk_FUN_03f9944c(DAT_09178b98);
      FUN_05315754(uVar7,lVar4,DAT_091e7e20,0);
      uVar6 = FUN_04b0c1f0(uVar6,uVar7,DAT_091cb4e8);
      uVar6 = FUN_04b0462c(uVar6,DAT_091cae30);
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      thunk_FUN_03f5d7b8();
      if (*(long *)(param_1 + 0xb0) != 0) {
        uVar6 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar5 = puVar12[0x1b];
        if (lVar5 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar7 = *puVar12;
          lVar5 = thunk_FUN_03f9944c(DAT_091793d0);
          FUN_05322d94(lVar5,uVar7,DAT_091e7578,0);
          plVar8 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xd8);
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
        }
        uVar6 = FUN_04b0cafc(uVar6,lVar5,DAT_091cb618);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar5 = puVar12[0x1c];
        if (lVar5 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar7 = *puVar12;
          lVar5 = thunk_FUN_03f9944c(DAT_091793e0);
          FUN_053239c8(lVar5,uVar7,DAT_091e7580,0);
          plVar8 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xe0);
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
        }
        uVar6 = FUN_04aeab54(uVar6,lVar5,DAT_091ca0c0);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar5 = puVar12[0x1d];
        if (lVar5 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar7 = *puVar12;
          lVar5 = thunk_FUN_03f9944c(DAT_091793e0);
          FUN_053239c8(lVar5,uVar7,DAT_091e7588,0);
          plVar8 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xe8);
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
        }
        uVar6 = FUN_04b038e4(uVar6,lVar5,DAT_091cac98);
        uVar6 = FUN_04b049e4(uVar6,DAT_091caf50);
        *(undefined8 *)(lVar4 + 0x28) = uVar6;
        thunk_FUN_03f5d7b8();
        if (*(long *)(param_1 + 0xb0) != 0) {
          uVar6 = FUN_06e4bd5c(*(long *)(param_1 + 0xb0),DAT_0919c1b0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar5 = puVar12[0x1e];
          if (lVar5 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar7 = *puVar12;
            lVar5 = thunk_FUN_03f9944c(DAT_091793d0);
            FUN_05322d94(lVar5,uVar7,DAT_091e7590,0);
            plVar8 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xf0);
            *plVar8 = lVar5;
            thunk_FUN_03f5d7b8(plVar8,lVar5);
          }
          uVar6 = FUN_04b0cafc(uVar6,lVar5,DAT_091cb618);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar5 = puVar12[0x1f];
          if (lVar5 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar7 = *puVar12;
            lVar5 = thunk_FUN_03f9944c(DAT_091793e0);
            FUN_053239c8(lVar5,uVar7,DAT_091e7598,0);
            plVar8 = (long *)(*(long *)(DAT_0918f298 + 0xb8) + 0xf8);
            *plVar8 = lVar5;
            thunk_FUN_03f5d7b8(plVar8,lVar5);
          }
          uVar6 = FUN_04aeab54(uVar6,lVar5,DAT_091ca0c0);
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
          }
          puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          lVar5 = puVar12[0x20];
          if (lVar5 == 0) {
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
              puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            }
            uVar7 = *puVar12;
            lVar5 = thunk_FUN_03f9944c(DAT_091793e0);
            FUN_053239c8(lVar5,uVar7,DAT_091e75a0,0);
            lVar10 = *(long *)(DAT_0918f298 + 0xb8);
            *(long *)(lVar10 + 0x100) = lVar5;
            thunk_FUN_03f5d7b8(lVar10 + 0x100,lVar5);
          }
          uVar6 = FUN_04b038e4(uVar6,lVar5,DAT_091cac98);
          uVar6 = FUN_04b049e4(uVar6,DAT_091caf50);
          *(undefined8 *)(lVar4 + 0x38) = uVar6;
          thunk_FUN_03f5d7b8();
          if (*(long *)(param_1 + 0x178) != 0) {
            uVar6 = CookingGraph_Execution_CookingExecution__get_Transfers
                              (*(long *)(param_1 + 0x178),0);
            if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f298);
            }
            puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
            lVar5 = puVar12[0x21];
            if (lVar5 == 0) {
              if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                FUN_03f5c424(DAT_0918f298);
                puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
              }
              uVar7 = *puVar12;
              lVar5 = thunk_FUN_03f9944c(DAT_09178730);
              FUN_05322d94(lVar5,uVar7,DAT_091e7550,0);
              lVar10 = *(long *)(DAT_0918f298 + 0xb8);
              *(long *)(lVar10 + 0x108) = lVar5;
              thunk_FUN_03f5d7b8(lVar10 + 0x108,lVar5);
            }
            uVar6 = FUN_04b0cafc(uVar6,lVar5,DAT_091cb460);
            uVar6 = FUN_04b049e4(uVar6,DAT_091cadb8);
            *(undefined8 *)(lVar4 + 0x30) = uVar6;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30),uVar6);
            lVar5 = thunk_FUN_03f9944c(DAT_0917d250);
            FUN_057e0400(lVar5,DAT_091b24c0);
            lVar10 = *(long *)(lVar4 + 0x40);
            if (lVar10 != 0) {
              iVar17 = 0;
              while (plVar8 = *(long **)(lVar10 + 0x28), plVar8 != (long *)0x0) {
                lVar10 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_0917b310) {
                      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0444a590;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar12 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b310,0);
LAB_0444a590:
                iVar3 = (*(code *)*puVar12)(plVar8,puVar12[1]);
                if (iVar3 <= iVar17) {
                  if (param_5 != 0) {
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    lVar10 = puVar12[0x22];
                    if (lVar10 == 0) {
                      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                        FUN_03f5c424();
                        puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                      }
                      uVar6 = *puVar12;
                      lVar10 = thunk_FUN_03f9944c(DAT_09179378);
                      FUN_05323c00(lVar10,uVar6,DAT_091e7558,0);
                      lVar18 = *(long *)(DAT_0918f298 + 0xb8);
                      *(long *)(lVar18 + 0x110) = lVar10;
                      thunk_FUN_03f5d7b8(lVar18 + 0x110,lVar10);
                    }
                    uVar6 = FUN_04af73b4(lVar5,lVar10,DAT_091ca820);
                    uVar6 = FUN_04add45c(uVar6,DAT_091c9928);
                    FUN_0579c618(param_5,uVar6,DAT_091add58);
                  }
                  if ((param_4 & 1) == 0) goto LAB_0444accc;
                  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                  lVar10 = puVar12[0x23];
                  if (lVar10 == 0) {
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424();
                      puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    }
                    uVar6 = *puVar12;
                    lVar10 = thunk_FUN_03f9944c(DAT_09179378);
                    FUN_05323c00(lVar10,uVar6,DAT_091e7560,0);
                    lVar18 = *(long *)(DAT_0918f298 + 0xb8);
                    *(long *)(lVar18 + 0x118) = lVar10;
                    thunk_FUN_03f5d7b8(lVar18 + 0x118,lVar10);
                  }
                  uVar6 = FUN_04af73b4(lVar5,lVar10,DAT_091ca820);
                  uVar6 = FUN_04add45c(uVar6,DAT_091c9928);
                  lVar10 = FUN_04b08878(uVar6,DAT_091cb200);
                  uVar6 = CookingGraph_CookingLevelSimulation__BoundServes(param_1,param_2,param_3);
                  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_0918f298);
                  }
                  puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                  lVar18 = puVar12[0x24];
                  if (lVar18 == 0) {
                    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_0918f298);
                      puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                    }
                    uVar7 = *puVar12;
                    lVar18 = thunk_FUN_03f9944c(DAT_09178748);
                    FUN_05323c00(lVar18,uVar7,DAT_091e7568,0);
                    lVar11 = *(long *)(DAT_0918f298 + 0xb8);
                    *(long *)(lVar11 + 0x120) = lVar18;
                    thunk_FUN_03f5d7b8(lVar11 + 0x120,lVar18);
                  }
                  uVar7 = FUN_04af73b4(uVar6,lVar18,DAT_091ca398);
                  if (lVar10 != 0) {
                    FUN_0579c618(lVar10,uVar7,DAT_091add58);
                    uVar7 = thunk_FUN_03f9944c(DAT_09179370);
                    FUN_05322150(uVar7,lVar4,DAT_091e7e10,0);
                    uVar7 = FUN_04af50b8(lVar5,uVar7,DAT_091ca818);
                    uVar7 = FUN_04b084f8(uVar7,DAT_091cb0a8);
                    if (lVar5 != 0) {
                      FUN_057e185c(&local_98,lVar5,DAT_091b24d0);
                      puStack_78 = puStack_90;
                      local_80 = local_98;
                      local_70 = local_88;
                      local_98 = 0;
                      puStack_90 = &local_80;
                      while (uVar13 = FUN_071bd28c(&local_80,DAT_091a50c8), (uVar13 & 1) != 0) {
                        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        iVar1 = *(int *)(local_70 + 0x10);
                        if (iVar1 == 0) {
                          uStack_a8 = *(undefined8 *)(local_70 + 0x20);
                          local_b0 = *(undefined8 *)(local_70 + 0x18);
                          local_a0 = *(undefined8 *)(local_70 + 0x28);
                          uStack_c8 = *(undefined8 *)(local_70 + 0x38);
                          local_d0 = *(undefined8 *)(local_70 + 0x30);
                          local_c0 = *(undefined8 *)(local_70 + 0x40);
                          CookingGraph_CookingLevelSimulation__PayUnit(param_1,&local_b0,&local_d0);
                        }
                        else if (iVar1 == 1) {
                          CookingGraph_CookingLevelSimulation__PayJob
                                    (param_1,*(undefined8 *)(local_70 + 0x48));
                        }
                        else if (iVar1 == 2) {
                          uStack_e8 = *(undefined8 *)(local_70 + 0x38);
                          local_f0 = *(undefined8 *)(local_70 + 0x30);
                          local_e0 = *(undefined8 *)(local_70 + 0x40);
                          CookingGraph_CookingLevelSimulation__PayTransfer
                                    (param_1,*(undefined8 *)(local_70 + 0x50),&local_f0);
                        }
                        else {
                          CookingGraph_CookingLevelSimulation__PayQueue
                                    (param_1,*(undefined8 *)(local_70 + 0x58));
                        }
                      }
                      FUN_071bd288(&local_80,DAT_091a50c0);
                      if (param_2 != 0) {
                        lVar4 = *(long *)(param_1 + 0x178);
                        uVar9 = CookingGraph_CookingLevelSimulation_Customer__get_Owner(param_2,0);
                        if (lVar4 == 0) break;
                        CookingGraph_Execution_CookingExecution__CompleteSourcedDish
                                  (lVar4,uVar9,param_3,0);
                        CookingGraph_CookingLevelSimulation__Gravity(param_1);
                        lVar4 = DAT_0918f298;
                        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + 1;
                        *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
                        if (*(int *)(lVar4 + 0xe4) == 0) {
                          FUN_03f5c424();
                          lVar4 = DAT_0918f298;
                        }
                        puVar12 = *(undefined8 **)(lVar4 + 0xb8);
                        lVar5 = puVar12[0x25];
                        if (lVar5 == 0) {
                          if (*(int *)(lVar4 + 0xe4) == 0) {
                            FUN_03f5c424();
                            puVar12 = *(undefined8 **)(DAT_0918f298 + 0xb8);
                          }
                          uVar9 = *puVar12;
                          lVar5 = thunk_FUN_03f9944c(DAT_091781e0);
                          FUN_0530f3c8(lVar5,uVar9,DAT_091e7570,0);
                          lVar4 = *(long *)(DAT_0918f298 + 0xb8);
                          *(long *)(lVar4 + 0x128) = lVar5;
                          thunk_FUN_03f5d7b8(lVar4 + 0x128,lVar5);
                        }
                        uVar7 = FUN_04aef7e8(uVar7,lVar5,DAT_091ca200);
                        CookingGraph_CookingLevelSimulation__RecordAutoComplete
                                  (param_1,param_2,param_3,uVar7,uVar6);
                        CookingGraph_CookingLevelSimulation__Emit
                                  (param_1,1,*(undefined4 *)(param_2 + 0x10),DAT_091fc4b0,lVar10);
LAB_0444accc:
                        return iVar3 <= iVar17;
                      }
                    }
                  }
                  break;
                }
                if ((*plVar15 == 0) || (plVar8 = *(long **)(*plVar15 + 0x30), plVar8 == (long *)0x0)
                   ) break;
                lVar10 = *plVar8;
                uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar13 != 0) {
                  piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == DAT_0917b498) {
                      puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                      goto LAB_0444a604;
                    }
                    uVar13 = uVar13 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar13 != 0);
                }
                puVar12 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b498,0);
LAB_0444a604:
                uVar13 = (*(code *)*puVar12)(plVar8,iVar17,puVar12[1]);
                if ((uVar13 & 1) == 0) {
                  if ((*plVar15 == 0) ||
                     (plVar8 = *(long **)(*plVar15 + 0x38), plVar8 == (long *)0x0)) break;
                  lVar10 = *plVar8;
                  uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
                  if (uVar13 != 0) {
                    piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == DAT_0917b498) {
                        puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                        goto LAB_0444a674;
                      }
                      uVar13 = uVar13 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar13 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b498,0);
LAB_0444a674:
                  uVar13 = (*(code *)*puVar12)(plVar8,iVar17,puVar12[1]);
                  if ((uVar13 & 1) == 0) {
                    if ((*plVar15 == 0) ||
                       (plVar8 = *(long **)(*plVar15 + 0x28), plVar8 == (long *)0x0)) break;
                    lVar10 = *plVar8;
                    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    if (uVar13 != 0) {
                      piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar14 + -2) == DAT_0917b4b0) {
                          puVar12 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
                          goto LAB_0444a6ec;
                        }
                        uVar13 = uVar13 - 1;
                        piVar14 = piVar14 + 4;
                      } while (uVar13 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b4b0,0);
LAB_0444a6ec:
                    lVar10 = (*(code *)*puVar12)(plVar8,iVar17,puVar12[1]);
                    if (lVar10 == 0) break;
                    lVar10 = CookingGraph_CookingLevelSimulation_<>c__DisplayClass40_0__<AutoCompleteDishAtomic>g__Find_14
                                       (lVar4,*(undefined4 *)(lVar10 + 0x10),0);
                    if (lVar10 == 0) goto LAB_0444accc;
                    lVar18 = *plVar16;
                    if (lVar18 == 0) break;
                    uVar6 = *(undefined8 *)(lVar10 + 0x60);
                    uVar13 = FUN_06fcbf70(lVar18,uVar6,&local_64,DAT_0919f9c8);
                    iVar3 = 1;
                    if ((uVar13 & 1) != 0) {
                      iVar3 = local_64 + 1;
                    }
                    FUN_06fca434(lVar18,uVar6,iVar3,DAT_0919f9f0);
                    *(int *)(lVar10 + 0x70) = iVar17;
                    lVar18 = DAT_091b24c8;
                    if (lVar5 == 0) break;
                    lVar11 = *(long *)(lVar5 + 0x10);
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar11 == 0) break;
                    uVar2 = *(uint *)(lVar5 + 0x18);
                    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
                      plVar8 = (long *)(lVar11 + (long)(int)uVar2 * 8 + 0x20);
                      *plVar8 = lVar10;
                      thunk_FUN_03f5d7b8(plVar8,lVar10);
                    }
                    else {
                      FUN_057e0c68(lVar5,lVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                  }
                }
                lVar10 = *plVar15;
                iVar17 = iVar17 + 1;
                if (lVar10 == 0) break;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

