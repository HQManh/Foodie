// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse
// address: 0x74c1d3c
// body: available
// range: 0x74c1d3c-0x74c1ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c1d74 to 0x74c1ed8 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c1da8 to 0x74c2238 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseObjectEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c1dd0 to 0x74c9334 System.Runtime.Serialization.Formatters.Binary.SerStack$$Pop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c1de8 to 0x74c99e8 System.Runtime.Serialization.Formatters.Binary.SerStack$$Push (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c1df4 to 0x74c2468 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseMember (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c1e00 to 0x74c2960 System.Runtime.Serialization.Formatters.Binary.ObjectReader$$ParseMemberEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c1e04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c1ea4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_074c1e04:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 < 5) {
    if (iVar1 < 3) {
      if (iVar1 == 1) {
        if (*(long *)(param_1 + 0x88) != 0) {
          System_Runtime_Serialization_Formatters_Binary_SerStack__Push
                    (*(long *)(param_1 + 0x88),param_2,0);
          return;
        }
        goto LAB_074c1e04;
      }
      if (iVar1 == 2) {
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObject();
        return;
      }
    }
    else {
      if (iVar1 == 3) {
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseMember();
        return;
      }
      if (iVar1 == 4) {
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseObjectEnd();
        return;
      }
    }
  }
  else {
    if (iVar1 - 9U < 4) {
      return;
    }
    if (iVar1 == 5) {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__ParseMemberEnd();
      return;
    }
    if (iVar1 == 8) {
      if (*(long *)(param_1 + 0x88) != 0) {
        System_Runtime_Serialization_Formatters_Binary_SerStack__Pop(*(long *)(param_1 + 0x88),0);
        return;
      }
      goto LAB_074c1e04;
    }
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
  uVar2 = FUN_03f5c394(uVar2,1);
  FUN_039b1d98(param_2);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  FUN_039b1d98(uVar2);
  FUN_039b0da0(uVar2,uVar3);
  FUN_039af17c(uVar2,0,uVar3);
  uVar3 = thunk_FUN_03fc39d4(&DAT_09205738);
  uVar2 = System_Environment__GetResourceString(uVar3,uVar2,0);
  thunk_FUN_03fc39d4(&DAT_0918a948);
  uVar3 = thunk_FUN_03f9944c();
  System_Runtime_Serialization_SerializationException___ctor(uVar3,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d5048);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

