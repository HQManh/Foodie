// rea decompile_all
// name: System.IO.Path$$ChangeExtension
// address: 0x758ad70
// body: available
// range: 0x758ad70-0x758af53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758aebc to 0x7432114 System.String$$Substring (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758af08 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758af50 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Path__ChangeExtension(long param_1,long param_2)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09521b32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09521b32 = 1;
  }
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_String__IndexOfAny(param_1,**(undefined8 **)(DAT_09188f20 + 0xb8),0);
    if (iVar2 != -1) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09204740);
      System_ArgumentException___ctor(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091d5858);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_IO_Path__findExtension(param_1);
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        param_2 = DAT_091f8f68;
        if (-1 < iVar2) {
          iVar2 = iVar2 + 1;
          goto LAB_0758aeb0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x10) == 0) {
          param_2 = **(long **)(DAT_09535468 + 0xb8);
        }
        else if ((0 < *(int *)(param_2 + 0x10)) &&
                (sVar1 = System_String__get_Chars(param_2,0,0), sVar1 != 0x2e)) {
          param_2 = System_String__Concat(DAT_091f8f68,param_2,0);
        }
        if (-1 < iVar2) {
          if (iVar2 == 0) {
            return param_2;
          }
          param_1 = System_String__Substring(param_1,0,iVar2,0);
        }
      }
      lVar3 = System_String__Concat(param_1,param_2,0);
      return lVar3;
    }
    if (-1 < iVar2) {
LAB_0758aeb0:
      lVar3 = System_String__Substring(param_1,0,iVar2,0);
      return lVar3;
    }
  }
  return param_1;
}

