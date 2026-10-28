// rea decompile_all
// name: System.__DTString$$TrimTail
// address: 0x75acbe4
// body: available
// range: 0x75acbe4-0x75acd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75acce4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75acd1c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System___DTString__TrimTail(long *param_1)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  if ((DAT_09521c8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c8c = 1;
  }
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09521c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c7b = 1;
  }
  uVar8 = *(uint *)(param_1 + 1);
  uVar5 = (ulong)uVar8;
  iVar2 = uVar8 - 1;
  uVar8 = uVar8 + 1;
  if (-2 < iVar2) {
    iVar2 = -1;
  }
  do {
    uVar5 = uVar5 - 1;
    uVar4 = *(uint *)(param_1 + 1);
    uVar7 = iVar2 + 1;
    if ((int)(uVar8 - 2) < 0) goto LAB_075accd4;
    if (uVar4 <= uVar8 - 2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar1 = *(undefined2 *)(*param_1 + (uVar5 & 0xffffffff) * 2);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Char__IsWhiteSpace(uVar1,0);
    uVar8 = uVar8 - 1;
  } while ((uVar3 & 1) != 0);
  uVar4 = *(uint *)(param_1 + 1);
  uVar7 = uVar8;
LAB_075accd4:
  if (uVar4 < uVar7) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  lVar6 = *param_1;
  if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  *param_1 = lVar6;
  param_1[1] = (ulong)uVar7;
  return;
}

