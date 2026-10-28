// rea decompile_all
// name: CookingGraph.CustomerOrderGenerator$$BuildDish
// address: 0x4431798
// body: available
// range: 0x4431798-0x44322d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44322d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44322d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CustomerOrderGenerator__BuildDish
               (long param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined4 param_7)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  if ((DAT_09517fa1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919fbd0);
    FUN_03f5c2a4(&DAT_0919cc70);
    FUN_03f5c2a4(&DAT_09176b88);
    FUN_03f5c2a4(&DAT_091761c8);
    FUN_03f5c2a4(&DAT_09183bb0);
    FUN_03f5c2a4(&DAT_091c9298);
    FUN_03f5c2a4(&DAT_091c98c8);
    FUN_03f5c2a4(&DAT_091c9a68);
    FUN_03f5c2a4(&DAT_091ca160);
    FUN_03f5c2a4(&DAT_091ca870);
    FUN_03f5c2a4(&DAT_091ca288);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb1f8);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_091cb3b8);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_09178310);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178318);
    FUN_03f5c2a4(&DAT_09179bb0);
    FUN_03f5c2a4(&DAT_0917b400);
    FUN_03f5c2a4(&DAT_0917b598);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091abbf8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918b378);
    FUN_03f5c2a4(&DAT_091e8310);
    FUN_03f5c2a4(&DAT_091e8318);
    FUN_03f5c2a4(&DAT_091e8320);
    FUN_03f5c2a4(&DAT_091e83b8);
    FUN_03f5c2a4(&DAT_091e83c0);
    FUN_03f5c2a4(&DAT_0918f960);
    FUN_03f5c2a4(&DAT_0918f930);
    DAT_09517fa1 = 1;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_0918f960);
  System_Object___ctor(lVar6,0);
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x10) = param_7;
    puVar16 = (undefined8 *)(lVar6 + 0x18);
    *puVar16 = param_3;
    thunk_FUN_03f5d7b8(puVar16,param_3);
    plVar18 = (long *)(lVar6 + 0x28);
    *plVar18 = param_1;
    thunk_FUN_03f5d7b8(plVar18,param_1);
    *(undefined8 *)(lVar6 + 0x50) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x50),param_5);
    *(undefined8 *)(lVar6 + 0x58) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x58),param_6);
    if (((*plVar18 != 0) && (lVar11 = *(long *)(*plVar18 + 0x30), lVar11 != 0)) &&
       (lVar11 = *(long *)(lVar11 + 0x18), lVar11 != 0)) {
      iVar3 = FUN_057e1a08(lVar11,param_2,DAT_091abbf8);
      if (iVar3 < 0) {
        return 0;
      }
      plVar18 = (long *)*puVar16;
      if (plVar18 != (long *)0x0) {
        lVar11 = *plVar18;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == DAT_0917b400) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04431aa4;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b400,0);
LAB_04431aa4:
        iVar4 = (*(code *)*puVar7)(plVar18,puVar7[1]);
        if (iVar4 == 0) {
          return 0;
        }
        uVar8 = CookingGraph_CustomerOrderGenerator__Member(1,iVar3,param_2);
        puVar7 = (undefined8 *)(lVar6 + 0x30);
        *puVar7 = uVar8;
        thunk_FUN_03f5d7b8(puVar7,uVar8);
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09516ea3 == '\0') {
          FUN_03f5c2a4(&DAT_0918b378);
          DAT_09516ea3 = '\x01';
        }
        if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar17 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
        uVar8 = thunk_FUN_03f9944c(DAT_09176b88);
        FUN_06fd76e8(uVar8,uVar17,DAT_0919fbd0);
        *(undefined8 *)(lVar6 + 0x38) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38),uVar8);
        uVar8 = thunk_FUN_03f9944c(DAT_091761c8);
        FUN_06fc96ac(uVar8,DAT_0919cc70);
        *(undefined8 *)(lVar6 + 0x40) = uVar8;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x40),uVar8);
        plVar18 = *(long **)(lVar6 + 0x18);
        if (plVar18 != (long *)0x0) {
          lVar11 = *plVar18;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == DAT_0917b400) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_04431bf4;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar9 = (undefined8 *)FUN_03f95da8(plVar18,DAT_0917b400,0);
