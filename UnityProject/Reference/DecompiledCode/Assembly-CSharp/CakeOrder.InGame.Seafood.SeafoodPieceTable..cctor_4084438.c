// rea decompile_all
// name: CakeOrder.InGame.Seafood.SeafoodPieceTable$$.cctor
// address: 0x4084438
// body: available
// range: 0x4084438-0x4084dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4084dcc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4084dd0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4084dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Seafood_SeafoodPieceTable___cctor(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((DAT_09515c8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_0918a7b8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f3708);
    FUN_03f5c2a4(&DAT_091f3720);
    FUN_03f5c2a4(&DAT_091f3770);
    FUN_03f5c2a4(&DAT_091f3778);
    FUN_03f5c2a4(&DAT_091f37b0);
    FUN_03f5c2a4(&DAT_091f37b8);
    FUN_03f5c2a4(&DAT_0917fb48);
    FUN_03f5c2a4(&DAT_091807b0);
    FUN_03f5c2a4(&DAT_09220880);
    FUN_03f5c2a4(&DAT_0921ea50);
    FUN_03f5c2a4(&DAT_09221e70);
    FUN_03f5c2a4(&DAT_092188f8);
    FUN_03f5c2a4(&DAT_092189c0);
    FUN_03f5c2a4(&DAT_0921f188);
    FUN_03f5c2a4(&DAT_09218d10);
    FUN_03f5c2a4(&DAT_09218d18);
    FUN_03f5c2a4(&DAT_0921ea48);
    FUN_03f5c2a4(&DAT_0921ea58);
    FUN_03f5c2a4(&DAT_09220f00);
    FUN_03f5c2a4(&DAT_092220c0);
    FUN_03f5c2a4(&DAT_09221f70);
    FUN_03f5c2a4(&DAT_0921c7d0);
    FUN_03f5c2a4(&DAT_0921c848);
    FUN_03f5c2a4(&DAT_0921cc88);
    FUN_03f5c2a4(&DAT_09218c48);
    FUN_03f5c2a4(&DAT_092230c0);
    FUN_03f5c2a4(&DAT_09218998);
    FUN_03f5c2a4(&DAT_0921e050);
    FUN_03f5c2a4(&DAT_09219af8);
    FUN_03f5c2a4(&DAT_0921e6a8);
    FUN_03f5c2a4(&DAT_09218c60);
    FUN_03f5c2a4(&DAT_0921a758);
    FUN_03f5c2a4(&DAT_0921e610);
    FUN_03f5c2a4(&DAT_092233a0);
    FUN_03f5c2a4(&DAT_0921be68);
    FUN_03f5c2a4(&DAT_092189a0);
    FUN_03f5c2a4(&DAT_09221f68);
    FUN_03f5c2a4(&DAT_0921e620);
    FUN_03f5c2a4(&DAT_09220ad0);
    FUN_03f5c2a4(&DAT_0921be60);
    DAT_09515c8d = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,0x1a);
  if (lVar1 == 0) goto LAB_04084dd4;
  if (*(int *)(lVar1 + 0x18) != 0) {
    *(undefined8 *)(lVar1 + 0x20) = DAT_09218998;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar1 + 0x28) = DAT_0921cc88;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
      if (2 < *(uint *)(lVar1 + 0x18)) {
        *(undefined8 *)(lVar1 + 0x30) = DAT_0921f188;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar1 + 0x38) = DAT_0921a758;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
          if (4 < *(uint *)(lVar1 + 0x18)) {
            *(undefined8 *)(lVar1 + 0x40) = DAT_092188f8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
            if (5 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x48) = DAT_0921e6a8;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
              if (6 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x50) = DAT_09218c60;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                  *(undefined8 *)(lVar1 + 0x58) = DAT_092220c0;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                  if (8 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x60) = DAT_09220880;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                    if (9 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x68) = DAT_0921ea48;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68));
                      if (10 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x70) = DAT_0921ea58;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                        if (0xb < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x78) = DAT_0921e050;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78));
                          if (0xc < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x80) = DAT_09221e70;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80));
                            if (0xd < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x88) = DAT_09221f70;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x88));
                              if (0xe < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0x90) = DAT_092230c0;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90));
                                if ((*(uint *)(lVar1 + 0x18) & 0xfffffff0) != 0) {
                                  *(undefined8 *)(lVar1 + 0x98) = DAT_09218d18;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x98));
                                  if (0x10 < *(uint *)(lVar1 + 0x18)) {
                                    *(undefined8 *)(lVar1 + 0xa0) = DAT_0921be68;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa0));
                                    if (0x11 < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0xa8) = DAT_09218c48;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa8));
                                      if (0x12 < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 0xb0) = DAT_0921e610;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb0));
                                        if (0x13 < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0xb8) = DAT_0921e620;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb8));
                                          if (0x14 < *(uint *)(lVar1 + 0x18)) {
                                            *(undefined8 *)(lVar1 + 0xc0) = DAT_09220ad0;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xc0));
                                            if (0x15 < *(uint *)(lVar1 + 0x18)) {
                                              *(undefined8 *)(lVar1 + 200) = DAT_092189c0;
                                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 200));
                                              if (0x16 < *(uint *)(lVar1 + 0x18)) {
                                                *(undefined8 *)(lVar1 + 0xd0) = DAT_09219af8;
                                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xd0));
                                                if (0x17 < *(uint *)(lVar1 + 0x18)) {
                                                  *(undefined8 *)(lVar1 + 0xd8) = DAT_09220f00;
                                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0xe0) = DAT_0921be60;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xe0))
                                                    ;
                                                    if (0x19 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0xe8) = DAT_0921c7d0;
                                                      thunk_FUN_03f5d7b8();
                                                      **(long **)(DAT_0918a7b8 + 0xb8) = lVar1;
                                                      thunk_FUN_03f5d7b8(*(undefined8 *)
                                                                          (DAT_0918a7b8 + 0xb8),
                                                                         lVar1);
                                                      lVar1 = FUN_03f5c394(DAT_091805f8,6);
                                                      if (lVar1 == 0) goto LAB_04084dd4;
                                                      if (*(int *)(lVar1 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar1 + 0x20) = DAT_0921c848
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar1 + 0x20));
                                                        if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe)
                                                            != 0) {
                                                          *(undefined8 *)(lVar1 + 0x28) =
                                                               DAT_092233a0;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar1 + 0x28));
                                                          if (2 < *(uint *)(lVar1 + 0x18)) {
                                                            *(undefined8 *)(lVar1 + 0x30) =
                                                                 DAT_092189a0;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar1 + 0x30));
                                                            if ((*(uint *)(lVar1 + 0x18) &
                                                                0xfffffffc) != 0) {
                                                              *(undefined8 *)(lVar1 + 0x38) =
                                                                   DAT_09221f68;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar1 + 0x38));
                                                              if (4 < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x40) =
                                                                     DAT_0921ea50;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar1 + 0x40));
                                                                if (5 < *(uint *)(lVar1 + 0x18)) {
                                                                  *(undefined8 *)(lVar1 + 0x48) =
                                                                       DAT_09218d10;
                                                                  thunk_FUN_03f5d7b8();
                                                                  plVar2 = (long *)(*(long *)(
                                                  DAT_0918a7b8 + 0xb8) + 8);
                                                  *plVar2 = lVar1;
                                                  thunk_FUN_03f5d7b8(plVar2,lVar1);
                                                  uVar3 = FUN_03f5c394(DAT_091801b8,6);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f37b0,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_0918a7b8 + 0xb8) + 0x10);
                                                  *puVar4 = uVar3;
                                                  thunk_FUN_03f5d7b8(puVar4,uVar3);
                                                  lVar1 = FUN_03f5c394(DAT_0917fb48,6);
                                                  uVar3 = FUN_03f5c394(DAT_091807b0,0xc);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f3708,0);
                                                  if (lVar1 == 0) {
LAB_04084dd4:
                    /* WARNING: Subroutine does not return */
                                                    FUN_03f5c550();
                                                  }
                                                  if (*(int *)(lVar1 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar1 + 0x20) = uVar3;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),
                                                                       uVar3);
                                                    uVar3 = FUN_03f5c394(DAT_091807b0,0x1b);
                                                                                                        
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f3720,0);
                                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar1 + 0x28) = uVar3;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),
                                                                       uVar3);
                                                    uVar3 = FUN_03f5c394(DAT_091807b0,6);
                                                                                                        
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f37b8,0);
                                                  if (2 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x30) = uVar3;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),
                                                                       uVar3);
                                                    lVar5 = FUN_03f5c394(DAT_091807b0,1);
                                                    if (lVar5 == 0) goto LAB_04084dd4;
                                                    if (*(int *)(lVar5 + 0x18) != 0) {
                                                      *(undefined4 *)(lVar5 + 0x20) = 0x2002000;
                                                      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) !=
                                                          0) {
                                                        *(long *)(lVar1 + 0x38) = lVar5;
                                                        thunk_FUN_03f5d7b8((long *)(lVar1 + 0x38));
                                                        uVar3 = FUN_03f5c394(DAT_091807b0,4);
                                                                                                                
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f3778,0);
                                                  if (4 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x40) = uVar3;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40),
                                                                       uVar3);
                                                    uVar3 = FUN_03f5c394(DAT_091807b0,4);
                                                                                                        
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f3770,0);
                                                  if (5 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x48) = uVar3;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48),
                                                                       uVar3);
                                                    plVar2 = (long *)(*(long *)(DAT_0918a7b8 + 0xb8)
                                                                     + 0x18);
                                                    *plVar2 = lVar1;
                                                    thunk_FUN_03f5d7b8(plVar2,lVar1);
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

