// rea decompile_all
// name: System.IO.BinaryReader$$ReadInt32
// address: 0x758300c
// body: available
// range: 0x758300c-0x75830ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7583088 to 0x7567d58 System.IO.MemoryStream$$InternalReadInt32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75830f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75830f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75830fc to 0x7582080 System.IO.__Error$$FileNotOpen (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_IO_BinaryReader__ReadInt32(long *param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09521af6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188030);
    DAT_09521af6 = 1;
  }
  if (*(char *)((long)param_1 + 0x45) == '\0') {
    (**(code **)(*param_1 + 0x2d8))(param_1,4,*(undefined8 *)(*param_1 + 0x2e0));
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if ((((uVar1 != 0) && (uVar1 != 1)) && (2 < uVar1)) && (uVar1 != 3)) {
        return (ulong)*(uint *)(lVar4 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  else {
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      System_IO___Error__FileNotOpen();
    }
    if ((*(byte *)(DAT_09188030 + 0x130) <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_09188030 + 0x130) * 8 + -8) ==
        DAT_09188030)) {
      uVar3 = System_IO_MemoryStream__InternalReadInt32(plVar2,0);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

