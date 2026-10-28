// rea decompile_all
// name: Newtonsoft.Json.Utilities.NoThrowSetBinderMember$$FallbackSetMember
// address: 0x7691244
// body: available
// range: 0x7691244-0x7691397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7691384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7691388 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7691394 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_NoThrowSetBinderMember__FallbackSetMember
          (long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_0952259d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fe80);
    FUN_03f5c2a4(&DAT_09183e68);
    FUN_03f5c2a4(&DAT_09188880);
    DAT_0952259d = 1;
  }
  plVar6 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)FUN_03f5c394(DAT_0917fe80,1);
  if (plVar1 != (long *)0x0) {
    if ((param_3 != 0) &&
       (lVar2 = thunk_FUN_03f99350(param_3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    plVar1[4] = param_3;
    thunk_FUN_03f5d7b8(plVar1 + 4,param_3);
    if (plVar6 != (long *)0x0) {
      lVar2 = (**(code **)(*plVar6 + 0x1a8))(plVar6,param_2,plVar1,*(undefined8 *)(*plVar6 + 0x1b0))
      ;
      plVar1 = (long *)thunk_FUN_03f9944c(DAT_09188880);
      System_Linq_Expressions_ExpressionVisitor___ctor(plVar1,0);
      if ((lVar2 != 0) && (plVar1 != (long *)0x0)) {
        uVar3 = (**(code **)(*plVar1 + 0x178))
                          (plVar1,*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(*plVar1 + 0x180));
        uVar5 = *(undefined8 *)(lVar2 + 0x20);
        uVar4 = thunk_FUN_03f9944c(DAT_09183e68);
        System_Dynamic_DynamicMetaObject___ctor(uVar4,uVar3,uVar5,0);
        return uVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

