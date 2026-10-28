// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObjectWithMapTyped
// address: 0x74c9f50
// body: available
// range: 0x74c9f50-0x74ca3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ca028 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ca25c to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ca260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ca264 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ca364 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectWithMapTyped
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
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 local_64;
  
  if ((DAT_095214c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181bf8);
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214c1 = 1;
  }
  lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__GetOp(param_1);
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_074ca260;
  lVar12 = *(long *)(lVar1 + 0x80);
  System_Runtime_Serialization_Formatters_Binary_SerStack__Push(*(long *)(param_1 + 0x40),lVar1);
  if (param_2 == 0) goto LAB_074ca260;
  if (*(int *)(param_2 + 0x10) == 4) {
    plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_SystemAssemblyInfo
                               (param_1);
  }
  else {
    if (*(int *)(param_2 + 0x10) == 5) {
      piVar14 = (int *)(param_2 + 0x48);
      if (*piVar14 < 1) {
        uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar9,1);
        FUN_039b1d98(param_2);
        uVar9 = *(undefined8 *)(param_2 + 0x18);
      }
      else {
        lVar2 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_AssemIdToAssemblyTable
                          (param_1);
        if (lVar2 == 0) goto LAB_074ca260;
        plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SizedArray__get_Item
                                   (lVar2,*piVar14);
        if (plVar3 != (long *)0x0) {
          if (*plVar3 != DAT_09181bf8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar3);
          }
          goto LAB_074ca040;
        }
        uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar9,1);
        FUN_039b1d98(param_2);
        uVar9 = System_Int32__ToString(piVar14,0);
        FUN_039b1d98(param_2);
        uVar11 = *(undefined8 *)(param_2 + 0x18);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091f5a98);
        uVar9 = System_String__Concat(uVar9,uVar6,uVar11,0);
      }
      FUN_039b1d98(uVar7);
      FUN_039b0da0(uVar7,uVar9);
      FUN_039af17c(uVar7,0,uVar9);
      puVar8 = &DAT_09208970;
      goto LAB_074ca31c;
    }
    plVar3 = (long *)0x0;
  }
LAB_074ca040:
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  uVar15 = *(undefined8 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_AssemIdToAssemblyTable
                    (param_1);
  lVar2 = System_Runtime_Serialization_Formatters_Binary_ObjectMap__Create
                    (uVar15,uVar9,uVar6,uVar7,uVar11,uVar13,uVar10,plVar3,uVar4,0);
  lVar5 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_ObjectMapIdTable
                    (param_1);
  if (lVar5 == 0) goto LAB_074ca260;
  System_Runtime_Serialization_Formatters_Binary_SizedArray__set_Item
            (lVar5,*(undefined4 *)(param_2 + 0x14),lVar2);
  *(undefined4 *)(lVar1 + 0x30) = 1;
  if (lVar2 == 0) goto LAB_074ca260;
  plVar3 = (long *)(lVar1 + 0x60);
  *plVar3 = *(long *)(lVar2 + 0x20);
  thunk_FUN_03f5d7b8(plVar3);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar2 + 0x28);
  thunk_FUN_03f5d7b8();
  if (*plVar3 == 0) goto LAB_074ca260;
  uVar9 = *(undefined8 *)(lVar2 + 0x38);
  *(int *)(lVar1 + 0x5c) = (int)*(undefined8 *)(*plVar3 + 0x18);
  *(undefined8 *)(lVar1 + 0x70) = uVar9;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar2 + 0x30);
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x40) == 0) goto LAB_074ca260;
  plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__PeekPeek();
  if (plVar3 == (long *)0x0) {
LAB_074ca138:
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
    if (lVar12 == 0) goto LAB_074ca260;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 2;
  }
  else {
    if (*plVar3 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    if ((char)plVar3[2] != '\0') goto LAB_074ca138;
    if (lVar12 == 0) goto LAB_074ca260;
    lVar5 = plVar3[6];
    uVar10 = 3;
    *(undefined4 *)(lVar12 + 0x10) = 3;
    *(undefined4 *)(lVar12 + 0x20) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 2;
    if ((int)lVar5 == 2) {
      *(undefined4 *)(lVar12 + 0x1c) = 3;
    }
    else {
      if ((int)lVar5 != 1) {
        uVar9 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar7 = FUN_03f5c394(uVar9,1);
        FUN_039b1d98(plVar3);
        local_64 = (undefined4)plVar3[6];
        uVar9 = thunk_FUN_03fc39d4(&DAT_09186ff0);
        uVar9 = FUN_03f5c42c(uVar9,&local_64);
        uVar9 = System_Enum__ToString(uVar9,0);
        FUN_039b1d98(uVar7);
        FUN_039b0da0(uVar7,uVar9);
        FUN_039af17c(uVar7,0,uVar9);
        puVar8 = &DAT_092052c8;
LAB_074ca31c:
        uVar9 = thunk_FUN_03fc39d4(puVar8);
        uVar9 = System_Environment__GetResourceString(uVar9,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar7 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar9,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091e0e68);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar9);
      }
      *(long *)(lVar12 + 0x28) = plVar3[5];
      thunk_FUN_03f5d7b8((long *)(lVar12 + 0x28));
      uVar10 = 2;
      *(undefined4 *)(lVar12 + 0x1c) = 2;
    }
    *(undefined4 *)(lVar1 + 0x34) = uVar10;
  }
  *(undefined4 *)(lVar12 + 0x14) = 1;
  uVar9 = System_Runtime_Serialization_Formatters_Binary_ObjectMap__CreateObjectInfo
                    (lVar2,lVar12 + 0x110,lVar12 + 0x108,0);
  *(undefined8 *)(lVar12 + 0xd8) = uVar9;
  thunk_FUN_03f5d7b8();
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId
                      (*(long *)(param_1 + 0x10),(long)*(int *)(param_2 + 0x14),0);
    lVar5 = *(long *)(param_1 + 0x20);
    *(long *)(lVar12 + 0x58) = lVar1;
    if (lVar1 == lVar5) {
      *(undefined4 *)(lVar12 + 0x24) = 1;
    }
    *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)(lVar2 + 0x18);
    thunk_FUN_03f5d7b8((undefined8 *)(lVar12 + 0x48));
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar12 + 0x50) = 0;
    if (lVar1 != 0) {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar1,lVar12,0);
      return;
    }
  }
LAB_074ca260:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

