// rea decompile_all
// name: IapAdsSystem.OfflineNotification$$.cctor
// address: 0x7324b00
// body: available
// range: 0x7324b00-0x73250cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73250c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73250cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_OfflineNotification___cctor(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_095205cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09188ba0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f39f0);
    FUN_03f5c2a4(&DAT_0917fac8);
    FUN_03f5c2a4(&DAT_091bec98);
    FUN_03f5c2a4(&DAT_09227108);
    FUN_03f5c2a4(&DAT_09227138);
    FUN_03f5c2a4(&DAT_09226e70);
    FUN_03f5c2a4(&DAT_09226e90);
    FUN_03f5c2a4(&DAT_09226e68);
    FUN_03f5c2a4(&DAT_09226e10);
    FUN_03f5c2a4(&DAT_09226eb0);
    FUN_03f5c2a4(&DAT_09227100);
    FUN_03f5c2a4(&DAT_09227140);
    FUN_03f5c2a4(&DAT_092270f0);
    FUN_03f5c2a4(&DAT_09227130);
    FUN_03f5c2a4(&DAT_09227120);
    FUN_03f5c2a4(&DAT_092270d8);
    FUN_03f5c2a4(&DAT_09227118);
    FUN_03f5c2a4(&DAT_092270e8);
    FUN_03f5c2a4(&DAT_09226ef0);
    FUN_03f5c2a4(&DAT_09227128);
    FUN_03f5c2a4(&DAT_092270e0);
    FUN_03f5c2a4(&DAT_092270f8);
    FUN_03f5c2a4(&DAT_09227110);
    FUN_03f5c2a4(&DAT_092270d0);
    DAT_095205cb = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,0x15);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = DAT_092270e0;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = DAT_09227120;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = DAT_09226e68;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = DAT_09226eb0;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = DAT_09227128;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = DAT_092270e8;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x50) = DAT_09227140;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar1 + 0x58) = DAT_09226ef0;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x60) = DAT_09227138;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x68) = DAT_092270f8;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68));
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x70) = DAT_09227100;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                          if (0xb < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x78) = DAT_092270d0;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78));
                            if (0xc < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x80) = DAT_092270d8;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80));
                              if (0xd < *(uint *)(lVar1 + 0x18)) {
                                *(undefined8 *)(lVar1 + 0x88) = DAT_09227110;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x88));
                                if (0xe < *(uint *)(lVar1 + 0x18)) {
                                  *(undefined8 *)(lVar1 + 0x90) = DAT_09226e10;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90));
                                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar1 + 0x98) = DAT_092270f0;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x98));
                                    if (0x10 < *(uint *)(lVar1 + 0x18)) {
                                      *(undefined8 *)(lVar1 + 0xa0) = DAT_09227108;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa0));
                                      if (0x11 < *(uint *)(lVar1 + 0x18)) {
                                        *(undefined8 *)(lVar1 + 0xa8) = DAT_09226e70;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa8));
                                        if (0x12 < *(uint *)(lVar1 + 0x18)) {
                                          *(undefined8 *)(lVar1 + 0xb0) = DAT_09227118;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb0));
                                          if (0x13 < *(uint *)(lVar1 + 0x18)) {
                                            *(undefined8 *)(lVar1 + 0xb8) = DAT_09226e90;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb8));
                                            if (0x14 < *(uint *)(lVar1 + 0x18)) {
                                              *(undefined8 *)(lVar1 + 0xc0) = DAT_09227130;
                                              thunk_FUN_03f5d7b8();
                                              **(long **)(DAT_09188ba0 + 0xb8) = lVar1;
                                              thunk_FUN_03f5d7b8(*(undefined8 *)
                                                                  (DAT_09188ba0 + 0xb8),lVar1);
                                              lVar1 = FUN_03f5c394(DAT_0917fac8,2);
                                              local_28 = 0;
                                              FUN_066c1fdc(&local_28,10,0,DAT_091bec98);
                                              if (lVar1 == 0) goto LAB_073250cc;
                                              if (*(int *)(lVar1 + 0x18) != 0) {
                                                *(undefined8 *)(lVar1 + 0x20) = local_28;
                                                local_38 = 0;
                                                FUN_066c1fdc(&local_38,0x14,0,DAT_091bec98);
                                                if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
                                                  *(undefined8 *)(lVar1 + 0x28) = local_38;
                                                  plVar2 = (long *)(*(long *)(DAT_09188ba0 + 0xb8) +
                                                                   8);
                                                  *plVar2 = lVar1;
                                                  thunk_FUN_03f5d7b8(plVar2,lVar1);
                                                  uVar3 = FUN_03f5c394(DAT_091801b8,4);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                                            (uVar3,DAT_091f39f0,0);
                                                  puVar4 = (undefined8 *)
                                                           (*(long *)(DAT_09188ba0 + 0xb8) + 0x10);
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_073250cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

