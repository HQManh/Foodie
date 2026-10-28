// rea decompile_all
// name: Newtonsoft.Json.Linq.JObject$$System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove
// address: 0x76e1f84
// body: available
// range: 0x76e1f84-0x76e20c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Linq_JObject__System_Collections_Generic_ICollection<System_Collections_Generic_KeyValuePair<System_String,Newtonsoft_Json_Linq_JToken>>_Remove
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_095227eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179fc8);
    FUN_03f5c2a4(&DAT_0917a1d8);
    FUN_03f5c2a4(&DAT_091a9840);
    DAT_095227eb = 1;
  }
  lVar3 = *param_1;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == DAT_09179fc8) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
        goto LAB_076e202c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_09179fc8,4);
LAB_076e202c:
  uVar1 = (*(code *)*puVar2)(param_1,param_2,param_3,puVar2[1]);
  if ((uVar1 & 1) != 0) {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_0917a1d8) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_076e20a0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a1d8,6);
LAB_076e20a0:
    (*(code *)*puVar2)(param_1,param_2,puVar2[1]);
  }
  return uVar1 & 1;
}

