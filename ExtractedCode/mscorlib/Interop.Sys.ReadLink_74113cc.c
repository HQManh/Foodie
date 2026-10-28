// rea decompile_all
// name: Interop.Sys$$ReadLink
// address: 0x74113cc
// body: available
// range: 0x74113cc-0x741154f inclusive
// range: 0x7411554-0x7411557 inclusive
// range: 0x741155c-0x741155f inclusive
// range: 0x7411598-0x74115db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x741154c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7411554 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741155c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74115d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Interop_Sys__ReadLink(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_58;
  long *plStack_50;
  long local_48;
  
  if ((DAT_09520f18 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_09520f18 = 1;
  }
  iVar6 = 0x100;
  local_48 = 0;
  while( true ) {
    if (*(int *)(DAT_09175020 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = DAT_09197190;
    lVar2 = *(long *)(DAT_09197190 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = *(long *)(lVar3 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    plVar4 = (long *)**(long **)(lVar3 + 0xb8);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = (**(code **)(*plVar4 + 0x178))(plVar4,iVar6,*(undefined8 *)(*plVar4 + 0x180));
    local_58 = 0;
    plStack_50 = &local_48;
    local_48 = lVar3;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = Interop_Sys__ReadLink(param_1,lVar3,*(undefined4 *)(lVar3 + 0x18));
    if (iVar1 < 0) break;
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (iVar1 < *(int *)(local_48 + 0x18)) {
      plVar4 = (long *)System_Text_Encoding__get_UTF8(0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*plVar4 + 0x378))
                        (plVar4,local_48,0,iVar1,*(undefined8 *)(*plVar4 + 0x380));
LAB_074115ac:
      FUN_03eab060(&local_58);
      return uVar5;
    }
    FUN_03eab060(&local_58);
    iVar6 = iVar6 << 1;
  }
  uVar5 = 0;
  goto LAB_074115ac;
}

