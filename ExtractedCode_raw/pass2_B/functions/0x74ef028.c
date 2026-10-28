// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$get_base_method
// address: 0x74ef028
// body: available
// range: 0x74ef028-0x74ef02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Reflection_RuntimeMethodInfo__get_base_method(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(lVar6 + 0x20);
  if (((((lVar5 != 0) && ((*(ushort *)(lVar6 + 0x4c) >> 6 & 1) != 0)) &&
       ((*(byte *)(lVar5 + 0x118) >> 5 & 1) == 0)) &&
      ((*(char *)(lVar5 + 0x2a) != '\x13' && (*(char *)(lVar5 + 0x2a) != '\x1e')))) &&
     ((*(ushort *)(lVar6 + 0x4c) >> 8 & 1) == 0)) {
    bVar3 = true;
LAB_03f6601c:
    do {
      lVar4 = lVar5;
      if ((param_2 & 1) == 0) {
        lVar5 = *(long *)(lVar5 + 0x58);
        if (lVar5 == 0) {
          return param_1;
        }
      }
      else {
        do {
          lVar5 = lVar4;
          lVar4 = *(long *)(lVar5 + 0x58);
          if (lVar4 == 0) break;
        } while (*(ushort *)(lVar6 + 0x50) < *(ushort *)(lVar4 + 0x12a));
      }
      if (lVar5 == *(long *)(lVar6 + 0x20)) {
        return param_1;
      }
      FUN_03fbea4c(lVar5);
      if (*(ushort *)(lVar5 + 0x12a) <= *(ushort *)(lVar6 + 0x50)) {
        return param_1;
      }
      lVar4 = *(long *)(lVar5 + (ulong)*(ushort *)(lVar6 + 0x50) * 0x10 + 0x140);
      if ((lVar4 == 0) || (uVar2 = FUN_03fadec0(lVar4), (uVar2 & 1) != 0)) {
        uStack_38 = 0;
        lVar4 = FUN_03fbee74(lVar5,&uStack_38);
        while (lVar4 != 0) {
          if (*(short *)(lVar4 + 0x50) == *(short *)(lVar6 + 0x50)) goto LAB_03f660d8;
          lVar4 = FUN_03fbee74(lVar5,&uStack_38);
        }
        bVar3 = false;
        goto LAB_03f6601c;
      }
      bVar1 = !bVar3;
      bVar3 = false;
    } while (bVar1);
LAB_03f660d8:
    param_1 = FUN_03f9adc4(lVar4,lVar5);
  }
  return param_1;
}

