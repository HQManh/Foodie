// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized
// address: 0x76c1b08
// body: available
// range: 0x76c1b08-0x76c1d0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c1d08 to 0x76adfcc Newtonsoft.Json.Serialization.JsonContract$$InvokeOnSerialized (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c1d0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  
  if ((DAT_095226da & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_09202a88);
    DAT_095226da = 1;
  }
  plVar8 = *(long **)(param_1 + 0x28);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09186850) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_076c1bc8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186850,0);
LAB_076c1bc8:
    iVar1 = (*(code *)*puVar2)(plVar8,puVar2[1]);
    if (2 < iVar1) {
      if (param_2 == 0) goto LAB_076c1d0c;
      plVar8 = *(long **)(param_1 + 0x28);
      uVar3 = Newtonsoft_Json_JsonWriter__get_Path(param_2,0);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (param_3 == 0) goto LAB_076c1d0c;
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                        (DAT_09202a88,uVar4,*(undefined8 *)(param_3 + 0x60),0);
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187398);
      }
      uVar3 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar3,uVar4,0);
      if (plVar8 == (long *)0x0) goto LAB_076c1d0c;
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09186850) {
            puVar2 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_076c1cc4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09186850,1);
LAB_076c1cc4:
      (*(code *)*puVar2)(plVar8,3,uVar3,0,puVar2[1]);
    }
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if ((lVar5 != 0) && (param_3 != 0)) {
    Newtonsoft_Json_Serialization_JsonContract__InvokeOnSerialized
              (param_3,param_4,*(undefined8 *)(lVar5 + 0x60),*(undefined8 *)(lVar5 + 0x68),0);
    return;
  }
LAB_076c1d0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

