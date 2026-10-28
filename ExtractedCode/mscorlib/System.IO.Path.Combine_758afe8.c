// rea decompile_all
// name: System.IO.Path$$Combine
// address: 0x758afe8
// body: available
// range: 0x758afe8-0x758b247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758b158 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758b1a8 to 0x7430064 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758b244 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Path__Combine(long param_1,long param_2)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((DAT_09521b33 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f20);
    DAT_09521b33 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09220b58;
  }
  else {
    if (param_2 != 0) {
      lVar7 = param_2;
      if ((*(int *)(param_1 + 0x10) == 0) || (lVar7 = param_1, *(int *)(param_2 + 0x10) == 0)) {
        return lVar7;
      }
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = System_String__IndexOfAny(param_1,**(undefined8 **)(DAT_09188f20 + 0xb8),0);
      if (iVar2 == -1) {
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_String__IndexOfAny(param_2,**(undefined8 **)(DAT_09188f20 + 0xb8),0);
        if (iVar2 == -1) {
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_IO_Path__IsPathRooted(param_2);
          if ((uVar3 & 1) != 0) {
            return param_2;
          }
          sVar1 = System_String__get_Chars(param_1,*(int *)(param_1 + 0x10) + -1,0);
          if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f20);
          }
          lVar7 = *(long *)(DAT_09188f20 + 0xb8);
          if (*(short *)(lVar7 + 10) != sVar1) {
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188f20);
              lVar7 = *(long *)(DAT_09188f20 + 0xb8);
            }
            if (*(short *)(lVar7 + 8) != sVar1) {
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188f20);
                lVar7 = *(long *)(DAT_09188f20 + 0xb8);
              }
              if (*(short *)(lVar7 + 0x18) != sVar1) {
                if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188f20);
                  lVar7 = *(long *)(DAT_09188f20 + 0xb8);
                }
                lVar7 = System_String__Concat(param_1,*(undefined8 *)(lVar7 + 0x10),param_2,0);
                return lVar7;
              }
            }
          }
          lVar7 = System_String__Concat(param_1,param_2,0);
          return lVar7;
        }
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09204740);
      System_ArgumentException___ctor(uVar5,uVar6,0);
      goto LAB_0758b230;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    puVar4 = &DAT_09220b60;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar4);
  System_ArgumentNullException___ctor(uVar5,uVar6,0);
LAB_0758b230:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091d5868);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

