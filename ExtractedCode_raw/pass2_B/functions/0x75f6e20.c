// rea decompile_all
// name: System.RuntimeType$$FormatTypeName
// address: 0x75f6e20
// body: available
// range: 0x75f6e20-0x75f6f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f6f70 to 0x743440c System.String$$Substring (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75f6f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_RuntimeType__FormatTypeName(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  if ((DAT_09521f59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091732f8);
    FUN_03f5c2a4(&DAT_0920df40);
    DAT_09521f59 = 1;
  }
  if ((param_2 & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x168);
    uVar4 = *(undefined8 *)(*param_1 + 0x170);
LAB_075f6e98:
                    /* WARNING: Could not recover jumptable at 0x075f6ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,uVar4);
    return lVar2;
  }
  lVar2 = System_Type__GetRootElementType(param_1,0);
  if (lVar2 != 0) {
    uVar1 = System_Type__get_IsNested(lVar2,0);
    lVar5 = *param_1;
    if ((uVar1 & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x1b8);
      uVar4 = *(undefined8 *)(lVar5 + 0x1c0);
      goto LAB_075f6e98;
    }
    lVar3 = (**(code **)(lVar5 + 0x168))(param_1,*(undefined8 *)(lVar5 + 0x170));
    uVar1 = System_Type__get_IsPrimitive(lVar2,0);
    lVar5 = DAT_095353f8;
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
      uVar1 = System_Type__op_Equality(lVar2,uVar4,0);
      uVar4 = DAT_091732f8;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
        uVar1 = System_Type__op_Equality(lVar2,uVar4,0);
        if ((uVar1 & 1) == 0) {
          return lVar3;
        }
      }
    }
    if ((DAT_0920df40 != 0) && (lVar3 != 0)) {
      lVar2 = System_String__Substring(lVar3,*(undefined4 *)(DAT_0920df40 + 0x10),0);
      return lVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

