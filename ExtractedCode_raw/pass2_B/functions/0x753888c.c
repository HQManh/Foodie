// rea decompile_all
// name: System.Globalization.TextInfo$$ToUpperInternal
// address: 0x753888c
// body: available
// range: 0x753888c-0x7538d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7538d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7538d40 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_TextInfo__ToUpperInternal(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  if ((DAT_095218b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bb48);
    DAT_095218b0 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_07538d3c;
  uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),0);
  uVar6 = (uint)param_2;
  uVar5 = uVar6 & 0xffff;
  if ((uVar2 & 1) == 0) {
    uVar1 = uVar6 & 0xffff;
    if (uVar5 < 499) {
      if (uVar1 < 0x180) {
        if (uVar1 == 0xb5) {
          return 0x39c;
        }
        if (uVar1 == 0x131) {
          return 0x49;
        }
        if (uVar1 == 0x17f) {
          return 0x53;
        }
      }
      else if (uVar1 < 0x1c9) {
        if (((uVar6 & 0xffff) == 0x1c5) || ((uVar6 & 0xffff) == 0x1c8)) {
LAB_07538b30:
          return (ulong)(uVar6 - 1);
        }
      }
      else if (((uVar6 & 0xffff) == 0x1cb) || ((uVar6 & 0xffff) == 0x1f2)) goto LAB_07538b30;
    }
    else if (uVar1 < 0x3f1) {
      if (uVar1 < 0x3c3) {
        if ((uVar6 & 0xffff) == 0x345) {
          return 0x399;
        }
        if ((uVar6 & 0xffff) == 0x3c2) {
          return 0x3a3;
        }
      }
      else {
        if (uVar5 < 0x3d2) {
          if (uVar5 == 0x3d0) {
            return 0x392;
          }
          if (uVar5 == 0x3d1) {
            return 0x398;
          }
        }
        else {
          if (uVar5 - 0x3d2 < 3) goto LAB_07538c70;
          if (uVar5 == 0x3d5) {
            return 0x3a6;
          }
          if (uVar5 == 0x3d6) {
            return 0x3a0;
          }
        }
        if ((uVar6 & 0xffff) == 0x3f0) {
          return 0x39a;
        }
      }
    }
    else if (uVar1 < 0x3f6) {
      if ((uVar6 & 0xffff) == 0x3f1) {
        return 0x3a1;
      }
      if ((uVar6 & 0xffff) == 0x3f5) {
        return 0x395;
      }
    }
    else {
      if ((uVar6 & 0xffff) == 0x1e9b) {
        return 0x1e60;
      }
      if ((uVar6 & 0xffff) == 0x1fbe) {
        return 0x399;
      }
    }
LAB_07538c70:
    uVar2 = System_Globalization_TextInfo__get_IsAsciiCasingSameAsInvariant(param_1);
    if ((uVar2 & 1) == 0) {
      if ((uVar6 & 0xffff) == 0x69) {
        return 0x130;
      }
      if ((uVar6 & 0xffff) < 0x80) {
        if (0xffe5 < (uVar6 - 0x7b & 0xffff)) {
          uVar6 = uVar6 & 0x5f;
        }
        return (ulong)uVar6;
      }
    }
  }
  if ((uVar6 - 0x587 & 0xffff) < 0xfb59) {
    if ((uVar6 - 0x1ff4 & 0xffff) < 0xfe0d) {
      if ((uVar6 - 0x2185 & 0xffff) < 0xffeb) {
        if ((uVar6 - 0x24ea & 0xffff) < 0xffe6) {
          if ((uVar6 - 0x2ce4 & 0xffff) < 0xff4c) {
            if (0xffd9 < (uVar6 - 0x2d26 & 0xffff)) {
              if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 0x28);
              if (lVar3 == 0) goto LAB_07538d3c;
              if (*(uint *)(lVar3 + 0x18) <= uVar5 - 0x2d00) goto LAB_07538d40;
              lVar3 = lVar3 + (ulong)(uVar5 - 0x2d00) * 2;
              goto LAB_07538c04;
            }
            if ((uVar6 + 0x5968 & 0xffff) < 0xffa9) {
              if ((uVar6 + 0x5873 & 0xffff) < 0xff96) {
                if (0xffe5 < (uVar6 + 0xa5 & 0xffff)) {
                  return (ulong)(uVar6 - 0x20);
                }
                uVar6 = uVar6 & 0xffff;
                if (uVar6 == 0x1d79) {
                  return 0xa77d;
                }
                if (uVar6 == 0x1d7d) {
                  return 0x2c63;
                }
                if (uVar6 == 0x214e) {
                  return 0x2132;
                }
                return param_2 & 0xffffffff;
              }
              if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 0x38);
              if (lVar3 == 0) {
LAB_07538d3c:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar4 = -0xa723;
            }
            else {
              if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 0x30);
              if (lVar3 == 0) goto LAB_07538d3c;
              lVar4 = -0xa641;
            }
          }
          else {
            if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 0x20);
            if (lVar3 == 0) goto LAB_07538d3c;
            lVar4 = -0x2c30;
          }
        }
        else {
          if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 0x18);
          if (lVar3 == 0) goto LAB_07538d3c;
          lVar4 = -0x24d0;
        }
      }
      else {
        if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 0x10);
        if (lVar3 == 0) goto LAB_07538d3c;
        lVar4 = -0x2170;
      }
    }
    else {
      if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_0918bb48 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_07538d3c;
      lVar4 = -0x1e01;
    }
    uVar5 = *(uint *)(lVar3 + 0x18);
    lVar4 = lVar4 + (param_2 & 0xffff);
  }
  else {
    if (*(int *)(DAT_0918bb48 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_0918bb48 + 0xb8);
    if (lVar3 == 0) goto LAB_07538d3c;
    uVar5 = *(uint *)(lVar3 + 0x18);
    lVar4 = (param_2 & 0xffff) - 0xe0;
  }
  if (uVar5 <= (uint)lVar4) {
LAB_07538d40:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar3 = lVar3 + lVar4 * 2;
LAB_07538c04:
  return (ulong)*(ushort *)(lVar3 + 0x20);
}

