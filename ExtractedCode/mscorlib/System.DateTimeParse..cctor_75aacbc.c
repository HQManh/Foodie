// rea decompile_all
// name: System.DateTimeParse$$.cctor
// address: 0x75aacbc
// body: available
// range: 0x75aacbc-0x75ab38f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ab384 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75ab388 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ab38c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeParse___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_09521c72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fb60);
    FUN_03f5c2a4(&DAT_091809a0);
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_091f4098);
    FUN_03f5c2a4(&DAT_091f4120);
    FUN_03f5c2a4(&DAT_091f4128);
    FUN_03f5c2a4(&DAT_091f4138);
    FUN_03f5c2a4(&DAT_091f41c0);
    FUN_03f5c2a4(&DAT_091f4200);
    FUN_03f5c2a4(&DAT_091f4240);
    FUN_03f5c2a4(&DAT_091f4260);
    FUN_03f5c2a4(&DAT_091f4270);
    FUN_03f5c2a4(&DAT_091f42d8);
    FUN_03f5c2a4(&DAT_091f42f0);
    FUN_03f5c2a4(&DAT_091f4300);
    FUN_03f5c2a4(&DAT_091f4340);
    FUN_03f5c2a4(&DAT_091f4360);
    FUN_03f5c2a4(&DAT_091f4378);
    FUN_03f5c2a4(&DAT_091f4388);
    FUN_03f5c2a4(&DAT_091f43a8);
    FUN_03f5c2a4(&DAT_091f43b0);
    FUN_03f5c2a4(&DAT_091f43c8);
    FUN_03f5c2a4(&DAT_091f4438);
    DAT_09521c72 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_0917fb60,0x14);
  uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f4260,0);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),uVar2);
      uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f4240,0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),uVar2);
        uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f42f0,0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),uVar2);
          uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f4360,0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = uVar2;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38),uVar2);
            uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f43a8,0);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40),uVar2);
              uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(uVar2,DAT_091f4138,0);
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = uVar2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48),uVar2);
                uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                          (uVar2,DAT_091f43b0,0);
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x50) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50),uVar2);
                  uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                            (uVar2,DAT_091f42d8,0);
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar1 + 0x58) = uVar2;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58),uVar2);
                    uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                              (uVar2,DAT_091f4388,0);
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x60) = uVar2;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60),uVar2);
                      uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                (uVar2,DAT_091f4120,0);
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x68) = uVar2;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68),uVar2);
                        uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                  (uVar2,DAT_091f4128,0);
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x70) = uVar2;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70),uVar2);
                          uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                    (uVar2,DAT_091f4200,0);
                          if (0xb < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x78) = uVar2;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78),uVar2);
                            uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                      (uVar2,DAT_091f4098,0);
                            if (0xc < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x80) = uVar2;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80),uVar2);
                              uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        (uVar2,DAT_091f4270,0);
                              if (0xd < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0x88) = uVar2;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x88),uVar2);
                                uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                          (uVar2,DAT_091f4300,0);
                                if (0xe < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined8 *)(lVar1 + 0x90) = uVar2;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90),uVar2);
                                  uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                            (uVar2,DAT_091f41c0,0);
                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar1 + 0x98) = uVar2;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x98),uVar2);
                                    uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                              (uVar2,DAT_091f4340,0);
                                    if (0x10 < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0xa0) = uVar2;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa0),uVar2);
                                      uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                (uVar2,DAT_091f43c8,0);
                                      if (0x11 < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 0xa8) = uVar2;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa8),uVar2);
                                        uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                                        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                  (uVar2,DAT_091f4438,0);
                                        if (0x12 < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0xb0) = uVar2;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb0),uVar2);
                                          uVar2 = FUN_03f5c394(DAT_091809a0,0x12);
                                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                    (uVar2,DAT_091f4378,0);
                                          if (0x13 < *(uint *)(lVar1 + 0x18)) {
                                            *(undefined8 *)(lVar1 + 0xb8) = uVar2;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb8),uVar2);
                                            plVar3 = (long *)(*(long *)(DAT_091835a8 + 0xb8) + 8);
                                            *plVar3 = lVar1;
                                            thunk_FUN_03f5d7b8(plVar3,lVar1);
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

