// rea decompile_all
// name: FUN_0402fcd8
// address: 0x402fcd8
// body: available
// range: 0x402fcd8-0x402fe97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0402fcd8(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(long *)(param_1 + 8) == *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    if (*(long **)(param_2 + 0x20) == (long *)0x0) {
      *(long **)(param_2 + 0x20) = param_3;
      *(undefined4 *)(param_2 + 0x30) = param_4;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      return;
    }
    if (*(long **)(param_2 + 0x20) == param_3) {
      if (*(int *)(param_2 + 0x30) == 2) {
        *(undefined4 *)(param_2 + 0x30) = param_4;
        return;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x30) = 2;
      *(undefined1 *)(param_2 + 0x4e) = 1;
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14);
    uVar4 = *(ulong *)(param_1 + 0x20);
    if (param_3 == (long *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (long)uVar4 >> 8;
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(*param_3 + lVar5);
      }
    }
    uVar1 = 2;
    if ((uVar4 & 2) != 0) {
      uVar1 = param_4;
    }
    (**(code **)(**(long **)(param_1 + 0x18) + 0x38))
              (*(long **)(param_1 + 0x18),param_2,(long)param_3 + lVar5,uVar1);
    if (1 < uVar2) {
      uVar4 = param_1 + (ulong)uVar2 * 0x10 + 0x18;
      if (param_3 == (long *)0x0) {
        uVar7 = param_1 + 0x38;
        do {
          uVar1 = 2;
          if ((*(ulong *)(uVar7 - 8) & 2) != 0) {
            uVar1 = param_4;
          }
          (**(code **)(**(long **)(uVar7 - 0x10) + 0x38))(*(long **)(uVar7 - 0x10),param_2,0,uVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
      else {
        uVar7 = param_1 + 0x38;
        do {
          uVar6 = *(ulong *)(uVar7 - 8);
          lVar5 = (long)uVar6 >> 8;
          if ((uVar6 & 1) != 0) {
            lVar5 = *(long *)(*param_3 + lVar5);
          }
          uVar1 = 2;
          if ((uVar6 & 2) != 0) {
            uVar1 = param_4;
          }
          (**(code **)(**(long **)(uVar7 - 0x10) + 0x38))
                    (*(long **)(uVar7 - 0x10),param_2,(long)param_3 + lVar5,uVar1);
        } while ((*(char *)(param_2 + 0x4e) == '\0') &&
                (bVar3 = uVar7 < uVar4, uVar7 = uVar7 + 0x10, bVar3));
      }
    }
  }
  return;
}

