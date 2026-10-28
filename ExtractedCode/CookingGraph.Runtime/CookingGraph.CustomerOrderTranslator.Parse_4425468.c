// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$Parse
// address: 0x4425468
// body: available
// range: 0x4425468-0x4425aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44259e0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4425a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4425aa8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CustomerOrderTranslator__Parse(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long *plVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint local_64;
  
  if ((DAT_09517f52 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091830b0);
    FUN_03f5c2a4(&DAT_091830f8);
    FUN_03f5c2a4(&DAT_091ca728);
    FUN_03f5c2a4(&DAT_09179088);
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_0917b570);
    FUN_03f5c2a4(&DAT_091ac600);
    FUN_03f5c2a4(&DAT_091ac1f0);
    FUN_03f5c2a4(&DAT_091e8430);
    FUN_03f5c2a4(&DAT_0918f9b0);
    FUN_03f5c2a4(&DAT_091ffaa0);
    DAT_09517f52 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918f9b0);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    plVar15 = (long *)(lVar4 + 0x10);
    *plVar15 = param_1;
    thunk_FUN_03f5d7b8(plVar15,param_1);
    lVar5 = CookingGraph_LevelStringCompression__Decode(*plVar15);
    *plVar15 = lVar5;
    thunk_FUN_03f5d7b8(plVar15,lVar5);
    if (*plVar15 == 0) {
LAB_04425a4c:
      uVar14 = **(undefined8 **)(DAT_09535468 + 0xb8);
      thunk_FUN_03fc39d4(&DAT_09182d98);
      uVar8 = thunk_FUN_03f9944c();
      uVar10 = thunk_FUN_03fc39d4(&DAT_091ffaa8);
      CookingGraph_CookingGraphFormatException___ctor(uVar8,uVar10,0,uVar14);
      uVar10 = thunk_FUN_03fc39d4(&DAT_091c6fe8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar10);
    }
    lVar5 = thunk_FUN_03f9944c(DAT_091830f8);
    CookingGraph_CustomerOrderData___ctor();
    uVar6 = System_String__IsNullOrWhiteSpace(*plVar15,0);
    if ((uVar6 & 1) != 0) {
      return lVar5;
    }
    lVar16 = *plVar15;
    lVar7 = FUN_03f5c394(DAT_0917fcc8,1);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) != 0) {
        *(undefined2 *)(lVar7 + 0x20) = 0x7c;
        if ((lVar16 == 0) || (lVar7 = System_String__Split(lVar16,lVar7,0,0), lVar7 == 0))
        goto LAB_04425a20;
        uVar11 = *(uint *)(lVar7 + 0x18);
        if ((int)uVar11 < 1) {
          return lVar5;
        }
        uVar20 = 0;
        while (uVar20 < uVar11) {
          lVar17 = *(long *)(lVar7 + (long)(int)uVar20 * 8 + 0x20);
          lVar16 = FUN_03f5c394(DAT_0917fcc8,1);
          if (lVar16 == 0) goto LAB_04425a20;
          if (*(int *)(lVar16 + 0x18) == 0) break;
          *(undefined2 *)(lVar16 + 0x20) = 0x3b;
          if ((lVar17 == 0) || (lVar16 = System_String__Split(lVar17,lVar16,0,0), lVar16 == 0))
          goto LAB_04425a20;
          if (2 < (ulong)*(uint *)(lVar16 + 0x18) - 4) {
            local_64 = *(uint *)(lVar16 + 0x18);
            uVar8 = FUN_03f5c42c(DAT_09535420,&local_64);
            uVar8 = System_String__Format(DAT_091ffaa0,uVar8,0);
            lVar4 = *plVar15;
            if (lVar4 == 0) goto LAB_04425a20;
            uVar1 = System_String__IndexOf(lVar4,lVar17,4,0);
            CookingGraph_CustomerOrderTranslator__Fail(uVar8,lVar4,uVar1);
            goto LAB_04425a4c;
          }
          lVar17 = thunk_FUN_03f9944c(DAT_091830b0);
          CookingGraph_CustomerData___ctor();
          if (*(int *)(lVar16 + 0x18) == 0) break;
          uVar1 = CookingGraph_CustomerOrderTranslator__ParseInt
                            (*(undefined8 *)(lVar16 + 0x20),*plVar15);
          if (lVar17 == 0) goto LAB_04425a20;
          *(undefined4 *)(lVar17 + 0x10) = uVar1;
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffe) == 0) break;
          uVar1 = CookingGraph_CustomerOrderTranslator__ParseInt
                            (*(undefined8 *)(lVar16 + 0x28),*plVar15);
          uVar11 = *(uint *)(lVar16 + 0x18);
          *(undefined4 *)(lVar17 + 0x14) = uVar1;
          if (uVar11 < 3) break;
          uVar1 = CookingGraph_CustomerOrderTranslator__ParseInt
                            (*(undefined8 *)(lVar16 + 0x30),*plVar15);
          *(undefined4 *)(lVar17 + 0x18) = uVar1;
          if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) break;
          uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar16 + 0x38),0);
          if ((uVar6 & 1) == 0) {
            if ((*(uint *)(lVar16 + 0x18) & 0xfffffffc) == 0) break;
            lVar18 = *(long *)(lVar17 + 0x20);
            uVar8 = CookingGraph_CustomerOrderTranslator__SplitDishes
                              (*(undefined8 *)(lVar16 + 0x38),*plVar15);
            lVar19 = *(long *)(lVar4 + 0x18);
            if (lVar19 == 0) {
              lVar19 = thunk_FUN_03f9944c(DAT_09179088);
              FUN_05324070(lVar19,lVar4,DAT_091e8430,0);
              *(long *)(lVar4 + 0x18) = lVar19;
              thunk_FUN_03f5d7b8(lVar4 + 0x18,lVar19);
            }
            uVar8 = FUN_04af8044(uVar8,lVar19,DAT_091ca728);
            if (lVar18 == 0) goto LAB_04425a20;
            FUN_057e0e78(lVar18,uVar8,DAT_091ac600);
          }
          uVar11 = (uint)*(undefined8 *)(lVar16 + 0x18);
          if (4 < (int)uVar11) {
            uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar16 + 0x40),0);
            uVar11 = *(uint *)(lVar16 + 0x18);
            if ((uVar6 & 1) == 0) {
              *(undefined1 *)(lVar17 + 0x28) = 1;
              if (uVar11 < 5) break;
              uVar1 = CookingGraph_CustomerOrderTranslator__ParseInt
                                (*(undefined8 *)(lVar16 + 0x40),*plVar15);
              uVar11 = *(uint *)(lVar16 + 0x18);
              *(undefined4 *)(lVar17 + 0x2c) = uVar1;
            }
          }
          if ((uVar11 == 6) &&
             (uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar16 + 0x48),0),
             (uVar6 & 1) == 0)) {
            uVar11 = *(uint *)(lVar16 + 0x18);
            *(undefined1 *)(lVar17 + 0x30) = 1;
            if (uVar11 < 6) break;
            iVar2 = CookingGraph_CustomerOrderTranslator__ParseInt
                              (*(undefined8 *)(lVar16 + 0x48),*plVar15);
            *(int *)(lVar17 + 0x34) = iVar2;
            if ((param_2 != (long *)0x0) && (-1 < iVar2)) {
              lVar16 = *param_2;
              uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_0917b3d8) {
                    puVar9 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_04425914;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_04425914:
              iVar3 = (*(code *)*puVar9)(param_2,puVar9[1]);
              if (iVar2 < iVar3) {
                lVar16 = *param_2;
                uVar1 = *(undefined4 *)(lVar17 + 0x34);
                uVar6 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar6 != 0) {
                  piVar13 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == DAT_0917b570) {
                      puVar9 = (undefined8 *)(lVar16 + (long)*piVar13 * 0x10 + 0x138);
                      goto LAB_04425980;
                    }
                    uVar6 = uVar6 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar6 != 0);
                }
                puVar9 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b570,0);
