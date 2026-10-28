// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$.cctor
// address: 0x407fb40
// body: available
// range: 0x407fb40-0x4080213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4080208 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x408020c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4080210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaPieceTable___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_09515c61 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f3728);
    FUN_03f5c2a4(&DAT_091f3750);
    FUN_03f5c2a4(&DAT_091f3798);
    FUN_03f5c2a4(&DAT_091f37e8);
    FUN_03f5c2a4(&DAT_091f37f8);
    FUN_03f5c2a4(&DAT_091f3808);
    FUN_03f5c2a4(&DAT_09222c30);
    FUN_03f5c2a4(&DAT_0921f0d0);
    FUN_03f5c2a4(&DAT_09218538);
    FUN_03f5c2a4(&DAT_092240c0);
    FUN_03f5c2a4(&DAT_09220288);
    FUN_03f5c2a4(&DAT_092240c8);
    FUN_03f5c2a4(&DAT_0921f3c8);
    FUN_03f5c2a4(&DAT_09217ee0);
    FUN_03f5c2a4(&DAT_09218d20);
    FUN_03f5c2a4(&DAT_09223050);
    FUN_03f5c2a4(&DAT_092230b0);
    FUN_03f5c2a4(&DAT_0921e618);
    FUN_03f5c2a4(&DAT_0921e6a0);
    FUN_03f5c2a4(&DAT_09222f50);
    FUN_03f5c2a4(&DAT_0921c860);
    FUN_03f5c2a4(&DAT_09217810);
    FUN_03f5c2a4(&DAT_0921b568);
    FUN_03f5c2a4(&DAT_0921d140);
    FUN_03f5c2a4(&DAT_09218bf0);
    FUN_03f5c2a4(&DAT_09218bd8);
    DAT_09515c61 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,0x17);
  if (lVar1 == 0) goto LAB_04080210;
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = DAT_09223050;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = DAT_0921f0d0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = DAT_0921b568;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar1 + 0x38) = DAT_092240c8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = DAT_092230b0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
            if (5 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x48) = DAT_09218bd8;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
              if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                *(undefined8 *)(lVar1 + 0x58) = DAT_0921e6a0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                if (9 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x68) = DAT_0921e618;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68));
                  if (10 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x70) = DAT_09218538;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                    if (0xb < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x78) = DAT_09220288;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78));
                      if (0xc < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x80) = DAT_09222c30;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80));
                        if (0xd < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x88) = DAT_09218d20;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x88));
                          if (0xe < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x90) = DAT_09217ee0;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90));
                            if ((*(uint *)(lVar1 + 0x18) & 0xfffffff0) != 0) {
                              *(undefined8 *)(lVar1 + 0x98) = DAT_09218bf0;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x98));
                              if (0x10 < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0xa0) = DAT_09222f50;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa0));
                                if (0x11 < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined8 *)(lVar1 + 0xa8) = DAT_0921f3c8;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa8));
                                  if (0x12 < *(uint *)(lVar1 + 0x18)) {
                                    *(undefined8 *)(lVar1 + 0xb0) = DAT_0921d140;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb0));
                                    if (0x13 < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0xb8) = DAT_0921c860;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb8));
                                      if (0x15 < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 200) = DAT_092240c0;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 200));
                                        if (0x16 < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0xd0) = DAT_09217810;
                                          thunk_FUN_03f5d7b8();
                                          **(long **)(DAT_09188f10 + 0xb8) = lVar1;
                                          thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09188f10 + 0xb8),
                                                             lVar1);
                                          lVar1 = FUN_03f5c394(DAT_091801b8,3);
                                          if (lVar1 == 0) {
LAB_04080210:
                    /* WARNING: Subroutine does not return */
                                            FUN_03f5c550();
                                          }
                                          if ((1 < *(uint *)(lVar1 + 0x18)) &&
                                             (*(undefined4 *)(lVar1 + 0x24) = 1,
                                             *(uint *)(lVar1 + 0x18) != 2)) {
                                            lVar2 = *(long *)(DAT_09188f10 + 0xb8);
                                            *(undefined4 *)(lVar1 + 0x28) = 2;
                                            *(long *)(lVar2 + 8) = lVar1;
                                            thunk_FUN_03f5d7b8();
                                            uVar3 = FUN_03f5c394(DAT_091801b8,3);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      (uVar3,DAT_091f3808,0);
                                            puVar4 = (undefined8 *)
                                                     (*(long *)(DAT_09188f10 + 0xb8) + 0x10);
                                            *puVar4 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar4,uVar3);
                                            uVar3 = FUN_03f5c394(DAT_091801b8,4);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      (uVar3,DAT_091f37f8,0);
                                            puVar4 = (undefined8 *)
                                                     (*(long *)(DAT_09188f10 + 0xb8) + 0x18);
                                            *puVar4 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar4,uVar3);
                                            uVar3 = FUN_03f5c394(DAT_091801b8,5);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      (uVar3,DAT_091f3798,0);
                                            puVar4 = (undefined8 *)
                                                     (*(long *)(DAT_09188f10 + 0xb8) + 0x20);
                                            *puVar4 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar4,uVar3);
                                            uVar3 = FUN_03f5c394(DAT_091801b8,4);
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                      (uVar3,DAT_091f3728,0);
                                            puVar4 = (undefined8 *)
                                                     (*(long *)(DAT_09188f10 + 0xb8) + 0x28);
                                            *puVar4 = uVar3;
                                            thunk_FUN_03f5d7b8(puVar4,uVar3);
                                            lVar1 = FUN_03f5c394(DAT_091801b8,2);
                                            if (lVar1 == 0) goto LAB_04080210;
                                            if ((*(int *)(lVar1 + 0x18) != 0) &&
                                               (*(undefined4 *)(lVar1 + 0x20) = 0x15,
                                               *(int *)(lVar1 + 0x18) != 1)) {
                                              lVar2 = *(long *)(DAT_09188f10 + 0xb8);
                                              *(undefined4 *)(lVar1 + 0x24) = 0x16;
                                              *(long *)(lVar2 + 0x30) = lVar1;
                                              thunk_FUN_03f5d7b8();
                                              uVar3 = FUN_03f5c394(DAT_091801b8,6);
                                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                        (uVar3,DAT_091f3750,0);
                                              puVar4 = (undefined8 *)
                                                       (*(long *)(DAT_09188f10 + 0xb8) + 0x38);
                                              *puVar4 = uVar3;
                                              thunk_FUN_03f5d7b8(puVar4,uVar3);
                                              uVar3 = FUN_03f5c394(DAT_091801b8,6);
                                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                        (uVar3,DAT_091f37e8,0);
                                              puVar4 = (undefined8 *)
                                                       (*(long *)(DAT_09188f10 + 0xb8) + 0x40);
                                              *puVar4 = uVar3;
                                              thunk_FUN_03f5d7b8(puVar4,uVar3);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

