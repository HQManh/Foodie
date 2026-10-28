// rea decompile_all
// name: Datpt.ObserverPattern.EventManager$$GetDataGroup
// address: 0x419ec50
// body: available
// range: 0x419ec50-0x419eddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419edd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x419eddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Datpt_ObserverPattern_EventManager__GetDataGroup(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_0951682b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091809e8);
    FUN_03f5c2a4(&DAT_0919f2c0);
    FUN_03f5c2a4(&DAT_0919f2d0);
    FUN_03f5c2a4(&DAT_09184238);
    DAT_0951682b = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(DAT_09184238 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(DAT_09184238 + 0xb8) + 0x20);
  if (lVar1 == 0) {
LAB_0419eddc:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = FUN_06fd8648(lVar1,param_1,DAT_0919f2c0);
  if ((uVar2 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    if (*(int *)(DAT_09184238 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(DAT_09184238 + 0xb8) + 0x20);
    if ((lVar1 == 0) || (lVar3 = FUN_06fd83d4(lVar1,param_1,DAT_0919f2d0), lVar3 == 0))
    goto LAB_0419eddc;
    lVar1 = FUN_03f5c394(DAT_091809e8,*(undefined4 *)(lVar3 + 0x18));
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar2 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      lVar6 = 4;
      puVar5 = (undefined8 *)(lVar1 + 0x20);
      do {
        local_40 = 0;
        uStack_38 = 0;
        if (uVar2 <= lVar6 - 4U) {
LAB_0419edd8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        local_40 = *(undefined8 *)(lVar3 + lVar6 * 8);
        thunk_FUN_03f5d7b8(&local_40);
        if (lVar1 == 0) goto LAB_0419eddc;
        if ((ulong)*(uint *)(lVar1 + 0x18) <= lVar6 - 4U) goto LAB_0419edd8;
        puVar5[1] = uStack_38;
        *puVar5 = local_40;
        thunk_FUN_03f5d7b8(puVar5,0);
        uVar2 = (ulong)*(uint *)(lVar3 + 0x18);
        lVar4 = lVar6 + -3;
        lVar6 = lVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (lVar4 < (int)*(uint *)(lVar3 + 0x18));
    }
  }
  return lVar1;
}

