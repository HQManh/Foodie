// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteReference
// address: 0x76bd114
// body: available
// range: 0x76bd114-0x76bd2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bd2b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteReference
               (long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
               undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined2 local_44;
  
  lVar2 = param_1;
  if ((DAT_095226d3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186440);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a48);
    lVar2 = FUN_03f5c2a4(&DAT_091b6a60);
    DAT_095226d3 = 1;
  }
  local_44 = 0;
  if (param_2 != 0) {
    if (param_4 == 0) goto LAB_076bd2b4;
    if (1 < *(int *)(param_4 + 0x24) - 3U) {
      local_44 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference
                           (lVar2,param_4,param_3,param_5,param_6);
      if ((local_44 & 0xff) == 0) {
        lVar2 = *(long *)(param_1 + 0x20);
        if (*(int *)(param_4 + 0x24) == 2) {
          if (lVar2 == 0) goto LAB_076bd2b4;
          uVar1 = 2;
        }
        else {
          if (lVar2 == 0) goto LAB_076bd2b4;
          uVar1 = 1;
        }
        FUN_05c290f8(&local_44,(*(uint *)(lVar2 + 0x18) & uVar1) != 0,DAT_091b6a48);
      }
      if (local_44._1_1_ != '\0') {
        if ((*(long *)(param_1 + 0x20) == 0) ||
           (plVar3 = (long *)Newtonsoft_Json_JsonSerializer__GetReferenceResolver
                                       (*(long *)(param_1 + 0x20),0), plVar3 == (long *)0x0)) {
LAB_076bd2b4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *plVar3;
        uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09186440) {
              puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 2) * 0x10 + 0x138);
              goto LAB_076bd29c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186440,2);
LAB_076bd29c:
        uVar1 = (*(code *)*puVar4)(plVar3,param_1,param_2,puVar4[1]);
        goto LAB_076bd270;
      }
    }
  }
  uVar1 = 0;
LAB_076bd270:
  return uVar1 & 1;
}

