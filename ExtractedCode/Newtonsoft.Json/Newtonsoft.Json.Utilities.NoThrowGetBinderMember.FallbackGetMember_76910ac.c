// rea decompile_all
// name: Newtonsoft.Json.Utilities.NoThrowGetBinderMember$$FallbackGetMember
// address: 0x76910ac
// body: available
// range: 0x76910ac-0x76911fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76911f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_NoThrowGetBinderMember__FallbackGetMember(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_0952259c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4ec8);
    FUN_03f5c2a4(&DAT_09183e68);
    FUN_03f5c2a4(&DAT_09188880);
    DAT_0952259c = 1;
  }
  lVar1 = DAT_091c4ec8;
  plVar6 = *(long **)(param_1 + 0x28);
  lVar4 = *(long *)(DAT_091c4ec8 + 0x38);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c4ec8);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  if (plVar6 != (long *)0x0) {
    lVar1 = (**(code **)(*plVar6 + 0x1a8))
                      (plVar6,param_2,**(undefined8 **)(lVar1 + 0xb8),
                       *(undefined8 *)(*plVar6 + 0x1b0));
    plVar6 = (long *)thunk_FUN_03f9944c(DAT_09188880);
    System_Linq_Expressions_ExpressionVisitor___ctor(plVar6,0);
    if ((lVar1 != 0) && (plVar6 != (long *)0x0)) {
      uVar2 = (**(code **)(*plVar6 + 0x178))
                        (plVar6,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(*plVar6 + 0x180));
      uVar5 = *(undefined8 *)(lVar1 + 0x20);
      uVar3 = thunk_FUN_03f9944c(DAT_09183e68);
      System_Dynamic_DynamicMetaObject___ctor(uVar3,uVar2,uVar5,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

