// rea decompile_all
// name: MessagePack.Internal.DynamicAssembly$$.ctor
// address: 0x73b7e4c
// body: available
// range: 0x73b7e4c-0x73b7f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b7f78 to 0x73a2db0 MessagePack.SkipClrVisibilityChecks$$SkipVisibilityChecksFor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73b7f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Internal_DynamicAssembly___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_09520c16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181610);
    FUN_03f5c2a4(&DAT_0918ad80);
    FUN_03f5c2a4(&DAT_091f9340);
    DAT_09520c16 = 1;
  }
  System_Object___ctor(param_1,0);
  uVar2 = thunk_FUN_03f9944c(DAT_09181610);
  System_Reflection_AssemblyName___ctor(uVar2,param_2,0);
  lVar3 = System_Reflection_Emit_AssemblyBuilder__DefineDynamicAssembly(uVar2,9,0);
  plVar4 = (long *)(param_1 + 0x10);
  *plVar4 = lVar3;
  thunk_FUN_03f5d7b8(plVar4,lVar3);
  lVar3 = *plVar4;
  uVar2 = System_String__Concat(param_2,DAT_091f9340,0);
  if (lVar3 != 0) {
    uVar2 = System_Reflection_Emit_AssemblyBuilder__DefineDynamicModule(lVar3,uVar2,0);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = thunk_FUN_03f9944c(DAT_0918ad80);
    MessagePack_SkipClrVisibilityChecks___ctor(lVar3,uVar2,uVar1,0);
    if (lVar3 != 0) {
      MessagePack_SkipClrVisibilityChecks__SkipVisibilityChecksFor(lVar3,param_3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

