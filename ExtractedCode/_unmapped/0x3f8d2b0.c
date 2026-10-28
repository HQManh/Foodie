// rea decompile_all
// name: FUN_03f8d2b0
// address: 0x3f8d2b0
// body: available
// range: 0x3f8d2b0-0x3f8d39f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f8d2b0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int local_48;
  undefined4 local_44;
  
  iVar1 = pipe(&local_48);
  if (iVar1 == -1) {
    puVar5 = (undefined4 *)__errno();
    uVar2 = FUN_03f89920(*puVar5);
    *param_4 = uVar2;
  }
  else {
    piVar3 = operator_new(0x50);
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    *(undefined8 *)((long)piVar3 + 0x25) = 0;
    *(undefined8 *)((long)piVar3 + 0x1d) = 0;
    piVar3[7] = 0;
    piVar3[8] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[0xe] = 0;
    piVar3[0xf] = 0;
    piVar3[0xc] = 0;
    piVar3[0xd] = 0;
    piVar3[0x12] = 0;
    piVar3[0x13] = 0;
    piVar3[0x10] = 0;
    piVar3[0x11] = 0;
    piVar3[0] = -1;
    piVar3[1] = 3;
    *piVar3 = local_48;
    piVar3[10] = 1;
    piVar3[8] = 0;
    piVar3[9] = -1;
    puVar4 = operator_new(0x50);
    *param_2 = piVar3;
    *param_3 = puVar4;
    *(undefined8 *)((long)puVar4 + 0xc) = 0;
    *(undefined8 *)((long)puVar4 + 4) = 0;
    *puVar4 = 0x3ffffffff;
    *(undefined4 *)puVar4 = local_44;
    *(undefined8 *)((long)puVar4 + 0x25) = 0;
    *(undefined8 *)((long)puVar4 + 0x1d) = 0;
    *(undefined8 *)((long)puVar4 + 0x1c) = 0;
    *(undefined8 *)((long)puVar4 + 0x14) = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    *(undefined4 *)(puVar4 + 5) = 3;
    puVar4[4] = 0xffffffff00000000;
  }
  *(bool *)param_1 = iVar1 != -1;
  FUN_03f91760(param_1 + 8);
  return;
}

