// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo.EmittableMember$$EmitStoreValue
// address: 0x73d5b08
// body: available
// range: 0x73d5b08-0x73d5cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d5c60 to 0x73bbb98 MessagePack.Internal.ILGeneratorExtensions$$EmitCall (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73d5c64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d5cec to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_ObjectSerializationInfo_EmittableMember__EmitStoreValue
               (long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  
  if ((DAT_09520cdb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c40);
    FUN_03f5c2a4(&DAT_09205c90);
    DAT_09520cdb = 1;
  }
  lVar1 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo(param_1);
  if (lVar1 == 0) {
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x3d0);
    lVar1 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_FieldInfo(param_1);
    if (param_2 != (long *)0x0) {
      uVar4 = *(undefined8 *)(*param_2 + 0x230);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x228);
LAB_073d5c1c:
                    /* WARNING: Could not recover jumptable at 0x073d5c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,uVar5,lVar1,uVar4);
      return;
    }
    goto LAB_073d5c64;
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    plVar2 = (long *)MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_PropertyInfo
                               (param_1);
    if (plVar2 == (long *)0x0) goto LAB_073d5c64;
    lVar1 = (**(code **)(*plVar2 + 0x318))(plVar2,1,*(undefined8 *)(*plVar2 + 800));
    if (lVar1 != 0) {
      MessagePack_Internal_ILGeneratorExtensions__EmitCall(param_2,lVar1,0);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_091842a0);
    uVar5 = thunk_FUN_03f9944c();
    puVar3 = &DAT_09208c30;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    if (lVar1 == 0) {
      thunk_FUN_03fc39d4(&DAT_091842a0);
      uVar5 = thunk_FUN_03f9944c();
      System_Exception___ctor(uVar5,0);
      goto LAB_073d5cd8;
    }
    if (*(int *)(DAT_09188c40 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188c40);
      lVar1 = *(long *)(param_1 + 0x30);
      if (lVar1 == 0) goto LAB_073d5c64;
    }
    uVar5 = *(undefined8 *)(*(long *)(DAT_09188c40 + 0xb8) + 0x370);
    lVar1 = System_Object__GetType(lVar1,0);
    if (lVar1 == 0) {
LAB_073d5c64:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar1 = System_Type__GetMethod(lVar1,DAT_09205c90,0);
    if (lVar1 != 0) {
      if (param_2 != (long *)0x0) {
        uVar4 = *(undefined8 *)(*param_2 + 0x240);
        UNRECOVERED_JUMPTABLE = *(code **)(*param_2 + 0x238);
        goto LAB_073d5c1c;
      }
      goto LAB_073d5c64;
    }
    thunk_FUN_03fc39d4(&DAT_091842a0);
    uVar5 = thunk_FUN_03f9944c();
    puVar3 = &DAT_092119b8;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar3);
  System_Exception___ctor(uVar5,uVar4,0);
LAB_073d5cd8:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091ede80);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

