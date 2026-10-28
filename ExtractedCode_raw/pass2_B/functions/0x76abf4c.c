// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultSerializationBinder$$GetTypeFromTypeNameKey
// address: 0x76abf4c
// body: available
// range: 0x76abf4c-0x76ac257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ac184 to 0x3f5c738 FUN_03f5c738 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76ac188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ac18c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ac254 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_DefaultSerializationBinder__GetTypeFromTypeNameKey
          (undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  if ((DAT_09522653 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c8378);
    FUN_03f5c2a4(&DAT_091dc128);
    DAT_09522653 = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = FUN_03f5c738(param_3,DAT_091dc128,DAT_091c8378);
    return uVar6;
  }
  plVar3 = (long *)System_Reflection_Assembly__LoadWithPartialName(param_2,0);
  uVar4 = System_Reflection_Assembly__op_Equality(plVar3,0,0);
  plVar10 = plVar3;
  if ((uVar4 & 1) != 0) {
    lVar5 = thunk_FUN_03f6aadc(0);
    if ((lVar5 == 0) || (lVar5 = System_AppDomain__GetAssemblies(lVar5,0), lVar5 == 0))
    goto LAB_076ac188;
    uVar1 = *(uint *)(lVar5 + 0x18);
    if (0 < (int)uVar1) {
      lVar11 = 0;
      do {
        if (uVar1 <= (uint)lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar10 = *(long **)(lVar5 + 0x20 + lVar11 * 8);
        if (plVar10 == (long *)0x0) goto LAB_076ac188;
        uVar6 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        uVar4 = System_String__op_Equality(uVar6,param_2,0);
        if ((uVar4 & 1) != 0) break;
        lVar7 = (**(code **)(*plVar10 + 0x2a8))(plVar10,*(undefined8 *)(*plVar10 + 0x2b0));
        if (lVar7 == 0) goto LAB_076ac188;
        uVar4 = System_String__op_Equality(*(undefined8 *)(lVar7 + 0x10),param_2,0);
        if ((uVar4 & 1) != 0) break;
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar11 = lVar11 + 1;
        plVar10 = plVar3;
      } while ((int)lVar11 < (int)uVar1);
    }
  }
  uVar4 = System_Reflection_Assembly__op_Equality(plVar10,0,0);
  if ((uVar4 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091ff638);
    uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,param_2);
LAB_076ac21c:
    thunk_FUN_03fc39d4(&DAT_09187420);
    uVar8 = thunk_FUN_03f9944c();
    Newtonsoft_Json_JsonSerializationException___ctor(uVar8,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091c8378);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar6);
  }
  if (plVar10 == (long *)0x0) {
LAB_076ac188:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = (**(code **)(*plVar10 + 0x288))(plVar10,param_3,*(undefined8 *)(*plVar10 + 0x290));
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar4 = System_Type__op_Equality(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if (param_3 == 0) goto LAB_076ac188;
    iVar2 = System_String__IndexOf(param_3,0x60,0);
    if (-1 < iVar2) {
      uVar6 = Newtonsoft_Json_Serialization_DefaultSerializationBinder__GetGenericTypeFromTypeName
                        (param_1,param_3,plVar10);
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__op_Equality(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(plVar10);
      uVar8 = (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ff620);
      uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar6,param_3,uVar8);
      goto LAB_076ac21c;
    }
  }
  return uVar6;
}

