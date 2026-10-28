// rea decompile_all
// name: System.IO.Path$$CleanPath
// address: 0x758b36c
// body: available
// range: 0x758b36c-0x758b7c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758b7bc to 0x742cd54 System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758b7c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758b7c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Path__CleanPath(long param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  bool bVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  
  if ((DAT_09521b34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09188f20);
    DAT_09521b34 = 1;
  }
  if (param_1 == 0) goto LAB_0758b7c4;
  uVar2 = *(uint *)(param_1 + 0x10);
  sVar5 = System_String__get_Chars(param_1,0,0);
  if (((int)uVar2 < 3) || (sVar5 != 0x5c)) {
    if (uVar2 == 1) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(DAT_09188f20 + 0xb8);
      if (*(short *)(lVar6 + 10) == sVar5) {
        return param_1;
      }
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_09188f20 + 0xb8);
      }
      if (*(short *)(lVar6 + 8) == sVar5) {
        return param_1;
      }
    }
    uVar8 = 0;
    bVar11 = true;
  }
  else {
    sVar5 = System_String__get_Chars(param_1,1,0);
    bVar11 = sVar5 != 0x5c;
    uVar8 = (uint)(sVar5 == 0x5c) << 1;
  }
  if ((int)uVar8 < (int)uVar2) {
    iVar13 = 0;
    iVar14 = 0;
    uVar10 = uVar8;
    do {
      sVar5 = System_String__get_Chars(param_1,uVar10,0);
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      lVar6 = *(long *)(DAT_09188f20 + 0xb8);
      if (*(short *)(lVar6 + 10) == sVar5) {
LAB_0758b4e0:
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
        sVar3 = *(short *)(*(long *)(DAT_09188f20 + 0xb8) + 8);
        if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) != sVar3) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
            sVar3 = *(short *)(*(long *)(DAT_09188f20 + 0xb8) + 8);
          }
          if (sVar3 == sVar5) {
            iVar14 = iVar14 + 1;
          }
        }
        if (uVar10 + 1 != uVar2) {
          sVar5 = System_String__get_Chars(param_1,uVar10 + 1,0);
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
          }
          lVar6 = *(long *)(DAT_09188f20 + 0xb8);
          if (*(short *)(lVar6 + 10) != sVar5) {
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188f20);
              lVar6 = *(long *)(DAT_09188f20 + 0xb8);
            }
            if (*(short *)(lVar6 + 8) != sVar5) goto LAB_0758b5a4;
          }
        }
        iVar13 = iVar13 + 1;
      }
      else {
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
          lVar6 = *(long *)(DAT_09188f20 + 0xb8);
        }
        if (*(short *)(lVar6 + 8) == sVar5) goto LAB_0758b4e0;
      }
LAB_0758b5a4:
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar2);
    bVar4 = iVar14 == 0;
    if (iVar13 == 0) goto LAB_0758b5c8;
  }
  else {
    iVar13 = 0;
    bVar4 = true;
LAB_0758b5c8:
    if (bVar4) {
      return param_1;
    }
  }
  lVar6 = FUN_03f5c394(DAT_0917fcc8,uVar2 - iVar13);
  if (!bVar11) {
    if (lVar6 == 0) goto LAB_0758b7c4;
    if ((*(int *)(lVar6 + 0x18) == 0) ||
       (*(undefined2 *)(lVar6 + 0x20) = 0x5c, *(int *)(lVar6 + 0x18) == 1)) {
LAB_0758b7c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined2 *)(lVar6 + 0x22) = 0x5c;
  }
  if ((int)uVar8 < (int)uVar2) {
    if (lVar6 == 0) {
LAB_0758b7c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = uVar2 - 1;
    uVar12 = uVar8;
    do {
      if (*(int *)(lVar6 + 0x18) <= (int)uVar12) break;
      sVar5 = System_String__get_Chars(param_1,uVar8,0);
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      lVar7 = *(long *)(DAT_09188f20 + 0xb8);
      if (*(short *)(lVar7 + 10) == sVar5) {
LAB_0758b6ac:
        uVar9 = *(uint *)(lVar6 + 0x18);
        uVar1 = uVar12 + 1;
        if (uVar1 != uVar9) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
            uVar9 = *(uint *)(lVar6 + 0x18);
          }
          if (uVar9 <= uVar12) goto LAB_0758b7c0;
          *(undefined2 *)(lVar6 + (long)(int)uVar12 * 2 + 0x20) =
               *(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 10);
          uVar9 = uVar8;
          uVar12 = uVar1;
          if ((int)uVar8 < (int)uVar10) {
            do {
              uVar1 = uVar9 + 1;
              sVar5 = System_String__get_Chars(param_1,uVar1,0);
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188f20);
              }
              lVar7 = *(long *)(DAT_09188f20 + 0xb8);
              if (*(short *)(lVar7 + 10) != sVar5) {
                if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188f20);
                  lVar7 = *(long *)(DAT_09188f20 + 0xb8);
                }
                uVar8 = uVar9;
                if (*(short *)(lVar7 + 8) != sVar5) break;
              }
              uVar8 = uVar10;
              uVar9 = uVar1;
            } while (uVar10 != uVar1);
          }
        }
      }
      else {
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
          lVar7 = *(long *)(DAT_09188f20 + 0xb8);
        }
        if (*(short *)(lVar7 + 8) == sVar5) goto LAB_0758b6ac;
        if (*(uint *)(lVar6 + 0x18) <= uVar12) goto LAB_0758b7c0;
        *(short *)(lVar6 + (long)(int)uVar12 * 2 + 0x20) = sVar5;
        uVar12 = uVar12 + 1;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar2);
  }
  lVar6 = System_String__CreateString(0,lVar6,0);
  return lVar6;
}

