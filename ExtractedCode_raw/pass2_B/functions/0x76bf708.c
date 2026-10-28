// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
// address: 0x76bf708
// body: available
// range: 0x76bf708-0x76bf913 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bf90c to 0x76c1b08 Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$OnSerialized (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76bf910 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((DAT_095226e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4ed8);
    FUN_03f5c2a4(&DAT_091aeac8);
    FUN_03f5c2a4(&DAT_091aeaf8);
    FUN_03f5c2a4(&DAT_091aeb08);
    DAT_095226e3 = 1;
  }
  Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerializing
            (param_1,param_2,param_4,param_3);
  lVar5 = DAT_091aeac8;
  lVar3 = *(long *)(param_1 + 0x48);
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = param_3;
        thunk_FUN_03f5d7b8(puVar7,param_3);
      }
      else {
        FUN_057e0c68(lVar3,param_3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
      }
      uVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (param_2 != (long *)0x0) {
        uVar2 = Newtonsoft_Json_JsonWriter__get_Top(param_2,0);
        lVar5 = DAT_091c4ed8;
        lVar3 = *(long *)(DAT_091c4ed8 + 0x38);
        if (lVar3 == 0) {
          FUN_03f95ac8(DAT_091c4ed8);
          lVar3 = *(long *)(lVar5 + 0x38);
        }
        lVar3 = *(long *)(lVar3 + 0x10);
        if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = FUN_03f95a6c();
        }
        if (*(int *)(lVar3 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
                  (param_1,param_2,param_3,param_4,param_5,uVar2,**(undefined8 **)(lVar5 + 0xb8));
        if ((uVar4 & 1) != 0) {
          (**(code **)(*param_2 + 0x588))(param_2,*(undefined8 *)(*param_2 + 0x590));
        }
        lVar5 = *(long *)(param_1 + 0x48);
        if (lVar5 != 0) {
          FUN_057e251c(lVar5,*(int *)(lVar5 + 0x18) + -1,DAT_091aeaf8);
          Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__OnSerialized
                    (param_1,param_2,param_4,param_3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

