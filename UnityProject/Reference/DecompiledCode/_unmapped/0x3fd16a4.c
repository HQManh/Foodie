// rea decompile_all
// name: FUN_03fd16a4
// address: 0x3fd16a4
// body: available
// range: 0x3fd16a4-0x3fd1807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd1804 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd16a4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = *param_2;
  uVar1 = uVar6 + 1;
  uVar5 = FUN_03fcc514(8L << (uVar1 & 0x3f),1);
  iVar4 = DAT_097480f0;
  if (uVar5 == 0) {
    if (*param_1 == 0) {
      (*(code *)PTR_FUN_09515620)("Insufficient space for initial table allocation");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar6 != 0xffffffffffffffff) {
      uVar8 = 0;
      do {
        puVar3 = *(ulong **)(*param_1 + uVar8 * 8);
        while (puVar3 != (ulong *)0x0) {
          puVar2 = (ulong *)puVar3[1];
          uVar7 = (~*puVar3 >> (uVar6 + 4 & 0x3f) ^ ~*puVar3 >> 3) & ~(-1L << (uVar1 & 0x3f));
          puVar3[1] = *(ulong *)(uVar5 + uVar7 * 8);
          if (iVar4 != 0) {
            FUN_0404c050(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                         &DAT_0957c0c8 + ((ulong)puVar3 >> 0x12 & 0x7fff) * 8);
          }
          *(ulong **)(uVar5 + uVar7 * 8) = puVar3;
          puVar3 = puVar2;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 >> (uVar6 & 0x3f) == 0);
    }
    *param_1 = uVar5;
    *param_2 = uVar1;
    if (iVar4 != 0) {
      FUN_0404c050(1L << (uVar5 >> 0xc & 0x3f),&DAT_0957c0c8 + (uVar5 >> 0x12 & 0x7fff) * 8);
    }
  }
  return;
}

