// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadMemberReference
// address: 0x74c8a0c
// body: available
// range: 0x74c8a0c-0x74c8bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c8bb8 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c8bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c8bc4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMemberReference
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_095214c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188008);
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214c7 = 1;
  }
  plVar4 = (long *)(param_1 + 0xb8);
  lVar1 = *plVar4;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_09188008);
    System_Runtime_Serialization_Formatters_Binary_MemberReference___ctor(lVar1,0);
    *plVar4 = lVar1;
    thunk_FUN_03f5d7b8(plVar4,lVar1);
    lVar1 = *plVar4;
    if (lVar1 == 0) goto LAB_074c8bbc;
  }
  System_Runtime_Serialization_Formatters_Binary_MemberReference__Read(lVar1,param_1,0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    System_Runtime_Serialization_Formatters_Binary_MemberReference__Dump
              (*(long *)(param_1 + 0xb8),0);
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar4 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek();
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
      }
      lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
      if (lVar1 != 0) {
        System_Runtime_Serialization_Formatters_Binary_ParseRecord__Init();
        lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (((*(long *)(param_1 + 0xb8) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
           (uVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId
                              (*(long *)(param_1 + 0x10),
                               (long)*(int *)(*(long *)(param_1 + 0xb8) + 0x10),0), lVar1 != 0)) {
          *(undefined8 *)(lVar1 + 0x60) = uVar2;
          lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
          if (lVar1 != 0) {
            *(undefined4 *)(lVar1 + 0x10) = 3;
            lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            if ((lVar1 != 0) && (*(undefined4 *)(lVar1 + 0x20) = 3, plVar4 != (long *)0x0)) {
              lVar1 = plVar4[6];
              lVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                (param_1);
              if ((int)lVar1 == 1) {
                if (lVar3 == 0) goto LAB_074c8bbc;
                *(undefined4 *)(lVar3 + 0x1c) = 2;
                lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                  (param_1);
                if (lVar1 == 0) goto LAB_074c8bbc;
                *(long *)(lVar1 + 0x28) = plVar4[5];
                thunk_FUN_03f5d7b8();
                lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                  (param_1);
                if (lVar1 == 0) goto LAB_074c8bbc;
                *(long *)(lVar1 + 0x48) = plVar4[8];
                thunk_FUN_03f5d7b8();
              }
              else {
                if (lVar3 == 0) goto LAB_074c8bbc;
                *(undefined4 *)(lVar3 + 0x1c) = 3;
              }
              lVar1 = *(long *)(param_1 + 0x10);
              uVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                (param_1);
              if (lVar1 != 0) {
                System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar1,uVar2,0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_074c8bbc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

