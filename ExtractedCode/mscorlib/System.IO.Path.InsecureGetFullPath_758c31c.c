// rea decompile_all
// name: System.IO.Path$$InsecureGetFullPath
// address: 0x758c31c
// body: available
// range: 0x758c31c-0x758c997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758c8c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758c910 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758c960 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Path__InsecureGetFullPath(long param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short sVar10;
  long local_38;
  
  if ((DAT_09521b3c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188380);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_09214658);
    DAT_09521b3c = 1;
  }
  local_38 = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09220b48);
    System_ArgumentNullException___ctor(uVar9,uVar8,0);
    goto LAB_0758c8fc;
  }
  lVar6 = System_String__Trim(param_1,0);
  if (lVar6 == 0) goto LAB_0758c8c8;
  if (*(int *)(lVar6 + 0x10) == 0) {
    uVar8 = thunk_FUN_03fc39d4(&DAT_0920fee8);
    uVar8 = Locale__GetText(uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar9 = thunk_FUN_03f9944c();
    System_ArgumentException___ctor(uVar9,uVar8,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091d58a8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar8);
  }
  uVar3 = System_String__get_Chars(param_1,*(int *)(param_1 + 0x10) + -1,0);
  if (*(int *)(param_1 + 0x10) < 2) {
LAB_0758c4c0:
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_IO_Path__IsPathRooted(param_1);
    if ((uVar7 & 1) != 0) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) == 0x5c) &&
         (1 < *(int *)(param_1 + 0x10))) {
        uVar4 = System_String__get_Chars(param_1,0,0);
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
        uVar7 = System_IO_Path__IsDirectorySeparator(uVar4);
        if ((uVar7 & 1) != 0) {
          uVar4 = System_String__get_Chars(param_1,1,0);
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
          }
          uVar7 = System_IO_Path__IsDirectorySeparator(uVar4);
          if ((uVar7 & 1) == 0) {
            lVar6 = System_IO_Directory__InsecureGetCurrentDirectory(0);
            if (lVar6 == 0) goto LAB_0758c8c8;
            sVar2 = System_String__get_Chars(lVar6,1,0);
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188f20);
            }
            if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 0x18) == sVar2) {
              uVar8 = System_String__Substring(lVar6,0,2,0);
              param_1 = System_String__Concat(uVar8,param_1,0);
            }
            else {
              iVar5 = System_String__IndexOfUnchecked
                                (lVar6,DAT_09214658,0,*(undefined4 *)(lVar6 + 0x10),0);
              uVar4 = System_String__IndexOf(lVar6,0x5c,iVar5 + 1,0);
              param_1 = System_String__Substring(lVar6,0,uVar4,0);
            }
          }
        }
      }
      goto LAB_0758c76c;
    }
    uVar7 = System_Environment__get_IsRunningOnWindows(0);
    if ((uVar7 & 1) == 0) {
      iVar5 = 0;
      do {
        iVar5 = System_String__IndexOf(param_1,0x2e,iVar5,0);
        if (iVar5 == -1) {
          iVar5 = -1;
          break;
        }
        iVar5 = iVar5 + 1;
        if (iVar5 == *(int *)(param_1 + 0x10)) break;
        sVar2 = System_String__get_Chars(param_1,iVar5,0);
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
        if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) == sVar2) break;
        sVar2 = System_String__get_Chars(param_1,iVar5,0);
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f20);
        }
      } while (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 8) != sVar2);
      bVar1 = 0 < iVar5;
    }
    else {
      bVar1 = true;
    }
    lVar6 = System_IO_Directory__InsecureGetCurrentDirectory(0);
    if (lVar6 == 0) goto LAB_0758c8c8;
    sVar2 = System_String__get_Chars(lVar6,*(int *)(lVar6 + 0x10) + -1,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) == sVar2) {
      param_1 = System_String__Concat(lVar6,param_1,0);
    }
    else {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Char__ToString(*(long *)(DAT_09188f20 + 0xb8) + 10,0);
      param_1 = System_String__Concat(lVar6,uVar8,param_1,0);
    }
    if (bVar1) goto LAB_0758c76c;
  }
  else {
    uVar4 = System_String__get_Chars(param_1,0,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    uVar7 = System_IO_Path__IsDirectorySeparator(uVar4);
    if ((uVar7 & 1) == 0) goto LAB_0758c4c0;
    uVar4 = System_String__get_Chars(param_1,1,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    uVar7 = System_IO_Path__IsDirectorySeparator(uVar4);
    if ((uVar7 & 1) == 0) goto LAB_0758c4c0;
    if (*(int *)(param_1 + 0x10) == 2) {
LAB_0758c964:
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar9 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_092116b8);
      System_ArgumentException___ctor(uVar9,uVar8,0);
LAB_0758c8fc:
      uVar8 = thunk_FUN_03fc39d4(&DAT_091d58a8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar8);
    }
    uVar4 = System_String__get_Chars(param_1,0,0);
    iVar5 = System_String__IndexOf(param_1,uVar4,2,0);
    if (iVar5 < 0) goto LAB_0758c964;
    sVar2 = System_String__get_Chars(param_1,0,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    lVar6 = *(long *)(DAT_09188f20 + 0xb8);
    sVar10 = *(short *)(lVar6 + 10);
    if (sVar10 != sVar2) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
        lVar6 = *(long *)(DAT_09188f20 + 0xb8);
        sVar10 = *(short *)(lVar6 + 10);
      }
      param_1 = System_String__Replace(param_1,*(undefined2 *)(lVar6 + 8),sVar10,0);
    }
LAB_0758c76c:
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_1 = System_IO_Path__CanonicalizePath(param_1);
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = System_IO_Path__IsDirectorySeparator(uVar3);
  if ((uVar7 & 1) != 0) {
    if (param_1 == 0) {
LAB_0758c8c8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    sVar2 = System_String__get_Chars(param_1,*(int *)(param_1 + 0x10) + -1,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) != sVar2) {
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f20);
      }
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Char__ToString(*(long *)(DAT_09188f20 + 0xb8) + 10,0);
      param_1 = System_String__Concat(param_1,uVar8,0);
    }
  }
  if (*(int *)(DAT_09188380 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = FUN_03f64e04(param_1,&local_38);
  if ((uVar7 & 1) == 0) {
    local_38 = param_1;
  }
  return local_38;
}

