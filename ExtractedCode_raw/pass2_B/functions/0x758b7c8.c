// rea decompile_all
// name: System.IO.Path$$GetDirectoryName
// address: 0x758b7c8
// body: available
// range: 0x758b7c8-0x758bb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758ba88 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758bab0 to 0x758b36c System.IO.Path$$CleanPath (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758bad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758bb3c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_Path__GetDirectoryName(long param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  if ((DAT_09521b35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    DAT_09521b35 = 1;
  }
  uVar4 = System_String__op_Equality(param_1,**(undefined8 **)(DAT_09535468 + 0xb8),0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar5 = thunk_FUN_03f9944c();
    puVar8 = &DAT_09205970;
    goto LAB_0758bb14;
  }
  if (param_1 != 0) {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_IO_Path__GetPathRoot(param_1);
    uVar4 = System_String__op_Equality(uVar5,param_1,0);
    if ((uVar4 & 1) == 0) {
      lVar6 = System_String__Trim(param_1,0);
      if (lVar6 == 0) {
LAB_0758bad4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x10) == 0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        puVar8 = &DAT_091fbe60;
      }
      else {
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = System_String__IndexOfAny(param_1,**(undefined8 **)(DAT_09188f20 + 0xb8),0);
        if (iVar3 < 0) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar3 = System_String__LastIndexOfAny
                            (param_1,*(undefined8 *)(*(long *)(DAT_09188f20 + 0xb8) + 0x20),0);
          if (iVar3 == 0) {
            iVar3 = 1;
          }
          else if (iVar3 < 1) {
            return **(undefined8 **)(DAT_09535468 + 0xb8);
          }
          lVar6 = System_String__Substring(param_1,0,iVar3,0);
          if (lVar6 != 0) {
            iVar1 = *(int *)(lVar6 + 0x10);
            if (iVar1 < 2) {
              if (iVar1 == 1) {
                if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188f20);
                }
                if ((*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) == 0x5c) &&
                   (1 < *(int *)(param_1 + 0x10))) {
                  sVar2 = System_String__get_Chars(param_1,iVar3,0);
                  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188f20);
                  }
                  if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 0x18) == sVar2) {
                    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09188f20);
                    }
                    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    lVar7 = *(long *)(DAT_09188f20 + 0xb8) + 0x18;
                    goto LAB_0758ba64;
                  }
                }
              }
            }
            else {
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188f20);
              }
              if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 10) == 0x5c) {
                sVar2 = System_String__get_Chars(lVar6,iVar1 + -1,0);
                if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188f20);
                }
                if (*(short *)(*(long *)(DAT_09188f20 + 0xb8) + 0x18) == sVar2) {
                  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188f20);
                  }
                  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar7 = *(long *)(DAT_09188f20 + 0xb8) + 10;
LAB_0758ba64:
                  uVar5 = System_Char__ToString(lVar7,0);
                  uVar5 = System_String__Concat(lVar6,uVar5,0);
                  return uVar5;
                }
              }
            }
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188f20);
            }
            uVar5 = System_IO_Path__CleanPath(lVar6);
            return uVar5;
          }
          goto LAB_0758bad4;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        puVar8 = &DAT_0920a5f8;
      }
LAB_0758bb14:
      uVar9 = thunk_FUN_03fc39d4(puVar8);
      System_ArgumentException___ctor(uVar5,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091d5878);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar9);
    }
  }
  return 0;
}

