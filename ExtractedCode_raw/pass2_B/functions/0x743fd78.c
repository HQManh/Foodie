// rea decompile_all
// name: System.Text.StringBuilder$$StartsWith
// address: 0x743fd78
// body: available
// range: 0x743fd78-0x743fe57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743fe50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743fe54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Text_StringBuilder__StartsWith
                (ulong param_1,long param_2,uint param_3,int param_4,long param_5)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = param_1;
  if (param_5 != 0) {
    uVar2 = (ulong)(*(int *)(param_5 + 0x10) < 1);
    if ((0 < *(int *)(param_5 + 0x10)) && (param_4 != 0)) {
      iVar4 = 1;
      do {
        if (param_2 == 0) goto LAB_0743fe50;
        if (*(int *)(param_2 + 0x20) <= (int)param_3) {
          param_2 = System_Text_StringBuilder__Next(param_1,param_2);
          if (param_2 == 0) {
            return 0;
          }
          param_3 = 0;
        }
        uVar2 = System_String__get_Chars(param_5,iVar4 + -1,0);
        lVar3 = *(long *)(param_2 + 0x10);
        if (lVar3 == 0) goto LAB_0743fe50;
        if (*(uint *)(lVar3 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if ((uint)*(ushort *)(lVar3 + (long)(int)param_3 * 2 + 0x20) != ((uint)uVar2 & 0xffff)) {
          return 0;
        }
        uVar2 = (ulong)(*(int *)(param_5 + 0x10) <= iVar4);
        if (*(int *)(param_5 + 0x10) <= iVar4) {
          return uVar2;
        }
        bVar1 = param_4 != iVar4;
        iVar4 = iVar4 + 1;
        param_3 = param_3 + 1;
      } while (bVar1);
    }
    return uVar2;
  }
LAB_0743fe50:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar2);
}

