// rea decompile_all
// name: FUN_03fc1104
// address: 0x3fc1104
// body: available
// range: 0x3fc1104-0x3fc11b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_03fc1104(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = param_1;
LAB_03fc1118:
  puVar5 = (undefined8 *)(param_1 + 0x20);
LAB_03fc111c:
  switch(*(undefined1 *)((long)puVar5 + 10)) {
  case 1:
    iVar1 = 0;
    break;
  case 2:
  case 4:
  case 5:
    iVar1 = 1;
    break;
  case 3:
  case 6:
  case 7:
    iVar1 = 2;
    break;
  case 8:
  case 9:
  case 0xc:
    iVar1 = 4;
    break;
  case 10:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x18:
  case 0x19:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    iVar1 = 8;
    break;
  default:
    iVar1 = -1;
    break;
  case 0x11:
    goto switchD_03fc1138_caseD_11;
  case 0x15:
    goto switchD_03fc1138_caseD_15;
  }
  return iVar1;
switchD_03fc1138_caseD_15:
  param_1 = FUN_03fb4784(*puVar5);
  goto LAB_03fc1118;
switchD_03fc1138_caseD_11:
  uVar2 = FUN_03fb8604(puVar5);
  if ((uVar2 & 1) == 0) {
    return *(int *)(lVar4 + 0xf8) + -0x10;
  }
  lVar3 = thunk_FUN_03fc3840(puVar5);
  lVar4 = *(long *)(lVar4 + 0x40);
  puVar5 = (undefined8 *)0x0;
  if (*(long *)(lVar3 + 0x40) != lVar3) {
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0x40) + 0x20);
  }
  goto LAB_03fc111c;
}

