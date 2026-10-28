// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions$$GetAwaiter
// address: 0x7da22c8
// body: available
// range: 0x7da22c8-0x7da2537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7da2530 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7da2534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] Cysharp_Threading_Tasks_UniTaskExtensions__GetAwaiter(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_30 [16];
  
  if ((DAT_09525e9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091807c0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525e9b = 1;
  }
  lVar1 = FUN_03f5c394(DAT_091807c0,0xd);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) != 0) {
      uVar2 = *param_1;
      *(undefined8 *)(lVar1 + 0x28) = param_1[1];
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),0);
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        uVar2 = param_1[2];
        *(undefined8 *)(lVar1 + 0x38) = param_1[3];
        *(undefined8 *)(lVar1 + 0x30) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),0);
        if (2 < *(uint *)(lVar1 + 0x18)) {
          uVar2 = param_1[4];
          *(undefined8 *)(lVar1 + 0x48) = param_1[5];
          *(undefined8 *)(lVar1 + 0x40) = uVar2;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40),0);
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffc) != 0) {
            uVar2 = param_1[6];
            *(undefined8 *)(lVar1 + 0x58) = param_1[7];
            *(undefined8 *)(lVar1 + 0x50) = uVar2;
            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x50),0);
            if (4 < *(uint *)(lVar1 + 0x18)) {
              uVar2 = param_1[8];
              *(undefined8 *)(lVar1 + 0x68) = param_1[9];
              *(undefined8 *)(lVar1 + 0x60) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60),0);
              if (5 < *(uint *)(lVar1 + 0x18)) {
                uVar2 = param_1[10];
                *(undefined8 *)(lVar1 + 0x78) = param_1[0xb];
                *(undefined8 *)(lVar1 + 0x70) = uVar2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x70),0);
                if (6 < *(uint *)(lVar1 + 0x18)) {
                  uVar2 = param_1[0xc];
                  *(undefined8 *)(lVar1 + 0x88) = param_1[0xd];
                  *(undefined8 *)(lVar1 + 0x80) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x80),0);
                  if ((*(uint *)(lVar1 + 0x18) & 0xfffffff8) != 0) {
                    uVar2 = param_1[0xe];
                    *(undefined8 *)(lVar1 + 0x98) = param_1[0xf];
                    *(undefined8 *)(lVar1 + 0x90) = uVar2;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x90),0);
                    if (8 < *(uint *)(lVar1 + 0x18)) {
                      uVar2 = param_1[0x10];
                      *(undefined8 *)(lVar1 + 0xa8) = param_1[0x11];
                      *(undefined8 *)(lVar1 + 0xa0) = uVar2;
                      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xa0),0);
                      if (9 < *(uint *)(lVar1 + 0x18)) {
                        uVar2 = param_1[0x12];
                        *(undefined8 *)(lVar1 + 0xb8) = param_1[0x13];
                        *(undefined8 *)(lVar1 + 0xb0) = uVar2;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xb0),0);
                        if (10 < *(uint *)(lVar1 + 0x18)) {
                          uVar2 = param_1[0x14];
                          *(undefined8 *)(lVar1 + 200) = param_1[0x15];
                          *(undefined8 *)(lVar1 + 0xc0) = uVar2;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xc0),0);
                          if (0xb < *(uint *)(lVar1 + 0x18)) {
                            uVar2 = param_1[0x16];
                            *(undefined8 *)(lVar1 + 0xd8) = param_1[0x17];
                            *(undefined8 *)(lVar1 + 0xd0) = uVar2;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xd0),0);
                            if (0xc < *(uint *)(lVar1 + 0x18)) {
                              uVar2 = param_1[0x18];
                              *(undefined8 *)(lVar1 + 0xe8) = param_1[0x19];
                              *(undefined8 *)(lVar1 + 0xe0) = uVar2;
                              thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0xe0),0);
                              if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              local_30 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar1);
                              thunk_FUN_03f5d7b8(local_30,0);
                              return local_30;
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

