// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$.cctor
// address: 0x42dda58
// body: available
// range: 0x42dda58-0x42de477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42de46c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42de470 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42de474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09517425 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09221d08);
    FUN_03f5c2a4(&DAT_09211418);
    FUN_03f5c2a4(&DAT_0921b130);
    FUN_03f5c2a4(&DAT_0920aaa0);
    FUN_03f5c2a4(&DAT_0921d000);
    FUN_03f5c2a4(&DAT_092212b0);
    FUN_03f5c2a4(&DAT_0921d1a0);
    FUN_03f5c2a4(&DAT_09223e08);
    FUN_03f5c2a4(&DAT_09221da8);
    FUN_03f5c2a4(&DAT_09226cd8);
    FUN_03f5c2a4(&DAT_09227048);
    FUN_03f5c2a4(&DAT_092270b8);
    FUN_03f5c2a4(&DAT_092242a8);
    FUN_03f5c2a4(&DAT_0921f940);
    FUN_03f5c2a4(&DAT_09227000);
    FUN_03f5c2a4(&DAT_0920aaa8);
    FUN_03f5c2a4(&DAT_09200868);
    FUN_03f5c2a4(&DAT_092061e0);
    FUN_03f5c2a4(&DAT_0921a108);
    FUN_03f5c2a4(&DAT_0921a358);
    FUN_03f5c2a4(&DAT_0921dc38);
    FUN_03f5c2a4(&DAT_09202eb8);
    FUN_03f5c2a4(&DAT_091fc910);
    FUN_03f5c2a4(&DAT_0921ae70);
    FUN_03f5c2a4(&DAT_092212b8);
    FUN_03f5c2a4(&DAT_091fc908);
    FUN_03f5c2a4(&DAT_09210a08);
    FUN_03f5c2a4(&DAT_09226c28);
    FUN_03f5c2a4(&DAT_0921dd68);
    FUN_03f5c2a4(&DAT_09201a88);
    FUN_03f5c2a4(&DAT_09225e58);
    FUN_03f5c2a4(&DAT_09223890);
    FUN_03f5c2a4(&DAT_0920de38);
    FUN_03f5c2a4(&DAT_092075c8);
    FUN_03f5c2a4(&DAT_09226c78);
    FUN_03f5c2a4(&DAT_091ffe60);
    FUN_03f5c2a4(&DAT_0921e0c8);
    FUN_03f5c2a4(&DAT_091fac08);
    FUN_03f5c2a4(&DAT_09201500);
    FUN_03f5c2a4(&DAT_09225550);
    FUN_03f5c2a4(&DAT_0920c108);
    FUN_03f5c2a4(&DAT_0921bae8);
    FUN_03f5c2a4(&DAT_0921cb50);
    FUN_03f5c2a4(&DAT_09217908);
    FUN_03f5c2a4(&DAT_09214710);
    FUN_03f5c2a4(&DAT_09226b88);
    DAT_09517425 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09189db0);
  System_Text_RegularExpressions_Regex___ctor(uVar1,DAT_09214710,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09182278 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09189db0);
  System_Text_RegularExpressions_Regex___ctor(uVar1,DAT_091fac08,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09182278 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  lVar3 = FUN_03f5c394(DAT_091805f8,0x16);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = DAT_0921ae70;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20));
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = DAT_09225e58;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x28));
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = DAT_0921a108;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x30));
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = DAT_0921bae8;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x38));
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = DAT_0921a358;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x40));
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = DAT_0921cb50;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x48));
                if (6 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x50) = DAT_0921d000;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x50));
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar3 + 0x58) = DAT_0921d1a0;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x58));
                    if (8 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x60) = DAT_0921dc38;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x60));
                      if (9 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x68) = DAT_0921dd68;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x68));
                        if (10 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x70) = DAT_0921e0c8;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x70));
                          if (0xb < *(uint *)(lVar3 + 0x18)) {
                            *(undefined8 *)(lVar3 + 0x78) = DAT_0921f940;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x78));
                            if (0xc < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x80) = DAT_092212b0;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x80));
                              if (0xd < *(uint *)(lVar3 + 0x18)) {
                                *(undefined8 *)(lVar3 + 0x88) = DAT_092212b8;
                                thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x88));
                                if (0xe < *(uint *)(lVar3 + 0x18)) {
                                  *(undefined8 *)(lVar3 + 0x90) = DAT_09221d08;
                                  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x90));
                                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffff0) != 0) {
                                    *(undefined8 *)(lVar3 + 0x98) = DAT_09221da8;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x98));
                                    if (0x10 < *(uint *)(lVar3 + 0x18)) {
                                      *(undefined8 *)(lVar3 + 0xa0) = DAT_0921b130;
                                      thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0xa0));
                                      if (0x11 < *(uint *)(lVar3 + 0x18)) {
                                        *(undefined8 *)(lVar3 + 0xa8) = DAT_09223890;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0xa8));
                                        if (0x12 < *(uint *)(lVar3 + 0x18)) {
                                          *(undefined8 *)(lVar3 + 0xb0) = DAT_09223e08;
                                          thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0xb0));
                                          if (0x13 < *(uint *)(lVar3 + 0x18)) {
                                            *(undefined8 *)(lVar3 + 0xb8) = DAT_092242a8;
                                            thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0xb8));
                                            if (0x14 < *(uint *)(lVar3 + 0x18)) {
                                              *(undefined8 *)(lVar3 + 0xc0) = DAT_09225550;
                                              thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0xc0));
                                              if (0x15 < *(uint *)(lVar3 + 0x18)) {
                                                *(undefined8 *)(lVar3 + 200) = DAT_09217908;
                                                thunk_FUN_03f5d7b8();
                                                plVar4 = (long *)(*(long *)(DAT_09182278 + 0xb8) +
                                                                 0x28);
                                                *plVar4 = lVar3;
                                                thunk_FUN_03f5d7b8(plVar4,lVar3);
                                                lVar3 = thunk_FUN_03f9944c(DAT_09176c28);
                                                FUN_06fd76bc(lVar3,DAT_0919fe90);
                                                if (lVar3 != 0) {
                                                  FUN_06fd8454(lVar3,DAT_0921ae70,DAT_09201500,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09225e58,DAT_09227048,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921a108,DAT_091ffe60,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921bae8,DAT_09202eb8,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921a358,DAT_09200868,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921cb50,DAT_09226c78,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921d000,DAT_092075c8,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921d1a0,DAT_091fc908,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921dc38,DAT_092061e0,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921dd68,DAT_09227000,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921e0c8,DAT_092270b8,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921f940,DAT_091fc910,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_092212b0,DAT_0920aaa0,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_092212b8,DAT_0920aaa8,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09221d08,DAT_0920c108,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09221da8,DAT_09226b88,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_0921b130,DAT_09201a88,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09223890,DAT_0920de38,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09223e08,DAT_09226cd8,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_092242a8,DAT_09211418,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09225550,DAT_09210a08,
                                                               DAT_0919feb8);
                                                  FUN_06fd8454(lVar3,DAT_09217908,DAT_09226c28,
                                                               DAT_0919feb8);
                                                  plVar4 = (long *)(*(long *)(DAT_09182278 + 0xb8) +
                                                                   0x30);
                                                  *plVar4 = lVar3;
                                                  thunk_FUN_03f5d7b8(plVar4,lVar3);
                                                  return;
                                                }
                                                goto LAB_042de474;
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
LAB_042de474:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

