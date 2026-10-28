// rea decompile_all
// name: System.Collections.Generic.ByteEqualityComparer$$IndexOf
// address: 0x75617b4
// body: available
// range: 0x75617b4-0x7561943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756181c to 0x75e406c System.Buffer$$IndexOfByte (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7561864 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756193c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7561940 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Collections_Generic_ByteEqualityComparer__IndexOf
          (undefined8 param_1,long param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar1 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092179d0);
    System_ArgumentNullException___ctor(uVar1,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091c44e8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar1,uVar4);
  }
  if (param_4 < 0) {
    uVar1 = thunk_FUN_03fc39d4(&DAT_092049a8);
    uVar1 = System_Environment__GetResourceString(uVar1,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09223268;
  }
  else {
    if (-1 < param_5) {
      iVar5 = (int)*(ulong *)(param_2 + 0x18);
      if (param_5 <= iVar5 - param_4) {
        if (param_5 == 0) {
          return 0xffffffff;
        }
        if ((*(ulong *)(param_2 + 0x18) & 0xffffffff) == 0) {
          param_2 = 0;
        }
        else {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          param_2 = param_2 + 0x20;
        }
        uVar1 = System_Buffer__IndexOfByte(param_2,param_3,param_4,param_5,0);
        return uVar1;
      }
      uVar1 = thunk_FUN_03fc39d4(&DAT_09209710);
      uVar1 = System_Environment__GetResourceString(uVar1,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar4,uVar1,0);
      goto LAB_07561928;
    }
    uVar1 = thunk_FUN_03fc39d4(&DAT_091ff7b0);
    uVar1 = System_Environment__GetResourceString(uVar1,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    puVar2 = &DAT_09219b28;
  }
  uVar3 = thunk_FUN_03fc39d4(puVar2);
  System_ArgumentOutOfRangeException___ctor(uVar4,uVar3,uVar1,0);
LAB_07561928:
  uVar1 = thunk_FUN_03fc39d4(&DAT_091c44e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar1);
}

