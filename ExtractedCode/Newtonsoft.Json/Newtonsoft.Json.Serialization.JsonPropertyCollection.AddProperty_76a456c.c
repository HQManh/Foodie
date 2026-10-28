// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonPropertyCollection$$AddProperty
// address: 0x76a456c
// body: available
// range: 0x76a456c-0x76a480f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a465c to 0x6c77664 FUN_06c77664 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76a4808 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a480c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonPropertyCollection__AddProperty(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_0952269c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919b4b0);
    FUN_03f5c2a4(&DAT_0919b4c8);
    FUN_03f5c2a4(&DAT_091a9ba8);
    FUN_03f5c2a4(&DAT_091a9bb8);
    DAT_0952269c = 1;
  }
  if (param_2 == 0) goto LAB_076a480c;
  uVar2 = FUN_0561bf68(param_1,*(undefined8 *)(param_2 + 0x30),DAT_091a9ba8);
  if ((uVar2 & 1) == 0) goto LAB_076a463c;
  if (*(char *)(param_2 + 0x80) != '\0') {
    return;
  }
  lVar3 = FUN_0561bec0(param_1,*(undefined8 *)(param_2 + 0x30),DAT_091a9bb8);
  if (lVar3 == 0) goto LAB_076a480c;
  if (*(char *)(lVar3 + 0x80) != '\0') {
    FUN_06c77c5c(param_1,lVar3,DAT_0919b4c8);
    goto LAB_076a463c;
  }
  uVar8 = *(undefined8 *)(param_2 + 0x50);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) goto LAB_076a4788;
  uVar8 = *(undefined8 *)(lVar3 + 0x50);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Inequality(uVar8,0,0);
  if ((uVar2 & 1) == 0) goto LAB_076a4788;
  plVar4 = *(long **)(param_2 + 0x50);
  if (plVar4 == (long *)0x0) goto LAB_076a480c;
  uVar2 = (**(code **)(*plVar4 + 0x2a8))
                    (plVar4,*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(*plVar4 + 0x2b0));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(lVar3 + 0x50) == 0) goto LAB_076a480c;
    uVar2 = System_Type__get_IsInterface(*(long *)(lVar3 + 0x50),0);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = Newtonsoft_Json_Utilities_TypeExtensions__ImplementInterface
                          (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(lVar3 + 0x50)),
       (uVar2 & 1) != 0)) goto LAB_076a46d8;
    bVar1 = true;
  }
  else {
LAB_076a46d8:
    FUN_06c77c5c(param_1,lVar3,DAT_0919b4c8);
    bVar1 = false;
  }
  plVar4 = *(long **)(lVar3 + 0x50);
  if (plVar4 == (long *)0x0) {
LAB_076a480c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = (**(code **)(*plVar4 + 0x2a8))
                    (plVar4,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(*plVar4 + 0x2b0));
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_076a480c;
    uVar2 = System_Type__get_IsInterface(*(long *)(param_2 + 0x50),0);
    if ((((uVar2 & 1) == 0) ||
        (uVar2 = Newtonsoft_Json_Utilities_TypeExtensions__ImplementInterface
                           (*(undefined8 *)(lVar3 + 0x50),*(undefined8 *)(param_2 + 0x50)),
        (uVar2 & 1) == 0)) &&
       ((uVar2 = Newtonsoft_Json_Utilities_TypeExtensions__ImplementInterface
                           (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lVar3 + 0x50)),
        (uVar2 & 1) == 0 ||
        (uVar2 = Newtonsoft_Json_Utilities_TypeExtensions__ImplementInterface
                           (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x50)),
        (uVar2 & 1) == 0)))) {
      if (bVar1) {
LAB_076a4788:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar6 = *(undefined8 *)(param_2 + 0x30);
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fafc8);
        uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar8,uVar6,uVar7);
        thunk_FUN_03fc39d4(&DAT_09187420);
        uVar5 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonSerializationException___ctor(uVar5,uVar8,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091d18e0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar8);
      }
LAB_076a463c:
      FUN_06c77664(param_1,param_2,DAT_0919b4b0);
      return;
    }
  }
  return;
}

