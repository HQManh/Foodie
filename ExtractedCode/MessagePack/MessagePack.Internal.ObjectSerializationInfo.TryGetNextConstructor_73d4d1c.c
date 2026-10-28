// rea decompile_all
// name: MessagePack.Internal.ObjectSerializationInfo$$TryGetNextConstructor
// address: 0x73d4d1c
// body: available
// range: 0x73d4d1c-0x73d4e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint MessagePack_Internal_ObjectSerializationInfo__TryGetNextConstructor
               (long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  if ((DAT_09520cd3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917aa80);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_09520cd3 = 1;
  }
  if ((param_1 == (long *)0x0) || (*param_2 != 0)) {
    uVar1 = 0;
  }
  else {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_073d4dc0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185b10,0);
LAB_073d4dc0:
    uVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *param_1;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917aa80) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_073d4e30;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917aa80,0);
LAB_073d4e30:
      lVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    }
    *param_2 = lVar3;
    thunk_FUN_03f5d7b8(param_2);
  }
  return uVar1 & 1;
}

