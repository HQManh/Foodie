// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$ParseNode
// address: 0x4428a54
// body: available
// range: 0x4428a54-0x4428f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4428ed4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
CookingGraph_CustomerOrderTranslator__ParseNode(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  int extraout_w8;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  
  puVar14 = &DAT_09517000;
  if ((DAT_09517f57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aecb8);
    FUN_03f5c2a4(&DAT_09188cd8);
    FUN_03f5c2a4(&DAT_09201ce8);
    FUN_03f5c2a4(&DAT_09201d10);
    FUN_03f5c2a4(&DAT_09201df0);
    FUN_03f5c2a4(&DAT_09201cf8);
    FUN_03f5c2a4(&DAT_09201df8);
    FUN_03f5c2a4(&DAT_09201d00);
    FUN_03f5c2a4(&DAT_09201dc8);
    DAT_09517f57 = 1;
  }
  if ((param_2 == 0) || (param_1 == 0)) {
LAB_04428ed4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = (ulong)*(uint *)(param_2 + 0x10);
  if ((int)*(uint *)(param_2 + 0x10) < *(int *)(param_1 + 0x10)) {
    sVar2 = System_String__get_Chars(param_1,uVar9,0);
    uVar9 = (ulong)*(uint *)(param_2 + 0x10);
    if (sVar2 == 0x7b) {
      iVar10 = *(int *)(param_1 + 0x10);
      uVar1 = *(uint *)(param_2 + 0x10) + 1;
      *(uint *)(param_2 + 0x10) = uVar1;
      if ((int)uVar1 < iVar10) {
        sVar2 = System_String__get_Chars(param_1,uVar1,0);
        if ((sVar2 == 99) ||
           (sVar2 = System_String__get_Chars(param_1,*(undefined4 *)(param_2 + 0x10),0),
           sVar2 == 0x67)) {
          iVar10 = *(int *)(param_2 + 0x10);
          *(int *)(param_2 + 0x10) = iVar10 + 1;
          sVar2 = System_String__get_Chars(param_1,iVar10,0);
          uVar1 = *(uint *)(param_2 + 0x10);
          puVar14 = (undefined1 *)(ulong)uVar1;
          uVar4 = 1;
          if (sVar2 != 99) {
            uVar4 = 2;
          }
          uVar8 = uVar1;
          if ((int)uVar1 < *(int *)(param_1 + 0x10)) {
            do {
              uVar3 = System_String__get_Chars(param_1,uVar8,0);
              if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09535460);
              }
              uVar9 = System_Char__IsDigit(uVar3,0);
              uVar8 = *(uint *)(param_2 + 0x10);
              if ((uVar9 & 1) == 0) break;
              iVar10 = *(int *)(param_1 + 0x10);
              uVar8 = uVar8 + 1;
              *(uint *)(param_2 + 0x10) = uVar8;
            } while ((int)uVar8 < iVar10);
            if (uVar8 - uVar1 != 0) {
              uVar5 = System_String__Substring(param_1,uVar1,uVar8 - uVar1,0);
              uVar3 = CookingGraph_CustomerOrderTranslator__ParseInt(uVar5,param_3);
              uVar9 = (ulong)*(uint *)(param_2 + 0x10);
              if ((int)*(uint *)(param_2 + 0x10) < *(int *)(param_1 + 0x10)) {
                sVar2 = System_String__get_Chars(param_1,uVar9,0);
                uVar5 = DAT_09188cd8;
                uVar9 = (ulong)*(uint *)(param_2 + 0x10);
                if (sVar2 == 0x3a) {
                  *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) + 1;
                  puVar14 = (undefined1 *)thunk_FUN_03f9944c(uVar5);
                  CookingGraph_OrderMemberData___ctor();
                  if (puVar14 == (undefined1 *)0x0) goto LAB_04428ed4;
                  uVar1 = *(uint *)(param_2 + 0x10);
                  uVar9 = (ulong)uVar1;
                  iVar10 = *(int *)(param_1 + 0x10);
                  *(undefined4 *)(puVar14 + 0x10) = uVar4;
                  *(undefined4 *)(puVar14 + 0x14) = uVar3;
                  *(undefined4 *)(puVar14 + 0x18) = uVar3;
                  if ((int)uVar1 < iVar10) {
                    do {
                      sVar2 = System_String__get_Chars(param_1,uVar9,0);
                      if (sVar2 != 0x7b) {
                        uVar1 = *(uint *)(param_2 + 0x10);
                        uVar8 = uVar1;
                        if ((int)uVar1 < *(int *)(param_1 + 0x10)) {
                          do {
                            uVar4 = System_String__get_Chars(param_1,uVar8,0);
                            if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_09535460);
                            }
                            uVar9 = System_Char__IsDigit(uVar4,0);
                            uVar8 = *(uint *)(param_2 + 0x10);
                            if ((uVar9 & 1) == 0) break;
                            iVar10 = *(int *)(param_1 + 0x10);
                            uVar8 = uVar8 + 1;
                            *(uint *)(param_2 + 0x10) = uVar8;
                          } while ((int)uVar8 < iVar10);
                          if (uVar8 - uVar1 != 0) {
                            uVar5 = System_String__Substring(param_1,uVar1,uVar8 - uVar1,0);
                            uVar4 = CookingGraph_CustomerOrderTranslator__ParseInt(uVar5,param_3);
                            lVar15 = *(long *)(puVar14 + 0x28);
                            lVar6 = thunk_FUN_03f9944c(DAT_09188cd8);
                            CookingGraph_OrderMemberData___ctor();
                            if (lVar6 != 0) {
                              *(undefined4 *)(lVar6 + 0x10) = 0;
                              *(undefined4 *)(lVar6 + 0x14) = uVar4;
                              *(undefined4 *)(lVar6 + 0x18) = uVar4;
                              lVar12 = DAT_091aecb8;
                              if (lVar15 != 0) {
                                lVar11 = *(long *)(lVar15 + 0x10);
                                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                if (lVar11 != 0) {
                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                  if (*(uint *)(lVar11 + 0x18) <= uVar1) {
                                    lVar12 = *(long *)(lVar12 + 0x20);
                                    goto LAB_04428e20;
                                  }
                                  *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                  plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar7 = lVar6;
                                  goto LAB_04428e00;
                                }
                              }
                            }
                            goto LAB_04428ed4;
                          }
                        }
                        puVar13 = &DAT_09201df8;
                        goto LAB_04428ee8;
                      }
                      lVar15 = *(long *)(puVar14 + 0x28);
                      lVar6 = CookingGraph_CustomerOrderTranslator__ParseNode
                                        (param_1,param_2,param_3);
                      lVar12 = DAT_091aecb8;
                      if (lVar15 == 0) goto LAB_04428ed4;
                      lVar11 = *(long *)(lVar15 + 0x10);
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar11 == 0) goto LAB_04428ed4;
                      uVar1 = *(uint *)(lVar15 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                        plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar7 = lVar6;
LAB_04428e00:
                        thunk_FUN_03f5d7b8(plVar7,lVar6);
                      }
                      else {
                        lVar12 = *(long *)(lVar12 + 0x20);
LAB_04428e20:
                        FUN_057e0c68(lVar15,lVar6,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x70));
                      }
                      uVar9 = (ulong)*(uint *)(param_2 + 0x10);
                      iVar10 = *(int *)(param_1 + 0x10);
                      if (iVar10 <= (int)*(uint *)(param_2 + 0x10)) goto LAB_04428e84;
                      sVar2 = System_String__get_Chars(param_1,uVar9,0);
                      uVar9 = (ulong)*(uint *)(param_2 + 0x10);
                      iVar10 = *(int *)(param_1 + 0x10);
                      if (sVar2 != 0x2e) goto LAB_04428e84;
                      uVar1 = *(uint *)(param_2 + 0x10) + 1;
                      uVar9 = (ulong)uVar1;
                      *(uint *)(param_2 + 0x10) = uVar1;
                    } while ((int)uVar1 < iVar10);
                  }
                  puVar13 = &DAT_09201dc8;
                  goto LAB_04428e78;
                }
              }
              puVar13 = &DAT_09201ce8;
              goto LAB_04428e78;
            }
          }
          puVar13 = &DAT_09201df0;
LAB_04428ee8:
          uVar9 = (ulong)uVar1;
          CookingGraph_CustomerOrderTranslator__Fail(*puVar13,param_3);
          goto LAB_04428ef0;
        }
        uVar1 = *(uint *)(param_2 + 0x10);
      }
      uVar9 = (ulong)uVar1;
      puVar13 = &DAT_09201cf8;
      goto LAB_04428e78;
    }
  }
LAB_04428ef0:
  puVar13 = &DAT_09201d00;
LAB_04428e78:
  do {
    CookingGraph_CustomerOrderTranslator__Fail(*puVar13,param_3);
    iVar10 = extraout_w8;
LAB_04428e84:
    if ((int)uVar9 < iVar10) {
      sVar2 = System_String__get_Chars(param_1,uVar9 & 0xffffffff,0);
      uVar9 = (ulong)*(uint *)(param_2 + 0x10);
      if (sVar2 == 0x7d) {
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) + 1;
        return puVar14;
      }
    }
    puVar13 = &DAT_09201d10;
  } while( true );
}

