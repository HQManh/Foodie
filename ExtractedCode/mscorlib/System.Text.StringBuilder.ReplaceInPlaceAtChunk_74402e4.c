// rea decompile_all
// name: System.Text.StringBuilder$$ReplaceInPlaceAtChunk
// address: 0x74402e4
// body: available
// range: 0x74402e4-0x74403f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74403dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__ReplaceInPlaceAtChunk
               (undefined8 param_1,long *param_2,int *param_3,long param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((DAT_09521075 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521075 = 1;
  }
  if (param_5 == 0) {
    return;
  }
  lVar2 = *param_2;
  if (lVar2 != 0) {
    iVar3 = *param_3;
    do {
      iVar1 = *(int *)(lVar2 + 0x20);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_Math__Min(iVar1 - iVar3,param_5,0);
      if (*param_2 == 0) break;
      System_Text_StringBuilder__ThreadSafeCopy
                (param_4,*(undefined8 *)(*param_2 + 0x10),*param_3,iVar1);
      lVar2 = *param_2;
      iVar3 = *param_3 + iVar1;
      *param_3 = iVar3;
      if (lVar2 == 0) break;
      if (*(int *)(lVar2 + 0x20) <= iVar3) {
        lVar2 = System_Text_StringBuilder__Next(param_1);
        *param_2 = lVar2;
        thunk_FUN_03f5d7b8(param_2,lVar2);
        iVar3 = 0;
        *param_3 = 0;
      }
      param_5 = param_5 - iVar1;
      if (param_5 == 0) {
        return;
      }
      lVar2 = *param_2;
      param_4 = param_4 + (long)iVar1 * 2;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

