// rea decompile_all
// name: CookingGraph.CompositeStructureTranslator$$BuildStructure
// address: 0x442124c
// body: available
// range: 0x442124c-0x4421a33 inclusive
// range: 0x4421a38-0x4421a3b inclusive
// range: 0x4421a40-0x4421a43 inclusive
// range: 0x4421a48-0x4421a4b inclusive
// range: 0x4421a50-0x4421a53 inclusive
// range: 0x4421a58-0x4421a5b inclusive
// range: 0x4421a60-0x4421a63 inclusive
// range: 0x4421a68-0x4421a6b inclusive
// range: 0x4421a70-0x4421a73 inclusive
// range: 0x4421a78-0x4421a7b inclusive
// range: 0x4421b28-0x4421d9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4421a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421a78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4421d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


long CookingGraph_CompositeStructureTranslator__BuildStructure
               (long param_1,undefined8 param_2,int param_3,long *param_4,long *param_5,
               long *param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long *local_98;
  long local_90;
  int local_84;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_09517f37 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091830b0);
    FUN_03f5c2a4(&DAT_091830f8);
    FUN_03f5c2a4(&DAT_0919fbd8);
    FUN_03f5c2a4(&DAT_0919fbe0);
    FUN_03f5c2a4(&DAT_0919fbd0);
    FUN_03f5c2a4(&DAT_09176b88);
    FUN_03f5c2a4(&DAT_09183bb0);
    FUN_03f5c2a4(&DAT_091a2798);
    FUN_03f5c2a4(&DAT_091a27a0);
    FUN_03f5c2a4(&DAT_091a27a8);
    FUN_03f5c2a4(&DAT_09184f18);
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b3f8);
    FUN_03f5c2a4(&DAT_0917b330);
    FUN_03f5c2a4(&DAT_0917b590);
    FUN_03f5c2a4(&DAT_0917b4f0);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_091ac5f8);
    FUN_03f5c2a4(&DAT_091aecb8);
    FUN_03f5c2a4(&DAT_091ac1f0);
    FUN_03f5c2a4(&DAT_091abfc0);
    FUN_03f5c2a4(&DAT_091acfd0);
    FUN_03f5c2a4(&DAT_091abbf8);
    FUN_03f5c2a4(&DAT_091ada20);
    FUN_03f5c2a4(&DAT_091ac1e8);
    FUN_03f5c2a4(&DAT_091ac5f0);
    FUN_03f5c2a4(&DAT_0917bfc0);
    FUN_03f5c2a4(&DAT_0917c090);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09517f37 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  local_84 = 0;
  local_90 = 0;
  if (param_3 < 0) {
    return 0;
  }
  lVar5 = CookingGraph_CompositeStructureTranslator__Member(1,param_3,param_2);
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918b378);
  }
  if (DAT_09516ea3 == '\0') {
    FUN_03f5c2a4(&DAT_0918b378);
    DAT_09516ea3 = '\x01';
  }
  if (*(int *)(DAT_0918b378 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar19 = *(undefined8 *)(*(long *)(DAT_0918b378 + 0xb8) + 0x10);
  lVar6 = thunk_FUN_03f9944c(DAT_09176b88);
  FUN_06fd76e8(lVar6,uVar19,DAT_0919fbd0);
  if (param_5 == (long *)0x0) {
LAB_04421d9c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar4 = 0;
  do {
    lVar13 = *param_5;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == DAT_0917b3f8) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04421534;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b3f8,0);
LAB_04421534:
    iVar2 = (*(code *)*puVar7)(param_5,puVar7[1]);
    if (iVar2 <= iVar4) {
      lVar6 = thunk_FUN_03f9944c(DAT_091830f8);
      CookingGraph_CustomerOrderData___ctor();
      lVar13 = thunk_FUN_03f9944c(DAT_0917bfc0);
      FUN_057e0400(lVar13,DAT_091ac1e8);
      lVar14 = thunk_FUN_03f9944c(DAT_091830b0);
      CookingGraph_CustomerData___ctor();
      lVar11 = thunk_FUN_03f9944c(DAT_0917c090);
      FUN_057e0400(lVar11,DAT_091ac5f0);
      lVar20 = thunk_FUN_03f9944c(DAT_09183bb0);
      CookingGraph_DishOrderData___ctor();
      if (lVar20 != 0) {
        *(long *)(lVar20 + 0x10) = lVar5;
        thunk_FUN_03f5d7b8();
        lVar9 = DAT_091ac5f8;
        if (lVar11 != 0) {
          lVar16 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar16 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar20;
              thunk_FUN_03f5d7b8(plVar8,lVar20);
            }
            else {
              FUN_057e0c68(lVar11,lVar20,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            if (lVar14 != 0) {
              *(long *)(lVar14 + 0x20) = lVar11;
              thunk_FUN_03f5d7b8((long *)(lVar14 + 0x20),lVar11);
              lVar11 = DAT_091ac1f0;
              if (lVar13 != 0) {
                lVar20 = *(long *)(lVar13 + 0x10);
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar20 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    plVar8 = (long *)(lVar20 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar8 = lVar14;
                    thunk_FUN_03f5d7b8(plVar8,lVar14);
                  }
                  else {
                    FUN_057e0c68(lVar13,lVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  if (lVar6 != 0) {
                    *(long *)(lVar6 + 0x10) = lVar13;
                    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x10),lVar13);
                    plVar8 = (long *)CookingGraph_CustomerOrderTranslator__ValidateGroupQuantities
                                               (lVar6,param_1);
                    if (plVar8 != (long *)0x0) {
                      lVar6 = *plVar8;
                      uVar17 = (ulong)*(ushort *)(lVar6 + 0x12e);
                      if (uVar17 == 0) goto LAB_04421d64;
                      piVar18 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                      goto LAB_04421d4c;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_04421d9c;
    }
    lVar13 = *param_5;
    uVar17 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == DAT_0917b590) {
          puVar7 = (undefined8 *)(lVar13 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04421598;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(param_5,DAT_0917b590,0);
LAB_04421598:
    lVar13 = (*(code *)*puVar7)(param_5,iVar4,puVar7[1]);
    if (param_6 == (long *)0x0) goto LAB_04421d9c;
    iVar2 = 0;
LAB_044215b4:
    lVar14 = *param_6;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == DAT_0917b378) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_04421600;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b378,0);
LAB_04421600:
    iVar3 = (*(code *)*puVar7)(param_6,puVar7[1]);
    if (iVar2 < iVar3) {
      lVar14 = *param_6;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == DAT_0917b510) {
            puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_04421660;
          }
          uVar17 = uVar17 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar17 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917b510,0);
LAB_04421660:
      iVar3 = (*(code *)*puVar7)(param_6,iVar2,puVar7[1]);
      if (iVar3 != iVar4) goto LAB_04421a28;
      plVar8 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
      System_Text_StringBuilder___ctor(plVar8,0);
      if ((lVar13 != 0) && (*(long *)(lVar13 + 0x18) != 0)) {
        FUN_057e185c(&local_a8,*(long *)(lVar13 + 0x18),DAT_091abfc0);
        local_70 = local_98;
        puStack_78 = puStack_a0;
        local_80 = local_a8;
        local_a8 = 0;
        lVar14 = lVar5;
        puStack_a0 = &local_80;
LAB_044216d8:
        do {
          lVar11 = lVar14;
          uVar17 = FUN_071bd28c(&local_80,DAT_091a27a0);
          plVar15 = local_70;
          lVar14 = DAT_09184f18;
          if ((uVar17 & 1) == 0) goto LAB_044218e8;
          if (local_70 == (long *)0x0) {
LAB_04421b44:
            FUN_071bd288(&local_80,DAT_091a2798);
            return 0;
          }
          lVar20 = *local_70;
          if (lVar20 == DAT_09184f18) {
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_84 = FUN_057e1a08(lVar9,local_70,DAT_091acfd0);
            uVar19 = 2;
          }
          else {
            if (lVar20 != DAT_091828a0) goto LAB_04421b44;
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *(long *)(*(long *)(param_1 + 0x30) + 0x18);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_84 = FUN_057e1a08(lVar9,local_70,DAT_091abbf8);
            uVar19 = 1;
          }
          if (local_84 < 0) goto LAB_04421b44;
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar3 = System_Text_StringBuilder__get_Length(plVar8,0);
          if (0 < iVar3) {
            System_Text_StringBuilder__Append(plVar8,0x2f,0);
          }
          uVar12 = 0x67;
          if (lVar20 != lVar14) {
            uVar12 = 99;
          }
          System_Text_StringBuilder__Append(plVar8,uVar12,0);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar10 = System_Int32__ToString(&local_84,uVar10,0);
          System_Text_StringBuilder__Append(plVar8,uVar10,0);
          uVar10 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar17 = FUN_06fd9fbc(lVar6,uVar10,&local_90,DAT_0919fbe0);
          lVar14 = local_90;
          if ((uVar17 & 1) == 0) {
            local_90 = CookingGraph_CompositeStructureTranslator__Member(uVar19,local_84,plVar15);
            lVar14 = DAT_091aecb8;
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(lVar11 + 0x28);
            if (lVar11 != 0) {
              lVar20 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar20 != 0) {
                uVar1 = *(uint *)(lVar11 + 0x18);
                if (uVar1 < *(uint *)(lVar20 + 0x18)) {
                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                  plVar15 = (long *)(lVar20 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar15 = local_90;
                  thunk_FUN_03f5d7b8(plVar15);
                }
                else {
                  FUN_057e0c68(lVar11,local_90,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                FUN_06fd8454(lVar6,uVar10,local_90,DAT_0919fbd8);
                lVar14 = local_90;
                goto LAB_044216d8;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        } while( true );
      }
      goto LAB_04421d9c;
    }
    iVar4 = iVar4 + 1;
  } while( true );
LAB_044218e8:
  FUN_071bd288(&local_80,DAT_091a2798);
  if (param_4 == (long *)0x0) goto LAB_04421d9c;
  lVar14 = *param_4;
  uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == DAT_0917b4f0) {
        puVar7 = (undefined8 *)(lVar14 + (long)*piVar18 * 0x10 + 0x138);
        goto LAB_04421960;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar7 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b4f0,0);
LAB_04421960:
  uVar19 = (*(code *)*puVar7)(param_4,iVar2,puVar7[1]);
  if (((param_1 == 0) || (*(long *)(param_1 + 0x30) == 0)) ||
     (lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar14 == 0)) goto LAB_04421d9c;
  iVar3 = FUN_057e1a08(lVar14,uVar19,DAT_091ada20);
  if (iVar3 < 0) {
    return 0;
  }
  if (lVar11 == 0) goto LAB_04421d9c;
  lVar14 = *(long *)(lVar11 + 0x28);
  uVar19 = CookingGraph_CompositeStructureTranslator__Member(0,iVar3,uVar19);
  if (lVar14 == 0) goto LAB_04421d9c;
  lVar11 = *(long *)(lVar14 + 0x10);
  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
  if (lVar11 == 0) goto LAB_04421d9c;
  uVar1 = *(uint *)(lVar14 + 0x18);
  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar19;
    thunk_FUN_03f5d7b8();
  }
  else {
    FUN_057e0c68(lVar14,uVar19,
                 *(undefined8 *)(*(long *)(*(long *)(DAT_091aecb8 + 0x20) + 0xc0) + 0x70));
  }
LAB_04421a28:
  iVar2 = iVar2 + 1;
  goto LAB_044215b4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar18 = piVar18 + 4;
    if (uVar17 == 0) break;
LAB_04421d4c:
    if (*(long *)(piVar18 + -2) == DAT_0917b330) {
      puVar7 = (undefined8 *)(lVar6 + (long)*piVar18 * 0x10 + 0x138);
      goto LAB_04421d80;
    }
  }
LAB_04421d64:
  puVar7 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917b330,0);
LAB_04421d80:
  iVar4 = (*(code *)*puVar7)(plVar8,puVar7[1]);
  if (iVar4 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}

