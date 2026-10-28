// rea decompile_all
// name: System.Globalization.TextInfo$$ToLowerInternal
// address: 0x753828c
// body: available
// range: 0x753828c-0x75386f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75386f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75386f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_TextInfo__ToLowerInternal(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar8 = param_2 & 0xffffffff;
  if ((DAT_095218b1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bb40);
    DAT_095218b1 = 1;
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_075386f0;
  uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),0);
  uVar7 = (uint)param_2;
  uVar6 = uVar7 & 0xffff;
  if ((uVar2 & 1) == 0) {
    if (uVar6 < 499) {
      uVar1 = uVar7 & 0xffff;
      if (uVar1 < 0x1c6) {
        if (uVar1 == 0x130) {
          uVar8 = 0x69;
          goto LAB_075385a8;
        }
        if (uVar1 == 0x1c5) goto LAB_075384b4;
      }
      else if ((uVar1 - 0x1c8 < 0x2b) &&
              ((1L << ((ulong)(uVar1 - 0x1c8) & 0x3f) & 0x40000000009U) != 0)) {
LAB_075384b4:
        uVar8 = (ulong)(uVar7 + 1);
        goto LAB_075385a8;
      }
    }
    else if ((uVar7 & 0xffff) < 0x1e9f) {
      if (uVar6 - 0x3d2 < 3) {
        uVar8 = 0x3cb03cd03c5 >> ((ulong)((uVar6 - 0x3d2) * 0x10) & 0x3f);
        goto LAB_075385a8;
      }
      if ((uVar7 & 0xffff) == 0x3f4) {
        uVar8 = 0x3b8;
        goto LAB_075385a8;
      }
      if ((uVar7 & 0xffff) == 0x1e9e) {
        uVar8 = 0xdf;
        goto LAB_075385a8;
      }
    }
    else {
      uVar1 = uVar7 & 0xffff;
      if (uVar1 == 0x2126) {
        uVar8 = 0x3c9;
        goto LAB_075385a8;
      }
      if (uVar1 == 0x212a) {
        uVar8 = 0x6b;
        goto LAB_075385a8;
      }
      if (uVar1 == 0x212b) {
        uVar8 = 0xe5;
        goto LAB_075385a8;
      }
    }
    uVar2 = System_Globalization_TextInfo__get_IsAsciiCasingSameAsInvariant(param_1);
    if ((uVar2 & 1) == 0) {
      if ((uVar7 & 0xffff) == 0x49) {
        uVar8 = 0x131;
        goto LAB_075385a8;
      }
      if ((uVar7 & 0xffff) < 0x80) {
        if (0xffe5 < (uVar7 - 0x5b & 0xffff)) {
          uVar7 = uVar7 | 0x20;
        }
        uVar8 = (ulong)uVar7;
        goto LAB_075385a8;
      }
    }
  }
  if ((uVar7 - 0x557 & 0xffff) < 0xfb69) {
    if (0xffd9 < (uVar7 - 0x10c6 & 0xffff)) {
      if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_075386f0;
      lVar5 = -0x10a0;
      goto LAB_07538478;
    }
    if ((uVar7 - 0x1ffd & 0xffff) < 0xfe03) {
      if ((uVar7 - 0x2170 >> 4 & 0xfff) < 0xfff) {
        if ((uVar7 - 0x24d0 & 0xffff) < 0xffe6) {
          if (0xffd0 < (uVar7 - 0x2c2f & 0xffff)) {
            if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x28);
            if (lVar3 == 0) goto LAB_075386f0;
            iVar4 = -0x2c00;
            goto LAB_07538590;
          }
          if ((uVar7 - 0x2ce3 & 0xffff) < 0xff7d) {
            if ((uVar7 + 0x5969 & 0xffff) < 0xffa9) {
              if ((uVar7 + 0x5874 & 0xffff) < 0xff96) {
                if ((uVar7 + 0xc5 & 0xffff) < 0xffe6) {
                  if ((uVar7 & 0xffff) == 0x2132) {
                    uVar8 = 0x214e;
                  }
                  else if ((uVar7 & 0xffff) == 0x2183) {
                    uVar8 = 0x2184;
                  }
                }
                else {
                  uVar8 = (ulong)(uVar7 + 0x20);
                }
                goto LAB_075385a8;
              }
              if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x40);
              if (lVar3 == 0) goto LAB_075386f0;
              lVar5 = -0xa722;
            }
            else {
              if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x38);
              if (lVar3 == 0) goto LAB_075386f0;
              lVar5 = -0xa640;
            }
          }
          else {
            if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x30);
            if (lVar3 == 0) goto LAB_075386f0;
            lVar5 = -0x2c60;
          }
        }
        else {
          if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x20);
          if (lVar3 == 0) goto LAB_075386f0;
          lVar5 = -0x24b6;
        }
LAB_07538478:
        uVar6 = *(uint *)(lVar3 + 0x18);
        lVar5 = lVar5 + (param_2 & 0xffff);
        goto LAB_07538480;
      }
      if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x18);
      if (lVar3 == 0) goto LAB_075386f0;
      iVar4 = -0x2160;
    }
    else {
      if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(DAT_0918bb40 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_075386f0;
      iVar4 = -0x1e00;
    }
LAB_07538590:
    if (*(uint *)(lVar3 + 0x18) <= uVar6 + iVar4) {
LAB_075386f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar3 = lVar3 + (ulong)(uVar6 + iVar4) * 2;
  }
  else {
    if (*(int *)(DAT_0918bb40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_0918bb40 + 0xb8);
    if (lVar3 == 0) {
LAB_075386f0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = *(uint *)(lVar3 + 0x18);
    lVar5 = (param_2 & 0xffff) - 0xc0;
LAB_07538480:
    if (uVar6 <= (uint)lVar5) goto LAB_075386f4;
    lVar3 = lVar3 + lVar5 * 2;
  }
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x20);
LAB_075385a8:
  return uVar8 & 0xffffffff;
}

