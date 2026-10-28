// rea decompile_all
// name: _GAME.SaveGame.SaveGameStats$$.cctor
// address: 0x77a87f0
// body: available
// range: 0x77a87f0-0x77a8de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a8ddc to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77a8de0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a8de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameStats___cctor(void)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_09522e46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_092177d8);
    FUN_03f5c2a4(&DAT_092182a8);
    FUN_03f5c2a4(&DAT_09218298);
    FUN_03f5c2a4(&DAT_0921cc10);
    FUN_03f5c2a4(&DAT_0921e780);
    FUN_03f5c2a4(&DAT_09221ac0);
    FUN_03f5c2a4(&DAT_092256c8);
    FUN_03f5c2a4(&DAT_092170c8);
    FUN_03f5c2a4(&DAT_0921d0a0);
    FUN_03f5c2a4(&DAT_092256d0);
    FUN_03f5c2a4(&DAT_09218ef0);
    FUN_03f5c2a4(&DAT_0921e788);
    FUN_03f5c2a4(&DAT_09217e18);
    FUN_03f5c2a4(&DAT_0921cc18);
    FUN_03f5c2a4(&DAT_09221b78);
    FUN_03f5c2a4(&DAT_0921d708);
    FUN_03f5c2a4(&DAT_09218ec0);
    FUN_03f5c2a4(&DAT_09221ac8);
    FUN_03f5c2a4(&DAT_0921e778);
    FUN_03f5c2a4(&DAT_092241c8);
    FUN_03f5c2a4(&DAT_0921e790);
    FUN_03f5c2a4(&DAT_092206a0);
    FUN_03f5c2a4(&DAT_09218eb8);
    FUN_03f5c2a4(&DAT_09221ad0);
    FUN_03f5c2a4(&DAT_09219688);
    DAT_09522e46 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,2);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = DAT_092256d0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = DAT_092256c8;
        thunk_FUN_03f5d7b8();
        **(long **)(DAT_0918a5a8 + 0xb8) = lVar1;
        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918a5a8 + 0xb8),lVar1);
        lVar1 = FUN_03f5c394(DAT_091805f8,3);
        if (lVar1 == 0) goto LAB_077a8de4;
        if (*(int *)(lVar1 + 0x18) != 0) {
          *(undefined8 *)(lVar1 + 0x20) = DAT_09221ad0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
            *(undefined8 *)(lVar1 + 0x28) = DAT_09221ac8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
            if (2 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x30) = DAT_09221ac0;
              thunk_FUN_03f5d7b8();
              plVar2 = (long *)(*(long *)(DAT_0918a5a8 + 0xb8) + 8);
              *plVar2 = lVar1;
              thunk_FUN_03f5d7b8(plVar2,lVar1);
              lVar1 = FUN_03f5c394(DAT_091805f8,0x11);
              if (lVar1 == 0) goto LAB_077a8de4;
              if (*(int *)(lVar1 + 0x18) != 0) {
                *(undefined8 *)(lVar1 + 0x20) = DAT_092206a0;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
                if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                  *(undefined8 *)(lVar1 + 0x28) = DAT_092170c8;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
                  if (2 < *(uint *)(lVar1 + 0x18)) {
                    *(undefined8 *)(lVar1 + 0x30) = DAT_092241c8;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
                    if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
                      *(undefined8 *)(lVar1 + 0x38) = DAT_0921e788;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
                      if (4 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x40) = DAT_0921e790;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
                        if (5 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x48) = DAT_0921e778;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
                          if (6 < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x50) = DAT_0921e780;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                            if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                              *(undefined8 *)(lVar1 + 0x58) = DAT_09221b78;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                              if (8 < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0x60) = DAT_0921d708;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                                if (9 < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined8 *)(lVar1 + 0x68) = DAT_092177d8;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68));
                                  if (10 < *(uint *)(lVar1 + 0x18)) {
                                    *(undefined8 *)(lVar1 + 0x70) = DAT_09217e18;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                                    if (0xb < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0x78) = DAT_09218ef0;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78));
                                      if (0xc < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 0x80) = DAT_0921d0a0;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80));
                                        if (0xd < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0x88) = DAT_09218eb8;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x88));
                                          if (0xe < *(uint *)(lVar1 + 0x18)) {
                                            *(undefined8 *)(lVar1 + 0x90) = DAT_09218ec0;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90));
                                            if ((*(uint *)(lVar1 + 0x18) & 0xfffffff0) != 0) {
                                              *(undefined8 *)(lVar1 + 0x98) = DAT_09218298;
                                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x98));
                                              if (0x10 < *(uint *)(lVar1 + 0x18)) {
                                                *(undefined8 *)(lVar1 + 0xa0) = DAT_092182a8;
                                                thunk_FUN_03f5d7b8();
                                                plVar2 = (long *)(*(long *)(DAT_0918a5a8 + 0xb8) +
                                                                 0x10);
                                                *plVar2 = lVar1;
                                                thunk_FUN_03f5d7b8(plVar2,lVar1);
                                                lVar1 = FUN_03f5c394(DAT_091805f8,3);
                                                if (lVar1 == 0) goto LAB_077a8de4;
                                                if (*(int *)(lVar1 + 0x18) != 0) {
                                                  *(undefined8 *)(lVar1 + 0x20) = DAT_09219688;
                                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
                                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                                                    *(undefined8 *)(lVar1 + 0x28) = DAT_0921cc18;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28))
                                                    ;
                                                    if (2 < *(uint *)(lVar1 + 0x18)) {
                                                      *(undefined8 *)(lVar1 + 0x30) = DAT_0921cc10;
                                                      thunk_FUN_03f5d7b8();
                                                      plVar2 = (long *)(*(long *)(DAT_0918a5a8 +
                                                                                 0xb8) + 0x18);
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_077a8de4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

