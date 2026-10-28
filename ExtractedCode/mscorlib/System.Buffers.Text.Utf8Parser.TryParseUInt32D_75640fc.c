// rea decompile_all
// name: System.Buffers.Text.Utf8Parser$$TryParseUInt32D
// address: 0x75640fc
// body: available
// range: 0x75640fc-0x7564467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Buffers_Text_Utf8Parser__TryParseUInt32D
          (byte *param_1,uint param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((DAT_095219cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188eb0);
    FUN_03f5c2a4(&DAT_091b9798);
    DAT_095219cc = 1;
  }
  if (0 < (int)param_2) {
    bVar1 = *param_1;
    if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = bVar1 - 0x30;
    if (uVar3 < 10) {
      if (bVar1 == 0x30) {
        uVar5 = 1;
        do {
          uVar4 = uVar5;
          if (param_2 == uVar4) {
            uVar3 = 0;
            uVar2 = 1;
            goto LAB_0756443c;
          }
          uVar3 = param_1[(int)uVar4] - 0x30;
          uVar5 = uVar4 + 1;
        } while (uVar3 == 0);
        if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (uVar3 < 10) goto LAB_075641d0;
        uVar3 = 0;
        goto LAB_075641c0;
      }
      uVar4 = 0;
LAB_075641d0:
      uVar5 = uVar4 + 1;
      if (uVar5 < param_2) {
        bVar1 = param_1[(int)uVar5];
        if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (bVar1 - 0x30 < 10) {
          uVar5 = uVar4 + 2;
          uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
          if (uVar5 < param_2) {
            bVar1 = param_1[(int)uVar5];
            if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (bVar1 - 0x30 < 10) {
              uVar5 = uVar4 + 3;
              uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
              if (uVar5 < param_2) {
                bVar1 = param_1[(int)uVar5];
                if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (bVar1 - 0x30 < 10) {
                  uVar5 = uVar4 + 4;
                  uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                  if (uVar5 < param_2) {
                    bVar1 = param_1[(int)uVar5];
                    if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    if (bVar1 - 0x30 < 10) {
                      uVar5 = uVar4 + 5;
                      uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                      if (uVar5 < param_2) {
                        bVar1 = param_1[(int)uVar5];
                        if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        if (bVar1 - 0x30 < 10) {
                          uVar5 = uVar4 + 6;
                          uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                          if (uVar5 < param_2) {
                            bVar1 = param_1[(int)uVar5];
                            if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            if (bVar1 - 0x30 < 10) {
                              uVar5 = uVar4 + 7;
                              uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                              if (uVar5 < param_2) {
                                bVar1 = param_1[(int)uVar5];
                                if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                }
                                if (bVar1 - 0x30 < 10) {
                                  uVar5 = uVar4 + 8;
                                  uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                                  if (uVar5 < param_2) {
                                    bVar1 = param_1[(int)uVar5];
                                    if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                                      FUN_03f5c424();
                                    }
                                    if (bVar1 - 0x30 < 10) {
                                      uVar5 = uVar4 + 9;
                                      uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                                      if (uVar5 < param_2) {
                                        bVar1 = param_1[(int)uVar5];
                                        if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                                          FUN_03f5c424();
                                        }
                                        if (bVar1 - 0x30 < 10) {
                                          if ((uVar3 < 0x1999999a) &&
                                             ((uVar3 != 0x19999999 || (bVar1 < 0x36)))) {
                                            uVar4 = uVar4 + 10;
                                            uVar3 = ((uint)bVar1 + uVar3 * 10) - 0x30;
                                            if (uVar4 < param_2) {
                                              bVar1 = param_1[(int)uVar4];
                                              if (*(int *)(DAT_09188eb0 + 0xe4) == 0) {
                                                FUN_03f5c424();
                                              }
                                              if (bVar1 - 0x30 < 10) goto LAB_07564418;
                                            }
LAB_075641c0:
                                            uVar2 = 1;
                                            param_2 = uVar4;
                                            goto LAB_0756443c;
                                          }
                                          goto LAB_07564418;
                                        }
                                      }
                                      uVar2 = 1;
                                      param_2 = uVar5;
                                      goto LAB_0756443c;
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
      uVar2 = 1;
      param_2 = uVar5;
      goto LAB_0756443c;
    }
  }
LAB_07564418:
  uVar3 = 0;
  uVar2 = 0;
  param_2 = 0;
LAB_0756443c:
  *param_4 = param_2;
  *param_3 = uVar3;
  return uVar2;
}

