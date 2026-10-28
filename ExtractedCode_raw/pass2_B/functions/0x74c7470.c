// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$ReadObject
// address: 0x74c7470
// body: available
// range: 0x74c7470-0x74c7843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c7728 to 0x74c1d3c System.Runtime.Serialization.Formatters.Binary.ObjectReader$$Parse (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74c772c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c77e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c77f0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObject(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095214bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c80);
    FUN_03f5c2a4(&DAT_09188b30);
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214bc = 1;
  }
  plVar7 = (long *)(param_1 + 0x78);
  lVar1 = *plVar7;
  if (lVar1 == 0) {
    lVar1 = thunk_FUN_03f9944c(DAT_09181c80);
    System_Runtime_Serialization_Formatters_Binary_BinaryObject___ctor(lVar1,0);
    *plVar7 = lVar1;
    thunk_FUN_03f5d7b8(plVar7,lVar1);
    lVar1 = *plVar7;
    if (lVar1 == 0) goto LAB_074c772c;
  }
  System_Runtime_Serialization_Formatters_Binary_BinaryObject__Read(lVar1,param_1,0);
  if (*(long *)(param_1 + 0x78) == 0) goto LAB_074c772c;
  System_Runtime_Serialization_Formatters_Binary_BinaryObject__Dump(*(long *)(param_1 + 0x78),0);
  lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_ObjectMapIdTable
                    (param_1);
  if ((*(long *)(param_1 + 0x78) == 0) || (lVar1 == 0)) goto LAB_074c772c;
  plVar2 = (long *)System_Runtime_Serialization_Formatters_Binary_SizedArray__get_Item
                             (lVar1,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x14));
  if (plVar2 == (long *)0x0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
    uVar4 = FUN_03f5c394(uVar3,1);
    lVar1 = *plVar7;
    FUN_039b1d98(lVar1);
    local_34 = *(undefined4 *)(lVar1 + 0x14);
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
LAB_074c7770:
    FUN_039b1d98(uVar4);
    FUN_039b0da0(uVar4,uVar3);
    FUN_039af17c(uVar4,0,uVar3);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09208b08);
    uVar3 = System_Environment__GetResourceString(uVar3,uVar4,0);
    thunk_FUN_03fc39d4(&DAT_0918a948);
    uVar4 = thunk_FUN_03f9944c();
    System_Runtime_Serialization_SerializationException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091e0e50);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  plVar7 = plVar2;
  if (*plVar2 != DAT_09188b30) {
LAB_074c77f0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar7);
  }
  lVar1 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__GetOp(param_1);
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_074c772c;
  lVar8 = *(long *)(lVar1 + 0x80);
  System_Runtime_Serialization_Formatters_Binary_SerStack__Push(*(long *)(param_1 + 0x40),lVar1);
  lVar5 = plVar2[4];
  *(undefined4 *)(lVar1 + 0x30) = 1;
  plVar7 = (long *)(lVar1 + 0x60);
  *plVar7 = lVar5;
  thunk_FUN_03f5d7b8(plVar7);
  *(long *)(lVar1 + 0x70) = plVar2[7];
  thunk_FUN_03f5d7b8();
  *(long *)(lVar1 + 0x78) = plVar2[6];
  thunk_FUN_03f5d7b8();
  *(long *)(lVar1 + 0x68) = plVar2[5];
  thunk_FUN_03f5d7b8();
  if ((*plVar7 == 0) ||
     (lVar5 = *(long *)(param_1 + 0x40),
     *(int *)(lVar1 + 0x5c) = (int)*(undefined8 *)(*plVar7 + 0x18), lVar5 == 0)) goto LAB_074c772c;
  plVar7 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__PeekPeek();
  if (plVar7 == (long *)0x0) {
LAB_074c7604:
    *(long *)(lVar1 + 0x28) = plVar2[2];
    thunk_FUN_03f5d7b8();
    if (lVar8 == 0) goto LAB_074c772c;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    *(undefined4 *)(lVar8 + 0x10) = 2;
  }
  else {
    if (*plVar7 != DAT_09188b48) goto LAB_074c77f0;
    if ((char)plVar7[2] != '\0') goto LAB_074c7604;
    if (lVar8 == 0) goto LAB_074c772c;
    lVar5 = plVar7[6];
    uVar6 = 3;
    *(undefined4 *)(lVar8 + 0x10) = 3;
    *(undefined4 *)(lVar8 + 0x20) = 2;
    *(undefined4 *)(lVar1 + 0x38) = 2;
    if ((int)lVar5 == 2) {
      *(undefined4 *)(lVar8 + 0x1c) = 3;
    }
    else {
      if ((int)lVar5 != 1) {
        uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
        uVar4 = FUN_03f5c394(uVar3,1);
        FUN_039b1d98(plVar7);
        local_38 = (undefined4)plVar7[6];
        uVar3 = thunk_FUN_03fc39d4(&DAT_09186ff0);
        uVar3 = FUN_03f5c42c(uVar3,&local_38);
        uVar3 = System_Enum__ToString(uVar3,0);
        goto LAB_074c7770;
      }
      *(long *)(lVar8 + 0x28) = plVar7[5];
      thunk_FUN_03f5d7b8((long *)(lVar8 + 0x28));
      uVar6 = 2;
      *(undefined4 *)(lVar8 + 0x1c) = 2;
    }
    *(undefined4 *)(lVar1 + 0x34) = uVar6;
  }
  if ((*(long *)(param_1 + 0x78) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar3 = System_Runtime_Serialization_Formatters_Binary_ObjectReader__GetId
                      (*(long *)(param_1 + 0x10),(long)*(int *)(*(long *)(param_1 + 0x78) + 0x10),0)
    ;
    *(undefined8 *)(lVar8 + 0x58) = uVar3;
    uVar3 = System_Runtime_Serialization_Formatters_Binary_ObjectMap__CreateObjectInfo
                      (plVar2,lVar8 + 0x110,lVar8 + 0x108,0);
    *(undefined8 *)(lVar8 + 0xd8) = uVar3;
    thunk_FUN_03f5d7b8();
    if (*(long *)(lVar8 + 0x58) == *(long *)(param_1 + 0x20)) {
      *(undefined4 *)(lVar8 + 0x24) = 1;
    }
    lVar1 = plVar2[2];
    *(undefined4 *)(lVar8 + 0x14) = 1;
    *(long *)(lVar8 + 0x40) = lVar1;
    thunk_FUN_03f5d7b8();
    *(long *)(lVar8 + 0x48) = plVar2[3];
    thunk_FUN_03f5d7b8((long *)(lVar8 + 0x48));
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar8 + 0x50) = 0;
    if (lVar1 != 0) {
      System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar1,lVar8,0);
      return;
    }
  }
LAB_074c772c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

