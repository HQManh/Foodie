// rea decompile_all
// name: System.IO.Stream$$CopyTo
// address: 0x757d944
// body: available
// range: 0x757d944-0x757daaf inclusive
// range: 0x757dadc-0x757daf7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757daa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757daa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757daac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_Stream__CopyTo(long *param_1,long *param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 local_48;
  long *plStack_40;
  long local_38;
  
  if ((DAT_09521ab9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09197190);
    FUN_03f5c2a4(&DAT_09175020);
    DAT_09521ab9 = 1;
  }
  local_38 = 0;
  System_IO_StreamHelpers__ValidateCopyToArgs(param_1,param_2,param_3,0);
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
  if (plVar4 != (long *)0x0) {
    local_38 = (**(code **)(*plVar4 + 0x178))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x180));
    plStack_40 = &local_38;
    local_48 = 0;
    while( true ) {
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = (**(code **)(*param_1 + 0x368))
                        (param_1,local_38,0,*(undefined4 *)(local_38 + 0x18),
                         *(undefined8 *)(*param_1 + 0x370));
      if (iVar1 == 0) break;
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*param_2 + 0x398))(param_2,local_38,0,iVar1,*(undefined8 *)(*param_2 + 0x3a0));
    }
    FUN_03eab060(&local_48);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