LAB_04431bf4:
          uVar5 = (*(code *)*puVar9)(plVar18,puVar9[1]);
          uVar8 = FUN_04aeb3f8(0,uVar5,DAT_091ca160);
          lVar11 = FUN_04b0462c(uVar8,DAT_091cae30);
          plVar18 = (long *)(lVar6 + 0x48);
          *plVar18 = lVar11;
          thunk_FUN_03f5d7b8(plVar18,lVar11);
          uVar8 = CookingGraph_CompositeStructureTranslator__SlotsOf
                            (*(undefined8 *)(lVar6 + 0x28),param_2);
          *(undefined8 *)(lVar6 + 0x20) = uVar8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar8);
          uVar8 = *(undefined8 *)(lVar6 + 0x18);
          if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
          lVar11 = puVar9[6];
          if (lVar11 == 0) {
            if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
            }
            uVar17 = *puVar9;
            lVar11 = thunk_FUN_03f9944c(DAT_09179bb0);
            FUN_053301cc(lVar11,uVar17,DAT_091e8310,0);
            plVar10 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x30);
            *plVar10 = lVar11;
            thunk_FUN_03f5d7b8(plVar10,lVar11);
          }
          uVar8 = FUN_04af5048(uVar8,lVar11,DAT_091ca870);
          if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f930);
          }
          puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
          lVar11 = puVar9[7];
          if (lVar11 == 0) {
            if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f930);
              puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
            }
            uVar17 = *puVar9;
            lVar11 = thunk_FUN_03f9944c(DAT_09178310);
            FUN_0530e180(lVar11,uVar17,DAT_091e8318,0);
            plVar10 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x38);
            *plVar10 = lVar11;
            thunk_FUN_03f5d7b8(plVar10,lVar11);
          }
          uVar8 = FUN_04b0afd8(uVar8,lVar11,DAT_091cb3b8);
          if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f930);
          }
          puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
          lVar11 = puVar9[8];
          if (lVar11 == 0) {
            if (*(int *)(DAT_0918f930 + 0xe4) == 0) {
              FUN_03f5c424(DAT_0918f930);
              puVar9 = *(undefined8 **)(DAT_0918f930 + 0xb8);
            }
            uVar17 = *puVar9;
            lVar11 = thunk_FUN_03f9944c(DAT_09178318);
            FUN_0530e450(lVar11,uVar17,DAT_091e8320,0);
            plVar10 = (long *)(*(long *)(DAT_0918f930 + 0xb8) + 0x40);
            *plVar10 = lVar11;
            thunk_FUN_03f5d7b8(plVar10,lVar11);
          }
          uVar8 = FUN_04aef454(uVar8,lVar11,DAT_091ca288);
          uVar8 = FUN_04adcc84(uVar8,0xffffffff,DAT_091c98c8);
          iVar3 = FUN_04ae071c(uVar8,DAT_091c9a68);
          *(int *)(lVar6 + 0x60) = iVar3;
          if (-1 < iVar3) {
            plVar10 = (long *)*puVar16;
            if (plVar10 == (long *)0x0) goto LAB_044322d0;
            lVar11 = *plVar10;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == DAT_0917b598) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_04431ebc;
                }
                uVar12 = uVar12 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar12 != 0);
            }
            puVar9 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b598,0);
LAB_04431ebc:
            lVar11 = (*(code *)*puVar9)(plVar10,iVar3,puVar9[1]);
            if (lVar11 == 0) goto LAB_044322d0;
            if ((*(char *)(lVar11 + 0x10) != '\0') &&
               (uVar12 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__TryFill_3
                                   (lVar6,*(undefined4 *)(lVar6 + 0x60)), (uVar12 & 1) == 0)) {
              return 0;
            }
          }
          plVar10 = (long *)*puVar16;
          if (plVar10 != (long *)0x0) {
            uVar12 = 0;
            do {
              lVar11 = *plVar10;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == DAT_0917b400) {
                    puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_04431f50;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b400,0);
LAB_04431f50:
              iVar3 = (*(code *)*puVar9)(plVar10,puVar9[1]);
              plVar10 = (long *)*puVar16;
              if ((long)iVar3 <= (long)uVar12) {
                if (plVar10 != (long *)0x0) {
                  lVar11 = *plVar10;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 == 0) goto LAB_044320a4;
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  goto LAB_0443208c;
                }
                break;
              }
              if (plVar10 == (long *)0x0) break;
              lVar11 = *plVar10;
              uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar13 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == DAT_0917b598) {
                    puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                    goto LAB_04431fb8;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b598,0);
