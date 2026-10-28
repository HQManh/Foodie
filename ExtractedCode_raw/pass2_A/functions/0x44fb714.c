// rea decompile_all
// name: Utilities.StringExtension$$.cctor
// address: 0x44fb714
// body: available
// range: 0x44fb714-0x44fba93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44fba88 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44fba8c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44fba90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_StringExtension___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((DAT_09518468 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_0918b3a0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f39d8);
    FUN_03f5c2a4(&DAT_091fd138);
    FUN_03f5c2a4(&DAT_09213620);
    FUN_03f5c2a4(&DAT_09204600);
    FUN_03f5c2a4(&DAT_09212a28);
    FUN_03f5c2a4(&DAT_092041a8);
    FUN_03f5c2a4(&DAT_091fd200);
    FUN_03f5c2a4(&DAT_09206740);
    FUN_03f5c2a4(&DAT_091ffb80);
    FUN_03f5c2a4(&DAT_092045d0);
    FUN_03f5c2a4(&DAT_092135b8);
    FUN_03f5c2a4(&DAT_091fd090);
    FUN_03f5c2a4(&DAT_092134c8);
    FUN_03f5c2a4(&DAT_09207248);
    DAT_09518468 = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,0xd);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = DAT_09207248;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = DAT_091fd200;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28));
        if (2 < *(uint *)(lVar1 + 0x18)) {
          *(undefined8 *)(lVar1 + 0x30) = DAT_091ffb80;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30));
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar1 + 0x38) = DAT_091fd138;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38));
            if (4 < *(uint *)(lVar1 + 0x18)) {
              *(undefined8 *)(lVar1 + 0x40) = DAT_091fd090;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40));
              if (5 < *(uint *)(lVar1 + 0x18)) {
                *(undefined8 *)(lVar1 + 0x48) = DAT_092135b8;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48));
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  *(undefined8 *)(lVar1 + 0x50) = DAT_09206740;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50));
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar1 + 0x58) = DAT_09213620;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x58));
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      *(undefined8 *)(lVar1 + 0x60) = DAT_092134c8;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60));
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        *(undefined8 *)(lVar1 + 0x68) = DAT_09204600;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68));
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          *(undefined8 *)(lVar1 + 0x70) = DAT_09212a28;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70));
                          if (0xb < *(uint *)(lVar1 + 0x18)) {
                            *(undefined8 *)(lVar1 + 0x78) = DAT_092045d0;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x78));
                            if (0xc < *(uint *)(lVar1 + 0x18)) {
                              *(undefined8 *)(lVar1 + 0x80) = DAT_092041a8;
                              thunk_FUN_03f5d7b8();
                              **(long **)(DAT_0918b3a0 + 0xb8) = lVar1;
                              thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b3a0 + 0xb8),lVar1);
                              uVar2 = FUN_03f5c394(DAT_091801b8,0xd);
                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                                        (uVar2,DAT_091f39d8,0);
                              puVar3 = (undefined8 *)(*(long *)(DAT_0918b3a0 + 0xb8) + 8);
                              *puVar3 = uVar2;
                              thunk_FUN_03f5d7b8(puVar3,uVar2);
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

