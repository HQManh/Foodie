// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObjectWithMap
// address: 0x74c9adc
// body: available
// range: 0x74c9adc-0x74c9f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c9ba4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c9d68 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c9dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c9dcc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c9ecc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectWithMap
               (long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined4 local_34;
  
  if ((DAT_095214bf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181bf8);
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214bf = 1;
  }
  lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__GetOp(param_1);
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_074c9dc8;
  lVar10 = *(long *)(lVar1 + 0x80);
  System_Runtime_Serialization_Formatters_Binary_SerStack__Push(*(long *)(param_1 + 0x40),lVar1);
  if (param_2 == 0) goto LAB_074c9dc8;
  if (*(int *)(param_2 + 0x10) == 2) {
    plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_SystemAssemblyInfo
                               (param_1);
  }
  else {
    if (*(int *)(param_2 + 0x10) == 3) {
      piVar11 = (int *)(param_2 + 0x30);
      if (*piVar11 < 1) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar4,1);
        FUN_039b1d98(param_2);
        uVar4 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_AssemIdToAssemblyTable
                          (param_1);
        if (lVar2 == 0) goto LAB_074c9dc8;
        plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SizedArray__get_Item
                                   (lVar2,*piVar11);
        if (plVar3 != (long *)0x0) {
          if (*plVar3 != DAT_09181bf8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar3);
          }
          goto LAB_074c9bbc;
        }
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar4,1);
        FUN_039b1d98(param_2);
        uVar4 = System_Int32__ToString(piVar11,0);
        FUN_039b1d98(param_2);
        uVar9 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091f5a98);
        uVar4 = System_String__Concat(uVar4,uVar6,uVar9,0);
      }
      FUN_039b1d98(uVar7);
      FUN_039b0da0(uVar7,uVar4);
      FUN_039af17c(uVar7,0,uVar4);
      puVar8 = &DAT_09208978;
      goto LAB_074c9e84;
    }
    plVar3 = (long *)0x0;
  }
LAB_074c9bbc:
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_074c9dc8;
  uVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetType
                    (*(long *)(param_1 + 0x10),plVar3,*(undefined8 *)(param_2 + 0x18),0);
  lVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectMap__Create
                    (*(undefined8 *)(param_2 + 0x18),uVar4,*(undefined8 *)(param_2 + 0x28),
                     *(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x14),plVar3,0);
  lVar5 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_ObjectMapIdTable
                    (param_1);
  if (lVar5 == 0) goto LAB_074c9dc8;
  System_Runtime_Serialization_Formatters_Binary_SizedArray__set_Item
            (lVar5,*(undefined4 *)(param_2 + 0x14),lVar2);
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if (lVar2 == 0) goto LAB_074c9dc8;
  plVar3 = (long *)(lVar1 + 0x60);
  *plVar3 = *(long *)(lVar2 + 0x20);
  thunk_FUN_03f5d7b8(plVar3);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar2 + 0x28);
  thunk_FUN_03f5d7b8();
  if (*plVar3 == 0) goto LAB_074c9dc8;
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  *(int *)(lVar1 + 0x5c) = (int)*(undefined8 *)(*plVar3 + 0x18);
  *(undefined8 *)(lVar1 + 0x70) = uVar4;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + 0x30);
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_074c9dc8;
  plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__PeekPeek();
  if (plVar3 == (long *)0x0) {
LAB_074c9ca4:
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
    if (lVar10 == 0) goto LAB_074c9dc8;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar10 + 0x10) = 2;
  }
  else {
    if (*plVar3 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    if ((char)plVar3[2] != '\0') goto LAB_074c9ca4;
    if (lVar10 == 0) goto LAB_074c9dc8;
    lVar5 = plVar3[6];
    *(undefined4 *)(lVar10 + 0x10) = 3;
    *(undefined4 *)(lVar10 + 0x20) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 2;
    if ((int)lVar5 == 2) {
      *(undefined4 *)(lVar10 + 0x1c) = 3;
      *(undefined4 *)(lVar1 + 0x34) = 2;
    }
    else {
      if ((int)lVar5 != 1) {
        uVar4 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar4,1);
        FUN_039b1d98(plVar3);
        local_34 = (undefined4)plVar3[6];
        uVar4 = thunk_FUN_03fc39d4(&DAT_09186ff0);
        uVar4 = FUN_03f5c42c(uVar4,&local_34);
        uVar4 = System_Enum__ToString(uVar4,0);
        FUN_039b1d98(uVar7);
        FUN_039b0da0(uVar7,uVar4);
        FUN_039af17c(uVar7,0,uVar4);
        puVar8 = &DAT_092052c8;
LAB_074c9e84:
        uVar4 = thunk_FUN_03fc39d4(puVar8);
        uVar4 = System_Environment__GetResourceString(uVar4,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar7 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091e0e60);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar4);
      }
      *(long *)(lVar10 + 0x28) = plVar3[5];
      thunk_FUN_03f5d7b8((long *)(lVar10 + 0x28));
      *(undefined4 *)(lVar10 + 0x1c) = 2;
      *(undefined4 *)(lVar1 + 0x34) = 2;
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(lVar10 + 0x14) = 1;
  if (lVar1 != 0) {
    uVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId
                      (lVar1,(long)*(int *)(param_2 + 0x14),0);
    *(undefined8 *)(lVar10 + 0x58) = uVar4;
    uVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectMap__CreateObjectInfo
                      (lVar2,lVar10 + 0x110,lVar10 + 0x108,0);
    *(undefined8 *)(lVar10 + 0xd8) = uVar4;
    thunk_FUN_03f5d7b8();
    if (*(long *)(lVar10 + 0x58) == *(long *)(param_1 + 0x20)) {
      *(undefined4 *)(lVar10 + 0x24) = 1;
    }
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar2 + 0x18);
    thunk_FUN_03f5d7b8((undefined8 *)(lVar10 + 0x48));
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar10 + 0x50) = 0;
    if (lVar1 != 0) {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar1,lVar10,0);
      return;
    }
  }
LAB_074c9dc8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

