// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadMemberPrimitiveUnTyped
// address: 0x74c8f08
// body: available
// range: 0x74c8f08-0x74c9193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c9184 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c9188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c9190 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMemberPrimitiveUnTyped
               (long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_095214c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09187008);
    FUN_03f5c2a4(&DAT_09188000);
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214c6 = 1;
  }
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_074c9188;
  plVar2 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek();
  if ((plVar2 != (long *)0x0) && (plVar3 = plVar2, *plVar2 != DAT_09188b48)) {
LAB_074c9190:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar3);
  }
  plVar7 = (long *)(param_1 + 0xb0);
  lVar8 = *plVar7;
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_03f9944c(DAT_09188000);
    System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveUnTyped___ctor(lVar8,0);
    *plVar7 = lVar8;
    thunk_FUN_03f5d7b8(plVar7,lVar8);
    lVar8 = *plVar7;
    if (lVar8 == 0) goto LAB_074c9188;
  }
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 == (long *)0x0) goto LAB_074c9188;
  if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09187008 + 0x40)) goto LAB_074c9190;
  puVar4 = (undefined4 *)thunk_FUN_03f99594();
  lVar5 = *plVar7;
  *(undefined4 *)(lVar8 + 0x10) = *puVar4;
  if (lVar5 != 0) {
    System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveUnTyped__Read(lVar5,param_1,0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveUnTyped__Dump
                (*(long *)(param_1 + 0xb0),0);
      lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
      if (lVar8 != 0) {
        System_Runtime_Serialization_Formatters_Binary_ParseRecord__Init();
        lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if ((*(long *)(param_1 + 0xb0) != 0) && (lVar8 != 0)) {
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x18);
          thunk_FUN_03f5d7b8();
          lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
          if ((lVar8 != 0) && (plVar3 = *(long **)(param_1 + 0x50), plVar3 != (long *)0x0)) {
            if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09187008 + 0x40)) goto LAB_074c9190;
            puVar4 = (undefined4 *)thunk_FUN_03f99594();
            *(undefined4 *)(lVar8 + 0x50) = *puVar4;
            lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            lVar5 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            if (lVar5 != 0) {
              uVar1 = *(undefined4 *)(lVar5 + 0x50);
              if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09182b98);
              }
              uVar6 = System_Runtime_Serialization_Formatters_Binary_Converter__ToType(uVar1,0);
              if (lVar8 != 0) {
                *(undefined8 *)(lVar8 + 0x48) = uVar6;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x48),uVar6);
                lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                  (param_1);
                if (lVar8 != 0) {
                  *(undefined4 *)(lVar8 + 0x10) = 3;
                  lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                    (param_1);
                  if ((lVar8 != 0) && (*(undefined4 *)(lVar8 + 0x20) = 1, plVar2 != (long *)0x0)) {
                    lVar8 = plVar2[6];
                    lVar5 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                      (param_1);
                    if ((int)lVar8 == 1) {
                      if (lVar5 == 0) goto LAB_074c9188;
                      *(undefined4 *)(lVar5 + 0x1c) = 2;
                      lVar8 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                        (param_1);
                      if (lVar8 == 0) goto LAB_074c9188;
                      *(long *)(lVar8 + 0x28) = plVar2[5];
                      thunk_FUN_03f5d7b8();
                    }
                    else {
                      if (lVar5 == 0) goto LAB_074c9188;
                      *(undefined4 *)(lVar5 + 0x1c) = 3;
                    }
                    lVar8 = *(long *)(param_1 + 0x10);
                    uVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                      (param_1);
                    if (lVar8 != 0) {
                      System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse
                                (lVar8,uVar6,0);
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
LAB_074c9188:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

