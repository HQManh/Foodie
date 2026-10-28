// rea decompile_all
// name: MessagePack.Internal.DynamicObjectTypeBuilder.<>c__DisplayClass5_0$$<BuildCustomFormatterField>b__1
// address: 0x73d171c
// body: available
// range: 0x73d171c-0x73d1843 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d183c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73d1840 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Internal_DynamicObjectTypeBuilder_<>c__DisplayClass5_0__<BuildCustomFormatterField>b__1
          (long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_09520ccc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171cc8);
    DAT_09520ccc = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_073d183c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = (**(code **)(*param_2 + 0x3d8))(param_2,*(undefined8 *)(*param_2 + 0x3e0));
  if ((uVar1 & 1) != 0) {
    uVar2 = (**(code **)(*param_2 + 0x468))(param_2,*(undefined8 *)(*param_2 + 0x470));
    uVar3 = DAT_09171cc8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar1 = System_Type__op_Equality(uVar2,uVar3,0);
    if ((uVar1 & 1) != 0) {
      lVar4 = (**(code **)(*param_2 + 0x478))(param_2,*(undefined8 *)(*param_2 + 0x480));
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          plVar5 = *(long **)(lVar4 + 0x20);
          uVar3 = MessagePack_Internal_ObjectSerializationInfo_EmittableMember__get_Type
                            (*(long *)(param_1 + 0x10));
          if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x073d1824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (**(code **)(*plVar5 + 0x8e8))(plVar5,uVar3,*(undefined8 *)(*plVar5 + 0x8f0));
            return uVar3;
          }
        }
      }
      goto LAB_073d183c;
    }
  }
  return 0;
}

