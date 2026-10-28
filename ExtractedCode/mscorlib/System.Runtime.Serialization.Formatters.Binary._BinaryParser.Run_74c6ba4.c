// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.__BinaryParser$$Run
// address: 0x74c6ba4
// body: available
// range: 0x74c6ba4-0x74c6f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c6e68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e70 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c6e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary___BinaryParser__Run(long param_1)

{
  bool bVar1;
  byte bVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  byte local_64 [12];
  undefined4 local_58;
  
  if ((DAT_095214b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188b48);
    DAT_095214b7 = 1;
  }
  local_58 = 0;
  System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadSerializationHeaderRecord
            (param_1);
LAB_074c6c08:
  do {
    if (*(uint *)(param_1 + 0x48) == 0) {
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMemberPrimitiveUnTyped
                (param_1);
      goto LAB_074c6cec;
    }
    if (7 < *(uint *)(param_1 + 0x48)) {
      uVar5 = thunk_FUN_03fc39d4(&DAT_09205760);
      uVar5 = System_Environment__GetResourceString(uVar5,0);
      thunk_FUN_03fc39d4(&DAT_0918a948);
      uVar7 = thunk_FUN_03f9944c();
      System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091e0e78);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar5);
    }
    plVar3 = *(long **)(param_1 + 0x68);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
    switch(bVar2) {
    case 1:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObject(param_1);
      break;
    case 2:
    case 3:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectWithMap(param_1);
      break;
    case 4:
    case 5:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectWithMapTyped(param_1)
      ;
      break;
    case 6:
    case 0x13:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectString(param_1);
      goto LAB_074c6c94;
    case 7:
    case 0xf:
    case 0x10:
    case 0x11:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadArray(param_1);
      goto LAB_074c6c94;
    case 8:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMemberPrimitiveTyped
                (param_1);
      break;
    case 9:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMemberReference(param_1);
      break;
    case 10:
    case 0xd:
    case 0xe:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadObjectNull(param_1);
      goto LAB_074c6c94;
    case 0xb:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadMessageEnd(param_1);
      bVar1 = false;
      goto LAB_074c6cf0;
    case 0xc:
    case 0x14:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadAssembly(param_1);
LAB_074c6c94:
      if (bVar2 == 0xc) goto LAB_074c6c08;
      break;
    case 0x12:
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__ReadCrossAppDomainMap(param_1);
      break;
    default:
      uVar5 = thunk_FUN_03fc39d4(&DAT_09180318);
      lVar6 = FUN_03f5c394(uVar5,1);
      local_64[0] = bVar2;
      uVar5 = FUN_03f5c42c(DAT_095353f0,local_64);
      if (lVar6 != 0) {
        FUN_039b0da0(lVar6,uVar5);
        FUN_039af17c(lVar6,0,uVar5);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fcb08);
        uVar5 = System_Environment__GetResourceString(uVar5,lVar6,0);
        thunk_FUN_03fc39d4(&DAT_0918a948);
        uVar7 = thunk_FUN_03f9944c();
        System_Runtime_Serialization_SerializationException___ctor(uVar7,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091e0e78);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_074c6cec:
    bVar1 = true;
LAB_074c6cf0:
    while( true ) {
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar3 = (long *)System_Runtime_Serialization_Formatters_Binary_SerStack__Peek();
      if (plVar3 == (long *)0x0) break;
      if (*plVar3 != DAT_09188b48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
      uVar4 = System_Runtime_Serialization_Formatters_Binary_ObjectProgress__GetNext
                        (plVar3,plVar3 + 3,plVar3 + 4,0);
      lVar6 = plVar3[4];
      *(int *)(param_1 + 0x48) = (int)plVar3[3];
      *(long *)(param_1 + 0x50) = lVar6;
      thunk_FUN_03f5d7b8(param_1 + 0x50);
      if ((uVar4 & 1) != 0) goto LAB_074c6e48;
      lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_Serialization_Formatters_Binary_ParseRecord__Init();
      if ((int)plVar3[7] == 2) {
        lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar6 + 0x10) = 5;
        lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)((long)plVar3 + 0x34);
        lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *(long *)(param_1 + 0x10);
        *(int *)(lVar6 + 0x20) = (int)plVar3[7];
        uVar5 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar5,uVar5);
        }
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar8,uVar5,0);
      }
      else {
        lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar6 + 0x10) = 4;
        lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)((long)plVar3 + 0x34);
        lVar6 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *(long *)(param_1 + 0x10);
        *(int *)(lVar6 + 0x20) = (int)plVar3[7];
        uVar5 = System_Runtime_Serialization_Formatters_Binary___BinaryParser__get_prs(param_1);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar5,uVar5);
        }
        System_Runtime_Serialization_Formatters_Binary_ObjectReader__Parse(lVar8,uVar5,0);
      }
      if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_Runtime_Serialization_Formatters_Binary_SerStack__Pop();
      System_Runtime_Serialization_Formatters_Binary___BinaryParser__PutOp(param_1,plVar3);
    }
    *(undefined4 *)(param_1 + 0x48) = 3;
    *(undefined8 *)(param_1 + 0x50) = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x50,0);
LAB_074c6e48:
    if (!bVar1) {
      return;
    }
  } while( true );
}

