// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObjectNull
// address: 0x74c8bc8
// body: available
// range: 0x74c8bc8-0x74c8d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c8d84 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c8d88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c8d90 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectNull
               (long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_095214c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188b40);
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214c8 = 1;
  }
  plVar5 = (long *)(param_1 + 0xc0);
  lVar2 = *plVar5;
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_09188b40);
    System_Runtime_Serialization_Formatters_Binary_ObjectNull___ctor(lVar2,0);
    *plVar5 = lVar2;
    thunk_FUN_03f5d7b8(plVar5,lVar2);
    lVar2 = *plVar5;
    if (lVar2 == 0) goto LAB_074c8d88;
  }
  System_Runtime_Serialization_Formatters_Binary_ObjectNull__Read(lVar2,param_1,param_2,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    System_Runtime_Serialization_Formatters_Binary_ObjectNull__Dump(*(long *)(param_1 + 0xc0),0);
    if (*(long *)(param_1 + 0x40) != 0) {
      plVar5 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek();
      if (plVar5 != (long *)0x0) {
        if (*plVar5 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar5);
        }
      }
      lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
      if (lVar2 != 0) {
        System_Runtime_Serialization_Formatters_Binary_ParseRecord__Init();
        lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x10) = 3;
          lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
          if ((lVar2 != 0) && (*(undefined4 *)(lVar2 + 0x20) = 4, plVar5 != (long *)0x0)) {
            lVar2 = plVar5[6];
            lVar3 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            if ((int)lVar2 == 1) {
              if (lVar3 == 0) goto LAB_074c8d88;
              *(undefined4 *)(lVar3 + 0x1c) = 2;
              lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                (param_1);
              if (lVar2 == 0) goto LAB_074c8d88;
              *(long *)(lVar2 + 0x28) = plVar5[5];
              thunk_FUN_03f5d7b8();
              lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                (param_1);
              if (lVar2 == 0) goto LAB_074c8d88;
              *(long *)(lVar2 + 0x48) = plVar5[8];
              thunk_FUN_03f5d7b8();
            }
            else {
              if (lVar3 == 0) goto LAB_074c8d88;
              *(undefined4 *)(lVar3 + 0x1c) = 3;
              lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                (param_1);
              if ((*(long *)(param_1 + 0xc0) == 0) || (lVar2 == 0)) goto LAB_074c8d88;
              iVar1 = *(int *)(*(long *)(param_1 + 0xc0) + 0x10);
              *(int *)(lVar2 + 0x118) = iVar1;
              System_Runtime_Serialization_Formatters_Binary_ObjectProgress__ArrayCountIncrement
                        (plVar5,iVar1 + -1,0);
            }
            lVar2 = *(long *)(param_1 + 0x10);
            uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            if (lVar2 != 0) {
              System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar2,uVar4,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_074c8d88:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

