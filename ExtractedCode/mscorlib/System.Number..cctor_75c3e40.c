// rea decompile_all
// name: System.Number$$.cctor
// address: 0x75c3e40
// body: available
// range: 0x75c3e40-0x75c4953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c4948 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75c494c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c4950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number___cctor(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_09521d7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b0);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188a70);
    FUN_03f5c2a4(&DAT_091804c8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f4188);
    FUN_03f5c2a4(&DAT_091f42a0);
    FUN_03f5c2a4(&DAT_091f42c0);
    FUN_03f5c2a4(&DAT_091f4348);
    FUN_03f5c2a4(&DAT_091f4420);
    FUN_03f5c2a4(&DAT_091807b8);
    FUN_03f5c2a4(&DAT_091f7280);
    FUN_03f5c2a4(&DAT_091f7278);
    FUN_03f5c2a4(&DAT_091f7260);
    FUN_03f5c2a4(&DAT_091f6f80);
    FUN_03f5c2a4(&DAT_091f8a68);
    FUN_03f5c2a4(&DAT_091f7270);
    FUN_03f5c2a4(&DAT_091f8a98);
    FUN_03f5c2a4(&DAT_091f7f80);
    FUN_03f5c2a4(&DAT_091f70a8);
    FUN_03f5c2a4(&DAT_091f6f58);
    FUN_03f5c2a4(&DAT_091f8aa8);
    FUN_03f5c2a4(&DAT_091f70b0);
    FUN_03f5c2a4(&DAT_091f6f88);
    FUN_03f5c2a4(&DAT_091f6f90);
    FUN_03f5c2a4(&DAT_091f6f78);
    FUN_03f5c2a4(&DAT_091f7268);
    FUN_03f5c2a4(&DAT_091f6f50);
    FUN_03f5c2a4(&DAT_091f7f90);
    FUN_03f5c2a4(&DAT_091f70c8);
    FUN_03f5c2a4(&DAT_091f6f48);
    FUN_03f5c2a4(&DAT_091f70b8);
    FUN_03f5c2a4(&DAT_091f7258);
    FUN_03f5c2a4(&DAT_091f6f60);
    FUN_03f5c2a4(&DAT_091f8a48);
    FUN_03f5c2a4(&DAT_091f6ed0);
    FUN_03f5c2a4(&DAT_091f6ed8);
    FUN_03f5c2a4(&DAT_091f8aa0);
    FUN_03f5c2a4(&DAT_091f8a80);
    FUN_03f5c2a4(&DAT_091f6f98);
    FUN_03f5c2a4(&DAT_091f8a78);
    FUN_03f5c2a4(&DAT_091f6ec8);
    FUN_03f5c2a4(&DAT_091f8a70);
    FUN_03f5c2a4(&DAT_091f7f98);
    FUN_03f5c2a4(&DAT_091f8a90);
    FUN_03f5c2a4(&DAT_091f7f78);
    FUN_03f5c2a4(&DAT_091f6eb8);
    FUN_03f5c2a4(&DAT_091f70d8);
    FUN_03f5c2a4(&DAT_091f6ec0);
    FUN_03f5c2a4(&DAT_091f8a88);
    FUN_03f5c2a4(&DAT_091f70c0);
    FUN_03f5c2a4(&DAT_091f7f88);
    DAT_09521d7d = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,4);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = DAT_091f70c0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = DAT_091f6f48;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = DAT_091f70a8;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = DAT_091f6eb8;
            thunk_FUN_03f5d7b8();
            **(long **)(DAT_09188a70 + 0xb8) = lVar1;
            thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09188a70 + 0xb8),lVar1);
            lVar1 = FUN_03f5c394(DAT_091805f8,0x10);
            if (lVar1 == 0) goto LAB_075c4950;
            if (*(int *)(lVar1 + 0x18) != 0) {
              *(undefined8 *)(lVar1 + 0x20) = DAT_091f7f98;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
              if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar1 + 0x28) = DAT_091f8a98;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
                if (2 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x30) = DAT_091f70d8;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar1 + 0x38) = DAT_091f70c8;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
                    if (4 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x40) = DAT_091f7f80;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
                      if (5 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x48) = DAT_091f8a80;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
                        if (6 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x50) = DAT_091f6f90;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                          if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                            *(undefined8 *)(lVar1 + 0x58) = DAT_091f6f50;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                            if (8 < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x60) = DAT_091f8a70;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                              if (9 < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0x68) = DAT_091f8a90;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68));
                                if (10 < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined8 *)(lVar1 + 0x70) = DAT_091f6ec0;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                                  if (0xb < *(uint *)(lVar1 + 0x18)) {
                                    *(undefined8 *)(lVar1 + 0x78) = DAT_091f70b0;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78));
                                    if (0xc < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0x80) = DAT_091f70b8;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80));
                                      if (0xd < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 0x88) = DAT_091f6f80;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x88));
                                        if (0xe < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0x90) = DAT_091f7f90;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90));
                                          if ((*(uint *)(lVar1 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined8 *)(lVar1 + 0x98) = DAT_091f7f78;
                                            thunk_FUN_03f5d7b8();
                                            plVar2 = (long *)(*(long *)(DAT_09188a70 + 0xb8) + 8);
                                            *plVar2 = lVar1;
                                            thunk_FUN_03f5d7b8(plVar2,lVar1);
                                            lVar1 = FUN_03f5c394(DAT_091805f8,4);
                                            if (lVar1 == 0) goto LAB_075c4950;
                                            if (*(int *)(lVar1 + 0x18) != 0) {
                                              *(undefined8 *)(lVar1 + 0x20) = DAT_091f6ec8;
                                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
                                              if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                                                *(undefined8 *)(lVar1 + 0x28) = DAT_091f6f58;
                                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
                                                if (2 < *(uint *)(lVar1 + 0x18)) {
                                                  *(undefined8 *)(lVar1 + 0x30) = DAT_091f7270;
                                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
                                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
                                                    *(undefined8 *)(lVar1 + 0x38) = DAT_091f7258;
                                                    thunk_FUN_03f5d7b8();
                                                    plVar2 = (long *)(*(long *)(DAT_09188a70 + 0xb8)
                                                                     + 0x10);
                                                    *plVar2 = lVar1;
                                                    thunk_FUN_03f5d7b8(plVar2,lVar1);
                                                    lVar1 = FUN_03f5c394(DAT_091805f8,0xc);
                                                    if (lVar1 == 0) goto LAB_075c4950;
                                                    if (*(int *)(lVar1 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar1 + 0x20) = DAT_091f8a78;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar1 + 0x20));
                                                      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) !=
                                                          0) {
                                                        *(undefined8 *)(lVar1 + 0x28) = DAT_091f8a88
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar1 + 0x28));
                                                        if (2 < *(uint *)(lVar1 + 0x18)) {
                                                          *(undefined8 *)(lVar1 + 0x30) =
                                                               DAT_091f8aa8;
                                                          thunk_FUN_03f5d7b8((undefined8 *)
                                                                             (lVar1 + 0x30));
                                                          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc)
                                                              != 0) {
                                                            *(undefined8 *)(lVar1 + 0x38) =
                                                                 DAT_091f7280;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar1 + 0x38));
                                                            if (4 < *(uint *)(lVar1 + 0x18)) {
                                                              *(undefined8 *)(lVar1 + 0x40) =
                                                                   DAT_091f7278;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar1 + 0x40));
                                                              if (5 < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x48) =
                                                                     DAT_091f6f98;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar1 + 0x48));
                                                                if (6 < *(uint *)(lVar1 + 0x18)) {
                                                                  *(undefined8 *)(lVar1 + 0x50) =
                                                                       DAT_091f6f60;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar1 + 0x50))
                                                                  ;
                                                                  if ((*(uint *)(lVar1 + 0x18) &
                                                                      0xfffffff8) != 0) {
                                                                    *(undefined8 *)(lVar1 + 0x58) =
                                                                         DAT_091f8aa0;
                                                                    thunk_FUN_03f5d7b8((undefined8 *
                                                                                       )(lVar1 + 
                                                  0x58));
                                                  if (8 < *(uint *)(lVar1 + 0x18)) {
                                                    *(undefined8 *)(lVar1 + 0x60) = DAT_091f6ed0;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60))
                                                    ;
                                                    if (9 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0x68) = DAT_091f7260;
                                                      thunk_FUN_03f5d7b8((undefined8 *)
                                                                         (lVar1 + 0x68));
                                                      if (10 < *(uint *)(lVar1 + 0x18)) {
                                                        *(undefined8 *)(lVar1 + 0x70) = DAT_091f7268
                                                        ;
                                                        thunk_FUN_03f5d7b8((undefined8 *)
                                                                           (lVar1 + 0x70));
                                                        if (0xb < *(uint *)(lVar1 + 0x18)) {
                                                          *(undefined8 *)(lVar1 + 0x78) =
                                                               DAT_091f6f88;
                                                          thunk_FUN_03f5d7b8();
                                                          plVar2 = (long *)(*(long *)(DAT_09188a70 +
                                                                                     0xb8) + 0x18);
                                                          *plVar2 = lVar1;
                                                          thunk_FUN_03f5d7b8(plVar2,lVar1);
                                                          lVar1 = FUN_03f5c394(DAT_091805f8,5);
                                                          if (lVar1 == 0) goto LAB_075c4950;
                                                          if (*(int *)(lVar1 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar1 + 0x20) =
                                                                 DAT_091f7f88;
                                                            thunk_FUN_03f5d7b8((undefined8 *)
                                                                               (lVar1 + 0x20));
                                                            if ((*(uint *)(lVar1 + 0x18) &
                                                                0xfffffffe) != 0) {
                                                              *(undefined8 *)(lVar1 + 0x28) =
                                                                   DAT_091f8a68;
                                                              thunk_FUN_03f5d7b8((undefined8 *)
                                                                                 (lVar1 + 0x28));
                                                              if (2 < *(uint *)(lVar1 + 0x18)) {
                                                                *(undefined8 *)(lVar1 + 0x30) =
                                                                     DAT_091f8a48;
                                                                thunk_FUN_03f5d7b8((undefined8 *)
                                                                                   (lVar1 + 0x30));
                                                                if ((*(uint *)(lVar1 + 0x18) &
                                                                    0xfffffffc) != 0) {
                                                                  *(undefined8 *)(lVar1 + 0x38) =
                                                                       DAT_091f6f78;
                                                                  thunk_FUN_03f5d7b8((undefined8 *)
                                                                                     (lVar1 + 0x38))
                                                                  ;
                                                                  if (4 < *(uint *)(lVar1 + 0x18)) {
                                                                    *(undefined8 *)(lVar1 + 0x40) =
                                                                         DAT_091f6ed8;
                                                                    thunk_FUN_03f5d7b8();
                                                                    plVar2 = (long *)(*(long *)(
                                                  DAT_09188a70 + 0xb8) + 0x20);
                                                  *plVar2 = lVar1;
                                                  thunk_FUN_03f5d7b8(plVar2,lVar1);
                                                  uVar3 = FUN_03f5c394(DAT_091801b8,0x100);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f4348,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_09188a70 + 0xb8) + 0x28);
                                                  *puVar4 = uVar3;
                                                  thunk_FUN_03f5d7b8(puVar4,uVar3);
                                                  uVar3 = FUN_03f5c394(DAT_091807b8,0x1e);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f4420,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_09188a70 + 0xb8) + 0x30);
                                                  *puVar4 = uVar3;
                                                  thunk_FUN_03f5d7b8(puVar4,uVar3);
                                                  uVar3 = FUN_03f5c394(DAT_091804c8,0xf);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f42c0,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_09188a70 + 0xb8) + 0x38);
                                                  *puVar4 = uVar3;
                                                  thunk_FUN_03f5d7b8(puVar4,uVar3);
                                                  uVar3 = FUN_03f5c394(DAT_091807b8,0x2a);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f42a0,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_09188a70 + 0xb8) + 0x40);
                                                  *puVar4 = uVar3;
                                                  thunk_FUN_03f5d7b8(puVar4,uVar3);
                                                  uVar3 = FUN_03f5c394(DAT_091801b0,0x15);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f4188,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_09188a70 + 0xb8) + 0x48);
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
LAB_075c4950:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

