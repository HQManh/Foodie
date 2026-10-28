// rea decompile_all
// name: System.Security.Cryptography.SHA1Internal$$InitialiseBuff
// address: 0x7476510
// body: available
// range: 0x7476510-0x7476baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7476ba8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7476bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA1Internal__InitialiseBuff
               (long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x18);
    if ((((param_3 < uVar1) && (param_3 + 1 < uVar1)) && (param_3 + 2 < uVar1)) &&
       (param_3 + 3 < uVar1)) {
      if (param_1 == 0) goto LAB_07476bac;
      uVar2 = *(uint *)(param_1 + 0x18);
      if (uVar2 != 0) {
        *(uint *)(param_1 + 0x20) =
             (uint)*(byte *)(param_2 + (ulong)param_3 + 0x20) << 0x18 |
             (uint)*(byte *)(param_2 + (int)(param_3 + 1) + 0x20) << 0x10 |
             (uint)*(byte *)(param_2 + (int)(param_3 + 2) + 0x20) << 8 |
             (uint)*(byte *)(param_2 + (int)(param_3 + 3) + 0x20);
        if (((param_3 + 4 < uVar1) && (param_3 + 5 < uVar1)) &&
           ((param_3 + 6 < uVar1 && ((param_3 + 7 < uVar1 && (uVar2 != 1)))))) {
          *(uint *)(param_1 + 0x24) =
               (uint)*(byte *)(param_2 + (int)(param_3 + 4) + 0x20) << 0x18 |
               (uint)*(byte *)(param_2 + (int)(param_3 + 5) + 0x20) << 0x10 |
               (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 6)) << 8 |
               (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 7));
          if ((param_3 + 8 < uVar1) &&
             ((((param_3 + 9 < uVar1 && (param_3 + 10 < uVar1)) && (param_3 + 0xb < uVar1)) &&
              (2 < uVar2)))) {
            *(uint *)(param_1 + 0x28) =
                 (uint)*(byte *)(param_2 + (int)(param_3 + 8) + 0x20) << 0x18 |
                 (uint)*(byte *)(param_2 + (int)(param_3 + 9) + 0x20) << 0x10 |
                 (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 10)) << 8 |
                 (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0xb));
            if (((param_3 + 0xc < uVar1) && (param_3 + 0xd < uVar1)) &&
               ((param_3 + 0xe < uVar1 && ((param_3 + 0xf < uVar1 && (uVar2 != 3)))))) {
              *(uint *)(param_1 + 0x2c) =
                   (uint)*(byte *)(param_2 + (int)(param_3 + 0xc) + 0x20) << 0x18 |
                   (uint)*(byte *)(param_2 + (int)(param_3 + 0xd) + 0x20) << 0x10 |
                   (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0xe)) << 8 |
                   (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0xf));
              if ((param_3 + 0x10 < uVar1) &&
                 ((((param_3 + 0x11 < uVar1 && (param_3 + 0x12 < uVar1)) && (param_3 + 0x13 < uVar1)
                   ) && (4 < uVar2)))) {
                *(uint *)(param_1 + 0x30) =
                     (uint)*(byte *)(param_2 + (int)(param_3 + 0x10) + 0x20) << 0x18 |
                     (uint)*(byte *)(param_2 + (int)(param_3 + 0x11) + 0x20) << 0x10 |
                     (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x12)) << 8 |
                     (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x13));
                if (((param_3 + 0x14 < uVar1) && (param_3 + 0x15 < uVar1)) &&
                   ((param_3 + 0x16 < uVar1 && ((param_3 + 0x17 < uVar1 && (uVar2 != 5)))))) {
                  *(uint *)(param_1 + 0x34) =
                       (uint)*(byte *)(param_2 + (int)(param_3 + 0x14) + 0x20) << 0x18 |
                       (uint)*(byte *)(param_2 + (int)(param_3 + 0x15) + 0x20) << 0x10 |
                       (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x16)) << 8 |
                       (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x17));
                  if ((param_3 + 0x18 < uVar1) &&
                     ((((param_3 + 0x19 < uVar1 && (param_3 + 0x1a < uVar1)) &&
                       (param_3 + 0x1b < uVar1)) && (6 < uVar2)))) {
                    *(uint *)(param_1 + 0x38) =
                         (uint)*(byte *)(param_2 + (int)(param_3 + 0x18) + 0x20) << 0x18 |
                         (uint)*(byte *)(param_2 + (int)(param_3 + 0x19) + 0x20) << 0x10 |
                         (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x1a)) << 8 |
                         (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x1b));
                    if (((param_3 + 0x1c < uVar1) && (param_3 + 0x1d < uVar1)) &&
                       ((param_3 + 0x1e < uVar1 && ((param_3 + 0x1f < uVar1 && (uVar2 != 7)))))) {
                      *(uint *)(param_1 + 0x3c) =
                           (uint)*(byte *)(param_2 + (int)(param_3 + 0x1c) + 0x20) << 0x18 |
                           (uint)*(byte *)(param_2 + (int)(param_3 + 0x1d) + 0x20) << 0x10 |
                           (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x1e)) << 8 |
                           (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x1f));
                      if ((param_3 + 0x20 < uVar1) &&
                         ((((param_3 + 0x21 < uVar1 && (param_3 + 0x22 < uVar1)) &&
                           (param_3 + 0x23 < uVar1)) && (8 < uVar2)))) {
                        *(uint *)(param_1 + 0x40) =
                             (uint)*(byte *)(param_2 + (int)(param_3 + 0x20) + 0x20) << 0x18 |
                             (uint)*(byte *)(param_2 + (int)(param_3 + 0x21) + 0x20) << 0x10 |
                             (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x22)) << 8 |
                             (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x23));
                        if (((param_3 + 0x24 < uVar1) && (param_3 + 0x25 < uVar1)) &&
                           ((param_3 + 0x26 < uVar1 && ((param_3 + 0x27 < uVar1 && (uVar2 != 9))))))
                        {
                          *(uint *)(param_1 + 0x44) =
                               (uint)*(byte *)(param_2 + (int)(param_3 + 0x24) + 0x20) << 0x18 |
                               (uint)*(byte *)(param_2 + (int)(param_3 + 0x25) + 0x20) << 0x10 |
                               (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x26)) << 8 |
                               (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x27));
                          if ((param_3 + 0x28 < uVar1) &&
                             ((((param_3 + 0x29 < uVar1 && (param_3 + 0x2a < uVar1)) &&
                               (param_3 + 0x2b < uVar1)) && (10 < uVar2)))) {
                            *(uint *)(param_1 + 0x48) =
                                 (uint)*(byte *)(param_2 + (int)(param_3 + 0x28) + 0x20) << 0x18 |
                                 (uint)*(byte *)(param_2 + (int)(param_3 + 0x29) + 0x20) << 0x10 |
                                 (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x2a)) << 8
                                 | (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x2b));
                            if (((param_3 + 0x2c < uVar1) && (param_3 + 0x2d < uVar1)) &&
                               ((param_3 + 0x2e < uVar1 &&
                                ((param_3 + 0x2f < uVar1 && (uVar2 != 0xb)))))) {
                              *(uint *)(param_1 + 0x4c) =
                                   (uint)*(byte *)(param_2 + (int)(param_3 + 0x2c) + 0x20) << 0x18 |
                                   (uint)*(byte *)(param_2 + (int)(param_3 + 0x2d) + 0x20) << 0x10 |
                                   (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x2e)) <<
                                   8 | (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x2f))
                              ;
                              if ((param_3 + 0x30 < uVar1) &&
                                 ((((param_3 + 0x31 < uVar1 && (param_3 + 0x32 < uVar1)) &&
                                   (param_3 + 0x33 < uVar1)) && (0xc < uVar2)))) {
                                *(uint *)(param_1 + 0x50) =
                                     (uint)*(byte *)(param_2 + (int)(param_3 + 0x30) + 0x20) << 0x18
                                     | (uint)*(byte *)(param_2 + (int)(param_3 + 0x31) + 0x20) <<
                                       0x10 | (uint)*(byte *)(param_2 + 0x20 +
                                                             (long)(int)(param_3 + 0x32)) << 8 |
                                     (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x33));
                                if (((param_3 + 0x34 < uVar1) && (param_3 + 0x35 < uVar1)) &&
                                   ((param_3 + 0x36 < uVar1 &&
                                    ((param_3 + 0x37 < uVar1 && (uVar2 != 0xd)))))) {
                                  *(uint *)(param_1 + 0x54) =
                                       (uint)*(byte *)(param_2 + (int)(param_3 + 0x34) + 0x20) <<
                                       0x18 | (uint)*(byte *)(param_2 + (int)(param_3 + 0x35) + 0x20
                                                             ) << 0x10 |
                                       (uint)*(byte *)(param_2 + 0x20 + (long)(int)(param_3 + 0x36))
                                       << 8 | (uint)*(byte *)(param_2 + 0x20 +
                                                             (long)(int)(param_3 + 0x37));
                                  if (((param_3 + 0x38 < uVar1) &&
                                      (((param_3 + 0x39 < uVar1 && (param_3 + 0x3a < uVar1)) &&
                                       (param_3 + 0x3b < uVar1)))) && (0xe < uVar2)) {
                                    *(uint *)(param_1 + 0x58) =
                                         (uint)*(byte *)(param_2 + (int)(param_3 + 0x38) + 0x20) <<
                                         0x18 | (uint)*(byte *)(param_2 + (int)(param_3 + 0x39) +
                                                               0x20) << 0x10 |
                                         (uint)*(byte *)(param_2 + 0x20 +
                                                        (long)(int)(param_3 + 0x3a)) << 8 |
                                         (uint)*(byte *)(param_2 + 0x20 +
                                                        (long)(int)(param_3 + 0x3b));
                                    if (((param_3 + 0x3c < uVar1) && (param_3 + 0x3d < uVar1)) &&
                                       ((param_3 + 0x3e < uVar1 &&
                                        ((param_3 + 0x3f < uVar1 && (uVar2 != 0xf)))))) {
                                      *(uint *)(param_1 + 0x5c) =
                                           (uint)*(byte *)(param_2 + (int)(param_3 + 0x3c) + 0x20)
                                           << 0x18 | (uint)*(byte *)(param_2 + (int)(param_3 + 0x3d)
                                                                    + 0x20) << 0x10 |
                                           (uint)*(byte *)(param_2 + 0x20 +
                                                          (long)(int)(param_3 + 0x3e)) << 8 |
                                           (uint)*(byte *)(param_2 + 0x20 +
                                                          (long)(int)(param_3 + 0x3f));
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
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_07476bac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

