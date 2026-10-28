// rea decompile_all
// name: MaxSdkUtils$$GetFloatFromDictionary
// address: 0x7371678
// body: available
// range: 0x7371678-0x73717d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 MaxSdkUtils__GetFloatFromDictionary(undefined4 param_1,long *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 local_34;
  long local_28;
  
  if ((DAT_095209b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0917a210);
    FUN_03f5c2a4(&DAT_09187f38);
    DAT_095209b9 = 1;
  }
  local_28 = 0;
  local_34 = 0;
  uVar7 = param_1;
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917a210) {
          puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
          goto LAB_07371730;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a210,7);
LAB_07371730:
    uVar5 = (*(code *)*puVar1)(param_2,param_3,&local_28,puVar1[1]);
    lVar4 = local_28;
    if (((uVar5 & 1) != 0) && (local_28 != 0)) {
      if (*(int *)(DAT_09187f38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = MaxSdkUtils__InvariantCultureToString(lVar4);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = System_Single__TryParse(uVar2,0x1ff,uVar3,&local_34,0);
      uVar7 = local_34;
      if ((uVar5 & 1) == 0) {
        uVar7 = param_1;
      }
    }
  }
  return uVar7;
}

