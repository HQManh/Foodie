// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$WriteJson
// address: 0x770f920
// body: available
// range: 0x770f920-0x770fa6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770fa6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__WriteJson(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar2 = param_1;
  if ((DAT_095229c2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091885a0);
    lVar2 = FUN_03f5c2a4(&DAT_0918d608);
    DAT_095229c2 = 1;
  }
  if (param_3 == 0) {
    if (param_2 == (long *)0x0) goto LAB_0770fa6c;
    puVar6 = (undefined8 *)(*param_2 + 0x658);
    puVar7 = (undefined8 *)(*param_2 + 0x660);
  }
  else {
    uVar3 = Newtonsoft_Json_Converters_XmlNodeConverter__WrapXml(lVar2,param_3);
    uVar4 = thunk_FUN_03f9944c(DAT_091885a0);
    System_Xml_NameTable___ctor(uVar4,0);
    uVar5 = thunk_FUN_03f9944c(DAT_0918d608);
    uVar4 = System_Xml_XmlNamespaceManager___ctor(uVar5,uVar4,0);
    Newtonsoft_Json_Converters_XmlNodeConverter__PushParentNamespaces(uVar4,uVar3,uVar5);
    if (*(char *)(param_1 + 0x19) == '\0') {
      if (param_2 == (long *)0x0) goto LAB_0770fa6c;
      (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
      bVar1 = *(char *)(param_1 + 0x19) == '\0';
    }
    else {
      bVar1 = false;
    }
    Newtonsoft_Json_Converters_XmlNodeConverter__SerializeNode(param_1,param_2,uVar3,uVar5,bVar1);
    if (*(char *)(param_1 + 0x19) != '\0') {
      return;
    }
    if (param_2 == (long *)0x0) {
LAB_0770fa6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar6 = (undefined8 *)(*param_2 + 0x588);
    puVar7 = (undefined8 *)(*param_2 + 0x590);
  }
                    /* WARNING: Could not recover jumptable at 0x0770fa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(param_2,*puVar7);
  return;
}

