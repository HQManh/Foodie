// rea decompile_all
// name: System.Reflection.IntrospectionExtensions$$GetTypeInfo
// address: 0x74e001c
// body: available
// range: 0x74e001c-0x74e016f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e016c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_IntrospectionExtensions__GetTypeInfo(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_09521590 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186450);
    FUN_03f5c2a4(&DAT_0918c1e0);
    DAT_09521590 = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Type__op_Equality(param_1,0,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09224510);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d10f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  plVar2 = (long *)thunk_FUN_03f99350(param_1,DAT_09186450);
  if (plVar2 == (long *)0x0) {
    uVar4 = thunk_FUN_03f9944c(DAT_0918c1e0);
    System_Reflection_TypeDelegator___ctor(uVar4,param_1);
    return uVar4;
  }
  lVar6 = *plVar2;
  uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar1 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09186450) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_074e0114;
      }
      uVar1 = uVar1 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09186450,0);
LAB_074e0114:
                    /* WARNING: Could not recover jumptable at 0x074e0124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)*puVar3)(plVar2,puVar3[1]);
  return uVar4;
}

