// rea decompile_all
// name: System.TermInfoDriver$$InitKeys
// address: 0x760a490
// body: available
// range: 0x760a490-0x760a607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760a600 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760a604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TermInfoDriver__InitKeys(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((DAT_0952201a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182150);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09180690);
    FUN_03f5c2a4(&DAT_091f4458);
    DAT_0952201a = 1;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return;
  }
  System_TermInfoDriver__CreateKeyMap(param_1);
  lVar1 = thunk_FUN_03f9944c(DAT_09182150);
  System_ByteMatcher___ctor();
  plVar4 = (long *)(param_1 + 0xf8);
  *plVar4 = lVar1;
  thunk_FUN_03f5d7b8(plVar4,lVar1);
  lVar1 = FUN_03f5c394(DAT_09180690,0x3c);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray(lVar1,DAT_091f4458,0);
  if (lVar1 != 0) {
    if (0 < (int)*(ulong *)(lVar1 + 0x18)) {
      uVar6 = 0;
      uVar2 = *(ulong *)(lVar1 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar6) goto LAB_0760a600;
        System_TermInfoDriver__AddStringMapping(param_1,*(undefined4 *)(lVar1 + 0x20 + uVar6 * 4));
        uVar2 = (ulong)*(uint *)(lVar1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(lVar1 + 0x18));
    }
    lVar5 = *(long *)(param_1 + 0xf8);
    lVar1 = FUN_03f5c394(DAT_0917fc88,1);
    lVar3 = *(long *)(param_1 + 0x108);
    if (lVar3 != 0) {
      if (*(uint *)(lVar3 + 0x18) < 3) {
LAB_0760a600:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0760a600;
        *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(lVar3 + 0x22);
        if ((lVar5 != 0) && (System_ByteMatcher__AddMapping(lVar5,0x37), *plVar4 != 0)) {
          *(undefined1 *)(param_1 + 0xb0) = 1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

