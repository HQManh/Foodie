// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateArrayContract
// address: 0x76a7a94
// body: available
// range: 0x76a7a94-0x76a7dcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a7d3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7dbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7dc0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a7dcc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreateArrayContract
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((DAT_09522630 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09171bc0);
    FUN_03f5c2a4(&DAT_09171bb8);
    FUN_03f5c2a4(&DAT_091872e0);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_09522630 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091872e0);
  Newtonsoft_Json_Serialization_JsonArrayContract___ctor(lVar1,param_2);
  uVar2 = Newtonsoft_Json_Serialization_DefaultContractResolver__InitializeContract(param_1,lVar1);
  if (lVar1 == 0) goto LAB_076a7d3c;
  plVar3 = (long *)Newtonsoft_Json_Serialization_DefaultContractResolver__GetAttributeConstructor
                             (uVar2,*(undefined8 *)(lVar1 + 0x18));
  if (*(int *)(DAT_09182ac0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182ac0);
  }
  uVar4 = System_Reflection_ConstructorInfo__op_Inequality(plVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if (plVar3 == (long *)0x0) goto LAB_076a7d3c;
    lVar5 = (**(code **)(*plVar3 + 600))(plVar3,*(undefined8 *)(*plVar3 + 0x260));
    uVar2 = *(undefined8 *)(lVar1 + 0xc0);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_095354b8);
    }
    uVar4 = System_Type__op_Inequality(uVar2,0,0);
    uVar9 = DAT_09171bc0;
    uVar2 = DAT_09171bb8;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
    }
    else {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar6 = (long *)System_Type__GetTypeFromHandle(uVar9,0);
      plVar7 = (long *)FUN_03f5c394(DAT_09180748,1);
      if (plVar7 == (long *)0x0) goto LAB_076a7d3c;
      lVar12 = *(long *)(lVar1 + 0xc0);
      if ((lVar12 != 0) &&
         (lVar8 = thunk_FUN_03f99350(lVar12,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
        uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,0);
      }
      if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7[4] = lVar12;
      thunk_FUN_03f5d7b8(plVar7 + 4,lVar12);
      if (plVar6 == (long *)0x0) goto LAB_076a7d3c;
      plVar6 = (long *)(**(code **)(*plVar6 + 0x948))
                                 (plVar6,plVar7,*(undefined8 *)(*plVar6 + 0x950));
    }
    if (lVar5 == 0) goto LAB_076a7d3c;
    uVar10 = 0;
    if (*(long *)(lVar5 + 0x18) != 0) {
      if ((int)*(long *)(lVar5 + 0x18) != 1) {
LAB_076a7d40:
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(lVar1);
        uVar11 = *(undefined8 *)(lVar1 + 0x60);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091fef60);
        uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar2,uVar11,plVar6);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar9 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar9,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091c8288);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar2);
      }
      plVar7 = *(long **)(lVar5 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_076a7d3c;
      uVar2 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
      if (plVar6 == (long *)0x0) goto LAB_076a7d3c;
      uVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6,uVar2,*(undefined8 *)(*plVar6 + 0x2c0));
      if ((uVar4 & 1) == 0) goto LAB_076a7d40;
      uVar10 = 1;
    }
    *(undefined1 *)(lVar1 + 0x110) = uVar10;
    if (*(int *)(DAT_09187480 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar6 = (long *)Newtonsoft_Json_Serialization_JsonTypeReflector__get_ReflectionDelegateFactory
                               (0);
    if (plVar6 == (long *)0x0) {
LAB_076a7d3c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar6 + 0x188))(plVar6,plVar3,*(undefined8 *)(*plVar6 + 400));
    *(undefined8 *)(lVar1 + 0x108) = uVar2;
    thunk_FUN_03f5d7b8(lVar1 + 0x108,uVar2);
    *(undefined1 *)(lVar1 + 0xf2) = 1;
  }
  return lVar1;
}

