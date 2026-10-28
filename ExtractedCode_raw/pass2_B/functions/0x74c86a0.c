// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadMemberPrimitiveTyped
// address: 0x74c86a0
// body: available
// range: 0x74c86a0-0x74c8a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c893c to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c8940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c8948 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c8a08 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMemberPrimitiveTyped
               (long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_24;
  
  if ((DAT_095214c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09187ff8);
    FUN_03f5c2a4(&DAT_09188b48);
    FUN_03f5c2a4(&DAT_0920e260);
    DAT_095214c3 = 1;
  }
  plVar6 = (long *)(param_1 + 0xa0);
  lVar1 = *plVar6;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_09187ff8);
    System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped___ctor(lVar1,0);
    *plVar6 = lVar1;
    thunk_FUN_03f5d7b8(plVar6,lVar1);
    lVar1 = *plVar6;
    if (lVar1 == 0) goto LAB_074c8940;
  }
  System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped__Read(lVar1,param_1,0);
  if (*(long *)(param_1 + 0xa0) != 0) {
    System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTyped__Dump
              (*(long *)(param_1 + 0xa0),0);
    lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
    if (lVar1 != 0) {
      lVar5 = *(long *)(param_1 + 0x40);
      *(undefined4 *)(lVar1 + 0x14) = 1;
      if (lVar5 != 0) {
        plVar6 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek(lVar5);
        if (plVar6 != (long *)0x0) {
          if (*plVar6 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar6);
          }
        }
        lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar1 != 0) {
          System_Runtime_Serialization_Formatters_Binary_ParseRecord__Init();
          lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
          if ((*(long *)(param_1 + 0xa0) != 0) && (lVar1 != 0)) {
            *(undefined8 *)(lVar1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
            thunk_FUN_03f5d7b8();
            lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            if (*(long *)(param_1 + 0xa0) != 0) {
              uVar4 = *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
              if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = System_Runtime_Serialization_Formatters_Binary_Converter__ToComType(uVar4,0);
              if (lVar1 != 0) {
                *(undefined8 *)(lVar1 + 0x40) = uVar2;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40),uVar2);
                lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                  (param_1);
                if ((*(long *)(param_1 + 0xa0) != 0) &&
                   (uVar2 = System_Runtime_Serialization_Formatters_Binary_Converter__ToType
                                      (*(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10),0),
                   lVar1 != 0)) {
                  *(undefined8 *)(lVar1 + 0x48) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48),uVar2);
                  lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                    (param_1);
                  if ((*(long *)(param_1 + 0xa0) != 0) && (lVar1 != 0)) {
                    *(undefined4 *)(lVar1 + 0x50) =
                         *(undefined4 *)(*(long *)(param_1 + 0xa0) + 0x10);
                    lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                      (param_1);
                    if (plVar6 == (long *)0x0) {
                      if (lVar1 == 0) goto LAB_074c8940;
                      *(undefined4 *)(lVar1 + 0x10) = 2;
                      lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                        (param_1);
                      if (lVar1 == 0) goto LAB_074c8940;
                      *(undefined8 *)(lVar1 + 0x28) = DAT_0920e260;
                      thunk_FUN_03f5d7b8();
                    }
                    else {
                      if (lVar1 == 0) goto LAB_074c8940;
                      *(undefined4 *)(lVar1 + 0x10) = 3;
                      lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                        (param_1);
                      if (lVar1 == 0) goto LAB_074c8940;
                      lVar5 = plVar6[6];
                      *(undefined4 *)(lVar1 + 0x20) = 1;
                      if ((int)lVar5 == 2) {
                        lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                          (param_1);
                        if (lVar1 == 0) goto LAB_074c8940;
                        uVar4 = 3;
                      }
                      else {
                        if ((int)lVar5 != 1) {
                          uVar2 = thunk_FUN_03fc39d4(&DAT_09180318);
                          uVar2 = FUN_03f5c394(uVar2,1);
                          FUN_039b1d98(plVar6);
                          local_24 = (undefined4)plVar6[6];
                          uVar3 = thunk_FUN_03fc39d4(&DAT_09186ff0);
                          uVar3 = FUN_03f5c42c(uVar3,&local_24);
                          uVar3 = System_Enum__ToString(uVar3,0);
                          FUN_039b1d98(uVar2);
                          FUN_039b0da0(uVar2,uVar3);
                          FUN_039af17c(uVar2,0,uVar3);
                          uVar3 = thunk_FUN_03fc39d4(&DAT_092052c8);
                          uVar2 = System_Environment__GetResourceString(uVar3,uVar2,0);
                          thunk_FUN_03fc39d4(&DAT_0918a948);
                          uVar3 = thunk_FUN_03f9944c();
                          System_Runtime_Serialization_SerializationException___ctor(uVar3,uVar2,0);
                          uVar2 = thunk_FUN_03fc39d4(&DAT_091e0e40);
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c414(uVar3,uVar2);
                        }
                        lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                          (param_1);
                        if (lVar1 == 0) goto LAB_074c8940;
                        *(long *)(lVar1 + 0x28) = plVar6[5];
                        thunk_FUN_03f5d7b8();
                        lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                          (param_1);
                        if (lVar1 == 0) goto LAB_074c8940;
                        uVar4 = 2;
                      }
                      *(undefined4 *)(lVar1 + 0x1c) = uVar4;
                    }
                    lVar1 = *(long *)(param_1 + 0x10);
                    uVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                      (param_1);
                    if (lVar1 != 0) {
                      System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse
                                (lVar1,uVar2,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_074c8940:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