LAB_04431fb8:
              lVar11 = (*(code *)*puVar9)(plVar10,uVar12 & 0xffffffff,puVar9[1]);
              if (lVar11 == 0) break;
              if (*(char *)(lVar11 + 0x10) == '\0') {
                uVar5 = *(undefined4 *)(lVar11 + 0x34);
                uVar2 = *(undefined1 *)(lVar11 + 0x38);
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09187e80);
                }
                iVar3 = System_Math__Max(uVar5,uVar2,0);
                while( true ) {
                  lVar11 = *plVar18;
                  if (lVar11 == 0) goto LAB_044322d0;
                  if (*(uint *)(lVar11 + 0x18) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (iVar3 <= *(int *)(lVar11 + uVar12 * 4 + 0x20)) break;
                  uVar13 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__TryFill_3
                                     (lVar6,uVar12 & 0xffffffff);
                  if ((uVar13 & 1) == 0) {
                    return 0;
                  }
                }
              }
              plVar10 = (long *)*puVar16;
              uVar12 = uVar12 + 1;
              if (plVar10 == (long *)0x0) break;
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_044322d0;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_0443208c:
    if (*(long *)(piVar14 + -2) == DAT_0917b400) {
      puVar16 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_044320c0;
    }
  }
LAB_044320a4:
  puVar16 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b400,0);
LAB_044320c0:
  uVar5 = (*(code *)*puVar16)(plVar10,puVar16[1]);
  uVar8 = System_Linq_Enumerable__Range(0,uVar5,0);
  uVar17 = thunk_FUN_03f9944c(DAT_09178b98);
  FUN_05315754(uVar17,lVar6,DAT_091e83c0,0);
  uVar8 = FUN_04b0c1f0(uVar8,uVar17,DAT_091cb4e8);
  lVar11 = FUN_04b08778(uVar8,DAT_091cb1f8);
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x39) != '\0') {
      if (lVar11 == 0) goto LAB_044322d0;
      FUN_05797d74(&local_78,lVar11,DAT_091adcc0);
      local_88 = 0;
      puStack_80 = &local_78;
      do {
        uVar12 = FUN_071ad7a4(&local_78,DAT_091a34d8);
        if ((uVar12 & 1) == 0) break;
        uVar12 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__TryFill_3
                           (lVar6,local_68 & 0xffffffff);
      } while ((uVar12 & 1) == 0);
      FUN_039afa7c(&local_88);
    }
    iVar3 = System_Linq_Enumerable__Sum(*plVar18,0);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09187e80);
    }
    iVar4 = System_Math__Max(0,param_4 - iVar3,0);
    iVar3 = iVar4 * 4 + 8;
    while (0 < iVar4) {
      if (lVar11 == 0) goto LAB_044322d0;
      while( true ) {
        if ((*(int *)(lVar11 + 0x18) < 1) || (iVar3 < 1)) goto LAB_044322a0;
        uVar5 = CookingGraph_CustomerOrderGenerator__RandomIndex
                          (*(int *)(lVar11 + 0x18),*(undefined8 *)(lVar6 + 0x58));
        uVar5 = FUN_05796eb0(lVar11,uVar5,DAT_091add20);
        uVar12 = CookingGraph_CustomerOrderGenerator_<>c__DisplayClass7_0__<BuildDish>g__TryFill_3
                           (lVar6,uVar5);
        if ((uVar12 & 1) == 0) break;
        iVar3 = iVar3 + -1;
        bVar1 = iVar4 < 2;
        iVar4 = iVar4 + -1;
        if (bVar1) goto LAB_044322a0;
      }
      lVar15 = *(long *)(lVar6 + 0x68);
      if (lVar15 == 0) {
        lVar15 = thunk_FUN_03f9944c(DAT_09178b98);
        FUN_05315754(lVar15,lVar6,DAT_091e83b8,0);
        *(long *)(lVar6 + 0x68) = lVar15;
        thunk_FUN_03f5d7b8(lVar6 + 0x68,lVar15);
      }
      iVar3 = iVar3 + -1;
      uVar12 = FUN_04ab2d14(lVar11,lVar15,DAT_091c9298);
      if ((uVar12 & 1) != 0) break;
    }
LAB_044322a0:
    lVar6 = thunk_FUN_03f9944c(DAT_09183bb0);
    CookingGraph_DishOrderData___ctor();
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = *puVar7;
      thunk_FUN_03f5d7b8();
      return lVar6;
    }
  }
LAB_044322d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

