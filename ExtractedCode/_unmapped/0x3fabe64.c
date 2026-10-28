// rea decompile_all
// name: FUN_03fabe64
// address: 0x3fabe64
// body: available
// range: 0x3fabe64-0x3fabf0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fabf08 to 0x3f76318 FUN_03f76318 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fabe64(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    return;
  }
  uVar2 = (ulong)DAT_09535228;
  if (0 < (int)DAT_09535228) {
    lVar3 = DAT_09535240;
    do {
      iVar4 = (int)((ulong)((param_2 - DAT_09535218) - (long)*(int *)(DAT_09535220 + 0x134)) >> 3);
      if ((*(int *)(lVar3 + 8) <= iVar4) &&
         (iVar4 < *(int *)(*(long *)(lVar3 + 0x10) + 0x20) + *(int *)(lVar3 + 8))) {
        lVar1 = 0;
        if (lVar3 != 0) {
          lVar1 = *(long *)(lVar3 + 0x10);
        }
        goto LAB_03fabeec;
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar2 != 0);
  }
  lVar1 = 0;
LAB_03fabeec:
  lVar3 = DAT_09535218 + *(int *)(DAT_09535220 + 0x128);
  FUN_03f76318(param_1,lVar1,lVar3 + (ulong)*(uint *)(param_2 + 4),
               lVar3 + (ulong)*(uint *)(param_2 + 0xc));
  return;
}

