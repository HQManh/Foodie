// rea decompile_all
// name: System.DateTimeParse$$MatchEraName
// address: 0x75a9044
// body: available
// range: 0x75a9044-0x75a91df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a91d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75a91dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__MatchEraName(long param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_09521c66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c66 = 1;
  }
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System___DTString__GetNext(param_1,0);
  if ((uVar2 & 1) != 0) {
    if ((param_2 == 0) || (plVar3 = *(long **)(param_2 + 0x78), plVar3 == (long *)0x0)) {
LAB_075a91dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
    if (lVar4 == 0) {
      return 0;
    }
    if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar2 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar2) goto LAB_075a91d8;
        lVar5 = System_Globalization_DateTimeFormatInfo__GetEraName
                          (param_2,*(undefined4 *)(lVar4 + 0x20 + uVar2 * 4),0);
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918db18);
        }
        uVar6 = FUN_075ab390(param_1,lVar5,0);
        if ((uVar6 & 1) != 0) {
LAB_075a91a0:
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + *(int *)(lVar5 + 0x10) + -1;
            if ((uint)uVar2 < uVar1) {
              *param_3 = *(undefined4 *)(lVar4 + uVar2 * 4 + 0x20);
              return 1;
            }
LAB_075a91d8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_075a91dc;
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar2) goto LAB_075a91d8;
        lVar5 = System_Globalization_DateTimeFormatInfo__GetAbbreviatedEraName
                          (param_2,*(undefined4 *)(lVar4 + 0x20 + uVar2 * 4),0);
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918db18);
        }
        uVar6 = FUN_075ab390(param_1,lVar5,0);
        if ((uVar6 & 1) != 0) goto LAB_075a91a0;
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return 0;
}

