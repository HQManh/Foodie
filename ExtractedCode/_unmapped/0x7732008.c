// rea decompile_all
// name: FUN_07732008
// address: 0x7732008
// body: available
// range: 0x7732008-0x7732047 inclusive
// range: 0x773232c-0x773234f inclusive
// range: 0x7732c84-0x7732c97 inclusive
// range: 0x7733320-0x77333fb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_07732008(long param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *in_x10;
  int *piVar6;
  long *plVar7;
  undefined2 in_stack_00000148;
  undefined4 *in_stack_00000178;
  
  uVar5 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar6 + 2) * 0x10 + 0x138);
        goto LAB_0773233c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8();
LAB_0773233c:
  (*(code *)*puVar3)();
  in_stack_00000178[0xc] = 3;
  FUN_03ebd0a0(&stack0x00000020);
  puVar2 = in_stack_00000178;
  cVar1 = DAT_095162d8;
  *in_stack_00000178 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar7 = *(long **)(puVar2 + 2);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_077333d8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091866a8,2);
LAB_077333d8:
    (*(code *)*puVar3)(plVar7,puVar3[1]);
  }
  return;
}

