// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateDynamicContract
// address: 0x76a907c
// body: available
// range: 0x76a907c-0x76a928f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a928c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreateDynamicContract
               (long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09522634 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4e98);
    FUN_03f5c2a4(&DAT_091790b8);
    FUN_03f5c2a4(&DAT_09187340);
    FUN_03f5c2a4(&DAT_091d1d38);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_091e8d70);
    FUN_03f5c2a4(&DAT_09190040);
    DAT_09522634 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09187340);
  Newtonsoft_Json_Serialization_JsonDynamicContract___ctor(lVar1,param_2);
  Newtonsoft_Json_Serialization_DefaultContractResolver__InitializeContract(param_1,lVar1);
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = FUN_04bdd05c(param_2,DAT_091d1d38);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 0x58);
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__op_Inequality(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    uVar6 = thunk_FUN_03f9944c(DAT_091790b8);
    if (param_1 == (long *)0x0) goto LAB_076a928c;
    uVar5 = *(undefined8 *)(*param_1 + 0x2d0);
    plVar4 = param_1;
  }
  else {
    plVar4 = (long *)thunk_FUN_03f9944c(DAT_09190040);
    System_Object___ctor(plVar4,0);
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__GetContainerNamingStrategy(lVar2,0);
    if (plVar4 == (long *)0x0) goto LAB_076a928c;
    plVar4[2] = lVar2;
    thunk_FUN_03f5d7b8();
    uVar6 = thunk_FUN_03f9944c(DAT_091790b8);
    uVar5 = DAT_091e8d70;
  }
  FUN_05324070(uVar6,plVar4,uVar5,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 200) = uVar6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 200),uVar6);
    uVar5 = *(undefined8 *)(lVar1 + 0xc0);
    uVar6 = (**(code **)(*param_1 + 0x268))(param_1,param_2,0,*(undefined8 *)(*param_1 + 0x270));
    FUN_04a65b58(uVar5,uVar6,DAT_091c4e98);
    return lVar1;
  }
LAB_076a928c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

