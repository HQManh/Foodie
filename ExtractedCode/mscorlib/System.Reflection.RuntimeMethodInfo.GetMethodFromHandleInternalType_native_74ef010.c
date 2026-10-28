// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$GetMethodFromHandleInternalType_native
// address: 0x74ef010
// body: available
// range: 0x74ef010-0x74ef013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Reflection_RuntimeMethodInfo__GetMethodFromHandleInternalType_native
          (long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((param_2 == 0) || ((param_3 & 1) == 0)) {
    if (param_2 == 0) {
      lVar1 = *(long *)(param_1 + 0x20);
    }
    else {
      lVar1 = il2cpp_class_from_il2cpp_type(param_2);
    }
LAB_03f65b44:
    uVar3 = il2cpp_method_get_object(param_1,lVar1);
  }
  else {
    lVar1 = il2cpp_class_from_il2cpp_type(param_2);
    lVar6 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar6 + 0x60) != 0) {
      lVar6 = FUN_03fb4784(*(long *)(lVar6 + 0x60));
    }
    lVar2 = lVar1;
    if (*(long *)(lVar1 + 0x60) != 0) {
      lVar2 = FUN_03fb4784(*(long *)(lVar1 + 0x60));
    }
    if (lVar6 == lVar2) {
      lVar6 = *(long *)(param_1 + 0x20);
      if (lVar6 == lVar1) goto LAB_03f65b44;
      if ((*(byte *)(param_1 + 0x53) >> 1 & 1) == 0) {
LAB_03f65ae0:
        FUN_03fbeee4(lVar6);
        uVar5 = (ulong)*(ushort *)(*(long *)(param_1 + 0x20) + 0x120);
        if (uVar5 != 0) {
          uVar7 = 0;
          do {
            if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x98) + uVar7 * 8) == param_1)
            goto LAB_03f65b14;
            uVar7 = uVar7 + 1;
          } while (uVar5 != uVar7);
        }
        uVar7 = 0xffffffffffffffff;
LAB_03f65b14:
        FUN_03fbeee4(lVar1);
        param_1 = *(long *)(*(long *)(lVar1 + 0x98) + uVar7 * 8);
      }
      else {
        puVar4 = (undefined8 *)FUN_03fc2a1c(param_1);
        lVar6 = puVar4[1];
        if (lVar6 == 0) {
          lVar6 = *(long *)(param_1 + 0x20);
          goto LAB_03f65ae0;
        }
        uStack_30 = *puVar4;
        lStack_28 = lVar6;
        if (*(long *)(lVar1 + 0x60) == 0) {
          FUN_03fbf79c(lVar1);
        }
        else {
          uStack_30 = *(undefined8 *)(*(long *)(lVar1 + 0x60) + 8);
        }
        param_1 = FUN_03f773c4(param_1,&uStack_30);
      }
      if (param_1 != 0) goto LAB_03f65b44;
    }
    uVar3 = 0;
  }
  return uVar3;
}

