// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$FilterMembers
// address: 0x76a105c
// body: available
// range: 0x76a105c-0x76a11a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Serialization_DefaultContractResolver__FilterMembers(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0952261c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09189788);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_0952261c = 1;
  }
  if (param_1 == (long *)0x0) {
LAB_076a1104:
    uVar1 = 1;
  }
  else {
    lVar4 = *param_1;
    if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_09189788 + 0x130)) ||
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09189788 + 0x130) * 8 + -8) !=
        DAT_09189788)) {
      if ((*(byte *)(lVar4 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
         (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
          DAT_09184518)) goto LAB_076a1104;
      uVar3 = (**(code **)(lVar4 + 0x268))(param_1,*(undefined8 *)(lVar4 + 0x270));
    }
    else {
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__IsIndexedProperty(param_1,0);
      if ((uVar2 & 1) != 0) {
        uVar1 = 0;
        goto LAB_076a1108;
      }
      uVar3 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
    }
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189d88);
    }
    uVar1 = Newtonsoft_Json_Utilities_ReflectionUtils__IsByRefLikeType(uVar3,0);
    uVar1 = uVar1 ^ 1;
  }
LAB_076a1108:
  return uVar1 & 1;
}

