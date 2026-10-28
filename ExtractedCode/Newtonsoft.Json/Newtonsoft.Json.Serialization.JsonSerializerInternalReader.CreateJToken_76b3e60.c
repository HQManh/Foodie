// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
// address: 0x76b3e60
// body: available
// range: 0x76b3e60-0x76b41e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b3f50 to 0x76e6710 Newtonsoft.Json.Linq.JRaw$$Create (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b410c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b4114 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b4118 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b411c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b41e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076b4110) */

long Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken
               (undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  
  if ((DAT_095226a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09172148);
    FUN_03f5c2a4(&DAT_09187270);
    FUN_03f5c2a4(&DAT_09172150);
    FUN_03f5c2a4(&DAT_09172158);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_095226a7 = 1;
  }
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092215e0);
  uVar2 = DAT_09172148;
  if (param_3 != 0) {
    uVar11 = *(undefined8 *)(param_3 + 0x60);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = System_Type__op_Equality(uVar11,uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = Newtonsoft_Json_Linq_JRaw__Create(param_2,0);
      return lVar4;
    }
    if (param_2 == (long *)0x0) goto LAB_076b411c;
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar2 = DAT_09172158;
    if (iVar1 == 0xb) {
      uVar11 = *(undefined8 *)(param_3 + 0x60);
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      uVar3 = System_Type__op_Equality(uVar11,uVar2,0);
      uVar2 = DAT_09172150;
      if ((uVar3 & 1) == 0) {
        uVar11 = *(undefined8 *)(param_3 + 0x60);
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
        uVar3 = System_Type__op_Equality(uVar11,uVar2,0);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
      }
    }
  }
  plVar5 = (long *)thunk_FUN_03f9944c(DAT_09187270);
  Newtonsoft_Json_Linq_JTokenWriter___ctor(plVar5,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Newtonsoft_Json_JsonWriter__WriteToken(plVar5,param_2,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = Newtonsoft_Json_Linq_JTokenWriter__get_Token(plVar5,0);
  if (plVar5 != (long *)0x0) {
    lVar9 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar3 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076b40ac;
        }
        uVar3 = uVar3 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar3 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_076b40ac:
    (*(code *)*puVar6)(plVar5,puVar6[1]);
  }
  if ((param_3 != 0) && (lVar4 != 0)) {
    plVar5 = *(long **)(param_3 + 0x60);
    uVar2 = System_Object__GetType(lVar4,0);
    if (plVar5 == (long *)0x0) {
LAB_076b411c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar5 + 0x2b8))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x2c0));
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(lVar4);
      plVar5 = (long *)System_Object__GetType(lVar4,0);
      FUN_039b1d98();
      uVar11 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
      FUN_039b1d98(param_3);
      plVar5 = *(long **)(param_3 + 0x60);
      FUN_039b1d98(plVar5);
      uVar7 = (**(code **)(*plVar5 + 0x2f8))(plVar5,*(undefined8 *)(*plVar5 + 0x300));
      uVar8 = thunk_FUN_03fc39d4(&DAT_092007a8);
      uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar2,uVar11,uVar7);
      uVar2 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar2,0);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091d1ae8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar11);
    }
  }
  return lVar4;
}

