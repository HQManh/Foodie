// rea decompile_all
// name: FUN_03faa518
// address: 0x3faa518
// body: available
// range: 0x3faa518-0x3faa617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03faa518(long param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  int *local_48;
  long lStack_40;
  long local_38;
  long lStack_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_60 = *(long *)(param_1 + 0x40);
  local_58 = *(long *)(param_1 + 0x48);
  local_48 = (int *)0x0;
  local_68 = param_1;
  local_50 = local_58;
  lStack_40 = local_60;
  local_38 = local_58;
  lStack_30 = local_58;
  FUN_03f6054c(&local_68);
  if (((*(long *)(param_2 + 8) == local_60) && (*(long *)(param_2 + 0x10) == local_58)) &&
     (*(long *)(param_2 + 0x18) == local_50)) {
    if (*(long *)(param_2 + 0x18) == *(long *)(param_2 + 0x10)) {
      return;
    }
    piVar1 = *(int **)(param_2 + 0x20);
    if (piVar1 == local_48) {
      return;
    }
  }
  else {
    piVar1 = *(int **)(param_2 + 0x20);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    piVar2 = (int *)(param_1 + 0x28);
    if (*piVar2 == *piVar1) {
      if (*piVar2 != 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x30);
        uVar5 = *(undefined8 *)piVar2;
        piVar1[4] = 0;
        piVar1[5] = 0;
        *(undefined8 *)(piVar1 + 2) = uVar6;
        *(undefined8 *)piVar1 = uVar5;
        return;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar4 = *(long *)(piVar1 + 2);
      uVar6 = *(undefined8 *)(param_1 + 0x30);
      uVar5 = *(undefined8 *)piVar2;
      piVar1[4] = 0;
      piVar1[5] = 0;
      *(undefined8 *)(piVar1 + 2) = uVar6;
      *(undefined8 *)piVar1 = uVar5;
      if (lVar3 == lVar4) {
        return;
      }
      goto LAB_03faa5b8;
    }
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  piVar1[4] = 0;
  piVar1[5] = 0;
  *(undefined8 *)(piVar1 + 2) = uVar6;
  *(undefined8 *)piVar1 = uVar5;
LAB_03faa5b8:
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
  return;
}

