// rea decompile_all
// name: System.IO.Path$$GetPathRoot
// address: 0x758bb40
// body: available
// range: 0x758bb40-0x758bf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758bdd8 to 0x7430064 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758bf10 to 0x7432114 System.String$$Substring (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758bf14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758bf5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_Path__GetPathRoot(long param_1)

{
  int iVar1;
  short sVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  
  if ((DAT_09521b3e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    DAT_09521b3e = 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar4 = System_String__Trim(param_1,0);
  if (lVar4 == 0) goto LAB_0758bf14;
  if (*(int *)(lVar4 + 0x10) == 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar7 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0920fef0);
    System_ArgumentException___ctor(uVar7,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d5890);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar6);
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_IO_Path__IsPathRooted(param_1);
  if ((uVar5 & 1) == 0) {
LAB_0758bddc:
    uVar7 = **(undefined8 **)(DAT_09535468 + 0xb8);
  }
  else {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) == 0x2f) {
      uVar3 = System_String__get_Chars(param_1,0,0);
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
      if ((uVar5 & 1) == 0) goto LAB_0758bddc;
    }
    else {
      iVar9 = *(int *)(param_1 + 0x10);
      if (iVar9 == 1) {
        uVar3 = System_String__get_Chars(param_1,0,0);
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
        uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
        if ((uVar5 & 1) != 0) goto LAB_0758be28;
        iVar9 = *(int *)(param_1 + 0x10);
      }
      if (iVar9 < 2) goto LAB_0758bddc;
      uVar3 = System_String__get_Chars(param_1,0,0);
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
      if ((uVar5 & 1) != 0) {
        uVar3 = System_String__get_Chars(param_1,1,0);
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
        uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
        if ((uVar5 & 1) != 0) {
          iVar8 = *(int *)(param_1 + 0x10);
          iVar9 = 2;
          iVar1 = 2;
          if (2 < iVar8) {
            do {
              iVar9 = iVar1;
              uVar3 = System_String__get_Chars(param_1,iVar9,0);
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188f20);
              }
              uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
              iVar8 = *(int *)(param_1 + 0x10);
            } while (((uVar5 & 1) == 0) && (iVar9 = iVar9 + 1, iVar1 = iVar9, iVar9 < iVar8));
          }
          if (iVar9 < iVar8) {
            do {
              iVar9 = iVar9 + 1;
              if (*(int *)(param_1 + 0x10) <= iVar9) break;
              uVar3 = System_String__get_Chars(param_1,iVar9,0);
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188f20);
              }
              uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
            } while ((uVar5 & 1) == 0);
          }
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar7 = *(undefined8 *)(*(long *)(DAT_09188f20 + 0xb8) + 0x10);
          lVar4 = System_String__Substring(param_1,2,iVar9 + -2,0);
          if (lVar4 != 0) {
            uVar6 = System_String__Replace
                              (lVar4,*(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 8),
                               *(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 10),0);
            uVar7 = System_String__Concat(uVar7,uVar7,uVar6,0);
            return uVar7;
          }
          goto LAB_0758bf14;
        }
      }
      uVar3 = System_String__get_Chars(param_1,0,0);
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
      if ((uVar5 & 1) == 0) {
        sVar2 = System_String__get_Chars(param_1,1,0);
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
        if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 0x18) == sVar2) {
          if (*(int *)(param_1 + 0x10) < 3) {
            uVar3 = 2;
          }
          else {
            uVar3 = System_String__get_Chars(param_1,2,0);
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188f20);
            }
            uVar5 = System_IO_Path__IsDirectorySeparator(uVar3);
            uVar3 = 2;
            if ((uVar5 & 1) != 0) {
              uVar3 = 3;
            }
          }
        }
        else {
          param_1 = System_IO_Directory__GetCurrentDirectory(0);
          if (param_1 == 0) {
LAB_0758bf14:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = 2;
        }
        uVar7 = System_String__Substring(param_1,0,uVar3,0);
        return uVar7;
      }
    }
LAB_0758be28:
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = *(undefined8 *)(*(long *)(DAT_09188f20 + 0xb8) + 0x10);
  }
  return uVar7;
}

