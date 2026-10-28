// rea decompile_all
// name: MessagePack.FormatterResolverExtensions$$GetFormatterDynamicWithVerify
// address: 0x7382ac0
// body: available
// range: 0x7382ac0-0x7382b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_FormatterResolverExtensions__GetFormatterDynamicWithVerify
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09520a1e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184938);
    DAT_09520a1e = 1;
  }
  if (*(int *)(DAT_09184938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = MessagePack_FormatterResolverExtensions__GetFormatterDynamic(param_1,param_2);
  if (lVar1 != 0) {
    return;
  }
  if (*(int *)(DAT_09184938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  MessagePack_FormatterResolverExtensions__Throw(param_2,param_1);
  if ((DAT_09520a1f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184938);
    FUN_03f5c2a4(&DAT_09171c08);
    FUN_03f5c2a4(&DAT_091bd438);
    FUN_03f5c2a4(&DAT_0917ee48);
    FUN_03f5c2a4(&DAT_09203548);
    DAT_09520a1f = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee48);
  FUN_06361290(0x3f400000,uVar2,4,DAT_091bd438);
  **(undefined8 **)(DAT_09184938 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09184938 + 0xb8),uVar2);
  uVar2 = DAT_09171c08;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
  lVar1 = System_Reflection_RuntimeReflectionExtensions__GetRuntimeMethod
                    (uVar2,DAT_09203548,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
  if (lVar1 != 0) {
    *(long *)(*(long *)(DAT_09184938 + 0xb8) + 8) = lVar1;
    thunk_FUN_03f5d7b8();
    return;
  }
  thunk_FUN_03fc39d4(&DAT_091842a0);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09211a08);
  System_Exception___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091ccf50);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

