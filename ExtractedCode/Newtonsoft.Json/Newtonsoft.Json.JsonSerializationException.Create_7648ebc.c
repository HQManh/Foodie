// rea decompile_all
// name: Newtonsoft.Json.JsonSerializationException$$Create
// address: 0x7648ebc
// body: available
// range: 0x7648ebc-0x76490bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_JsonSerializationException__Create
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09522321 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_09187420);
    DAT_09522321 = 1;
  }
  if (*(int *)(DAT_09187398 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Newtonsoft_Json_JsonPosition__FormatMessage(param_1,param_2,param_3);
  if (param_1 != (long *)0x0) {
    lVar5 = *param_1;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185f18) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07648fa0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,0);
LAB_07648fa0:
    uVar6 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if ((uVar6 & 1) != 0) {
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185f18) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0764900c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,1);
LAB_0764900c:
      uVar1 = (*(code *)*puVar4)(param_1,puVar4[1]);
      lVar5 = *param_1;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_09185f18) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0764906c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,2);
LAB_0764906c:
      uVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
      goto LAB_0764907c;
    }
  }
  uVar2 = 0;
  uVar1 = 0;
LAB_0764907c:
  lVar5 = thunk_FUN_03f9944c(DAT_09187420);
  Newtonsoft_Json_JsonException___ctor(lVar5,uVar3,param_4);
  *(undefined8 *)(lVar5 + 0x98) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x98),param_2);
  *(undefined4 *)(lVar5 + 0x8c) = uVar1;
  *(undefined4 *)(lVar5 + 0x90) = uVar2;
  return lVar5;
}

