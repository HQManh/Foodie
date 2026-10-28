// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObjectString
// address: 0x74c7b64
// body: available
// range: 0x74c7b64-0x74c80d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c7f64 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c7f68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c7f70 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c80d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectString
               (long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095214c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c28);
    FUN_03f5c2a4(&DAT_09181c88);
    FUN_03f5c2a4(&DAT_09182b98);
    FUN_03f5c2a4(&DAT_09188b48);
    FUN_03f5c2a4(&DAT_0920e228);
    DAT_095214c2 = 1;
  }
  plVar10 = (long *)(param_1 + 0x90);
  if (*plVar10 == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_09181c88);
    System_Runtime_Serialization_Formatters_Binary_BinaryObjectString___ctor(lVar2,0);
    *plVar10 = lVar2;
    thunk_FUN_03f5d7b8(plVar10,lVar2);
  }
  if (param_2 == 6) {
    if (*plVar10 == 0) goto LAB_074c7f68;
    System_Runtime_Serialization_Formatters_Binary_BinaryObjectString__Read(*plVar10,param_1,0);
    if (*(long *)(param_1 + 0x90) == 0) goto LAB_074c7f68;
    System_Runtime_Serialization_Formatters_Binary_BinaryObjectString__Dump
              (*(long *)(param_1 + 0x90),0);
  }
  else {
    plVar9 = (long *)(param_1 + 0x98);
    lVar2 = *plVar9;
    if (lVar2 == 0) {
      lVar2 = thunk_FUN_03f9944c(DAT_09181c28);
      System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString___ctor(lVar2,0);
      *plVar9 = lVar2;
      thunk_FUN_03f5d7b8(plVar9,lVar2);
      lVar2 = *plVar9;
      if (lVar2 == 0) goto LAB_074c7f68;
    }
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString__Read(lVar2,param_1,0)
    ;
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_074c7f68;
    System_Runtime_Serialization_Formatters_Binary_BinaryCrossAppDomainString__Dump
              (*(long *)(param_1 + 0x98),0);
    if ((*(long *)(param_1 + 0x98) == 0) || (*(long *)(param_1 + 0x10) == 0)) goto LAB_074c7f68;
    lVar8 = *(long *)(param_1 + 0x90);
    plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_ObjectReader__CrossAppDomainArray
                               (*(long *)(param_1 + 0x10),
                                *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x14),0);
    lVar2 = DAT_09535468;
    if (lVar8 == 0) goto LAB_074c7f68;
    if (plVar3 == (long *)0x0) {
      plVar3 = (long *)0x0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
    }
    else {
      plVar1 = plVar3;
      if (*plVar3 != DAT_09535468) {
        plVar1 = (long *)0x0;
      }
      *(long **)(lVar8 + 0x18) = plVar1;
      if (*plVar3 != lVar2) {
        plVar3 = (long *)0x0;
      }
    }
    thunk_FUN_03f5d7b8(lVar8 + 0x18,plVar3);
    lVar2 = *plVar10;
    if (lVar2 == 0) goto LAB_074c7f68;
    if (*(long *)(lVar2 + 0x18) == 0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar5 = FUN_03f5c394(uVar4,2);
      FUN_039b1d98();
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920dc10);
      FUN_039b0da0(uVar5,uVar4);
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920dc10);
      FUN_039af17c(uVar5,0,uVar4);
      lVar2 = *plVar9;
      FUN_039b1d98(lVar2);
      local_34 = *(undefined4 *)(lVar2 + 0x14);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
      FUN_039b0da0(uVar5,uVar4);
      FUN_039af17c(uVar5,1,uVar4);
      puVar6 = &DAT_091ff960;
      goto LAB_074c808c;
    }
    if (*plVar9 == 0) goto LAB_074c7f68;
    *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(*plVar9 + 0x10);
  }
  lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
  if (lVar2 != 0) {
    System_Runtime_Serialization_Formatters_Binary_ParseRecord__Init();
    lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
    if (lVar2 != 0) {
      *(undefined4 *)(lVar2 + 0x10) = 2;
      lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
      if (((*(long *)(param_1 + 0x90) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
         (uVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId
                            (*(long *)(param_1 + 0x10),
                             (long)*(int *)(*(long *)(param_1 + 0x90) + 0x10),0), lVar2 != 0)) {
        *(undefined8 *)(lVar2 + 0x58) = uVar4;
        lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar2 != 0) {
          if (*(long *)(lVar2 + 0x58) == *(long *)(param_1 + 0x20)) {
            lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
            if (lVar2 == 0) goto LAB_074c7f68;
            *(undefined4 *)(lVar2 + 0x24) = 1;
          }
          lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
          if (lVar2 != 0) {
            lVar8 = *(long *)(param_1 + 0x40);
            *(undefined4 *)(lVar2 + 0x14) = 1;
            if (lVar8 != 0) {
              plVar10 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek(lVar8)
              ;
              if ((plVar10 != (long *)0x0) && (*plVar10 != DAT_09188b48)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar10);
              }
              lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                (param_1);
              if ((*(long *)(param_1 + 0x90) != 0) && (lVar2 != 0)) {
                *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
                thunk_FUN_03f5d7b8();
                lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                  (param_1);
                if (lVar2 != 0) {
                  *(undefined8 *)(lVar2 + 0x40) = DAT_0920e228;
                  thunk_FUN_03f5d7b8();
                  lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                    (param_1);
                  if (*(int *)(DAT_09182b98 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09182b98);
                  }
                  if (lVar2 != 0) {
                    *(undefined8 *)(lVar2 + 0x48) =
                         *(undefined8 *)(*(long *)(DAT_09182b98 + 0xb8) + 0x38);
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x48));
                    lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                      (param_1);
                    if (lVar2 != 0) {
                      *(undefined4 *)(lVar2 + 0x50) = 0;
                      lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                        (param_1);
                      if ((*(long *)(param_1 + 0x90) != 0) && (lVar2 != 0)) {
                        *(undefined8 *)(lVar2 + 0x38) =
                             *(undefined8 *)(*(long *)(param_1 + 0x90) + 0x18);
                        thunk_FUN_03f5d7b8();
                        lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                          (param_1);
                        if (plVar10 == (long *)0x0) {
                          if (lVar2 == 0) goto LAB_074c7f68;
                          *(undefined4 *)(lVar2 + 0x10) = 2;
                          lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                            (param_1);
                          if (lVar2 == 0) goto LAB_074c7f68;
                          *(undefined8 *)(lVar2 + 0x28) = DAT_0920e228;
                          thunk_FUN_03f5d7b8();
                        }
                        else {
                          if (lVar2 == 0) goto LAB_074c7f68;
                          *(undefined4 *)(lVar2 + 0x10) = 3;
                          lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                            (param_1);
                          if (lVar2 == 0) goto LAB_074c7f68;
                          lVar8 = plVar10[6];
                          *(undefined4 *)(lVar2 + 0x20) = 1;
                          if ((int)lVar8 == 2) {
                            lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                              (param_1);
                            if (lVar2 == 0) goto LAB_074c7f68;
                            uVar7 = 3;
                          }
                          else {
                            if ((int)lVar8 != 1) {
                              uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
                              uVar5 = FUN_03f5c394(uVar4,1);
                              FUN_039b1d98(plVar10);
                              local_38 = (undefined4)plVar10[6];
                              uVar4 = thunk_FUN_03fc39d4(&DAT_09186ff0);
                              uVar4 = FUN_03f5c42c(uVar4,&local_38);
                              uVar4 = System_Enum__ToString(uVar4,0);
                              FUN_039b1d98(uVar5);
                              FUN_039b0da0(uVar5,uVar4);
                              FUN_039af17c(uVar5,0,uVar4);
                              puVar6 = &DAT_092052c8;
LAB_074c808c:
                              uVar4 = thunk_FUN_03fc39d4(puVar6);
                              uVar4 = System_Environment__GetResourceString(uVar4,uVar5,0);
                              thunk_FUN_03fc39d4(&DAT_0918a948);
                              uVar5 = thunk_FUN_03f9944c();
                              System_Runtime_Serialization_SerializationException___ctor
                                        (uVar5,uVar4,0);
                              uVar4 = thunk_FUN_03fc39d4(&DAT_091e0e58);
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c414(uVar5,uVar4);
                            }
                            lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                              (param_1);
                            if (lVar2 == 0) goto LAB_074c7f68;
                            *(long *)(lVar2 + 0x28) = plVar10[5];
                            thunk_FUN_03f5d7b8();
                            lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                              (param_1);
                            if (lVar2 == 0) goto LAB_074c7f68;
                            uVar7 = 2;
                          }
                          *(undefined4 *)(lVar2 + 0x1c) = uVar7;
                        }
                        lVar2 = *(long *)(param_1 + 0x10);
                        uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs
                                          (param_1);
                        if (lVar2 != 0) {
                          System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse
                                    (lVar2,uVar4,0);
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
    }
  }
LAB_074c7f68:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