LAB_04425980:
                lVar16 = (*(code *)*puVar9)(param_2,uVar1,puVar9[1]);
                if (lVar16 == 0) {
                  lVar16 = **(long **)(DAT_09535468 + 0xb8);
                }
                *(long *)(lVar17 + 0x38) = lVar16;
                thunk_FUN_03f5d7b8();
              }
            }
          }
          lVar16 = DAT_091ac1f0;
          if ((lVar5 == 0) || (lVar19 = *(long *)(lVar5 + 0x10), lVar19 == 0)) goto LAB_04425a20;
          lVar18 = *(long *)(lVar19 + 0x10);
          *(int *)(lVar19 + 0x1c) = *(int *)(lVar19 + 0x1c) + 1;
          if (lVar18 == 0) goto LAB_04425a20;
          uVar11 = *(uint *)(lVar19 + 0x18);
          if (uVar11 < *(uint *)(lVar18 + 0x18)) {
            *(uint *)(lVar19 + 0x18) = uVar11 + 1;
            plVar12 = (long *)(lVar18 + (long)(int)uVar11 * 8 + 0x20);
            *plVar12 = lVar17;
            thunk_FUN_03f5d7b8(plVar12,lVar17);
          }
          else {
            FUN_057e0c68(lVar19,lVar17,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = *(uint *)(lVar7 + 0x18);
          uVar20 = uVar20 + 1;
          if ((int)uVar11 <= (int)uVar20) {
            return lVar5;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_04425a20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

