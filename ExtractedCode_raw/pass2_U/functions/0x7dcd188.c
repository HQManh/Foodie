// rea decompile_all
// name: Cysharp.Threading.Tasks.Internal.UnityEqualityComparer$$GetDefaultHelper
// address: 0x7dcd188
// body: available
// range: 0x7dcd188-0x7dcd59f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7dcd59c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Cysharp_Threading_Tasks_Internal_UnityEqualityComparer__GetDefaultHelper(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  
  if ((DAT_095261ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c6b0);
    DAT_095261ae = 1;
  }
  local_18 = 0;
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_18 = (**(code **)(*param_1 + 0x878))(param_1,*(undefined8 *)(*param_1 + 0x880));
  if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918c6b0);
  }
  uVar1 = System_RuntimeTypeHandle__Equals
                    (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x40),0);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_RuntimeTypeHandle__Equals
                      (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x48),0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_RuntimeTypeHandle__Equals
                        (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x50),0);
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_RuntimeTypeHandle__Equals
                          (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x58),0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_RuntimeTypeHandle__Equals
                            (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x60),0);
          if ((uVar1 & 1) == 0) {
            if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = System_RuntimeTypeHandle__Equals
                              (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x68),0);
            if ((uVar1 & 1) == 0) {
              if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = System_RuntimeTypeHandle__Equals
                                (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x70),0)
              ;
              if ((uVar1 & 1) == 0) {
                if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar1 = System_RuntimeTypeHandle__Equals
                                  (&local_18,*(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x78),
                                   0);
                if ((uVar1 & 1) == 0) {
                  if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar1 = System_RuntimeTypeHandle__Equals
                                    (&local_18,
                                     *(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0xa8),0);
                  if ((uVar1 & 1) == 0) {
                    if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar1 = System_RuntimeTypeHandle__Equals
                                      (&local_18,
                                       *(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0xb0),0);
                    if ((uVar1 & 1) == 0) {
                      if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar1 = System_RuntimeTypeHandle__Equals
                                        (&local_18,
                                         *(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0xb8),0);
                      if ((uVar1 & 1) == 0) {
                        if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar1 = System_RuntimeTypeHandle__Equals
                                          (&local_18,
                                           *(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0xc0),0)
                        ;
                        if ((uVar1 & 1) == 0) {
                          if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          uVar1 = System_RuntimeTypeHandle__Equals
                                            (&local_18,
                                             *(undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 200),0
                                            );
                          if ((uVar1 & 1) == 0) {
                            return 0;
                          }
                          if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0xa0);
                        }
                        else {
                          if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                            FUN_03f5c424();
                          }
                          puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x98);
                        }
                      }
                      else {
                        if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x90);
                      }
                    }
                    else {
                      if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x88);
                    }
                  }
                  else {
                    if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x80);
                  }
                }
                else {
                  if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x38);
                }
              }
              else {
                if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x30);
              }
            }
            else {
              if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x28);
            }
          }
          else {
            if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x20);
          }
        }
        else {
          if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x18);
        }
      }
      else {
        if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 0x10);
      }
    }
    else {
      if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b0 + 0xb8) + 8);
    }
  }
  else {
    if (*(int *)(DAT_0918c6b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_0918c6b0 + 0xb8);
  }
  return *puVar2;
}

